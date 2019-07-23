#include <iostream>
using namespace std;
int main()
{

    int N;
    cout << "inserisci N: ";
    cin >> N;
    cout << endl;
    int n;
    int C = 0;
    int MAX;

    while (C < N)
    {
        cout << "inserisci numero: ";
        cin >> n;
        if(C==0){
            MAX = n;
        }else{
            if(n>MAX){
                MAX=n;
            }
        }
        C++;
    }
    cout << "il numero massimo è: "  << MAX << endl;
}
