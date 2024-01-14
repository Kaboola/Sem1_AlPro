#include <mergesort.hpp>
#include <vector>

void mergesort(std::vector<int>& liste) {
    int arraylaenge = liste.size();

// Prüfe, ob das Array bereits iterativ geteilt wurde und 1 ist, falls nicht, beginnt das Programm.
    if (arraylaenge > 1) {
        int halbiert = arraylaenge/2;

// DIVIDE-SCHRITT
        std::vector<int> array_links;
        std::vector<int> array_rechts;

// Setze die erste Hälfte der Elemente aus "liste" in "array_links"
        for (int i = 0; i < halbiert; i++) {
            array_links.push_back(liste.front());
            liste.erase(liste.begin());
        }

// Setze die zweite Hälfte der Elemente aus "liste" in "array_rechts"
        for (int i = halbiert; i < arraylaenge; i++) {
            array_rechts.push_back(liste.front());
            liste.erase(liste.begin());
        }

// CONQUER-SCHRITT
        mergesort(array_links);
        mergesort(array_rechts);

// MERGE-SCHRITT
        merge(array_links, array_rechts, liste);
    }

    else {
        return;
    }
}

void merge(const std::vector<int>& links, const std::vector<int>& rechts, std::vector<int>& merged) {

}