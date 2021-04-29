#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int dia , mes ,ano, diaatual, mesatual, anoatual, idade;
    cout << "Informe o dia do seu nascimento: ";
    cin >> dia;
    cout << "Informe o mês do seu nascimento: ";
    cin >> mes;
    cout << "Informe o ano do seu nascimento: ";
    cin >> ano;
    cout << "Informe o dia atual: ";
    cin >> diaatual;
    cout << "Informe o mês atual: ";
    cin >> mesatual;
    cout << "Informe o ano atual: ";
    cin >> anoatual;
    if (mesatual == mes && diaatual >= dia){

            idade = anoatual - ano ;

    }
    if (mesatual == mes && diaatual < dia){

            idade = anoatual - ano -1 ;

    }
    if (mesatual > mes){
        idade = anoatual -ano ;
    }

    if (mesatual< mes){
        idade = anoatual -ano - 1;
    }
    cout << "Sua idade é " << idade << " anos.";
    return 0;
}
