#include <iostream>

/*
Input: natürliche Zahl x
2 y = x
3 y = y + 17
4 y = y * 3
5 y = y modulo 2
6 drucke (y)
*/

int usereingabe() {
    int eingabewert;
    std::cout << "Gib eine Zahl ein: " << std::endl;
    std::cin >> eingabewert;
    return eingabewert;
}

int rechnen(int x) {
    int y = x;
    y = y + 17;
    y = y * 3;
    y = y % 2;
    std::cout << "Wert: " << y << std::endl;
}

int main() {
    int eingabewert = usereingabe();
    rechnen(eingabewert);
    return 0;
}