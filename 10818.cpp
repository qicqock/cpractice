#include <iostream>


using namespace std;

int main(void){
    iostream::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    int a[n];
    int max,min;
    for (int i = 0;i<n;i++){
        cin >> a[i];
        if (i == 0){
            min = max = a[i];
        }
        else {
            if (a[i] > max){
                max = a[i];
            }
            if (a[i] < min){
                min = a[i];
            }
        }
    }
    cout << min << " " << max; 
    return 0;
}