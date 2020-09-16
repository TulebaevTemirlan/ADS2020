#include <iostream>
using namespace std;

int get_hash(string s){
    int h = 0;
    int p = 31;
    int p_pow = 1;
    for(int i = 0; i < s.size(); i++){
        h += s[i] * p_pow;
        p_pow *= p;
    }
    return h;
}

int main(){
    string s, t;
    cin >> s >> t;
    cout << get_hash(s) << " " << get_hash(t) << " " << (get_hash(s) == get_hash(t));
}