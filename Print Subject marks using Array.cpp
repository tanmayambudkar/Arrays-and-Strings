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

//Enter No. Of Subjects: 3

//Enter The Marks: 10
// 11
// 12
//The Marks Are: 10 11 12 
