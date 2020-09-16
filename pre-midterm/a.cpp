// gcd function by Euclidean algorithm
#include <iostream>
using namespace std;

int gcd(int a, int b){
    while(a > 0 && b > 0){
        if(a > b){
            a %= b;
        }
        else{
            b %= a;
        }
    }
    return a+b;
}

int main(){
    int a, b;
    cin >> a;
    cin >> b;

    cout << gcd(a, b);
}