#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int num;
    cout <<"Informe um número inteiro: ";
    cin>> num;
    if (num%2 == 0){
        cout<< "O número " << num <<" é par";
    }
    else{
        cout << "O número "<< num <<" é impar";
    }
    return 0;
}
