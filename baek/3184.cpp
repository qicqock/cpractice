#include <iostream> 
#include <string>

using namespace std;



string arr[251];
bool check[251][251];
int sumsheep = 0;
int sumwolf = 0;

int backyard(int x,int y){
    check[x][y] = true;
    int sheep = 0;
    int wolf = 0;
    if (arr[x][y] == 'v'){
        wolf++;
        arr[x][y] == '#';
    }
    if (arr[x][y] == 'o'){
        sheep++;
        arr[x][y] == '#';
    }
    if (((0 < x) && (arr[x - 1][y] != '#')) && (arr[x][y] == '.')){
        if (!check[x-1,y]){
            cout << "**1";
            return backyard(x - 1,y);
        }
    } 
    if (((x <  - 1) && (arr[x + 1][y] != '#')) && (arr[x][y] == '.')){
        if (!check[x + 1,y]){
           cout << "**2";
            return backyard(x + 1,y);
        }
    } 
    if (((0 < y) && (arr[x][y - 1] != '#')) && (arr[x][y] == '.')){
        if (!check[x,y - 1]){
            cout << "**3";
            return backyard(x,y - 1);
        }
    } 
    if (((y < arr[x].size() - 1) && (arr[x][y + 1] != '#')) && (arr[x][y] == '.')){
        if (!check[x,y + 1]){
            cout << "**4";
            return backyard(x,y + 1);
        }
    } 
}




int main(void){
    int R,C; 
    cin >> R >> C;

    for (int i = 0;i < R;i++){
        cin >> arr[i];
    }
    
    for (int i = 0; i < R; i++){
        for (int j = 0 ; j < C ; j++){
            if (arr[i][j] == '#'){
                check[i][j] == true;
                continue;
            }
            else {
                backyard(i,j);
            }
        }
    }

    cout << sheep << " " << wolf << " \n";




    return 0;
}