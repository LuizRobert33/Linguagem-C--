/*Escreva um programa em C++ que solicite ao usuário digitar um número inteiro como limite. 
Em seguida, calcule a soma de todos os múltiplos de 3 e 5 até esse limite 
(incluindo o próprio limite, se ele for múltiplo de 3 ou 5) e exiba o resultado.*/
#include <iostream>
using namespace std;
int main(){
    int N,Soma = 0 ;
    cout << "Digite um Numero:\n";
    cin >> N;
    for (int i = 1; i <= N; i++)
    {
       if (i%3==0||i%5==0)
       {
        Soma += i;
       }
       
       
    }
    cout << Soma;
    

    return 0;
}