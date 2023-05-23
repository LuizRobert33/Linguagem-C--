// Calculo da Fatorial
#include <iostream>
using namespace std;
int main(){
    int N,Fat = 1;
    cout << "Digite um Numero para se calculado o seu fatorial:\n";
    cin >> N;
    for ( int i = 1; i < N; i++)
    {
        Fat = Fat * (i+1);
        
    }
     cout << "Fatorial:"<< Fat;

    return 0;
}