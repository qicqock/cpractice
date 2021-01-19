#include <iostream>
#include <vector>
#include <time.h>
#include <algorithm>
using namespace std;

int fib(int n){
    if (n <= 1){
        return n;
    }
    else {
        return fib(n-1) + fib(n-2);
    }
}


int main(void){
    iostream::sync_with_stdio(0);
    // cin.tie(0);
    cout << "fibonacci number\n";
    int n;
    cin >> n;
    cout << fib(n);
    return 0;
}


