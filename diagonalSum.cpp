#include <iostream>
using namespace std;

// 0(N^2)

int diagonalSum(int mat[][4], int n){
    int sum = 0;
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            if(i==j) {
                sum += mat[i][j];
            } else if ( j == n-1-i) {
                sum += mat[i][j];
            }
        }
    }

    cout << "sum = " << sum << endl;
    return sum;
}

// 0(N)
int diaSumShort(int mat[][4], int n) {
    int sum = 0;
    for (int i=0; i<n; i++){
        sum += mat[i][i];
        // correct only for even matrix
        // sum += mat[i][n-1-i];
        // correct in every situation
        if ( i != n-1-i ){
            sum += mat[i][n-1-i];
        }
    }
    cout << "sum = " << sum << endl;
    return sum;
}

int main(){
    int matrix[4][4] = { {1,2,3,4},
                         {5,6,7,8},
                         {9,10,11,12},
                         {13,14,15,16}
                         };
    int n=4;
    diagonalSum(matrix, n);
    diaSumShort(matrix, n);
}