#include <iostream>
#include <vector>
#include <cmath>

using namespace std;


int qic(int b,int k){
    int final;
    if (b > (pow(3,k) + pow(3,k+1))/2){
        for (int i = 0;i <= k;i++){
            final = pow(3,i);
        }
    }
    else {
        
    }
    return final;

}

int main(void){

    iostream::sync_with_stdio(0);
    cin.tie(0);

    int a;
    int b;
    cin >> a;
    for(int i = 0;i < a;i++){
        cin >> b;
        int k = 0;
        while ((pow(3,k) > b) || (b > pow(3,k+1))){
            ++k;
        }

        
    }
    return 0;
}
