// Funções
#include <iostream>
using namespace std;
bool par(int num){
        if(num%2==0)
            return true;
        return false;  
        
}
int main(){
    int N;
    cout << "Digite um Numero:\n";
    cin >> N;
    if(par(N)){
        cout << "E Par";

    } else{
        cout <<"Não e Par";
    }

  return 0;

    }
    
  
