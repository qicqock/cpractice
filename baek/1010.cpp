#include <iostream>
#include <vector>

using namespace std; 
int arr[30][30];

int recursion(int n,int k){
    if (k ==  0 || k == n){
        return 1;
    }
    else {
        if (arr[n][k] != 0){
            return arr[n][k];
        }
        arr[n][k] = recursion(n-1,k-1) + recursion(n-1 , k);
        return arr[n][k]; 
    }
}


int main(void){

    iostream::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;
    int N,M;
    for (int i = 0;i < T;i++){
        cin >> N >> M;
        cout << recursion(M,N) << "\n";
    }

    return 0;
}


