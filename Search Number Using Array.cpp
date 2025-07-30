#include <iostream>
using namespace std;

int main(){
    int a[10], n, key, i, k;
    cout << "Enter Number Of Terms: ";
    cin >> n;
    cout << "Enter Numbers: ";
    for(i = 0; i < n; i++){
        cin >> a[i];
    }
    cout << "Enter The Key to Find: ";
    cin >> key;
    for(k = 0; k < n; k++){
        if(key == a[k]){
            cout << "Key Found At:\n" << k;
            break;
        }
    }
    if(k == n){
        cout << "Key Not Found";
    }
    return 0;
}

//OUTPUT:
//Enter Number Of Terms: 3
//Enter Numbers: 10
//12
//14
//Enter The Key to Find: 14
//Key Found At:
//2
