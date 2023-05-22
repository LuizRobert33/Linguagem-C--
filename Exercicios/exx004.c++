/*Escreva um programa que solicite ao usuário três números inteiros e verifique se eles formam um triângulo válido. 
Em um triângulo válido, a soma de dois lados deve ser maior do que o terceiro lado.
 Em seguida, exiba uma mensagem adequada ao resultado.*/
#include <iostream>
using namespace std;

int main() {
    int N1, N2, N3;
    cout << "Digite 3 números inteiros:\n";
    cin >> N1 >> N2 >> N3;

    if (N1 + N2 > N3 && N1 + N3 > N2 && N2 + N3 > N1) {
        cout << "É um triângulo" << endl;
    }
    else {
        cout << "Não é um triângulo" << endl;
    }

    return 0;
}
