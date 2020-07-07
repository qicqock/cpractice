#include <iostream>
#include <queue>

using namespace std;


int main(void){
    int N,K;
    int x;
    queue<int> q;
    cin >> N >> K;
    for (int i = 1;i <=N;i++){
        q.push(i);
    }
    cout << "<";
    for (int j = 0; j < N;j++){
        for (int i = 0;i < K - 1;i++){
            q.push(q.front());
            q.pop();
        }
        x =  q.front();
        q.pop();
        if (q.size() == 0){
            cout << x;
        }
        else {
            cout << x <<","  << " ";
        }
    }

    cout << ">";
    return 0;
}