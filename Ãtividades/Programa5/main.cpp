#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int hora , minuto;
    cout << "Entre com um n�mero para as horas: ";
    cin >> hora;
    cout << "Entre com um n�mero para os minutos: ";
    cin >> minuto;
    if ( hora >= 00 && hora <= 24 && minuto >= 00 && minuto <= 59 ){
        cout << "A hora � v�lida!";
    }
    else{
        cout << "A hora � inv�lida";
    }

    return 0;
}
