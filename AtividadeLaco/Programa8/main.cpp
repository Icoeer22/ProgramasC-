#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float num = -1;
    while (num < 0){
        cout << "Informe um n�mero real positivo: ";
        cin >> num;
        if(num >= 0){
        cout << "O n�mero digitado � valido!";
        }
        else{
        cout<< "O n�mero digitado � inv�lido"<< endl ;
        }
    }


    }
