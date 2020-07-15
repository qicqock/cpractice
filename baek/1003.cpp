#include <iostream>
#include <vector>


using namespace std;

int count0 = 0;
int count1 = 0; 
int arr[41];
vector<pair<pair<int,int>,int>> v(41);

int fibonacci(int n){
    if (n == 0){
        v[n].first.first = 0;
        v[n].first.second = 1;
        return 0;
    } else if (n == 1){
        v[n].first.first = 1;
        v[n].second = 1;
        return 1;
    } else {
        if (v[n].first.first != 0){
            return v[n].first.first;
        }
        else {
            if (v[n - 1].first.first == 0){
                v[n - 1].first.first = fibonacci(n - 1);
            }
            if (v[n - 2].first.first == 0){
                v[n - 2].first.first = fibonacci(n - 2);
            }
            v[n].first.second = v[n- 1].first.second + v[n - 2].first.second;
            v[n].second = v[n - 1].second + v[n - 2].second;
            
            return v[n - 1].first.first + v[n - 2].first.first;
        }
    }
}


int main(void){
    iostream::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int T,N;
    cin >> T; 
    for (int i = 0;i < T; i++){
        cin >> N; 
        int a = fibonacci(N);
        cout << v[N].first.second << " " << v[N].second << "\n";    
    }
    return 0;
}