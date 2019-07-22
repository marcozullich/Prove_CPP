#include <iostream>
using namespace std;
int main(){
    int a;
    int b;
    int c;
    int min, med, max;

    cin>>a;
    cin>>b;
    cin>>c;

    if(a>b){
        if(a>c){
            max=a;
            if(b>c){
                med=b;
                min=c;
            }else{
                med=c;
                min=b;
            }
        }else{
            max=c;
            med=a;
            min=b;
        }
    }else{
        if(b>c){
            max=b;
            if(c>a){
                med=c;
                min=a;
            }else{
                med=a;
                min=c;
            }
        }else{
            max=c;
            med=b;
            min=a;
        }
    }

    cout << max << "," << med << "," << min << endl;
}