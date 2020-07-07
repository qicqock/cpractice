#include <iostream>
#include <queue>


using namespace std;





int main(void){
    int N;
    int k;
    cin >> N;
    queue<int> q;

    for(int i = 1; i <= N;i++){
        q.push(i);
    }
    while (q.size() != 1){
        q.pop();
        k = q.front();
        q.pop();
        q.push(k);
    }

    cout << q.front();


    return 0;
}