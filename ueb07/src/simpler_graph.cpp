#include <iostream>
#include <queue>
#include <simpler_graph/simpler_graph.hpp>

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

std::vector<int> SimplerGraph::Breitensuche(size_t s) { 
      std::vector<int> folge;                                 // Erstelle leere Folge und leere Warteschlange
      std::queue<int> warteschlange;
      std::vector<bool> erkundet(knoten_anz, false);                 

      erkundet[s] = true;                                     // Markiere s als erkundet und füge s in Q und F ein.
      warteschlange.push(s);
      folge.push_back(s);

      while (!warteschlange.empty()) {
        int v = warteschlange.front();                         // Speichert aktuelles Element der Queue in v und löscht es aus der Queue
        warteschlange.pop();

        for (int i = 0; i < knoten_anz; i++) {
          if (kante[v][i] && !erkundet[i]) {
            warteschlange.push(i);
            folge.push_back(i);
            erkundet[i] = true;
          }
        }
      }
    return folge;
    }

std::vector<int> SimplerGraph::Tiefensuche(size_t s) {
  std::vector<int> tiefensuche_folge;
  std::vector<bool> erkundet(knoten_anz, false);
    
  erkundet[s] = true;                                          // Markiere s als erkundet und füge s in F ein. 
  tiefensuche_folge.push_back(s);
  
  for (int i = 0; i < knoten_anz; i++) {
    if (kante[s][i] && !erkundet[i]) {
      erkundet[i] = true;
      std::vector<int> ergebnis = Tiefensuche(i);
      tiefensuche_folge.insert(tiefensuche_folge.end(), ergebnis.begin(), ergebnis.end());
    }
  }
  return tiefensuche_folge;
}
  
void SimplerGraph::drucke_folge(const std::vector<int>& folge) {    
    for (int i = 0; i < folge.size(); i++) {
      fmt::print("{} ", folge[i]);
    }
    fmt::print("\n");
  }
}