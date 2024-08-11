#include<stdio.h>
void merge_sort(int l,int h,int arr[]){
    int m = (l+h)/2;
    if(l==h) return;
    merge_sort(l,m,arr);
    merge_sort(m+1,h,arr);
    merge(arr,l,h);
}
void merge(int arr[],int l,int h){
    int m = (l+h)/2;
    int p1 = l ;
    int p2 = m+1;
    int temp[h-l+1];
    int index = 0 ;
    while(p1!=m+1&&p2!=h+1){
        if(arr[p1]>arr[p2]){
            temp[index] = arr[p2];
            index ++;
            p2++;
        }
        else{
            temp[index] = arr[p1];
            index++;
            p1++;
        }
    }
    while(p2!=h+1){
        temp[index] = arr[p2];
        index++;
        p2++;
    }
    while(p1!=m+1){
        temp[index] = arr[p1];
        index++;
        p1++;
    }
    for(int i=l;i<=h;i++){
        arr[i]=temp[i-l];
    }
    return;
}
void printing(int N,int arr[]){
    for(int i=0;i<N;i++){
        printf("%d\t",arr[i]);
    }
    return;
}
int main(int argc,char* argv){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    merge_sort(0,N,arr);
    printing(N,arr);
    return 0;
}