#include <iostream>
#include <string>

using namespace std;

int main(void){
    iostream::sync_with_stdio(0);
    cin.tie(0);

    string a;
    cin >> a;
    while(a != "0"){
        for(int i = 0;i<a.size();i++){
            if(i >= a.size() - i - 1){
                cout << "yes" << "\n";
                break;
            }
            else if(a[i] == a[a.size() - i - 1]){
                continue;
            }
            else {
                cout << "no" << "\n";
                break;
            }
            
        }
        cin >> a;
    }
    return 0;
}