#include <iostream>
using namespace std;

int main(){

    int N;
    int C=0;

    cout<<"inserisci N: ";
    cin>>N;

    while(N>0){
        C++;
        cin>>N;
    }
    cout<< "numeri inseriti: " << C;
}