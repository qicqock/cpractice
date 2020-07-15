#include <iostream>
#include <unordered_map>
#include <string>
#include <vector>

using namespace std; 

int main(void){
    iostream::sync_with_stdio(0);
    cin.tie(0);
    int N;
    int M;
    cin >> N >> M;
    string s,ss;
    unordered_map<string,int> m;
    vector<string> v;
    for (int i = 0; i < N ; i++){
        cin >> s;
        m[s] = i + 1;
        v.push_back(s); 
    }

    for (int i = 0; i < M ; i++){
        cin >> ss;
        if (isdigit(ss[0])){
            cout << v[stoi(ss) - 1] << "\n";
        }
        else {
            cout << m[ss] << "\n";
        }
    
    }
    return 0;
}