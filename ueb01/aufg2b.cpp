#include <iostream>

/*
Das zweite Ablaufdiagramm beschreibt, wie ein Nutzer eine Zahl x >= 0 eingibt.
Anschließend prüft das Programm, ob x kleiner gleich 1 ist. Wenn nicht; wird von der Zahl 2 abgezogen und wieder geprüft.
Wenn doch; x wird gedruckt
*/

int usereingabe() {
    int eingabewert;
    std::cout << "Gib eine Zahl ein: " << std::endl;
    std::cin >> eingabewert;
    return eingabewert;
}

int rechnen(int x) {
    while (x > 1) {
        std::cout << "Wert: " << x << std::endl;
        x = x - 2;
    }
    std::cout << "Wert: " << x << std::endl;
}


int main() {
    int eingabewert = usereingabe();
    rechnen(eingabewert);
    return 0;
}