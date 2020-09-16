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
    for(int i = 0; i < n; i++){
        cout << endl;
        for(int j = 0; j < n; j++){
            cout << g[i][j] << " ";
        }
    }
}