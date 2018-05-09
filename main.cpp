#include <iostream>
#include "fibonacci.cpp"

using namespace std;

int main() {
    int n = 0;
    int fIt = 0;
    int fRec = 0;

    cout << "Programa para calcular el termino n de la sucesion de Fibonacci\n" << endl;

    while(n <= 0 || n > 47){
        cout << "Introduce el termino de la sucesion de Fibonacci que quieras calcular (1-46): ";
        cin >> n;
        if(n == 0) {
            cout << "El numero que debes introducir debe de ser distinto de cero\n" << endl;
        }else if(n < 0){
            cout << "El numero que debes introducir debe de ser mayor que cero\n" << endl;
        }else if(n > 47){
            cout << "El numero que debes introducir debe de ser menor que 46\n" << endl;
        }
    }
    // Algoritmo Iterativo
    fIt=fibonacciIt(n);

    // Algoritmo Recursivo
    fRec=fibonacciRec(n);

    cout << "\nUtilizando un algoritmo iterativo, el termino " << n << " de la serie de Fibonacci es: " << fIt << endl;
    cout << "\nUtilizando un algoritmo recursivo, el termino " << n << " de la serie de Fibonacci es: " << fRec << endl;

    cout << "\nPress ENTER to continue... " << flush;
    cin.ignore();
    cin.get();

    return 0;
}