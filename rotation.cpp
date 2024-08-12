#include <iostream>
using namespace std;

void printMat(int mat[][4], int n) {
    for (int i=0; i<=n; i++) {
        cout << "{";
        for (int j=0; j<=n; j++) {
            cout << mat[i][j] << ",";
        } cout <<"}, ";
    }
}

void rotate(int mat[][4], int n) {
    int temp[4][4];
    for (int i=0; i<=n; i++) {
        for (int j=0; j<=n; j++) {
            temp[i][j] = mat[n-j][i];
        }
    } printMat(temp, 3);
}

int main(){
    int n = 4;
    int mat[4][4] = { {5,1,9,11},
                      {2,4,8,10},
                      {13,3,6,7},
                      {15,14,12,16} };

    rotate(mat,3);
}