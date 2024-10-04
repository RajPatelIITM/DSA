#include<iostream>
using namespace std;
#include<cmath>

// Example 1: Decimal to binary: Only positive, whole Number.
// int main(){
//     int ans=0, number,reminder,multiplyby=1;

//     cout << "Enter the Number: ";
//     cin >> number;

//     while(number != 0){
//         reminder = number&1; // reminder = number % 2;
//         number = number>>1; // number = number/2;
//         ans = reminder*multiplyby + ans;
//         multiplyby *= 10;
//     }

//     cout << ans;
// }

// Example 2: Binary to Decimal: whole Number.
// int main(){
//     int ans=0, number,reminder,multiplyby=0;

//     cout << "Enter the Number: ";
//     cin >> number;

//     while(number != 0){
//         reminder = number % 10;
//         number /= 10;
//         ans = reminder*pow(2,multiplyby) + ans;
//         multiplyby += 1;
//     }

//     cout << ans;
// }

// Example 3: Decimal to Octal: Only positive, whole Number.
int main(){
    int ans=0, number,reminder,multiplyby=1;

    cout << "Enter the Number: ";
    cin >> number;

    while(number != 0){
        reminder = number%8;
        number = number/8; 
        ans = reminder*multiplyby + ans;
        multiplyby *= 10;
    }

    cout << ans;
}