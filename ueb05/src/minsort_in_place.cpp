#include <minsort_in_place.hpp>
#include <vector>
#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;

std::vector<int> min_sort(std::vector<int>& zahlenliste) {
    int arraylaenge = zahlenliste.size();                      // Länge des Arrays
    int minimum;                                               // Aktuell kleinster Value
    int i;                                                     // Iteriert durch jeden Wert im Array
    int j;                                                     // Iteriert durch jeden Vergleichswert mit i

    for (i = 0; i < arraylaenge - 1; i++) {
        minimum = i;

        for (j = i + 1; j < arraylaenge; j++) {
            if (zahlenliste[j] < zahlenliste[minimum]) {
                minimum = j;
            }
        }

        swap(zahlenliste[i], zahlenliste[minimum]);
    }
    
    return zahlenliste;
}