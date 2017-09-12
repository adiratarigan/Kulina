#include <iostream>
using namespace std;

int main()
{
    int n, t1 = 0, t2 = 1, nextTerm = 0;

    cout << "Masukkan jumlah bilangann Fibbonaci : ";
    cin >> n;

    cout << "Bilangan Fibonacci = ";

    for (int i = 1; i <= n-2; ++i)
    {
        if(i == 1)
        {
            cout << t1 << " ";
        }
        if(i == 2)
        {
            cout << t2 << " ";
        }
        
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
        
        cout << nextTerm << " ";
    }
    return 0;
}
