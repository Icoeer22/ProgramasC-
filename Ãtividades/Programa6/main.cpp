#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float num1 , num2;
    cout << "Digite o primeiro n�mero:" ;
    cin >> num1;
    cout << "Digite o segundo n�mero: ";
    cin >> num2;
    if (num1 == num2) {
            cout << "Os n�meros s�o iguais.";

    }
    if (num1 > num2){
        cout << "O primeiro n�mero, "<< num1 << " � maior que o segundo n�mero, " << num2 << '.';
    }
    if (num2 > num1){
        cout << "O segundo n�mero, "<< num2 << " � maior que o segundo n�mero, " << num1 << '.';
    }

    return 0;
}
