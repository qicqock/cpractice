#include <iostream> 
#include <string> 
#include <stack>

using namespace std; 

int count = 0;

int main(void){
    iostream::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;
    string arr[N],s;

    for (int i = 0; i < N ; i++){
        cin >> s;
        arr[i] = s;
        stack<char> ss;
        bool check = 0;
        for (int j = 0; j < arr[i].size(); j++){
            if (ss.size() == 0){
                ss.push(arr[i][j]);
            } 
            else if (ss.top() == arr[i][j]){
                ss.pop();
            }
            else { 
                ss.push(arr[i][j]);
            }
        }
        if (ss.size() != 0){
            check = 1;
        }

        




        if (check == 0){
            count++;
        }
    }
    
    
    cout << count;
    

    return 0;
}