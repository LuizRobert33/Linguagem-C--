#include <iostream>
using namespace std;
int main(){
    int N,menor = 999,cont = 0,soma = 0;

   for (int i = 0; i < 5; i++)
   {
        cout << "Digite um Numero:\n";
        cin >> N;
        soma = soma + N;
        if (N<menor)
        {
            menor = N;
        }
        if (N>=5 && N<=10)
        {
            cont++;
        
        }
   }
   cout << menor << endl;
   cout << cont << endl;
   cout << soma << endl;
    return 0;
}