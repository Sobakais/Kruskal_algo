#include "Graph.hpp"

int main() {
  Graph g(9);
  vector<pair<Edge, int>> E{
      {Edge(5, 7), 7}, {Edge(4, 5), 5}, {Edge(4, 8), 2}, {Edge(3, 6), 5},
      {Edge(2, 5), 4}, {Edge(2, 7), 6}, {Edge(2, 6), 7}, {Edge(2, 3), 2},
      {Edge(1, 3), 8}, {Edge(1, 2), 6}, {Edge(1, 5), 4}, {Edge(1, 4), 2},
      {Edge(0, 1), 4}, {Edge(0, 2), 7}, {Edge(0, 4), 1}, {Edge(0, 8), 3},
  };
  for (auto edge : E) {
    g.AddWeightedEdge(edge.first.first, edge.first.second, edge.second);
  }
  g.kruskal();
  g.print();
}
