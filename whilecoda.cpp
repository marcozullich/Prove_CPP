#include <iostream>
using namespace std;

int main(){

    int N;
    int C=0;

    

    do{
        cout<<"inserisci N: ";
        cin>>N;
        C++;
        
    }while(N>0);

    C--;

    cout<< "numeri inseriti: " << C;
}