#include <iostream>
using namespace std;
int main(){

    int A;
    int B;

    cin>>A;
    cin>>B;

    if(A%B==0){
        cout<< A << " è multiplo di " << B;
    }else{
        cout<<  A << " non è multiplo di " << B;
    }
}