/*
Escreva um programa em C++ que leia uma sequência de números 
fornecidos pelo usuário e determine quantos números são pares e quantos são ímpares.
*/
#include <iostream>

int main() {
    int numero;
    int quantidadePares = 0;
    int quantidadeImpares = 0;

    std::cout << "Digite uma sequência de números (digite 0 para encerrar):\n";

    do {
        std::cin >> numero;

        if (numero != 0) {
            if (numero % 2 == 0) {
                quantidadePares++;
            } else {
                quantidadeImpares++;
            }
        }
    } while (numero != 0);

    std::cout << "Quantidade de números pares: " << quantidadePares << std::endl;
    std::cout << "Quantidade de números ímpares: " << quantidadeImpares << std::endl;

    return 0;
}

