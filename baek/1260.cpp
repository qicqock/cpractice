#include <iostream>


using namespace std;

int arr[1001][10001];

int main(void){
    int N,M,point;
    int x,y;
    cin >> N >> M >> point;
    for (int i = 0; i < M; i++){
        cin >> x >> y;
        arr[x][y] = 1;
    }

     
    return 0; 
}