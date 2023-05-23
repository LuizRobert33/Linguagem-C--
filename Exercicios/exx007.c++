/*Escreva um programa em C++ que solicite ao usuário digitar uma série de notas 
de alunos (valores reais) e, ao final, calcule e exiba a média dessas notas. 
O programa deve continuar solicitando notas até que o usuário digite 
um valor negativo (-1) para encerrar a entrada de dados.*/
#include <iostream>
using namespace std;
int main(){
    int media,N,cont = 0,Notas = 0;
    
   do
   {
    cin >> N;
    Notas = Notas + N;
    cont++;

   } while (N!=-1);
   media = Notas/cont;
   cout << "Media:" << media;
   

    return 0;
}