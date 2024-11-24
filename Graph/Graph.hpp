#pragma once

#include <vector>

using namespace std;

#define Edge pair<int, int>

class Graph {
 private:
  vector<pair<int, Edge>> G;
  vector<pair<int, Edge>> T;
  int *parent;
  int V;

 public:
  Graph(int V);
  void AddWeightedEdge(int u, int v, int w);
  int find_set(int i);
  void union_set(int u, int v);
  void kruskal();
  void print();
};
