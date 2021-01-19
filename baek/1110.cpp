#include <iostream>
#include <string>
#include <typeinfo>

using namespace std;

int main (void){

    iostream::sync_with_stdio(0);
    cin.tie(0);
    int N,M;
    M = 100;
    int count = 0;
    cin >> N;
    
    int a = N;
    while (M != N){
        if (a < 10){
            a = a * 10 + a;
        }
        else {
            a  = (a % 10)* 10 + ((a % 10) + (a / 10)) % 10;
        } 
        count++;
        M = a;
    }

    cout << count;
    return 0;
}


