#include <iostream>
#include <queue>

using namespace std;

int n, m, x, y;
vector <int> g[100];
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
            if(!u[v]){
                u[v] = true;
                dist[v] = dist[t] + 1;
                q.push(v);
            }
        }
        q.pop();
    }
}

int main(){
    cin >> n >> m;
    for(int i = 0; i < m; i++){
        cin >> x >> y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    bfs(1);
    for(int i = 1; i <= n; i++){
        cout << dist[i] << " ";
    }
    cout << dist[n];
}
// #include <iostream>
// #include <queue>
// using namespace std;

// int n, m, x, y, t;
// vector<int> g[100];
// int dist[100];
// bool u[100];

// void bfs(int t){
//     queue <int> q;
//     q.push(t);
//     u[t] = true;
//     //par[t] = t;
//     dist[t] = 0;
//     while(!q.empty()){
//         int t = q.front();
//         for(int i = 0; i < g[t].size(); i++){
//             int v = g[t][i];
//             if(!u[v]){
//                 u[v] = true;
//                 dist[v] = dist[t] + 1;
//                 q.push(v);
//             }
//         }
//         q.pop();
//     }
// }

// int main(){
//     cin >> n >> m;
//     for(int i = 0; i < m; i++){
//         cin >> x >> y;
//         g[x].push_back(y);
//         g[y].push_back(x);
//     }
//     cout << "NOW ENTER THE t";
//     //cin >> t;
//     bfs(1);
//     for(int i = 1; i <= n; i++){
//         cout << dist[i] << " ";
//     }
//     cout <<endl <<  dist[n];
//     return 0;
// }
