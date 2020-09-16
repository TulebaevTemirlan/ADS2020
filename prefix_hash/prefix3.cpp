#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<int> prefix_func(string s){
    int n = s.size();
    vector <int> p(n);
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

// bool cycle(string s1, string t){
//     vector <int> p = prefix_func(s1);
//     for(int i = 0; i < s1.size(); i++){
//         if(p[i] == t.size()){
//             return true;
//             //cout << i - t.size() - t.size() << " " << endl;
//         }
//         else{
//             return false;
//         }
//     }
// }
int main(){
    string s, t;
    int n = 0;
    cin >> s >> t;
    string s1 = t + t;
    string s2 = s + "#" + s1; 
    cout << s1 << " " << s2 << endl;
    vector <int> p = prefix_func(s2);
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