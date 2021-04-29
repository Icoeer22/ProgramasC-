#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float nota1, nota2, nota3, media;
    cout << "Informe a primeira nota: ";
    cin >> nota1;
    cout << "Informe a segunda nota: ";
    cin >> nota2;
    cout << "Informe a terceira nota: ";
    cin >> nota3;
    media = (nota1 + nota2 + nota3)/3;
    if (media >= 6){
        cout << "Você foi aprovado!";
    }
    else{
        cout << "Você foi reprovado!";
    }
    return 0;
}
