#include <iostream>

int main() {

    // Declaration Statements
    int zu_deklarierende_variable;

    // Expression Statements
    zu_deklarierende_variable = 20;
    zu_deklarierende_variable = 20 * 2;

    // Selection Statements
    if (zu_deklarierende_variable >= 50) {
        printf("Variable ist aktuell bei: %d\n", zu_deklarierende_variable);
    }
    else {
        printf("Variable ist aktuell bei: %d\n", zu_deklarierende_variable);
    }

    // Iteration Statements
    while (zu_deklarierende_variable != 80) {
        zu_deklarierende_variable = zu_deklarierende_variable + 10;
        printf("Variable ist aktuell bei: %d\n", zu_deklarierende_variable);
        return zu_deklarierende_variable;
    }

}