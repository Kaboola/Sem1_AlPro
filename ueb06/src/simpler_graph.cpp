#include <simpler_graph/simpler_graph.hpp>
#include <iostream>


namespace SimplerGraph {

SimplerGraph::SimplerGraph(const size_t knoten_anzahl) : knoten_anz(knoten_anzahl) {
  kante.resize(knoten_anzahl);                                // Erstellt ein zweidimensionales Bool-Array "kanten"mit Größe von knoten_anzahl
  for (int i = 0; i < knoten_anzahl; i++) {                   // Durchläuft Array "kante" und setzt alle Werte auf false
    kante[i].resize(knoten_anzahl, false);
  }
}

void SimplerGraph::addKante(size_t startknoten, size_t endknoten) { 
  if (startknoten >= knoten_anz || endknoten >= knoten_anz) { // Prüft, ob Knotenpaar exisitert
    std::cout << "Der Graph ist nicht groß genug!" << std::endl;
  }
  else {
    kante[startknoten][endknoten] = true;                     // Setzt eingegebenes Paar in "kante" auf true
  }
}

void SimplerGraph::removeKante(size_t startknoten, size_t endknoten) {  
  if (startknoten >= knoten_anz || endknoten >= knoten_anz) { // Prüft, ob Knotenpaar exisitert
    std::cout << "Der Graph ist nicht groß genug!" << std::endl;
  }
  else if (kante[startknoten][endknoten] == false) {          // Prüft, ob Knotenpaar Verbindung besitzt
    std::cout << "Das Knotenpaar " << startknoten << " und " << endknoten <<  " hat keine Verbindung! " << std::endl;
  }

  kante[startknoten][endknoten] = false;                      // Setzt eingegebenes Paar in "kante" auf true
}

void SimplerGraph::printGraph() const {  
  for (size_t i = 0; i < knoten_anz; i++) {                   // Verschachtelte Schleife: Überprüft alle Indize-Kombinationen
    for (size_t y = 0; y < knoten_anz; y++) {
      if (kante[i][y]) {
        std::cout << i << " -> " << y << std::endl;
      }
    }
  }
}

}