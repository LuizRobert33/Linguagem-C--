//Calculadora
#include <iostream>
using namespace std;
int main(){
    int N1,N2,T;
    float div;
    char P;
    cout << "======CALCULADORA QUE RECEBE 2 NUMEROS======\n";
    cout << "Digite o primeiro Numero:\n";
    cin >> N1;
    cout << "Digite outro Numero:\n";
    cin >> N2;
    cout << "Qual operação Deseja realizar(+,-,/,*)?";
    cin >> P;
    switch(P){
        case '+':
            T = N1+N2;
            cout << "A soma dos Numeros e:\n";
            cout << T;
                break;
        case '-':
            T = N1-N2;
            cout << "A subtração dos Numeros e:\n";
            cout << T;
                break;  
        case '*':
            T = N1*N2;
            cout <<"A multiplicação dos Numeros e:\n";
            cout << T;
                break;
        case '/':
            div = (float)N1/N2;         
            cout << "A divisão dos Numeros e:\n";
            cout << div;
                break;
        default:
            cout << "Digite uma expressão Valida";
                break;        
    }

}