#include <iostream>
using namespace std;

int g[100][100];

int main(){
    int n, m, x, y, k = 0;
    string s = "YES";
    cin >> n >> m;
    while(k < m){
        cin >> x >> y;
        g[x - 1][y - 1] = 1;
        k++;
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(g[i][j] == g[j][i] && g[i][j] == 1 && g[j][i] == 1 ){
                s = "NO";
            }
            else if(g[i][i] == 1){
                s = "NO";
            }
        }
    }
    cout << s;
}