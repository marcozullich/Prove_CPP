#include <iostream>
using namespace std;
int main(){
    cout << "Inserisci il numero naturale" << endl;
    int N;
    cin >> N;

    int C=0;
    int S=0;

    while(C<=N){
        cout << to_string(C) << ", ";
        S+=C;
        C+=2;
    }
    cout << "somma: " << to_string(S) << endl;
}