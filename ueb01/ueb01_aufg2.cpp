#include <iostream>

/*
Das erste Ablaufdiagramm beschreibt, wie ein Nutzer eine Zahl x eingibt, diese anschließend mit sich selbst multipliziert wird
und anschließend das Ergebnis ausgibt.
*/

int main() {
    int x;
    std::cout << "Gib eine Zahl ein: " << std::endl;
    std::cin >> x;
    x = x*x;
    std::cout << "Die quadrierte Zahl ist: " << x << std::endl;
}