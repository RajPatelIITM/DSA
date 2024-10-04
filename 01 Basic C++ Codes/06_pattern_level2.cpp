#include<iostream>
using namespace std;

int main(){
    // 9th pattern example
    // for(int i=1;i<=5;i++){
    //     for(int j=1;j<=i;j++){
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    // 10th pattern example
    // for(int i=1;i<=5;i++){
    //     for(int j=1;j<=i;j++){
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }

    // 11th pattern example
    // for(int i=1;i<=5;i++){
    //     for(int j=1;j<=i;j++){
    //         cout << i << " ";
    //     }
    //     cout << endl;
    // }

    // 12th pattern example
    // for(int i=1;i<=5;i++){
    //     for(int j=i;j>=1;j--){
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }

    // 13th pattern example
    // for(char i='a';i<='e';i++){
    //     for(int j='a';j<=i;j++){
    //         cout << i << " ";
    //     }
    //     cout << endl;
    // }

    // 14th pattern example
    // for(int i=1;i<=5;i++){
    //     for(int j=1;j<=(5-i+1);j++){
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    // 15th pattern example
    // for(int i=1;i<=5;i++){
    //     for(int j=1;j<=5-i+1;j++){
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }

    // 16th pattern example
    for(int i=5;i>=1;i--){
        for(int j=5;j>=i;j--){
            cout << j << " ";
        }
        cout << endl;
    }
}