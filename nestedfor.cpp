#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    system ("cls");
    int a, b;

    cout<<"Masukkan panjang baris : "; cin>>b;
    cout<<"Masukkan panjang kolom : "; cin>>a;

    for (int y = b; y <= 5; y++) { //baris
        cout<<"|";
        for (int x = a; x <= 5; x++) { //kolom
            cout<<"-";
        }
        cout<<"\n";
    }
}