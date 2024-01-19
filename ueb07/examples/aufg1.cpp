#include <simpler_graph/simpler_graph.hpp>

#define FMT_HEADER_ONLY  // Dieses Makro ist nötig, um die Bibliothek simpel einzubinden
#include <fmt/core.h>    // Muss eingebunden werden um {fmt} zu verwenden
#include <fmt/ranges.h>  // Muss zur Ausgabe von Arrays eingebunden werden
#include <vector>        // Stellt dynamische Arrays zur Verfügung
#include <queue>         // Zum Verwenden von Warteschlangen

int main() {
  
  SimplerGraph::SimplerGraph graph(6);
    graph.addKante(0, 1);
    graph.addKante(0, 2);
    graph.addKante(2, 2);
    graph.addKante(4, 3);
    graph.addKante(3, 1);
    graph.addKante(2, 5);
    graph.addKante(2, 4);
    graph.addKante(4, 2);
    graph.addKante(5, 2);

    int Anfangsknoten = 0;
    std::vector<int> folge = graph.Breitensuche(Anfangsknoten);
    graph.Breitensuche(Anfangsknoten);
    fmt::print("Ergebnis der Breitensuche:\n");
    graph.drucke_folge(folge);
}