#include <iostream>
using namespace std;
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int num;
    cout << "Informe um n�mero inteiro: ";
    cin>> num;
    if (num<0){
        num *= -1;
        cout<<"O n�mero �: "<< num;
    }
    else{
        cout <<"O n�mero �: "<< num;
    }
    return 0;
}
