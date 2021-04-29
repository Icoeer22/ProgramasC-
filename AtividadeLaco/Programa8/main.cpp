#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float num = -1;
    while (num < 0){
        cout << "Informe um número real positivo: ";
        cin >> num;
        if(num >= 0){
        cout << "O número digitado é valido!";
        }
        else{
        cout<< "O número digitado é inválido"<< endl ;
        }
    }


    }
