#include <iostream>
#include <vector>
#include <cmath>

/*
(1) Entwerfen und implementieren Sie eine Funktion, die ein int-Array auf der Konsole aus-
druckt.
(2) Entwerfen und implementieren Sie eine Funktion, die alle Werte eines übergebenen int-
Arrays durch den jeweiligen Betrag ersetzt.
(3) Entwerfen und implementieren Sie eine Funktion, welche die Einträge eines übergebenen
string-Arrays zeilenweise auf der Konsole ausdruckt.
(4) Entwerfen und implementieren Sie eine Funktion, die ganze Zahlen von der Standardein-
gabe ließt, bis die Zahl 42 empfangen wird. Alle bis dahin gelesenen ganzen Zahlen sollen
in einem Array gespeichert werden, welcher von der Funktion zurückgegeben wird.
*/

std::vector<int> func_int_array() {
    std::vector<int> int_array;
    int_array.push_back(5);
    int_array.push_back(6);
    int_array.push_back(-7);
    int_array.push_back(-10);
    return int_array;
}

std::vector<std::string> func_str_array () {
    std::vector<std::string> str_array;
    str_array.push_back("Hallo");
    str_array.push_back("Welt");
    str_array.push_back("Sheesh");
    str_array.push_back("Kek");
    return str_array;
}
// (1) Druck-Funktion; Wir verwenden Call-By-Const-Reference, da wir das Array nicht verändern wollen.
void func_int_array_drucken(const std::vector<int> array) {
    for (int value : array) {
        std::cout << "Wert: " << value << std::endl;
    }
}

// (2) Ersetzen-Funktion; Wir verwenden Call-by-Reference um das übergebene Array zu verändern. abs macht aus einem Wert den Betrag.
void func_ersetzen (std::vector<int>& array) {
    for (int& value : array) {
        value = std::abs(value);
        }
    }

// (3) Druck-Funktion; Wir verwenden Call-By-Const-Reference, da wir das Array nicht verändern wollen.
void func_str_array_drucken(const std::vector<std::string> array) {
    for (std::string value : array) {
        std::cout << value << std::endl;
    }
}

// (4) Zahlen in Array speichern. Wir verwenden Call-by-Value.
std::vector<int> func_einleser() {
    std::cout << "Geben Sie Zahlen ein, das Programm endet wenn Sie 42 eingeben. " << std::endl;
    std::vector<int> zahlen_array;
    int input;

    while (std::cin >> input && input != 42) {
        zahlen_array.push_back(input);
    }
    return zahlen_array;
}


int main() {

    /*
    (1)
    std::vector<int> int_array = func_int_array();
    func_int_array_drucken(int_array);
    */

    /*
    (2)
    func_ersetzen(int_array);
    std::cout << "Nach Verwenden von func_ersetzen: " << std::endl;
    func_int_array_drucken(int_array);
    */

    /*
    (3)
    std::vector<std::string> str_array = func_str_array();
    func_str_array_drucken(str_array);   
    */

    /*
    (4)
    std::vector<int> ergebnis = func_einleser();
    func_int_array_drucken(ergebnis);
    */

    return 0;
}