#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n, m, x, y;
    bool p = true;
    cin >> n >> m;
    vector <int> v(n);
    for(int i = 0; i < m; i++){
        cin >> x >> y;
        v[x - 1]++;
        v[y - 1]++;
    }
    for(int i = 0; i < n; i++){
        if( v[i] != v[0]){
            p = false;
            break;
        }
    }
    if(p){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
}