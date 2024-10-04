#include<iostream>
using namespace std;

int main(){
    int arr[5];

    for(int i=0;i<size(arr);i++){
        cin >> arr[i];
    }

    int num;
    cout << "Enter the Number: ";
    cin >> num;

    int index;
    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
        if(num == arr[i]){
            index = i;
            break;
        }
    }
    cout << index;
}