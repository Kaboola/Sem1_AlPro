#include <misc/zeitmesser.hpp>
#include <misc/schnellsort.hpp>
#include <minsort_in_place.hpp>
#include <misc/hilfsfunktionen.hpp>
#include <iostream>
#include <algorithm>


int main() {
// Zufalls-Array und Variable Zeitmesser implementieren.
  std::vector<int> bsp_zahlen(100000);
  misc::fuelle_zufaellig(bsp_zahlen);
  misc::drucke_array(bsp_zahlen);
  misc::Zeitmesser zeitmesser;

// Timer starten.
  zeitmesser.start();

// QuickSort ODER MinSort ein/auskommentieren!!
//  misc::schnellsort(bsp_zahlen);
  min_sort(bsp_zahlen);

// Timer stoppen.
  zeitmesser.stop();

  misc::drucke_array(bsp_zahlen);

// Gemessene Zeit in Milisekunden ausgeben
std::cout << "Sortiert in:\n"  << zeitmesser.get_minutes() << " Min; " << zeitmesser.get_seconds() << " Sek; " << zeitmesser.get_milliseconds() << " Milli; " << zeitmesser.get_microseconds() << " Mikro;" << std::endl;

return 0;
}