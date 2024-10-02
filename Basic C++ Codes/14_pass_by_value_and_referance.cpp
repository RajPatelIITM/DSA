#include<iostream>
using namespace std;

void swap(int &a,int &b){
    int temp=a;
    a = b;
    b = temp;
}

int main(){
    int a,b;

    cout << "Enter the First Number: ";
    cin >> a;
    cout << "Enter the Second Number:  ";
    cin >> b;

    swap(a,b);

    cout << "New First Number is: " << a << "\nNew Second Number is: " << b;
}