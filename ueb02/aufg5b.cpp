#include <iostream>

/*
Gegeben sei eine natürliche Zahl n ≥ 1. Zu dieser Zahl soll das folgende Muster ausdruckt
werden. Dazu dürfen Sie die Anweisungen drucke_zeichen(...) und neue_zeile() ver-
wenden.
*/

int usereingabe() {
    int eingabewert;
    std::cout << "Gib eine Zahl >= 1  ein: " << std::endl;
    std::cin >> eingabewert;
    return eingabewert;
}

int sterne(int x) {
    if (x < 1) {
        std::cout << "Die Zahl ist zu klein!" << std::endl;
        return x;
    }
    else {
        for (int i = 1; i < x+1; i++) {
            for (int j = 1; j <= i; j++) {
                printf("*");
            }
            std::cout << " " << std::endl;
        }
    }
}

int main() {
    int eingabewert = usereingabe();
    sterne(eingabewert);
    return 0;
}