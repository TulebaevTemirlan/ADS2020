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
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(g[i][j] == 1){
                cout << i + 1 << " " << j + 1 << endl;
            }
        }
    }
    return 0;
}