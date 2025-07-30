#include<iostream>
using namespace std;

int main(){
    int a;
    cout<<"Enter the size of array: ";
    cin>>a;
    int Num[10];
    cout <<"Enter any "<<a<<" Values: ";
    for(int i=0;i<a;i++){
        cin>>Num[a];
    }
    cout<<"Reversed Array is: ";
    for(int j=a-1;j>=0;j--)
    {
        cout<<Num[j]<<" ";
    }
}