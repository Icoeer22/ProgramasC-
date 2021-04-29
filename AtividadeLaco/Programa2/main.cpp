#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int mult = 1;
    while (mult <=10){
        cout <<endl <<"5 X "<<mult << '=' << mult*5;
        mult++;
    }
    return 0;
}
