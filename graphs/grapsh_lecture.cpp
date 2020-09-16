#include <iostream>
using namespace std;
// матрица смежности
int g[100][100];
int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> g[i][j];
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << g[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

/*
  vector<pair<int, int> g;
  int n;

  int main(){
      cin >> n;
      for(int i = 0; i < n; i++){
          for(int j = 0; j < n; j++){
              cin >> x;
              if(x == 1 && i < j){
                  g.push_back(make_pair(i, j))
              }
          }
      }
      for(int i = 0; i < n; i+){
          cout << g[i].first + 1 << " " << g[i].second + 1 << endl;
      }
      return 0;
  }
 */

/* 
vecotr<int> g[100];
int n, x, y;

int main(){
    cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> x;
            if(x == 1){
                g[i].push_back[j];
                //g[j].push_back[i];
            }
        }
    }
    for(int i = 0; i < n; i++){
        cout << i + 1 << "| ";
        for(int j = 0; j < g[i].size(); j++){
            cout << g[i][j] + 1 << " ";
        }
    }
    */