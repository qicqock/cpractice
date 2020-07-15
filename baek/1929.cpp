#include <iostream> 
#include <cmath>

using namespace std;

int main(void){
    iostream::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int M,N;
    cin >> M >> N;
    bool* arr = new bool[N + 1];
    fill_n(arr,N + 1,0);

    for (int i = 0;i <= N;i++){
        if (i == 0){
            arr[0] = true;
            continue;
        }
        if (i == 1){
            arr[1] = true;
            continue;
        }
        else {
            if ((pow(i,2)<= N) && (!arr[i])){
                for (int j = 2;i * j < N + 1;j++){
                    arr[i * j] = true;
                } 
            }
        } 
    }

    for (int i = M;i <= N;i++){
        if (!arr[i]){
            cout << i << "\n";   
        }
    }
    return 0;
}