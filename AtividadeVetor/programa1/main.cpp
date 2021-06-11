#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
  setlocale(LC_ALL, "Portuguese");
  int num[10] , i, maior, menor;
  float soma;
  for (i = 0; i < 10; i++){
    cout << "Informe um número: ";
    cin >> num[i];
    soma = soma + num[i];
    if (i == 0){
        maior = num[i];
        menor = num[i];
    }
    else if (maior < num[i]){
        maior = num[i];
    }
    else if (menor > num[i]){
        menor = num[i];
    }


  }
  cout << "A média é " << soma/10 << " o maior número é " << maior << " o menor número é " << menor;
}
