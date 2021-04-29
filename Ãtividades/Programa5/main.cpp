#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int hora , minuto;
    cout << "Entre com um número para as horas: ";
    cin >> hora;
    cout << "Entre com um número para os minutos: ";
    cin >> minuto;
    if ( hora >= 00 && hora <= 24 && minuto >= 00 && minuto <= 59 ){
        cout << "A hora é válida!";
    }
    else{
        cout << "A hora é inválida";
    }

    return 0;
}
