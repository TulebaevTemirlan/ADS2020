#include <iostream>

using namespace std;

int main(){
    int n, k, mini;
    cin >> n >> k;
    int a[n];
    mini = n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = n - 1; i >= 0; i--){ 
        for(int j = 0; j < n; j++){ 
            int summ = 0;
            for(int m = j; m <= i; m++){
            summ += a[m];
            if (summ >= k && m-j < mini){
                 mini = m-j+1;
            }
            }
        }
    }
    cout << mini;
    return 0;
}