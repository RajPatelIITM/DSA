#include<iostream>
using namespace std;

// increasing order
// int main(){
//     int arr[5] = {10,20,-10,0,30};

//     int n = sizeof(arr)/sizeof(arr[0]); //5
    
//     int index = 0;

//     for(int i=0;i<=n-2;i++){
//         index = i;
//         for(int j=i+1;j<=n-1;j++){
//             if(arr[j] < arr[index]){
//                 index = j;
//             }
//         }
//         swap(arr[index],arr[i]);
//     }

//     for(int i=0;i<=n-1;i++){
//         cout << arr[i] << " ";
//     }
// }

// decreasing order
// int main(){
//     int arr[5] = {10,20,-10,0,30};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int index;

//     for(int i=0;i<=n-2;i++){
//         index = i;
//         for(int j=i+1;j<=n-1;j++){
//             if(arr[j] > arr[index]){
//                 index = j;
//             }
//         }
//         swap(arr[index],arr[i]);
//     }

//     for(int i=0;i<=n-1;i++){
//         cout << arr[i] << " ";
//     }
// }

// decreasing order character of array
int main(){
    char arr[4] = {'a','b','*','A'};
    int n = sizeof(arr)/sizeof(arr[0]);
    int index;

    for(int i=0;i<=n-2;i++){
        index = i;
        for(int j=i+1;j<=n-1;j++){
            if(arr[j] > arr[index]){
                index = j;
            }
        }
        swap(arr[index],arr[i]);
    }

    for(int i=0;i<=n-1;i++){
        cout << arr[i] << " ";
    }
}