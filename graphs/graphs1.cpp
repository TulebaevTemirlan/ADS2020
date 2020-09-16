#include <iostream>
using namespace std;
// int g[100][100];

int main(){
    int n, sum = 0, temp = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> temp;
            sum += temp;
        }
    }
    cout << sum / 2;
    
}