#include <iostream>

using namespace std;

class Factorial {
private:
    int factorial = 1;
    int number;
public:
    void setup();
};

void Factorial::setup() {
    cout << "Введите число: " << endl;
    cin >> number;

    if (number == 0 || number == 1) {
        factorial = 1;
    }
    else {
        while (number > 1) {
            factorial = factorial * number;
            number--;
        }
    }
    cout << "Факториал: " << factorial << endl;
}

int main() {
    Factorial factorial;
    factorial.setup();
    return 0;
}