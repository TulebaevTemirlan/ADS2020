#include <iostream>
using namespace std;

int main(){
    int n, m, k = 0;
    cin >> n >> m;
    int v[m], g[m];
    for(int i = 0; i < m; i++){
        cin >> v[i] >> g[i];
    }
    for(int i = 0; i < m; i++){ 
        for(int j = i + 1; j < m; j++){
            if( (v[i] == v[j]) && (g[i] == g[j])){
                k++;
                cout << "YES";
                break;
            }
        }
    }
    if(k == 0){
        cout << "NO";
    }
}