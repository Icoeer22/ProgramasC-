#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int num;
    cout <<"Informe um n�mero inteiro: ";
    cin>> num;
    if (num%2 == 0){
        cout<< "O n�mero " << num <<" � par";
    }
    else{
        cout << "O n�mero "<< num <<" � impar";
    }
    return 0;
}
