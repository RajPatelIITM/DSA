#include<iostream>
#include <string>
using namespace std;

bool isprime(int num) {
    if (num < 2) {
        return false; // not prime
    }

    for (int i = 2; i < num; i++) {
        if (num % i == 0) {
            return false; // divisible by i, not prime
        }
    }
    return true; // prime
}

void myName(string name="Raj Patel"){
    cout << name << "\n";
}

int main(){
    cout << isprime(10) << " " << isprime(11) << "\n";
    myName();
    myName("Raj");
    int ans = isprime(10);
    cout << ans;
}