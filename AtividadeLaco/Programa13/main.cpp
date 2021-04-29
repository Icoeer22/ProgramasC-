#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int num, menor,c;
    for (c = 0; c <= 19; c++){
        cout<< "Informe um valor: ";
        cin>> num;
        if (c ==
             0){
            menor = num;
        }
        else{
            if(num< menor){
                menor = num;
            }
        }
    }
    cout<< "O menor número é " << menor;
}
