#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;



int custom(pair<int,int> a,pair<int,int> b){
    if (a.second == b.second){
        return a.first < b.first;
    }
    return a.second < b.second;
}


int main(void){
    int N,x,y;
    cin >> N;
    vector<pair<int,int>> v;
    for (int i = 0;i < N;i++){
        cin >> x >> y;
        v.push_back(make_pair(x,y));
    }


    sort(v.begin(),v.end(),custom);


    for (auto i : v){
        cout << i.first << " " << i.second << "\n";
    }
}