#include <iostream>
using namespace std;

bool search(int mat[][4], int n, int m, int key){
    int srow = n-1;
    int scol = 0;

    while ( scol < m && srow >= 0) {
  
        if (mat[srow][scol] == key) {
            cout << "Key found at " << "(" << srow << "," << scol << ")";
            return true;
        } else if (mat[srow][scol] < key) {
            scol ++;
        } else {
            srow--;
        }
    } 
    cout << "Key not found!";
    return false;
    
}

int main(){
    int matrix[3][4] = { {1,2,3,4},
                         {5,6,7,5},
                         {9,10,11,12}
                         
                         };
    int n=3;
    int m=4;
    search(matrix, n, m, 12);
}