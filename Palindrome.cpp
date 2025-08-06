#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1;
    cout<<"Enter A String: ";
    cin>>str1;
    int n=str1.length();
    bool isPalindrome=true;
    for (int i = 0; i<n/2; i++) {
        if(str1[i]!=str1[n-1-i]){
            isPalindrome = false;
            break;
        }
    }
    if (isPalindrome){
        cout<<str1<<" Is a Palindrome";
    }
    else{
        cout<<str1<<" Not a Palindrome";
    }
    return 0;
}
