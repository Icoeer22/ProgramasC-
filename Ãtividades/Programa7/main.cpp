#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL , "Portuguese");
    int num;
    cout << "Digite um n�mero inteiro: ";
    cin >> num;
    if (num > 0){
        cout<< "O n�mero � positivo!";

    }
    if (num < 0){
        cout << "O n�mero � negativo!";
    }
    if (num == 0){
        cout << "O n�mero � zero!";
    }
    return 0;
}
