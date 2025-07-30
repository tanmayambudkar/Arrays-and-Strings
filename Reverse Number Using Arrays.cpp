#include<iostream>
using namespace std;

int main(){
    int a;
    cout<<"Enter the size of array: ";
    cin>>a;
    int Num[a];
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
/*
Output:
Enter the size of array: 5
Enter any 5 Values: 30
40
50
60
70
Reversed Array is: 70 60 50 40 30
*/
