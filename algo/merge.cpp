#include <iostream>
#include <vector>
#include <time.h>
using namespace std;


int sorted[10000];

void merge(int* data,int start,int mid,int end){
    int i = start;
    int j = mid+1;
    int k = start;

    while((i <= mid) && (j <= end)){
        if (data[i] <= data[j]){
            sorted[k] = data[i];
            i++;
        }
        else{
            sorted[k] = data[j];
            j++;
        }
        k++;
    }
    if (i>mid){
        for(int t=j;t<=end;t++){
            sorted[k] = data[t]; //나머지를 부분을 넣어줌.
            k++;
        }
    }
    else {
        for(int t =i;t<=mid;t++){
            sorted[k] = data[t];
            k++;
        }
    }
    
    for(int t= start;t<end;t++){
        data[t] = sorted[t];
    }


}

void merge_sort(int *data,int start,int end){
    if(start < end){
        int mid = (start + end)/2;
        merge_sort(data,start,mid);
        merge_sort(data,mid+1,end);
        merge(data,start,mid,end);
    }
}

int main(void){
    // iostream::sync_with_stdio(0);
    // cin.tie(0);
    cout << "length of array\n";
    int n;
    cin >> n;
    int* a = new int[n];

    srand((int)time(NULL));
    for (int i = 0; i < n; i++){
        a[i] = rand() % n;
        printf("%d ", a[i]);
    }

    printf("\n");
 
    merge_sort(a,0,n-1);

    for(int i = 0;i < n;i++){
        printf("%d ",a[i]);
    }

    return 0;
}


