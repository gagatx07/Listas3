#include <iostream>

using namespace std;

    int main() {
    int numeros;
    cout << "Diga dois numeros";
    cin >> numeros;
    cout << numeros;
    int numero;
    cout << "Digite outro numero";
    cin >> numero;
    cout << numero;
    if (numeros > numero) {
        cout << "Primeiro numero maior";
    }
    else if (numeros < numero) {
        cout << "Segundo numero maior";
    }
    else {
        cout << "os numeros são iguais";
    }
}