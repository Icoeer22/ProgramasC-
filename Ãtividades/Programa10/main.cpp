#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int lado1, lado2, lado3;
    cout << "Informe tr�s n�meros inteiros, que ser�o os lados do tri�ngulo: ";
    cin >> lado1 >> lado2 >> lado3;
    if (lado1 == lado2 && lado1 == lado3){
        cout << "O tri�ngulos � equil�tero.";
    }
    if ((lado1 == lado2 && lado1 != lado3) ||  (lado1 == lado3 && lado1 !=lado2 ) ||  (lado3 == lado2 && lado3 != lado1)){
        cout << "O tri�ngulo � is�celes.";
    }
    if (lado1 != lado2 && lado1 != lado3 && lado3 != lado2){
        cout << "O tri�ngulo � escaleno.";
    }
    return 0;
}
