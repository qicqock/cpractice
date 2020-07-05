#include <iostream>
#include <vector>


using namespace std;






int building(int N,vector<int> v){
    int count = 0;
    int standard;
    int benchmark[N] = {0,};

    for (int i = 0;i < N;i++){
        int eachcount = 0;
        standard = v[i];
        for (int j = i + 1;j < N;j++){
            if (standard > v[j]){
                count++;
                continue;
            }
            if (standard <= v[j]){
                break;
            }
        }
    }
    
    return count;
}



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
    cout << building(N,v);
    

    return 0;
}