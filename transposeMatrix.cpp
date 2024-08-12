#include <iostream>
using namespace std;

// printing the matrix
void printMat(int mat[][2], int n, int m) {
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++) {
            cout << mat[i][j] << " ";
        } cout << endl;
}

}

// transposing the matrix
void trans(int mat[][3], int n, int m) {

    int newMat[3][2];
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++) {
            newMat[j][i] = mat[i][j];
        }
    } printMat(newMat,3,2);
}

// main function
int main(){
    int mat[2][3] = {{1,2,3},
                     {4,5,6}
                      };
    int n = 2;
    int m = 3;

    trans(mat, n, m);
}