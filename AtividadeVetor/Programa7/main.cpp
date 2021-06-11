#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int vet[5], vet1[5], i,cont =0  ;
    for (i = 0 ; i < 5; i++){
        cout << "Informe um valor: ";
        cin >> vet[i];
    }
    for (i = 4; i >=0 ; i-- ){
        vet1[cont] = vet[i];
        cont+=1;
    }
    for (i = 0; i < 5 ; i ++){
        cout << vet1[i] << endl;
    }
    return 0;
}
