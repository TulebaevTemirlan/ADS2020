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
    int res = 0; // here we initialize counter for each top of the graph
    for(int i = 0; i < n; i++){
        res = 0; // here we  nullify our counter for another top of the graph
        for(int j = 0; j < n; j++){
            if(g[i][j] == 1){
                res++;
            }
        }
        cout << res << endl; // and here before i will be i + 1 we write number of ribs of each top of the graph
    }
}