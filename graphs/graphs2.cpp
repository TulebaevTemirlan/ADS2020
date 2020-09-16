#include <iostream>
#include <vector>
using namespace std;
vector <int> v[100];
int main(){
    int n, m;
    cin >> n >> m;
    for(int i = 0; i < m; i++){
        int a, b;
        cin >> a >> b;
        a--;
        b--;
        v[a].push_back(b);
        v[b].push_back(a);
        
    }
    
    for(int i = 0; i < n; i++){
        cout << v[i].size() << " ";
    }
}