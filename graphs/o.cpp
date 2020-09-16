#include <iostream>
using namespace std;

int g[100][100];

int main(){
    int n, m, x, y, k = 0;
    cin >> n >> m;
    while(k < m){
        cin >> x >> y;
        g[x - 1][y - 1] = 1;
        k++;
    }
    int i_n = 0, o_ut = 0;
    for(int i = 0; i < n; i++){
        i_n = 0;
        o_ut = 0;
        for(int j = 0; j < n; j++){
            if(g[i][j] == 1){
                i_n++;
            }
            if(g[j][i] == 1){
                o_ut++;
            }
        }
        cout << o_ut << endl << i_n << endl;
    }
}