#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int media[10], passou = 0,npassou = 0,i ;
    float soma;
    for (i = 0; i <10 ; i++ ){
        cout << "Informe a nota do " << i + 1 << "�:";
        cin >> media[i];
        soma = soma + media[i];
    }
    soma = soma/10;
    for ( i = 0; i < 10 ; i ++){
           if (media[i] >= soma){
                passou += 1;
           }
           else if ( media[i] < soma){
                npassou += 1;
           }

    }
    cout << "A m�dia foi "<< soma  <<". E "<< passou << " alunos passaram e " << npassou << " alunos n�o passaram.";
}
