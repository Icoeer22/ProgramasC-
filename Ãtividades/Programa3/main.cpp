#include <iostream>
#include <locale.h>
using namespace std;

int main(){

    setlocale(LC_ALL, "Portuguese");
    char letra;
    cout << "Digite uma letra: ";
    cin>> letra;
    if ((letra=='a') || (letra=='e') || (letra=='i') || (letra=='o') || (letra=='u') || (letra=='A') || (letra=='E') || (letra=='I') || (letra=='O') || (letra=='U')){
        cout << "A letra " << letra << " é uma vogal";
    }
    else{
        cout<< "A letra " << letra << " não é uma vogal";
    }
    return 0;
}
