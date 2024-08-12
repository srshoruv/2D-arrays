#include <iostream>
using namespace std;

int search(int mat[][4], int n, int key){
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            if (key == mat[i][j]){
                cout << "(" << i << "," << j << ")";
                break;
            }
        }
    } return -1;
    
}

int main(){
    int matrix[4][4] = { {1,2,3,4},
                         {5,6,7,8},
                         {9,10,11,12},
                         {13,14,15,16}
                         };
    int n=4;
    search(matrix, n, 12);
}