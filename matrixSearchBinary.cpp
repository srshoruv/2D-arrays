#include <iostream>
using namespace std;

int search(int mat[][4], int n, int key){
     int mid;
     int st = 0;
     int end = n-1;

     while (st <= end) {
        mid = (st + end) / 2;
        for (int i=st; i<=end; i++) {
        if (key == mat[mid][end]) {
            cout << mid;
        } else if ( key < mat[mid][end]) {
            end = mid - 1;
        } else {
            st = mid + 1;
        }  
        }
        
     }

     for (int i =st; i<=end; i++){

     }    
}

int main(){
    int matrix[4][4] = { {1,2,3,4},
                         {5,6,7,5},
                         {9,10,11,12}
                         
                         };
    int n=3;
    search(matrix, n, 12);
}