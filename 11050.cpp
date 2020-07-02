#include <iostream>


using  namespace std;



int recursion(int n,int k){
    if (k ==  0 || k == n){
        return 1;
    }
    else {
        return recursion(n-1,k-1) + recursion(n-1 , k); 
    }
}



int main(void){
    int a,b;
    cin >>  a  >> b;
    cout << recursion(a,b);
    return 0;
}
