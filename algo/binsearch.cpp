#include <iostream>
#include <vector>
#include <time.h>
#include <algorithm>
using namespace std;

int binsearch(int n,int x,int* s){
    int low,high,mid;
    low=0;
    high=n-1;
    int i = 0;
    while((low <= high) && (i == 0)){
        mid = (low + high) / 2;
        if (x == s[mid]){
            i = mid;
        }
        else if (x < s[mid]){
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
    cout << i;
    return 0;
}


int main(void){
    iostream::sync_with_stdio(0);
    // cin.tie(0);
    cout << "length of array\n";
    int n;
    cin >> n;
    cout << "enter the number to find\n";
    int x;
    cin >> x;
    int* array = new int[n];

    srand((int)time(NULL));
    for (int i = 0; i < n; i++){
        array[i] = rand() % n;
    }
    sort(array,array+n);
    for (int i = 0; i < n; i++){
        printf("%d ", array[i]);
    }   
    printf("\n");
 
    binsearch(n,x,array);

    return 0;
}


