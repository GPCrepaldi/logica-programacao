#include <bits/stdc++.h>

using namespace std;

int main () {

    double x, y;

    cout << "Digite a coordenada X: ";
    cin >> x;

    cout << "Digite a coordenada Y: ";
    cin >> y;

    if (x == 0 && y == 0) {
        cout << "Origem" << endl;
    } else if (x >= 0 && y < 0) {
        cout << "Q2" << endl;
    } else if (x < 0 && y < 0) {
        cout << "Q3" << endl;
    } else if (x < 0 && y >= 0) {
        cout << "Q4" << endl;
    } else {
        cout << "Q1" << endl;
    }

return 0;
}