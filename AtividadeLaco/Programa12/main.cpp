#include <iostream>

using namespace std;

int main()
{
    int c, m = 0, n,ida;
    for (c = 0; c <= 9; c++){
        cout<< "Informe uma idade:";
        cin>> ida;
        if (ida >= 18){
            m +=1;
        }
        else{
            n = n+1;
        }
        ida = 0;
    }
    cout<< "Tem "<< m << " pessoas de maior e " << n << " pessoas de menor";
}
