#include <iostream>

int main() {
    // Declaración de variables para almacenar los números ingresados por el usuario
    double numero1, numero2;

    // Solicitar al usuario que ingrese el primer número
    std::cout << "Ingrese el primer numero: ";
    std::cin >> numero1;

    // Solicitar al usuario que ingrese el segundo número
    std::cout << "Ingrese el segundo numero: ";
    std::cin >> numero2;

    // Calcular la suma de los dos números
    double suma = numero1 + numero2;

    // Mostrar el resultado al usuario
    std::cout << "La suma de " << numero1 << " y " << numero2 << " es: " << suma << std::endl;

    return 0;
}
