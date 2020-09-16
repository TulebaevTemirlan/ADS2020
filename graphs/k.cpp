#include <iostream>
using namespace std;

int main(){
    int n, m, i = 0, k = 0;
    cin >> n >> m;
    int v[m], g[m];
    for(int i = 0; i < m; i++){
        cin >> v[i] >> g[i];
    }
    while(i < m){
        for(int j = i + 1; j < m; j++){
            if((v[i] == v[j]) && (g[i] == g[j])){
                k++;
                cout << "YES";
                break;
            }
        }
        i++;
    }
    if(k == 0){
        cout << "NO";
    }
}