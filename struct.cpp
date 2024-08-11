#include<iostream>
#include<string>
using namespace std;
struct gay{
    string name;
    int age;
};
int main(){
    gay members[3];
    cout<<"Enter the details"<<endl;
    for(int i=0;i<3;i++){
        cout<<"Name:";
        cin>>members[i].name;
        cout<<"Age:";
        cin>>members[i].age;      
    }
    for (int i = 0; i < 3; i++)
    {
        cout<<"Name: "<<members[i].name<< "\nAge :" << members[i].age<<endl;
    }
    return 0;
}