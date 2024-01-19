#include <simpler_graph/simpler_graph.hpp>

#define FMT_HEADER_ONLY  // Dieses Makro ist nötig, um die Bibliothek simpel einzubinden
#include <fmt/core.h>    // Muss eingebunden werden um {fmt} zu verwenden
#include <fmt/ranges.h>  // Muss zur Ausgabe von Arrays eingebunden werden
#include <vector>        // Stellt dynamische Arrays zur Verfügung

int main() {
  SimplerGraph::SimplerGraph graph(6);
    graph.addKante(0, 1);
    graph.addKante(1, 2);
    graph.addKante(2, 3);
    graph.addKante(3, 5);
    graph.addKante(4, 1);

    int Anfangsknoten = 0;
    std::vector<int> folge = graph.Tiefensuche(Anfangsknoten);
    graph.Tiefensuche(Anfangsknoten);
    fmt::print("Ergebnis der Tiefensuche:\n");
    graph.drucke_folge(folge);
}
