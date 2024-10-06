// 3KLSC-MISAELLOPEZ-10.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
#include <iostream>
using namespace std;

int sumaRecursiva(int numero) {
    if (numero <= 9) {
        return numero;
    }
    else {
        return sumaRecursiva(numero / 10) + numero % 10;
    }
}

int sumaIterativa(int numero) {
    int suma = 0;
    while (numero > 9) {
        suma += numero % 10;
        numero /= 10;
    }
    return (suma + numero);
}

int main() {
    int numeroDatoIngresado;

    cout << "Se calcula la suma de todos los digitos que se ingrese" << endl;
    cout << "Ingresa el numero deseado: ";
    cin >> numeroDatoIngresado;

    cout << "La suma de " << numeroDatoIngresado << " con la suma recursiva es: "
        << sumaRecursiva(numeroDatoIngresado) << endl;

    cout << "La suma de " << numeroDatoIngresado << " con la suma iterativa es: "
        << sumaIterativa(numeroDatoIngresado) << endl;

    return 0;
}