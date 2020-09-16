#include <iostream>
using namespace std;
int g[100][100];

int main(){
    int n, m, x, y, k = 0;
    cin >> n >> m;
    while(k < m){
        cin >> x >> y;
        g[x - 1][y - 1] = 1;
        g[y - 1][x - 1] = 1;
        k++;
    }
    int res = 0;
    for(int i = 0; i < n; i++){
        res = 0;
        for(int j = 0; j < n; j++){
            if(g[i][j] == 1){
                res++;
            }
        }
        cout << res << endl;
    }
}