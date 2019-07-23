#include <iostream>
using namespace std;
int main(){
    
    int N=10;
    int C=0;
    int S=0;

    while(C<N){
        S=S+C;
        C++;
    }
    cout<< "la somma è: "<< endl << S;
}