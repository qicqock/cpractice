#include <iostream>
#include <vector>


using namespace std;

int count0 = 0;
int count1 = 0; 

pair<int,int> fibonacci(int n){
    int
}

int main(void){
    iostream::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int T,N;
    cin >> T;
    for (int i = 0;i < T; i++){
        cin >> N; 
        fibonacci(N);
        cout << count0 << " " << count1 << "\n";
        count0 = 0;
        count1 = 0;    
    }
    return 0;
}