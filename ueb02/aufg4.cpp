#include <iostream>

/*
Wie alt wäre Alan Turing dieses Jahr geworden?
*/

int usereingabe() {
    int eingabewert;
    std::cout << "Wie alt wäre Alan Turing dieses Jahr geworden? " << std::endl;
    std::cin >> eingabewert;
    return eingabewert;
}

void erraten(int x) {
    int alter = 112;

    if (x > 112) {
        std::cout << "Falsch! Alan Turing wäre jünger als " << x << " Jahre alt." << std::endl;
    }
    else if (x < 112) {
        std::cout << "Falsch! Alan Turing wäre älter als " << x << " Jahre alt." << std::endl;
    }
    else {
        std::cout << "Richtig! Alan Turing wäre genau " << x << " Jahre alt." << std::endl;
    }
}

int main() {
    int eingabewert = usereingabe();
    erraten(eingabewert);
    return 0;
}