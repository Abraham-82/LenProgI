/*************************************************************
Fecha: 19/04/2025
Programa para sumar, restar, multiplicar y dividir en lenguaje C++
**************************************************************/

//Se incluye la libreria estandar para tener acceso a los dispositivos de entrada y/o salida
#include <iostream>

int main() {
    //Se definen las dos variables donde se guardaran los numeros
    float numero1, numero2;

    //Se solicita al usuario colocar los valores para los dos numeros
    std::cout << "Escribe el primer número: ";
    std::cin >> numero1;

    std::cout << "Escribe el segundo número: ";
    std::cin << numero2;

    //Se realizan las cuatro operaciones
    float suma = numero1 + numero2;
    float resta = numero1 - numero2;
    float multiplicacion = numero1 * numero2;
    float division = numero1 / numero2;

    //Se muestra en pantalla el resultado de las cuatro operaciones
    std::cout << "La suma es: " << suma << std::endl;
    std::cout << "La resta es: " << resta << std::endl;
    std::cout << "La multiplicacion es: " << multiplicacion << std::endl;
    std::cout << "La division es: " << division << std::endl;

    return 0;

}