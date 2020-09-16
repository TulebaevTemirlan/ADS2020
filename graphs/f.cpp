#include <iostream>
#include <vector>
using namespace std;
// from adjancy list to a adjancy matrix in unordered graph
vector<pair<int, int>> v;
int g[100][100];
int n, m;

int main(){
    cin >> n >> m;
    int k = 0, x, y, i = 0, j = 0;
    while(k < m){
        cin >> x >> y;
        g[x- 1][y - 1] = 1;
        g[y -1][x - 1] = 1;
        k++;
    }
    
    for(int i = 0; i < n; i++){
        cout << endl;
        for(int j = 0; j < n; j++){
            cout << g[i][j] << " ";
        }
    }
}
