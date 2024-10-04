#include<iostream>
using namespace std;

int main(){
    //17th pattern example
    // int n;
    // cin >> n;

    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n-i;j++){
    //         cout << "  ";
    //     }
    //     for(int j=1;j<=i;j++){
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    // 18th example
    // int n;
    // cin >> n;

    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n-i;j++){
    //         cout << "  ";
    //     }
    //     for(int j=1;j<=i;j++){
    //         cout << i << " ";
    //     }
    //     cout << endl;
    // }

    // 19th example
    // int n;
    // cin >> n;

    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n-i;j++){
    //         cout << "  ";
    //     }
    //     for(int j=1;j<=i;j++){
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }

    //20th example
    // int n;
    // cin >> n;

    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n-i;j++){
    //         cout << "  ";
    //     }
    //     char ch='A';
    //     for(int j=1;j<=i;j++){
    //         cout << ch << " ";
    //         ch++;
    //     }
    //     cout << endl;
    // }

    // 21st pattern example
    int n;
    cin >> n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout << "  ";
        }
        for(int j=i;j>=1;j--){
            cout << j << " ";
        }
        cout << endl;
    }
}