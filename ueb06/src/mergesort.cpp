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
        for (int i = 0; i < arraylaenge; i++) {
            if (i < halbiert) {
                array_links.push_back(liste[i]);
            }
            else {
                array_rechts.push_back(liste[i]);
            }
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
    int laenge_links = links.size();    
    int laenge_rechts = rechts.size();
    int i = 0;                          // Index für array_links
    int j = 0;                          // Index für array_rechts
    int k = 0;                          // Index für merged

    while (i < laenge_links && j < laenge_rechts) {
// Setze entweder Element aus "links" in merged[k] oder Element aus "rechts", abhängig der Größe
        if (links[i] <= rechts[j]) {
            merged[k] = links[i];
            i++;
        }
        else {
            merged[k] = rechts[j];
            j++;
        }
        k++;
    }
// Wenn nicht mehr verglichen werden kann, ist entweder ein Element in "links" oder eines in "rechts" übrig.
// Wir gehen abschließend durch beide Arrays und setzen das fehlende Element in merged[k], falls vorhanden.
    while (i < laenge_links) {
        merged[k] = links[i];
        i++;
        k++;
    }

    while (j < laenge_rechts) {
        merged[k] = rechts[j];
        j++;
        k++;
    }
}