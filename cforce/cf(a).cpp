#include <iostream>
#include <vector>

using namespace std;



int qic(vector<int> t){
    for (int i = 0;i < t.size();i++){
            for(int j = 0;j < i;j++){
                if (abs(t[i] - t[j]) == 1){
                    return 1;
                }
            }
        }
    return 0;
}


int main(void){

    iostream::sync_with_stdio(0);
    cin.tie(0);

    int a;
    int b;
    cin >> a;
    for(int i = 0;i < a;i++){
        cin >> b;
        vector<int> k;
        for (int j = 0;j < b;j++){
            int q;
            cin >> q;
            k.push_back(q);
            }
            if (qic(k) == 1){
                cout << "2" << "\n";
            }
            if (qic(k) == 0){
                cout << "1" << "\n";
            }
    }

    return 0;
}