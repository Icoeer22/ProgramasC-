#include <iostream>
using namespace std;
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int num;
    cout << "Informe um número inteiro: ";
    cin>> num;
    if (num<0){
        num *= -1;
        cout<<"O número é: "<< num;
    }
    else{
        cout <<"O número é: "<< num;
    }
    return 0;
}
