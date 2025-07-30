#include <iostream>
using namespace std;

int main(){
    int sum=0,avg,a;
    cout<<"Enter Number of Terms: ";
    cin>>a;
    cout<<"Enter "<<a<<" Values: ";
    int num[a];
    for(int i=0;i<a;i++){
        cin>>num[i];
    }
    for(int j=0;j<a;j++){
        sum+=num[j];
    }
    cout<<"The Sum of the Array is: "<<sum;
    avg=sum/a;
    cout<<"\nThe Average of the Array is: "<<avg;
    return 0;
}
/*Enter Number of Terms: 
3
Enter 3 Values: 10
20
30
The Sum of the Array is: 60
The Average of the Array is: 20
*/