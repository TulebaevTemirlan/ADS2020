#include <iostream>
using namespace std;
int main(){
    int n, m, max = 0, row = 0, col = 0;
    cin >> n >> m;
    int a[n][m];
      for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(a[i][j] > max){
                max = a[i][j];
                row = i;
                col = j;
            }
        }
    }
    cout << max << endl;
    cout << row << " " << col;
    return 0;
}