#include<iostream>
using namespace std;

void convert(char &letter){
    letter = letter - 'a' + 'A';
}

int main(){
    char ch='b';
    convert(ch);
    cout << ch;
}