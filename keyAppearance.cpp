#include <iostream>
using namespace std;

int app(int arr[][3], int n, int m, int key) {
    int app = 0;
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            if (arr[i][j] == key) {
                app ++;
            }
        }
    } cout << "The number " << key << " appeared " << app << " times in this matrix";
}

int main(){
    int arr[2][3] = { {4,7,8},
                      {8,8,7}
                            };

    int n = 2;
    int m = 3;

    app(arr,n,m,7);

}