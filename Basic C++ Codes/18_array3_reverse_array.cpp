#include<iostream>
using namespace std;

int main(){
    int arr[5];
    // int arr[6];

    // Input elements in the array
    for(int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++){
        cin >> arr[i];
    }

    // Reverse the array by swapping elements
    int half = (sizeof(arr)/sizeof(arr[0])) / 2;
    int n = sizeof(arr)/sizeof(arr[0]) - 1;

    for(int i = 0; i < half; i++){
        int temp = arr[i];
        arr[i] = arr[n];
        arr[n] = temp;
        n -= 1;
    }
    
    // Output the reversed array
    for(int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++){
        cout << arr[i] << " ";
    }

    return 0;
}
