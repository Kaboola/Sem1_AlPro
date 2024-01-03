#include <iostream>

/*
Input: Liste von n+1 Zahlen L[0], L[1], L[2], ..., L[n]
2 i = 0
3 s = 0
4 s = s + L[i]
5 i = i+1
6 Springe zu Zeile 4 falls i <= n ist; andernfalls drucke(s/(n+1)).
*/
int main() {
    int n;
    std::cout << "Wie viele Elemente werden angegeben? ";
    std::cin >> n;
    std::cout << "Gib " << n + 1 << " Zahlen an. Separiere sie mit Leertasten: ";
    
    int s = 0;
    for (int i = 0; i <= n; ++i) {
        int num;
        std::cin >> num;
        s = s + num;
    }

    std::cout << "Durchschnitt: " << static_cast<double>(s) / (n + 1) << std::endl;

    return 0;
}