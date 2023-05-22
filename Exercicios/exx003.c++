/*Escreva um programa que solicite ao usuário a idade de uma pessoa e verifique se ela 
é maior de idade (idade igual ou superior a 18 anos). Em seguida, exiba uma mensagem adequada ao resultado.*/
#include <iostream>
using namespace std;
int main(){
    int D;
    cout << "Digite sua idade\n";
    cin >> D;
    if (D>=18)
    {
        cout << "Voce e Maior de idade";
    } else {
        cout  << "Voce e menor de idade";
    }
    
    return 0;
}