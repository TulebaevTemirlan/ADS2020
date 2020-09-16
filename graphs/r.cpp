#include <iostream>
using namespace std;

int g[100][100];

int main(){
    int n, m, x, y, k = 0;
    bool p = true;
    cin >> n >> m;
    while(k < m){
        cin >> x >> y;
        g[x - 1][y - 1] = 1;
        g[y - 1][x - 1] = 1;
        k++;
    }
    // for(int i = 0; i < n; i++){
    //     cout << endl;
    //     for(int j = 0; j < n; j++){
    //         cout << g[i][j] << " ";
    //     }
    // }
    int cnt = 0;
    for(int i = 1; i < n; i++){
        cnt = 0;
        for(int j = 1; j < n; j++){
            if(g[i][j] == 1){
                cnt++;
            }
        }
        if(cnt == 0){
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