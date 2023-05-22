#include <iostream>
using namespace std;

int main() {
    int n = 4;
    int cont = 0;

    cout << n << endl;

    while (n < 50) {
        if (n % 2 == 0) {
            cont++;
            n++;
            continue;
        }
        n++;
    }

    cout << cont << endl;
    return 0;
}
