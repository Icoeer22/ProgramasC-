#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int vet[10], i, menor, maior ;
    for (i = 0 ; i < 10 ; i++){
        cout << "Informe o " << i+1 << "º valor:";
        cin >> vet[i];
        if (i == 0 ){
            menor = vet[i];
            maior = vet[i];
        }
        else{
            if(vet[i] > maior){
                maior = vet[i];
            }
            else{
                if(vet[i] < menor){
                    menor = vet[i];
                }
            }
        }
    }
    for  (i = maior-1 ; i != 0 ; i--){
        maior = maior * i;
    }
     for  (i = menor-1 ; i != 0 ; i--){
       menor = menor * i;
    }
    cout <<"O fatorial do maior numero é "<< maior << " e o fatorial do menor numero é " << menor;


return 0;
}
