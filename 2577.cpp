#include <iostream>
#include <string>

using namespace std;
int count[10];
int main(void)
{
    // 숫자 -> 문자열 : to_string
    int a,b,c,d;
    cin >> a >> b >> c;
    d = a*b*c;
    string s = to_string(d); 
    for(int i : s){
        ++count[i - '0']; 
    }

    for(int j : count){
        cout << j << "\n";
    }

    

    return 0;
}