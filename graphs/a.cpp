#include <iostream>
using namespace std;
// неориентированный граф всегда должен быть симметричен относительно диагонали
// а сама диагональ должна быть равной нулю
int g[100][100];
int n;
int main(){
    cin >> n;
    string s = "YES";

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> g[i][j];
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(g[i][j] != g[j][i]){
                s = "NO";
            }
            if(g[i][i] != 0){
                s = "NO";
            }
        }
    }
    cout << s;
    return 0;
}