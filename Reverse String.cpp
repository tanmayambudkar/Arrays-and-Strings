#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1;
    cout<<"Enter A String: ";
    cin>>str1;
    int n = str1.length();
    for (int i = n; i>=0; i--) {
        cout<<str1[i];
    }
    return 0;
}
