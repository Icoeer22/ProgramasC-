#include <iostream>
#include <locale.h>
using namespace std;
#define TAM 8
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int vetA[TAM], vetB[TAM], vetC[TAM], i;
    for (i = 0 ; i < TAM; i++){
        cout << "Informe o " << i+1 << "º valor para o vetor A: ";
        cin >> vetA[i];
        cout << "Informe o " << i+1 << "º valor para o vetor B: ";
        cin >> vetB[i];
        vetC[i] = 0;
    }
    for (i = 0; i < TAM ; i++){
        vetC[i] = vetA[i];
        vetA[i] = vetB[i];
        vetB[i] = vetC[i];
    }
    for (i = 0; i < TAM ; i++){
        cout << vetA[i] << "  ";

    }
    cout << endl;
    for (i = 0; i < TAM ; i++){
        cout << vetB[i] << "  ";
    }
    return 0;
}
