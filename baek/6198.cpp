#include <iostream>
#include <vector>
#include <stack>

using namespace std;






int main(void){
    iostream::sync_with_stdio(0);
    cin.tie(0);

    int N,h;
    long long count = 0;      
    cin >> N;
    stack<int> s;
    for (int i = 0;i < N;i++){
        cin >> h;
        if (s.size() == 0){
            s.push(h);
            continue;
        }
        while ((s.size() != 0) &&(s.top() <= h)){
            s.pop();
        }

        if ((s.size() != 0) && (s.top() > h)){
            count = count + s.size();
            s.push(h);
            continue;
        }

        if (s.size() == 0){
            s.push(h);
        }
    }

    cout << count;


    return 0;
}