#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int lado1, lado2, lado3;
    cout << "Informe três números inteiros, que serão os lados do triângulo: ";
    cin >> lado1 >> lado2 >> lado3;
    if (lado1 == lado2 && lado1 == lado3){
        cout << "O triângulos é equilátero.";
    }
    if ((lado1 == lado2 && lado1 != lado3) ||  (lado1 == lado3 && lado1 !=lado2 ) ||  (lado3 == lado2 && lado3 != lado1)){
        cout << "O triângulo é isóceles.";
    }
    if (lado1 != lado2 && lado1 != lado3 && lado3 != lado2){
        cout << "O triângulo é escaleno.";
    }
    return 0;
}
