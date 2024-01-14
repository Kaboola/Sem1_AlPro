#include <misc/zeitmesser.hpp>
#include <mergesort.hpp>
#include <misc/hilfsfunktionen.hpp>
#include <vector>
#include <iostream>

int main() {
  misc::Zeitmesser zeitmesser;
  std::vector<int> bsp_zahlen(100000);
  misc::fuelle_zufaellig(bsp_zahlen);
  misc::drucke_array(bsp_zahlen);

  // Timer starten.
  zeitmesser.start();

  mergesort(bsp_zahlen);

  // Timer stoppen.
  zeitmesser.stop();

  misc::drucke_array(bsp_zahlen);

  // Gemessene Zeit in Milisekunden ausgeben
std::cout << "Sortiert in:\n"  << zeitmesser.get_minutes() << " Min; " << zeitmesser.get_seconds() << " Sek; " << zeitmesser.get_milliseconds() << " Milli; " << zeitmesser.get_microseconds() << " Mikro;" << std::endl;
}

// g++ -std=c++17 -I./include \src/hilfsfunktionen.cpp src/mergesort.cpp \examples/aufg1.cpp -o build/aufg1