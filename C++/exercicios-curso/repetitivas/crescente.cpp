#include <bits/stdc++.h>

using namespace std;

int main () {

    int x, y;

    cout << "Digite um numeros para ver se e crescente ou decrescente: ";
    cin >> x;
    cout << "Digite o segundo numero: ";
    cin >> y;

    while (x != y) {
        if (x < y) {
            cout << "CRESCENTE" << endl;
        } else if (x > y) {
            cout << "DECRESCENTE" << endl;
        }
    
    cout << "Digite novamente dois numeros novamente: ";
    cin >> x;
    cout << "Digite ou outro numero: ";
    cin >> y;
    }

return 0;
}