#include <iostream>
#include <vector>

using namespace std;

int main(void){
    iostream::sync_with_stdio(0);
    cin.tie(0);

    int N,h;      
    cin >> N;
    vector<int> v;
    for (int i = 0;i < N;i++){
        cin >> h;
        v.push_back(h);
    }
    
    int count = 0;
    int standard = v.back();

    for (int i = v.size() - 1;i >= 0;i--){
        if (i == v.size() - 1){
            count++;
            continue;
        }
        if (v[i] > standard){
            count++;
            standard = v[i];
        }
    }
    cout << count;
    

    return 0;
}