// Hawwina Aunil Azifa
// NIM 18050623018
// D3 Manajemen Informatika 2018

#include <iostream>
using namespace std;

int main()
{
    int i, n, f[100];
    f[1]=1;
    f[0]=0;

    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
    cout<<"selamat datang di deret fibonacci"<<endl;
    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl<<endl;
    cout<<"Membuat Deret Fibonacci"<<endl;
    cout << "masukkan batas deret : ";
    cin >> n;

    cout << "Deret Fibonacci adalah: "<<endl;
        cout<<"0"<<endl;
    	cout<<"1"<<endl;

    for (i = 2; i < n; ++i)
    {
    	f[i] = f[i-2]+f[i-1];

        cout << f[i] << " "<<endl;
    }
    return 0;
}
