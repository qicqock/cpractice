#include <iostream>
#include <string>
// #include <vector>

using namespace std; 
// int arr[30][30];

int main(void){

    iostream::sync_with_stdio(0);
    cin.tie(0);

    int N;
    string arr;
    int s,diff;
    int count = 0;
    cin >> N;
    for (int i = 1;i<=N;i++){
        int c = 0;
        arr = to_string(i);
        s = arr[0];
        if (arr.length() == 1){
            count++;
            continue;
        }
        else{
            diff = arr[0] - arr[1];
            for(int j = 0;j<arr.length()-1;j++){
                if (arr[j] - arr[j+1] != diff){
                    c = 1;
                    break;
                }else {
                    continue;
                }
            }
            if (c != 1){
                count++;
            }
        }
    }
    cout << count;
}