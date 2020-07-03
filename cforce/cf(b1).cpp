#include <iostream>
#include <vector>

using namespace std;


int qic(vector<int> t,int h){
    int firstvalue = h;
    h = t[h - 1];
    int count = 1;
    while (h != firstvalue){
        h = t[h - 1];
        count++;
    }
    return count;
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
            for (int y = 0;y < k.size();y++){
                cout << qic(k,y + 1) << " ";
            }
            cout <<"\n";
    }

    return 0;
}
