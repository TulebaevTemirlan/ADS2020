#include <iostream>
#include <vector>
using namespace std;

vector<int> prefix_func(string s){
    int n = s.size();
    vector<int> p(n);
    p[0] = 0;
    for(int i = 1; i < n; i++){
        int j = p[i - 1];
        while(j > 0 && s[j] != s[i]){
            j = p[j - 1];
        }
        if(s[j] == s[i]){
            j++;
        }
        p[i] = j;
    }
    return p;
}
int main(){
    string s,s1,s2,t;
    int n = 0;
    cin >> s >> t;
    s1 = t + t;
    s2 = s + "#" + s1;
    vector<int> p = prefix_func(s2);
    for(int i = 0; i < s2.size(); i++){
        if(p[i] == t.size()){
            n++;
            break;
        }
    }
    if(n > 0){ 
        cout << "YES";
    }
    else{
        cout << "NO";
    }
    return 0;
}