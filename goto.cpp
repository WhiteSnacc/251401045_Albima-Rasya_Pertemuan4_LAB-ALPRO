#include <iostream>
using namespace std;

int main(){
    int a = 1;

    x:
    cout<<a<<" ";
    a++;
    if (a <= 10){
        goto x;
    }
}