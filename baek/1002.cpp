#include <iostream>
#include <vector>
#include <cmath>


using namespace std;

int arr[6];



void calculate(){
    float distance = sqrt(pow(arr[0] - arr[3],2) + pow(arr[1] - arr[4],2));
    // cout << "distance: " << distance << "\n"; 
    // cout << "k: " << k << "\n";
    int k = arr[2] + arr[5];

    if ((distance == 0)){
            if (arr[2] == arr[5]){
                cout << "-1" << "\n";    
            }
            else {
                cout << "0" << "\n";
            }
        }
    else if (distance > k){
        cout << "0" << "\n";
    }
    else if (distance == k){
        cout << "1" << "\n";
    }

    else {
        //1
        if ((arr[2] <= distance) && (arr[5] <= distance)){
            cout << "2" << "\n";    
        }
        //2
        else if ((arr[2] > distance) && (arr[5] <= distance)){
            if (arr[2] < distance + arr[5]){
                cout << "2" << "\n";
            }
            else if (arr[2] >= distance + arr[5]){
                if (arr[2] == distance + arr[5]){
                    cout << "1" << "\n";
                }
                else {
                    cout << "0" << "\n";
                    }
            }
        }
        //3
        else if ((arr[5] > distance) && (arr[2] <= distance)){
            if (arr[5] < distance + arr[2]){
                cout << "2" << "\n";
            }
            else if (arr[5] >= distance + arr[2]){
                if (arr[5] == distance + arr[2]){
                    cout << "1" << "\n";
                }
                else {
                    cout << "0" << "\n";
                }
            }
        }
        else if ((arr[5] > distance) && (arr[2] > distance)){
            if (arr[2] > arr[5]){
                if (arr[2] < distance + arr[5]){
                    cout << "2" << "\n";
                }
                else if (arr[2] >= distance + arr[5]){
                    if (arr[2] == distance + arr[5]){
                        cout << "1" << "\n";
                    }
                    else {
                        cout << "0" << "\n";
                        }   
                }
            }
            else if ( arr[2] < arr[5]){
                if (arr[5] < distance + arr[2]){
                    cout << "2" << "\n";
                }
                else if (arr[5] >= distance + arr[2]){
                    if (arr[5] == distance + arr[2]){
                        cout << "1" << "\n";
                    }
                    else {
                        cout << "0" << "\n";
                    }
                }
            }
            else {
                cout << "2" << "\n";
            }
            
        }
    }
}

int main(void){
    iostream::sync_with_stdio(0);
    cin.tie(0);
    int T,p;
    cin >> T;

    for(int i = 0;i < T;i++){
        for (int j = 0;j < 6;j++){
            cin >> p;
            arr[j] = p;
        }
        calculate();
    }
    return 0;
}