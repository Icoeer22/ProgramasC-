#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int soma , div = 0 , entrada = 1;
    while (entrada !=0 ){
        cout << "Informe um n�mero: ";
        cin >> entrada;
        if (entrada % 2 == 0 && entrada != 0){
            soma += entrada;
            div +=1;
        }
    }
    cout << "A m�dia aritim�tica � " << soma / div;
    }


