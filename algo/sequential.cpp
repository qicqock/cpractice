#include <iostream>
#include <vector>
#include <time.h>
using namespace std;

int seqsearch(int n,int x,int* s){
    int i = 1;
    while((i <= n) && (s[i-1] != x)){
        i++;
    }
    if (i > n){
        i = 0;
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
        array[i] = rand() % 100;
    }
    for (int i = 0; i < n; i++){
        printf("%d ", array[i]);
    }   
    printf("\n");
 
    seqsearch(n,x,array);

    return 0;
}


