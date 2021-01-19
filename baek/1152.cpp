#include <iostream>
#include <string> 
#include <cstring>

using namespace std;


int main (void){
    iostream::sync_with_stdio(0);
    cin.tie(0);
    string a;
    getline(cin, a);
    int count = 0;
    int offset = 0;
    if (isspace(a[0]) != 0){
        offset++;
    }
    if (isspace(a[a.length()-1]) != 0){
        offset++;
    } 

    for (int i = 0; i < a.length();i++){
        if (isspace(a[i]) != 0){
            count++;
        }
    }
    cout << count - offset + 1;
    return 0;
}