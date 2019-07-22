#include <iostream>
using namespace std;


int main(){
    int n; //numero di input
    int s=0; //somma

    cout << "Numero da inserire: ";
    cin >> n;

    while (n > 0){
        //controlla che il numero sia pari
        if(n%2==0){
            cout << to_string(n) << endl;
            s=s+n;
        }
        
        cout << "Numero da inserire: ";
        cin >> n;
    }

    //stampa la somma
    cout<< to_string(s);

}