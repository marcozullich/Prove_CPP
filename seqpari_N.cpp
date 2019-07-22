#include <iostream>
using namespace std;

int main(){
    int N;
    int C=0;
    int s=0;
    int n;
    cin>>N;

    while(C<N){
        cin>>n;
        C++;
        if(n%2==0){
            cout << to_string(n) << endl;
            s=s+n;
        }
        
        
    }
    cout<< to_string(s);
}