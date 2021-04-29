#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float num1,num2,num3;
    cout << "Informe o primeiro número: ";
    cin >> num1;
    cout << "Informe o segundo número: ";
    cin >> num2;
    cout << "Informe o terceiro número: ";
    cin >> num3;
    if (num1 < num2 && num1 < num3){
        cout << "O menor número é: " << num1;
    }
    if (num2 < num1 && num2 < num3 ){
        cout << "O menor número é: " << num2;
    }
    if (num3 < num1 && num3 < num2){
        cout << "O menor número é: " << num3;
    }
    if (num1 == num2 && num1 == num3){
        cout << "O menor número é: " << num1;
    }
    return 0;
}
