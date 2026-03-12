#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    system ("cls");
    int x;
    
    cout<<"Masukkan panjang alas : "; cin>>x;

    for (int i = 1; i <= x; i++) {
        for (int j = 1; j <= i; j++) {
            cout << " * ";
        }
        cout<<endl;
    }
}
