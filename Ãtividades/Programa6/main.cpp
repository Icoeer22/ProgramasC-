#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float num1 , num2;
    cout << "Digite o primeiro número:" ;
    cin >> num1;
    cout << "Digite o segundo número: ";
    cin >> num2;
    if (num1 == num2) {
            cout << "Os números são iguais.";

    }
    if (num1 > num2){
        cout << "O primeiro número, "<< num1 << " é maior que o segundo número, " << num2 << '.';
    }
    if (num2 > num1){
        cout << "O segundo número, "<< num2 << " é maior que o segundo número, " << num1 << '.';
    }

    return 0;
}
