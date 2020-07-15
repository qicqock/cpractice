#include <iostream>
#include <unordered_map>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;


int custom(string a,string b){
    return  a > b;
    }

int main(void){
    int n;
    cin >> n;
    string s,ss;
    unordered_map<string,int> m;
    for (int i = 0; i < n; i++){
        cin >> s >> ss;
        if (ss == "enter"){
            m[s] = 1;
        }
        else {
            m[s] = 0;
        }
    }

    vector<string> name;

    for (auto kv : m){
        if (kv.second == 1){
        name.push_back(kv.first);
        }
    }
    sort(name.begin(),name.end(),custom);

    for ( string q : name){
        cout << q << "\n";
    }
    return 0;
}