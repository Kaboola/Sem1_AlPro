
#include <iostream>

/*
Input: Text T der aus genau n Zeichen T[0], T[1], ... besteht .
2 i = 0
3 s = 0
4 Erhöhe s um 1 falls T[i] ein Punkt , Ausrufezeichen oder Fragezeichen ist.
5 i = i+1
6 Springe zu Zeile 4 falls i < n ist; andernfalls drucke(s).
*/

std::string usereingabe() {
    std::string eingabewert;
    std::cout << "Gib einen Text bzw. ein Wort ein. " << std::endl;
    std::getline(std::cin, eingabewert);
    return eingabewert;
}

void wertezaehler(const std::string& text) {
    int s = 0;
    for (int i = 0; i < text.length(); ++i) {
        if (text[i] == '!' || text[i] == '.' || text[i] == '?') {
            ++s;
        }
    }
    std::cout << "Anzahl der Sätze: " << s << std::endl;
}

int main() {
    std::string text = usereingabe();
    wertezaehler(text);
    return 0;
}