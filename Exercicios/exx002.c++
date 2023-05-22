/*Escreva um programa que solicite ao usuário um número inteiro e verifique
 se ele é par ou ímpar. Em seguida, exiba uma mensagem adequada ao resultado.
*/
#include <iostream>
using namespace std;
int main (){
    int N;
    cout << "Digite um Numero:\n";
    cin >> N;
    if(N%2==0){
        cout << "O Numero e par";
    } else {
        cout << "O Numero e impar";
    }    
    return 0;
    
}