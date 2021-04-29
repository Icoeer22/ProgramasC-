#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    long int num, fat=1;
    cout<< "Informe um valor: ";
    cin>> num;
    for(fat= 1; num > 1; num = num-1){
        fat = fat * num;

    }
    cout<< "A fatorial é " << fat;
}
