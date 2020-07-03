#include <iostream>
#include <vector>

using namespace std; 

int main(void){
    vector<int> a;
    for(int i = 0;i < 3;i++){
        int k;
        cin >> k;
        a.push_back(k);
    }
    int  max,min;
    for (int i = 0;i<3;i++){
        if (i == 0){
            max = min = a[i];
            continue;
        }
        if (a[i] > max){
            max = a[i];
        }
        if (a[i] < min){
            min = a[i];
        }
    }
    
    cout << min << " "; 

    for ( int j : a){
        if ((j != max) && (j != min)){
            cout << j;
        }
    }
    cout << " " << max;
}