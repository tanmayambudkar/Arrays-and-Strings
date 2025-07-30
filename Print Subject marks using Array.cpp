#include <iostream>
using namespace std;

int main(){
    int marks[100],n,i;
    cout<<"Enter No. Of Subjects: ";
    cin>>n;
    cout<<"\nEnter The Marks:";
    for(i=0;i<n;i++){
        cout<<" ";
        cin>>marks[i];
    }
    cout<<"The Marks Are: ";
    for(i=0;i<n;i++){
        cout<<marks[i]<<" ";
    }
    return 0;
}