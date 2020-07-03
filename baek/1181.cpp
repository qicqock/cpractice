#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_set>


using namespace std; 

int custom(string a,string b){
    if (a.size() == b.size()){
        return a < b;
    }

    return a.size() < b.size();
}

int main(void){
    int N; 
    cin >> N;
    string s;
    vector<string> v;
    unordered_set<string> u;
    for (int i = 0; i < N;i++){
        cin >> s;
        if (u.find(s) == u.end()){
            u.insert(s);
            v.push_back(s);
            }
    }

    sort(v.begin(),v.end(),custom);

    for (string s : v){
        cout << s << "\n";
    }

    return 0;
}