#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float n,c = 1,s = 0, d;
    cout<< "Informe um número: ";
    cin>> n;
    while (c <= n){
      d = 1/c;
      s = s + d;
      c = c+1;
    }
    cout<<"Resultado é " << s;
}
