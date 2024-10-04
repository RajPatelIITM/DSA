#include<iostream>
using namespace std;

int main(){
    int arr[5];

    for(int i=0;i<size(arr);i++){
        cin >> arr[i];
    }

    int min = arr[0]; // INT_MAX
    int max = arr[0]; // INT_MIN
    
    for(int i=1;i<size(arr);i++){
        if(arr[i] > max){
            max = arr[i];
        }
        if(arr[i] < min){
            min = arr[i];
        }

    }

    cout << "Minimum value is: " << min << "\n";
    cout << "Maximum value is: " << max << "\n";

    cout << size(arr) << "\n";
    cout << sizeof(arr) << "\n";
}