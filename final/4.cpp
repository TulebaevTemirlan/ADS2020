#include <iostream>
#include <vector>
using namespace std;

vector<int> prefix_func(string s){
    int n = s.size();
    vector<int> p(n);
    p[0] = 0;
    for(int i = 1; i < n; i++){
        int j = p[i - 1];
        while(j > 0 && s[i] != s[j]){
            j = p[j - 1];
        }
        if(s[i] == s[j]){
            j++;
        }
        p[i] = j;
    }
    return p;
}
int main(){
    string s, t, s1;
    cin >> s;
    cin >> t;
    s1 = t + "#" + s;
    vector<int> p = prefix_func(s1);
    for(int i = 0; i < s1.size(); i++){
        if(p[i] == t.size()){
            cout << i - t.size() - t.size() << " ";
        }
        //cout << p[i] << " ";
    }
    //cout <<endl << t.size() << " " <<   s.size();
    //cout << endl << s1.size();
}