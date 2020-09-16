#include <iostream>
#include <vector>

using namespace std;
int g[101][101];
int color[101];
int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> g[i][j];
        }
    }
    for(int i = 0; i < n; i++){
        cin >> color[i];
    }
    int res = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(g[i][j] == 1){
                if(color[i] != color[j]){
                    res++;
                }
            }
        }
    }
    cout << res / 2;
    return 0;
}