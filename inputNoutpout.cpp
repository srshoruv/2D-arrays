#include <iostream>
using namespace std;

int main(){
    int n = 3;
    int m = 4;
    int arr[n][m];

    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            cout << "Please input (" << i << "," << j << ") : ";
            cin >> arr[i][j];
        }
    }

    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            cout << arr[i][j] << " ";
        } cout << endl;
    }
}