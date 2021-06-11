#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL , "Portuguese");
    int num[5], menor = 0 , maior = 0 , igual = 0, i ;
    for (i = 0 ; i <5; i++){
        cout << "Informe um numero: ";
        cin >> num[i];
    }
    for (i = 1; i < 5 ; i ++){
        if (num[i] > num[0]){
            maior += 1;
        }
        else if (num[i] < num[0]){
            menor += 1;
        }
        else if (num[i] == num[0]){
            igual += 1;
        }
    }
    cout << "Tem " << maior << "numeros maiores que o primeiro, " << menor <<" numeros menores que o primeiro e " << igual << " numeros iguais ao primeiro.";
    return 0;
}
