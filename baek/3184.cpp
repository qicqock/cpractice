#include <iostream> 
#include <string>

using namespace std;



string arr[251];


int backyard(int x,int y){
    int sheep = 0;
    int wolf = 0;
    if (arr[x][y] == 'v'){
        wolf++;
        arr[x][y] == '.';
    }
    if (arr[x][y] == 'o'){
        sheep++;
        arr[x][y] == '.';
    }
    if (((0 < x) && (arr[x - 1][y] != '#')) && (arr[x][y] == '.')){
        return backyard(x - 1,y);
    } 
    if (((x <  - 1) && (arr[x + 1][y] != '#')) && (arr[x][y] == '.')){
        return backyard(x + 1,y);
    } 
    if (((0 < y) && (arr[x][y - 1] != '#')) && (arr[x][y] == '.')){
        return backyard(x,y - 1);
    } 
    if (((y < arr[x].size() - 1) && (arr[x][y + 1] != '#')) && (arr[x][y] == '.')){
        return backyard(x,y + 1);
    } 
    if ()
    
}




int main(void){
    iostream::sync_with_stdio(0);
    cin.tie(0);
    
    int R,C; 
    cin >> R >> C;

    for (int i = 0;i < R;i++){
        cin >> arr[i];
    }
    
    for (int i = 0; i < R; i++){
        for (int j = 0 ; j < C ; j++){
            if (arr[i][j] == '#'){
                continue;
            }
            else {
                backyard(i,j);
            }
        }
    }




    return 0;
}