#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int vet[5], i, seven=0, pos;
    for (i = 0 ; i < 5 ; i++){
        cout << "Informe o " << i+1 << "� numero: ";
        cin >> vet[i];
        if (vet[i] == 7 && seven == 0){
            pos = i+1;
            seven += 1;
        }
        else if (vet[i]== 7){
            seven +=1;
        }
    }
    cout << "O primeiro sete est� na posi��o " << pos << "� e tem " << seven << " numeros setes.";
    return 0;
}
