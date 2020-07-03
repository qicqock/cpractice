#include <iostream>
#include <vector>


using namespace std;

int arr[15][15];

int residence(int k,int n){
    int sum = 0;
    if (k == 0){
        arr[0][n] = n;
        return n;
    }
    else {
        for(int j = 1;j <= n;j++){
            if (arr[k-1][j] != 0){
                sum += arr[k-1][j];
            }
            else{
                sum += residence(k-1,j);
            }
        }
        arr[k][n] = sum;
        return sum;
    }
}


int main(void){
    iostream::sync_with_stdio(0);
    cin.tie(0);

    int T,k,n;
    cin >> T;
    for (int i = 0;i < T;i++){
        cin >> k >> n;
        cout << residence(k,n) << "\n";
    }
    return 0;
}