#include <iostream>
#include <vector>
using namespace std;

int n, m, x, y;
vector<int> g[100];
int u[100];
vector<int> result;

void dfs(int v){
    u[v] = 1;
    for(int i = 0; i < g[v].size(); i++){
        int t = g[t][i];
        if(u[t] == 0){
            dfs(t);
        }
    }
    result.push_back(v);
}

int main(){
    cin >> n >> m;
    for(int i = 0; i < m; i++){
        cin >> x >> y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    for(int i = 0; i < n; i++){
        cout << result[i] << " ";
    }
    //dfs(1);
}
//5
//5
//1 2
//1 4
//2 4
//2 3
//4 5