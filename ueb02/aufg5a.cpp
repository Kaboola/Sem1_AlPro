#include <iostream>

/*
Gegeben sei eine Zahl n zwischen 0 und 4. Diese Zahl soll als deutsches Wort ausdruckt
werden. Dazu dürfen Sie die Anweisung drucke_text(...) verwenden. So soll beispiels-
weise für n = 0 die Anweisung drucke_text("Null") verwendet werden.
*/

int usereingabe() {
    int eingabewert;
    std::cout << "Gib eine Zahl zwischen 0 - 4 ein: " << std::endl;
    std::cin >> eingabewert;
    return eingabewert;
}

int rechnen(int x) {
       switch(x) {
        case 0:
            std::cout << "Null";
            break;
        case 1:
            std::cout << "Eins";
            break;
        case 2:
            std::cout << "Zwei";
            break;
        case 3:
            std::cout << "Drei";
            break;
        case 4:
            std::cout << "Vier";
            break;
        default:
            std::cout << "Nummer zu hoch!";
            break;
       }
}

int main() {
    long eingabewert = usereingabe();
    rechnen(eingabewert);
    return 0;
}