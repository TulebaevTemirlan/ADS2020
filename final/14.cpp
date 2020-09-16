#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int n, a, b, x, len = 0;
vector<int> g[100];
bool u[100];
int dist[100];

void bfs(int a, int b){
    queue<int> q;
    q.push(a);
    u[a] = true;
    dist[0] = a;
    while(!q.empty()){
        int t = q.front();
        for(int i = 1; i < g[t].size(); i++){
            int v = g[t][i];
            if(v == b){
                dist[i] = v;
                len++;
                break;
            }
            if(!u[v]){
                u[v] = true;
                dist[i] = v;
                len++;
                q.push(v);
            }
        }
        q.pop();
    }
}

int main(){
    cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> x;
            if(x == 1){
                g[i].push_back(j);
                g[j].push_back(i);
            }
        }
    }
    cin >> a >> b;
    bfs(a, b);
    cout << len << endl;
    for(int i = 0; i < n; i++){
        cout << dist[i] << " ";
    }
}
// 5
// 0 1 0 0 1
// 1 0 1 0 0
// 0 1 0 0 0
// 0 0 0 0 0
// 1 0 0 0 0
// 3 5