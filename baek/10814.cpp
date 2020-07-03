#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;


typedef pair<int, pair<string, int>> p;

int custom(p a,pair<int, pair<string,int>> b){
    if (a.first == b.first){
        return a.second.second < b.second.second;
    }

    return a.first < b.first;
}

int main(void){
    int N, age;
    string name;
    cin >> N;
    vector<pair<int, pair<string,int>>> v;

    for (int i = 0; i < N; i++)
    {
        cin >> age >> name;
        v.push_back(make_pair(age, make_pair(name,i)));
    }

    sort(v.begin(),v.end(),custom);

    for (auto i : v){
        cout << i.first << " " <<  i.second.first << "\n";
    }


    return 0;
}