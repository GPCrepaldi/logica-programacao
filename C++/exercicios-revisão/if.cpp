#include <bits/stdc++.h>

using namespace std;

int main () {

    int hora;

    cout << "Digite a hora do dia: ";
    cin >> hora;

        if (hora <= 24) {
            if (hora < 12) {
                cout << "Bom dia!!";
            } else {
                cout << "Boa tarde!!";
            }
        } else {
            cout << "Hora nao existe!!";
        }
}