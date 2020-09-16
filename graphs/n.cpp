#include <iostream>
using namespace std;

int g[100][100];

int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> g[i][j];
        }
    }
    int i_n = 0, o_ut = 0;
    for(int i = 0; i < n; i++){
        i_n = 0;
        o_ut = 0;
        for(int j = 0; j < n; j++){
            if(g[i][j] == 1){
                o_ut++;
            }
            if(g[j][i] == 1){
                i_n++;
            }
        }
        cout << i_n << endl << o_ut << endl;
    }
}