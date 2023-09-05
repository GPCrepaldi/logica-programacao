#include <bits/stdc++.h>

using namespace std;

int main () {

    double salario, aumento;

    cout << "Digite o valor do seu salario: ";
    cin >> salario;

    if (salario <= 1000) {
        aumento = salario * 0.2;
        salario = salario + aumento;

        cout << fixed << setprecision(2);
        
        cout << "Novo salario: R$" << salario << endl;
        cout << "Aumento: R$" << aumento << endl;
        cout << "Porcentagem = 20%%" << endl;
    } else if (salario <= 3000) {
        aumento = salario * 0.15;
        salario = salario + aumento;

        cout << fixed << setprecision(2);

        cout << "Novo salario: R$" << salario << endl;
        cout << "Aumento: R$" << aumento << endl;
        cout << "Porcentagem = 15%%" << endl;
    } else if (salario <= 8000) {
        aumento = salario * 0.1;
        salario = salario + aumento;

        cout << fixed << setprecision(2);

        cout << "Novo salario: R$" << salario << endl;
        cout << "Aumento: R$" << aumento << endl;
        cout << "Porcentagem = 10%%" << endl;
    } else {
        aumento = salario * 0.05;
        salario = salario + aumento;

        cout << fixed << setprecision(2);

        cout << "Novo salario: R$" << salario << endl;
        cout << "Aumento: R$" << aumento << endl;
        cout << "Porcentagem = 5%%" << endl;
    }

return 0;    
}