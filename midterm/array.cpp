#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n, k, sum = 0;
    cin >> n, k;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a,a + n);
    int l = 0,r = 0;
    int m = 0;
    while( l < n-1){
        if(a[l] + a[r] >= k){
            sum = a[l] + a[r];
            if(sum > m){ 
            m = sum;
            }
            l++;
        }
        else if(a[l] + a[r] < k ){
            r++;
        }
        
    }

    cout << sum << endl << m;
    return 0;
}