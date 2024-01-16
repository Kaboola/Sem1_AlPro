#include <simpler_graph/simpler_graph.hpp>

#include <iostream>

int main() {
  //Graph mit 6 Knoten wird erstellt
  SimplerGraph::SimplerGraph graph(6);

  //Kanten hinzufügen
  graph.addKante(0, 1);
  graph.addKante(1, 2);
  graph.addKante(6, 7);
  graph.addKante(1, 3);
  graph.addKante(2, 3);
  graph.addKante(3, 4);
  graph.addKante(4, 5);

  //Kanten entfernen
  graph.removeKante(2, 3);
  graph.removeKante(5, 0);    
  
  //Graph ausdrucken
  graph.printGraph();

  return 0;
}