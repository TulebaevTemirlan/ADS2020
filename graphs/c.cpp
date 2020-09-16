#include <iostream>
using namespace std;
// подсчет кол-ва ребер неориентированного графа
int g[100][100];
int n, x = 0, y;
int main(){
    cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> g[i][j];
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(g[i][j] == g[j][i] && g[i][j] == 1 && g[j][i] == 1){
                x++;
            }
        }
    }
    cout << x / 2;
    return 0;
}