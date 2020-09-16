#include <iostream>
using namespace std;
//подсчет кол-ва ребер оринтированного графа
int g[100][100];
int n;
int main(){
    cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> g[i][j];
        }
    }
    int x = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(g[i][j] == 1){
                x++;
            }
        }
    }
    cout << x;
}