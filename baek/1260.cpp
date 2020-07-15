#include <iostream>
#include <string>
#include <stack>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;


int arr[1001][1001];
int arr1[1001][1001];
bool check[1001]; 
bool check1[1001];


void dfs(int start,int N){
    stack<int> s;
    s.push(start);
    vector<int> v;
    v.push_back(start);
    
    while(!s.empty()){
        int current = s.top();
        s.pop();
        if (!check[current]){
            cout << current << " ";
            check[current] = 1;    
        }
        for (int i = N;i >= 1;i--){
            if (arr[current][i] == 1){
                arr[current][i] = 0;
                arr[i][current] = 0;
                s.push(i);
            }    
        }
    }

}

void bfs(int start,int N){
    queue<int> q;
    q.push(start);
    vector<int> v1;
    v1.push_back(start);
    
    while(!q.empty()){
        int current = q.front();
        q.pop();
        if (!check1[current]){
            cout << current << " ";
            check1[current] = 1;    
        }
        for (int i = 1;i <= N;i++){
            if (arr1[current][i] == 1){
                arr1[current][i] = 0;
                arr1[i][current] = 0;
                q.push(i);
            }    
        }
    }

}

int main(void){
    int N,M,start;
    int x,y;
    cin >> N >> M >> start;
    for (int i = 0; i < M; i++){
        cin >> x >> y;
        arr[x][y] = 1;
        arr[y][x] = 1;
        arr1[x][y] = 1;
        arr1[y][x] = 1;
    }

    dfs(start,N);
    cout << "\n";
    bfs(start,N);
     
    return 0; 
}