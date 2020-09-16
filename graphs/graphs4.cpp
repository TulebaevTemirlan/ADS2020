#include <iostream>
using namespace std;
int g[101][101];

int main(){
    int n, sum, t1, t2, t3, t_1, t_2, t_3;
    cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> g[i][j];
        }
    }
    for(t1 = 0; t1 < n; t1++){
        for(t2 = 0; t2 < n; t2++){
            for(t3 = 0; t3 < n; t3++){
                if( t1 != t2 && t1 != t3 && t2 != t3){
                    int local_sum = g[t1][t2] + g[t2][t3] + g[t3][t1];
                    if( sum == -1 || sum > local_sum){
                        sum = local_sum;
                        t_1 = t1;
                        t_2 = t2;
                        t_3 = t3;
                    }
                }
            }
        }
    }
    cout << t_1 + 1 << " " << t_2 + 1<< " " << t_3 + 1;
}