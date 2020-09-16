#include <iostream>
using namespace std;

int a[10];
int main(){
    int n, x;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> x;
        a[x]++;
    }
    for(int i = 1; i <= 9; i++){
        cout << i << " ";
    }
    return 0;
}