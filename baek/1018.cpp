#include <iostream> 
#include <string>

using namespace std;


int min;

int main(void){
    iostream::sync_with_stdio(0);
    cin.tie(0);
    int N,M;
    string color;
    cin >> N >> M;
    string* arr = new string[N]();
    for(int i = 0; i < N;i++){
        cin >> color;
        arr[i] = color;
    }
    for(int i = 0;i < N - 7;i++){
        
    }
    return 0;
}