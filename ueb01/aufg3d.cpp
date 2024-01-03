#include <iostream>

/*
Input: Natürliche Zahl x
2 t = x
3 t = t*t
4 t = x*t
5 t = t*t
6 t = t*t
7 t = x*t
8 t = t*t
9 t = x*t
10 t = t*t
11 t = t*t
12 t = x*t
13 t = t*t
14 drucke (t)
*/

long usereingabe() {
    long eingabewert;
    std::cout << "Gib eine Zahl ein: " << std::endl;
    std::cin >> eingabewert;
    return eingabewert;
}

void rechnen(long x) {
    long t = x;
    t = x;
    t = t*t;
    t = x*t;
    t = t*t;
    t = t*t;
    t = x*t;
    t = t*t;
    t = x*t;
    t = t*t;
    t = t*t;
    t = x*t;
    t = t*t;
    std::cout << "Zahl nach Berechnung: " << t << std::endl;
}

int main() {
    long eingabewert = usereingabe();
    rechnen(eingabewert);
    return 0;
}

// Kein Output weil Zahl zu groß ist.