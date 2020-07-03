#include <iostream>

using namespace std;
int a[5];
int main(void) {
    int l,p;
    cin >> l >> p;
    for(int i = 0;i < 5;i++){
        cin >> a[i];
    }
    for (int i : a)
    {
        cout << i -l*p << ' ';
    }
    return 0;
}