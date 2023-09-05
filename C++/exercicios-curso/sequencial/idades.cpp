#include <bits/stdc++.h>

using namespace std;

int main () {

    double idade1, idade2, media;
    string nome1, nome2;

    cout << "Digite o nome da primeira pessoa: ";
    getline(cin, nome1);
    cout << "Digite a idade da primeira pessoa: ";
    cin >> idade1;

    cout << "Digite o nome da segunda pessoa: ";
    cin.ignore(INT_MAX, '\n');
    getline(cin, nome2);
    cout << "Digite a idade da segunda pessoa: ";
    cin >> idade2;

    media = (idade1 + idade2) / 2;

    cout << "A idade media de " << nome1 << " e " << nome2 << " eh de: " << media;

return 0;
}