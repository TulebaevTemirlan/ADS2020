// gcd function by Euclidean algorithm
#include <iostream>
using namespace std;

int gcd(int a, int b){
    while(a > 0 && b > 0){
        if(a > 0){
            a %= b;
        }
        else{
            b %= a;
        }
    }
}
int main(){
    int a, b;
    cin >> a;
    cin >> b;

    cout << gcd(a, b);
}