#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void){
    iostream::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;

    vector<int> v(N);
    for (int i = 0; i < N; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end(), less<int>());

    for (int i = 0; i < N; i++)
    {
        cout << v[i] << '\n';
    }

    


    return 0;
}