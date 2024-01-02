#include <iostream>

int main() {

    // Declaration Statements
    // Stellen eine neue Variable zur Verfügung
    int eine_variable;
    int neue_variable;

    // Expression Statements
    // Weisen Variable einen Wert zu, berechnen etwas oder rufen eine Funktion auf
    eine_variable = 10;
    eine_variable = 10 * 2;
    neue_variable = 5;

    // Selection Statements
    // Anweisungen, die abhängig von einer Bedingung ausgeführt werden
    if (eine_variable >= 50) {
        printf("Variable ist aktuell bei: %d\n", eine_variable);
    }
    else {
        printf("Variable ist aktuell bei: %d\n", eine_variable);
    }

    // Iteration Statements
    // Anweisungen, die solange ausgeführt werden bis eine Bedingung erfüllt ist
    while (eine_variable != 60) {
        eine_variable = eine_variable + 10;
        printf("Variable ist aktuell bei: %d\n", eine_variable);
        return eine_variable;
    }

    // Compound Statements
    // Verschachtelte Selection- und Iteration Statements
    if (eine_variable = 60) {
        if (neue_variable = 5) {
            printf("neue_variable ist aktuell bei: %d\n", neue_variable);
        }
        else {
            printf("neue_variable ist aktuell bei: %d\n", neue_variable);
        }
    }

}