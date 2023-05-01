/**
 * Diablo 4 JSON and Texture Compiler.
 *
 * Requires libpng dev package:
 *   sudo apt install libpng++-dev
 */

#include <iostream>
#include <fstream>
#include <filesystem>
#include <algorithm>
#include "types/SkillKitDefinition.h"

struct Line {
  DT_VECTOR2D start;
  DT_VECTOR2D end;
};

int main() {
  for (const auto &entry : std::filesystem::directory_iterator("data/Base/meta/SkillKit")) {
    std::string path = entry.path();
    std::string name = entry.path().filename();
    std::string ext = entry.path().extension();

    if (ext == ".skl") {
      std::string outname = "svg/" + name + ".svg";
      std::ofstream out(outname); 
      D4File<SkillKitDefinition> file(path.c_str());
      std::vector<DT_VECTOR2D> nodes;
      std::vector<Line> lines;

      DT_VECTOR2D minimum{}, maximum{};

      for (auto &connection : file.contents.arConnections.elements) {
        auto a = file.contents.arNodes.elements[connection.unk_8700a4d];
        auto b = file.contents.arNodes.elements[connection.unk_8700a4e];
        Line ca;
        ca.end = a.vPosition;
        ca.start = b.vPosition;

        ca.start.y *= 16.0 / 9.0;
        ca.end.y *= 16.0 / 9.0;

        lines.push_back(ca);

        minimum.x = std::min(minimum.x, ca.start.x);
        minimum.x = std::min(minimum.x, ca.end.x);
        minimum.y = std::min(minimum.y, ca.start.y);
        minimum.y = std::min(minimum.y, ca.end.y);
        maximum.x = std::max(maximum.x, ca.start.x);
        maximum.x = std::max(maximum.x, ca.end.x);
        maximum.y = std::max(maximum.y, ca.start.y);
        maximum.y = std::max(maximum.y, ca.end.y);
      }

      minimum.x -= 300;
      minimum.y -= 300;
      maximum.x += 300;
      maximum.y += 300;

      out << "<svg viewBox=\"" << minimum.x << " " << minimum.y << " " << (maximum.x - minimum.x) << " " << (maximum.y - minimum.y) << "\" xmlns=\"http://www.w3.org/2000/svg\">" << std::endl;
      out << "<style>svg { background-color: black; }</style>" << std::endl;

      for (auto &line : lines) {
        out << "<line x1=\"" << line.start.x << "\" y1=\"" << line.start.y << "\" x2=\"" << line.end.x << "\" y2=\"" << line.end.y << "\" stroke=\"#dfdfdf\" stroke-width=\"20\" />" << std::endl;
      }

      for (auto &node : file.contents.arNodes.elements) {
        out << "<circle cx=\"" << node.vPosition.x << "\" cy=\"" << (node.vPosition.y * 16.0 / 9.0) << "\" r=\"125\" fill=\"" << (node.bRootNode ? "#ff5f5f" : "#009aff") << "\"><title>";
        out << "dwID: " << node.dwID << std::endl;
        out << "gbidReward: " << std::hex << node.gbidReward << std::dec << std::endl;
        out << "bRootNode: " << (node.bRootNode ? "true" : "false");
        out << "</title></circle>" << std::endl;
      }

      out << "</svg>";
    }
  }


  return 0;
}
