#include <iostream>
#include <string> 
#include <vector>


using namespace std;

int count = 0;
vector<string> v;

int main(void){
    string s; 
    cin >>  s;
    int begin = 0;
    bool check = false;
    for (int i = 0 ;i < s.size();i++){
        if (s[i] == 'X'){
            if (i == s.size() - 1){
                count++;
                if (count % 2 != 0) {
                    check = 1;
                    break;
                }
                for (int j = 0; j < count;j++){
                    if (count % 4 == 0){
                        s[begin + j] = 'A';
                    }
                    else if (count == 2) {
                        s[begin + j] = 'B';
                    }
                    else {
                        if (j > count -3){
                            s[begin + j] = 'B';
                        }
                        else{
                            s[begin + j] = 'A';
                        }
                    }
                }
                }
            else {
                count++;
                }
            }
        else {
            if (count % 2 != 0){
                check = 1;
                break;
            }

            if (s.substr(begin,count).size() != 0){
                for (int j = 0; j < count;j++){
                    if (count % 4 == 0){
                        s[begin + j] = 'A';
                    }
                    else if (count == 2) {
                        s[begin + j] = 'B';
                    }
                    else {
                        if (j > count -3){
                            s[begin + j] = 'B';
                        }
                        else{
                            s[begin + j] = 'A';
                        }
                    }
                }
            }
            begin = i + 1;
            count = 0;
        }
    }
    if (!check){
        for (char i :  s){
            cout << i;
        }
    }
    else {
        cout << "-1";
    }



    return 0;
}