#include <iostream>
#include <vector>

using namespace std;


vector<int> v;


void calculate(int N,int M){
    if (v.size() == M){
            for (int p : v){
                cout << p << " ";
            }
            cout << "\n";
        }
    else {
        for(int i = 0;i < N;i++){
            bool check = true;
            for (int j = 0; j < v.size();j++){
                if (v[j] == i + 1)
                {
                    check = false;
                }
            }
            if (check) {
                v.push_back(i + 1);
                calculate(N,M);
                v.pop_back();
            }
        }
    }
}

int main(void){
    int N,M;
    cin >> N >> M;
    calculate(N,M);
    return 0;
}

