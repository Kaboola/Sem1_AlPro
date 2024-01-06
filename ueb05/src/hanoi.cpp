#include <hanoi/hanoi.hpp>

#include <iostream>

namespace hanoi{

std::vector<std::vector<size_t>> stapel;

    Hanoi::Hanoi(size_t anz) {
        stapel.push_back(std::vector<size_t>());    // Erstes Array
        stapel.push_back(std::vector<size_t>());    // Zweites Array
        stapel.push_back(std::vector<size_t>());    // Drittes Array

        for (int i = anz; i > 0; i--) {
            stapel[0].push_back(i);
        }

    }

    // Verschiebt die oberste Scheibe (falls erlaubt) und gibt true zurück
    // genau dann wenn die Bewegung erlaubt war

    
    bool Hanoi::bewege(size_t von, size_t nach) {
        std::cout << "Bewege von " << von << " nach " << nach << std::endl;
        if (!stapel[von].empty()) {                                 // Wenn Von-Stapel nicht leer ist ...
            if (stapel[nach].empty()) {                             // Wenn Nach-Stapel leer ist, leg "von" -> "nach"
                stapel[nach].push_back(stapel[von].back());
                stapel[von].pop_back();                             // und lösche Scheibe "von"
                return true;
            }
            else if (stapel[von].back() < stapel[nach].back()) {    // Sonst: Wenn Scheibe "von" kleiner ist als "nach"
                stapel[nach].push_back(stapel[von].back());         // ebenfalls "von" -> "nach"
                stapel[von].pop_back();
                return true;
            }
        }
        // Alle anderen Optionen sind Illegal!
            std::cout << "Illegale Bewegung von: " << von+1 << " nach " << nach+1 << std::endl;
            return false;
    }
    
    // Druckt die aktuelle Konfiguration auf der Konsole aus
    void Hanoi::drucke() const {
        size_t index = 1;                                               // index für die Türme

        for (std::vector turm : stapel) {                               // Für jeden Turm im Spiel ...
            std::cout << "Turm Nr. " << index << ":" << std::endl;      // Drucke Turm Nr. ...

            for (size_t scheibe : turm) {                               // Für jede Scheibe im Turm ...
                std::cout << scheibe << " ";                            // Drucke Scheibe ...
                std::cout << std::endl;
            }
        index++;        
        std::cout << std::endl;
        }
        std::cout << " ------------------------------ "<< std::endl; 
        std::cout << std::endl;
    }
}