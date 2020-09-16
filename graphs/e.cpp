#include <iostream>
#include <vector>
using namespace std;

vector<pair<int, int>> g;

int main(){
    int n, x;
    cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> x;
            if(x == 1 && i < j){
                g.push_back(make_pair(i, j));
            }
        }
    }
    for(int i = 0; i < g.size(); i++){
        cout << g[i].first + 1 << " " << g[i].second + 1 << endl;
    }
}




//int g[100][100];
// int main(){
//     int n;
//     cin >> n;
//     for(int i = 0; i < n; i++){
//         for(int j = 0; j < n; j++){
//             cin >> g[i][j];
//         }
//     }
//     for(int i = 0; i < n; i++){
//         for(int j = 0; j < n; j++){
//             if(g[i][j] == 1 && i < j){
//                 cout << i + 1 << " " << j + 1;
//                 cout << endl;
//             }
//         }
//     }
// }
