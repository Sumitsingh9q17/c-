#include <iostream>
using namespace std;

int main() {
    //decreasing order
    // int n = 5;
    // for (int i = 0; i < n; i++) {
    //     for (int j = i; j < n; j++) {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

   //for rectangle
    int n;
    cout<<"enter row count: ";
    cin>>n;
    int m;
    cout<<"enter column count: ";
    cin>>m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << " * ";
        }
        cout << endl;
    }


    return 0;
}
