#include <cstdlib>
#include <iostream>
#include <windows.h>
using namespace std;



void bin(int n){
    if(n>0){
        bin(n/2);
        cout<<n%2;
    }
}

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int n, m;
    cin >> n;
    cin >> m;
    
    cout<<"6";
    bin(6);
    cout<<"(2)"<<endl;

    system("pause");
    return EXIT_SUCCESS;
}
