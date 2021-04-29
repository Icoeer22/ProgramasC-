#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL , "Portuguese");
    int num;
    cout << "Digite um número inteiro: ";
    cin >> num;
    if (num > 0){
        cout<< "O número é positivo!";

    }
    if (num < 0){
        cout << "O número é negativo!";
    }
    if (num == 0){
        cout << "O número é zero!";
    }
    return 0;
}
