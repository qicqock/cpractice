#include <iostream>
#include <string>

using namespace std;

int main(void) {
    iostream::sync_with_stdio(0);
    cin.tie(0);

    int t,r;
    string s;
    cin >> t;
    for (int i = 0;i<t;i++){
        cin >> r >> s;
        for (int j = 0;j<s.size();j++){
            for (int k = 0;k<r;k++){
                cout << s[j];
            }
        }
        cout << "\n";
    }


    return 0;
}



















