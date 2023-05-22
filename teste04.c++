#include <iostream>
using namespace std;
int main (){
    int num = 12;
    switch (num)
    {
    case 10:
        cout << "Numero 10";
        break;
    case  9:
        cout <<"Numero 9";
        break;    
    
    default:
        cout << "Numero diferente de 10 e 9";
        break;
    }
}