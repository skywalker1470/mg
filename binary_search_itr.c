#include<stdio.h>
void sort(int arr[] , int N){
    for(int i=0;i<N-1;i++){
          
       for(int j=0;j<N-1;j++){
        if(arr[j]>arr[j+1]){
            int temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
        }
       }
    }
    for(int i=0;i<N;i++) printf("%d\t",arr[i]);
    return;
}
int bs_recur(int arr[],int l , int h , int num){
    if(l==h) return -1;
    int m = (l+h)/2;
    if(arr[m]==num){
        return num;
    }
    else if(arr[m]<num){
        return bs_recur(arr,m+1,h,num);
    }
    else{
        return bs_recur(arr,l,m-1,num);
    }
}
int binary_search(int arr[],int N,int num){
    int h = N-1;
    int l = 0;
    while(l<=h){
        int m = (l+h)/2 ; 
        if(arr[m]==num){
            return arr[m];
        }
        else if(arr[m]<num){
            l = m+1;
        }
        else{
            h = m-1;
        }
        return -1;
    }
}
void main(){
    int N;
    scanf("%d\n",&N);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    sort(arr,N);
    int num;
    //printf("\n");
   // for(int i=0;i<N;i++) printf("%d\t",arr[i]);
   printf("Enter the number you want to search: ");
   scanf("%d",&num);
   int ans = bs_recur(arr,0,N-1,num);
   //int ans = binary_search(arr,N,num);
    if(ans==-1) printf("Not found Nigga!!");
    else printf("%d is found Nigga!!",ans);
}
