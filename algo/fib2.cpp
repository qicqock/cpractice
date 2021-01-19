#include <iostream>
#include <vector>
#include <time.h>
#include <algorithm>
using namespace std;

int fib2(int n){
    int* array = new int[n];
    array[0] = 0;
    if (n > 0){
        array[1] = 1;
        for (int i =2;i<=n;i++){
            array[i] = array[i-1] + array[i-2];
        }
    }
    return array[n];
}


int main(void){
    iostream::sync_with_stdio(0);
    // cin.tie(0);
    cout << "fibonacci number\n";
    int n;
    cin >> n;
    cout << fib2(n);
    return 0;
}


