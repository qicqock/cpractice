#include <iostream>
#include <unordered_set>

using namespace std;

int main(void){
    int n;
    unordered_set<int> s;

    for(int i = 0; i < 10; i++){
        cin >> n;
        s.insert(n % 42);
    }

    cout << s.size();
    return 0;
}