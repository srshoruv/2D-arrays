#include <iostream>
using namespace std;

void spiral(int mat[][4], int n, int m) {
    int srow = 0;
    int erow = n-1;
    int scol = 0;
    int ecol = m-1;

    while ( srow <= erow && scol <= ecol) {
        //top
    for (int i=scol; i<=ecol; i++) {
        cout << mat[srow][i] << " ";
    }

    //right
    for (int i=srow+1; i<=erow; i++){
        cout << mat[i][ecol] << " ";
    }

    //bottom
    for (int i=ecol-1; i>=scol; i--){
        if (srow == erow) {
            break;
        }
        cout << mat[erow][i] << " ";
    }

    //left
    for (int i=erow-1; i>=srow+1; i--) {
        if (scol == ecol) {
            break;
        }
        cout << mat[i][scol] << " ";
    }

    srow++;
    scol++;
    erow--;
    ecol--;
}
    }

    

int main() {
    int matrix[3][4] = { {1,2,3,4},
                         {5,6,7,8},
                         {9,10,11,12},
                         };
    int n = 3;
    int m = 4; 
    spiral(matrix, n, m);
    }