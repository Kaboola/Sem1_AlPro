#pragma once

#include <vector>
#include <cstddef>

namespace SimplerGraph{

class SimplerGraph{     //Klasse um Graphen zu erstellen und Aktionen zurchzuführen
public:
  // Erstellt einen Graph mit einer festen Knotenanzahl
  SimplerGraph(size_t knoten_anzahl);

  // Fügt eine Kante zwischen zwei Knoten hinzu
  void addKante(size_t startknoten, size_t endknoten);

  // Entfernt eine Kante zwischen zwei Knoten
  void removeKante(size_t startknoten, size_t endknoten);

  // Gibt alle existierenden Kanten aus
  void printGraph() const;

private:
  const size_t knoten_anz;
  std::vector<std::vector<bool>> kante;
};

}