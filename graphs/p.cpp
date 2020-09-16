#include <iostream>
using namespace std;

int g[100][100];

int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> g[i][j];
        }
    }
    int istok = n, stok = n;
    int a[n], b[n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(g[i][j] == 1){
                stok--;
                a[i] = j + 1;
            }
            if(g[j][i] == 1){
                istok--;
                b[i] = i + 1;
            }
        }
    }
    cout <<  istok << " num "<< endl;
    for(int i = 0; i < n; i++){
        if(b[i] == 0){
            break;
        }
        else{
            cout << b[i] << endl;
        }
    }
    cout << stok << " num " << endl;
    for(int i = 0; i < n; i++){
        if(a[i] == 0){
            break;
        }
        else{
            cout << a[i] << endl;
        }
    }

}