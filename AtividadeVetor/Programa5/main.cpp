#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int a[20], b[20] , c[20], i;
    for (i = 0 ; i < 20 ; i ++){
        cout << "Informe um valor para A: ";
        cin >> a[i];
        cout << "Informe um valor para B: ";
        cin >> b[i];
        cout << "Esse será o " << i+1 << "º número informado.";
        system ("pause");
        system("cls");
        c[i] = a[i] - b[i];

    }
    for (i = 0 ; i < 20 ; i ++){
        cout << c [i] << endl;
    }

    return 0;
}
