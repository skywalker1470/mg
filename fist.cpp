#include<iostream>
//#include<array>
#include<algorithm>
#include<string>
using namespace std;
class fuck{
    public:
    int roll ; 
    string name;
    fuck(int a,string n) : roll(a) , name(n){}
    void printf(){
        cout << name << " has the roll number  "<<roll<<endl;
    }

};
int main(){
    int N ; 
    cout << "array number ivii:  \n";
    cin >> N;
    int arr[N];
    for(int i=0;i<N;i++){
        cin >> arr[i];
    }
    for(int i=0;i<N;i++){
        cout << arr[i] << " ";
    }
    cout  << "" << endl;
    sort(arr,arr+N);
    cout << "The sorted array is : ";
    for(int i=0;i<N;i++){
        cout<< arr[i] << " " ;
        if(i==N-1){
            cout<< endl;
        }
    }
    int length = sizeof(arr)/sizeof(arr[0]);
    cout<< "The size of the array is " << length << endl;
    int temp ;
    string temp_str; 
    cin >> temp >> temp_str;
    fuck obj(temp , temp_str);
    obj.printf();
    return 0;
}