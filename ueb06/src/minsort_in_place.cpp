#include <minsort_in_place.hpp>
#include <vector>
#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;

void min_sort (std::vector<int>& zahlenliste) {
    int arraylaenge = zahlenliste.size();
    int minimum;
    int i;
    int j;
    
    for (i = 0; i < arraylaenge - 1; i++) {
    minimum = i;

// Iteriert durch das Array, beginnend bei dem 2. Element und vergleicht, ob das aktuelle Element kleiner ist
// Falls ja, setzt er es auf minimum und iteriert weiter beim nächsten Element
        for (j = i + 1; j < arraylaenge; j++) {

            if (zahlenliste[j] < zahlenliste[minimum]) {
                minimum = j;
            }
        }
// Nach finden des Element "minimum": Tausche i mit minimum
// Anschließend beginnt die erste for-Schleife wieder, welche ein Element weiterrückt und es als minimum setzt
        swap(zahlenliste[i], zahlenliste[minimum]);
        }
}