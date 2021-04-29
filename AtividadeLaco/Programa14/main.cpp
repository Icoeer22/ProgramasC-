#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int num, menor=0,maior=0,c;
    for (c = 0; c <= 24; c++){
        cout<< "Informe um valor: ";
        cin>> num;
        if (c ==0){
            menor = num;
            maior = num;
        }
        else{
            if(num< menor){
                menor = num;
            }
            if (num > maior){
                maior =num;
            }
        }
    num = 0;
    }
    cout<< "O menor peso é " << menor << " e o maior é "<< maior;
}
