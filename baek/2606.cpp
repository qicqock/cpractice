#include <iostream>

using namespace std;

bool arr1[101][101];
int count = 0;
int arr2[101];

void virus(int N,int k){
    for (int i = 1;i <= N;i++){
        if ((arr1[k][i]) && (arr2[i] == 0)){
            count++;
            arr1[k][i] = 0;
            arr1[i][k] = 0;
            arr2[k] = 1;
            arr2[i] = 1;
            virus(N,i);
        }
        else {
            continue;
        }
    }
    return;
}



int main (void){
    int N,M,x,y; 
    cin >> N >> M; 

    for (int i = 0; i < M; i++){
        cin >> x >> y;
        arr1[x][y] = true;
        arr1[y][x] = true;
    }
    virus(N,1);
    cout << count;
    
    return 0;
}