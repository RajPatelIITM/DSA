#include<iostream>
using namespace std;

int binarysearchonascending(int arr[],int n,int k){
    int start = 0, end = n-1,mid;
    while(start <= end){
        mid = start + (end-start)/2;

        if(arr[mid] == k){
            return mid;
        }else if(arr[mid] > k){
            end = mid - 1;
        }else{
            start = mid + 1;
        }
    }

    return -1;
}

int binarysearchondescending(int arr[],int n,int k){
    int start = 0, end = n-1,mid;
    while(start <= end){
        mid = start + (end-start)/2;

        if(arr[mid] == k){
            return mid;
        }else if(arr[mid] > k){
            start = mid+1;
        }else{
            end = mid-1;
        }
    }

    return -1;
}

int main(){
    // int arr[5] = {10,20,31,32,50};
    int arr[5] = {50,44,1,-4,-10};

    int n= sizeof(arr)/sizeof(arr[0]);

    int key;
    cout << "Enter the number which you want to find: ";
    cin >> key;

    // cout << binarysearchonascending(arr,n,key);
    cout << binarysearchondescending(arr,n,key);

}