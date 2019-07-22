#include "eq_secondo_grado.h"
#include <iostream>

using namespace std;
int main(){
    int a,b,c;
    cout << "inserisci il primo numero: ";
    cin >> a;
    cout << "inserisci il secondo numero: ";
    cin >> b;
    cout << "inserisci il terzo numero: ";
    cin >> c;
    
    double soluz [2];
    eq_secondo_grado(a,b,c,soluz);

    cout << endl << endl << "le soluzioni sono " << soluz[0] << " e " << soluz[1] << endl;

    return 0;
}