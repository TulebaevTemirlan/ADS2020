#include <iostream>
#include <queue>
using namespace std;

int n, m, x, y, t;
vector<int> g[100];
int u[100];
void bfs(int t){
    queue <int> q;
    q.push(t);
    u[t] = 1;
    while(!q.empty()){
        int t = q.front();
        for(int i = 0; i < g[t].size(); i++){
            int v = g[t][i];
            if(u[v] == 0){
                q.push(v);
                u[v] = u[t] + 1;
            }
        }
        q.pop();
    }
}
int main() {
    cin >> n >> m;
    for(int i = 0; i < m; i++){
        cin >> x >> y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    int k =0;
    for(int i = 1; i <= n; i++){
        if( u[i] == 0){
            bfs(i);
            k++;
        }
    }
    // for(int i = 1; i <= n; i++){
    //     cout << u[i] << " ";
    // }
    cout << k;
}