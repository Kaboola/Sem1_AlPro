#include <minsort_in_place.hpp>
#include <vector>
#include <algorithm>
#include <functional>
#include <ctime>
#include <iostream>
#include <iomanip>

//
// Hilfsfunktionen die wir nur für diese Demo benutzen
//

// Die Funktion befüllt ein Array mit zufälligen Zahlen
void fuelle_zufaellig(std::vector<int>& in) {
  std::srand(unsigned(std::time(nullptr))); // Konfiguriere den Zufallszahlengenerator 
  std::function<size_t(void)> zufallsgenerator = [] (void) -> size_t { return std::rand() % 10000; }; // Erstelle ein Funktionsobjekt welches Zufallszahlen zwischen 0 und 10000 generiert
  std::generate(in.begin(), in.end(), zufallsgenerator);    // Befülle das Array mithilfe des Funktionsobjekts
}

// Die Funktion druckt ein Array aus
void drucke_array(const std::vector<int>& in) {
  for(const int& zahl: in) {
    std::cout << std::setw(5) << zahl;
  }
  std::cout << std::endl;
}

int main() {
  std::vector<int> bsp_zahlen(100);
  fuelle_zufaellig(bsp_zahlen);
  drucke_array(bsp_zahlen);
  min_sort(bsp_zahlen);
  std::cout << "Hier das geordnete Array: " << std::endl;
  drucke_array(bsp_zahlen);
}

// g++ -std=c++17 -I./include src/minsort_in_place.cpp examples/aufg1.cpp -o build/aufg1