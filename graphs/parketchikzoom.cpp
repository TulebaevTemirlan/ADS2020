#include <iostream>
#include <queue>
using namespace std;

int n, x;
vector <pair<int, int>> g[100];
int g[100][100];
int dist[100];
bool u[100];

void bfs(int t){
    queue <int> q;
    q.push(t);
    u[t] = true;
    dist[t] = 0;
    while(!q.empty()){
        int t = q.front();
        for(int i = 0; i < g[t].size(); i++){
            int v = g[t][i];
            if(!u[t]){
                u[t] = true;
                if(g[t][i] == 0){
                    dist[v] = dist[t] + 1;
                    q.push(v);
                }
            }
        }
    }

}

int main(){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> x;
            if(x == 1){
                g[x].p;
            }
        }
    }

}