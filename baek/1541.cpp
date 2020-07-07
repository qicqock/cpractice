#include <iostream>
#include <string>

using namespace std;


int count = 0;

int bracket(string s,int begin,int end){ 
    for (int i = 0; i < s.size() ; i++){
        if (s[i] == '+'){
            stoi(s.substr(begin,count));
        }
        else if (s[i] == '-'){
            
        }
        else {
            count++;
        }
    }
}

int main(void){
    string s;
    cin >> s;   
    for (int i = 0; i < s.size() ; i++){
          
    }
    return 0;
}