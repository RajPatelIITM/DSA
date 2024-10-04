#include<iostream>
using namespace std;

int main(){
    // 22nd pattern example
    // int n;
    // cin >> n;

    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n-i;j++){
    //         cout << "  ";
    //     }
    //     for(int j=1;j<=(2*i)-1;j++){
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    // 23rd pattern example
    // int n;
    // cin >> n;

    // for(int i=1;i<=n;i++){
    //     for(int j=1; j<= n-i;j++){
    //         cout << "  ";
    //     }
    //     for(int j=1;j<=i;j++){
    //         cout << j << " ";
    //     }
    //     for(int j=i-1;j>=1;j--){
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }

    // 24th Example
    // int n=3;
    // for(int i=n;i>=1;i--){
    //     for(int j=1;j<=(n-i);j++){
    //         cout << "  ";
    //     }
    //     for(int j=1;j<=(i*2) - 1;j++){
    //         cout << "* ";
    //     }
    //     cout << "\n";
    // }

    // 25th example
    // int n=4;

    // for(int i=n;i >= 1;i--){
    //     for(int j=1;j<=i;j++){
    //         cout << "* ";
    //     }
    //     for(int j=1;j<=(n-i)*2;j++){
    //         cout << "  ";
    //     }
    //     for(int j=1;j<=i;j++){
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    // for(int i=1;i <= 4;i++){
    //     for(int j=1;j<=i;j++){
    //         cout << "* ";
    //     }
    //     for(int j=1;j<=(n-i)*2;j++){
    //         cout << "  ";
    //     }
    //     for(int j=1;j<=i;j++){
    //         cout << "* ";
    //     }
    //     cout << endl;
        
    // }

    // 26th example
    // int n=4;
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=i;j++){
    //         cout << "* ";
    //     }
    //     for(int j=1;j<= (n-i)*2;j++){
    //         cout << "  ";
    //     }

    //     for(int j=1;j<=i;j++){
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    // for(int i=n-1;i>=1;i--){
    //     for(int j=1;j<=i;j++){
    //         cout << "* ";
    //     }
    //     for(int j=1;j<= (n-i)*2;j++){
    //         cout << "  ";
    //     }

    //     for(int j=1;j<=i;j++){
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    // 27th example
    int n=4;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout << " ";
        }
        for(int j=1;j<=i;j++){
            cout << "* ";
        }
        cout << endl;
    }
    for(int i=n-1;i>=1;i--){
        for(int j=1;j<=n-i;j++){
            cout << " ";
        }
        for(int j=1;j<=i;j++){
            cout << "* ";
        }
        cout << endl;
    }
}  