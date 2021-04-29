#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int num, impar,par = 0,c;
    for (c = 0; c <= 19; c++){
        cout<< "Informe um valor: ";
        cin>> num;
        if(num % 2 == 0){
            par ++;
        }
        else{
            impar ++;
        }




    }
    cout<< "Foram digitados " << par << " pares e " << impar << " impares.";
}
