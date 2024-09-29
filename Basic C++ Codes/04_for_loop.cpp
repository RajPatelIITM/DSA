#include<iostream>
using namespace std;

int main(){
    // Example1 : Print all even number

    // for(int i=1; i<=100; i++){
    //     if(i%2 ==0){
    //         cout << i << "\t";
    //     }
    // }

    // Example1 End

    // Example2 : Sum of N natural Numbers

    // int N;
    // cout << "Enter the number: ";
    // cin >> N;

    // int sum;
    // for(int i ; i <= N; i++){
    //     sum += i;
    // }

    // cout << sum;

    // Example2 End

    // Example3 Start: Print Alphabet A to Z

    // My Approach
    // char first = 'A';

    // for(int i=0 ;i<26 ;i++){
    //     cout << char(first + i) << " ";
    // }

    // Better Approach
    // for(char i='A'; i<='Z'; i++){
    //     cout << i << " ";
    // }

    // Example3 End

    // Example 4: Print Numbers in reverse Order

    // int N;
    // cout << "Enter the Positive Number: ";
    // cin >> N;


    // for(int i=N;i>=1;i--){
    //     cout << i << " ";
    // }

    // Example 4 End: Write a table

    // Example 5 Start
    // int N;
    // cout << "Enter the Number: ";
    // cin >> N;

    // for(int i=1;i<=10;i++){
    //     cout << N << " * " << i << " = " << N * i << endl; 
    // }

    // Example 5 End

    // Example 6 Factorial

    // int N;
    // long ans = 1;

    // cout << "Enter the Number: ";
    // cin >> N;

    // for(int i=1;i<=N;i++){
    //     ans = ans*i;
    // }

    // cout << "Factorial of Number is: " << ans;

    // Example 6 end

    // Example 7 start prime number check
    // My Aprooach
    // int N;
    
    // cout << "Enter the number: ";
    // cin >> N;

    // bool prime=true;

    // for(int i=2;i<N;i++){
    //     if(N%i == 0){
    //         prime = !prime;
    //         break;
    //     }
    // }

    // if(prime){
    //     cout << "Number is Prime";
    // }else{
    //     cout << "Number is not Prime";
    // }

    // Sir approach in onenote
    // Example 7 end

    // Example 8 - Fibonacchi Series
    int N;
    
    cout << "Enter the Number: ";
    cin >> N;

    if(N == 1 || N == 2){
        cout << N-1;
    }
    else{

        int secondlast = 0, last = 1, current;

        for(int i=3;i<=N;i++){
            current = secondlast + last;
            secondlast = last;
            last = current;
        }

        cout << current;
    }

    return 0;

    // Example 8 end
}