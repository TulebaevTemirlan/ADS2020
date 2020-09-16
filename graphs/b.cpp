#include <iostream>
using namespace std;
// есть ли петли в графе 
int g[100][100];
int n;

int main(){
    cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> g[i][j];
        }
    }
    int cnt = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++)
        if(g[i][i] == 1){
            cnt++;
        }
    }
    if(cnt > 0){
        cout << "YES";
    }
    else{
        cout << "NO";
    }

    return 0;
}