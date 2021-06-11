#include <iostream>
#include <locale.h>
using namespace std;
#define TAM 30
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int vetpar[TAM], vetimpar[TAM], somapar = 0, somaimpar = 0, i,num;

    for (i = 1; i  <= TAM; i++){
        cout << "Informe o " << i << "º valor: ";
        cin >> num;
        if (num % 2 == 0 || num == 0){
            vetpar[i] = num;
            vetimpar[i] = 0;
        }
        else {

                vetimpar[i] = num;
                vetpar[i] = 0 ;

        }
    }
    for  ( i = 1; i <= TAM; i ++){
        somapar += vetpar[i];
        somaimpar += vetimpar[i];
    }
    if (somapar > somaimpar ){
            cout << "A soma dos pares é maior , sendo igual a "<< somapar;

    }
    else if(somapar < somaimpar){
        cout << "A soma dos impares é maior, sindo igual a " << somaimpar;
    }
    else{
        cout<<  "Os dois tem o mesmo valor que é " << somapar;
    }
}
