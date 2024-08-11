#include<iostream> 
#include<vector>
#include<algorithm>
#include<functional>

using namespace std ;
int main(){
    int N ; 
    cin >> N;
    vector<int> arr(N) ; 
    for(int i=0;i<N;i++){
        cin >> arr[i];
    }
    for(int i=0;i<N;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    sort(arr.begin() ,arr.end() , greater<int>());
    for(int i=0;i<N;i++){
        cout << arr[i] << " ";
    }

}