#include <iostream>
#include <vector>
using namespace std;

int n, m, x, y;
vector<int> g[100];
int u[100];

void dfs(int v){
    u[v] = 1;
    for(int i = 0; i < g[v].size(); i++){
        int t = g[t][i];
        if(u[t] == 0){
            dfs(t);
        }
    }

}

int main(){
    cin >> n >> m;
    for(int i = 0; i < m; i++){
        cin >> x >> y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    int k = 0;
    for(int i = 1; i <= n; i++){
        if(u[i] == 0){
            dfs(i);
            k++;
        }
    }
    cout << k << endl;
    //dfs(1);
}