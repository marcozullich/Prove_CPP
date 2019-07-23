#include <iostream>
using namespace std;
int main()
{

    int N;
    cout << "inserisci N: ";
    cin >> to_string(N) >> endl;
    int n;
    int m;
    int C = 0;
    int MIN;
    int MAX;

    while (C < N)
    {
        cout << "inserisci numero: ";
        cin >> n;
        C++;
    }
    cout << "inserisci un altro numero: ";
    cin >> m;
    if (n < m)
    {
        MIN = n;
        MAX = m;
    }
    else
    {
        MIN = m;
        MAX = n;
    }
    cout << "il numero massimo è: " << endl << MAX;
}
