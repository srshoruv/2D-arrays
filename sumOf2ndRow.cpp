#include <iostream>
using namespace std;

int calSum(int nums[][3], int n) {
    int sum = 0;
    for (int i=0; i<=n; i++) {
        sum += nums[n-1][i];
    } cout << "sum = " << sum;
}   

int main(){
    int nums[3][3]= { {1,4,9},
                      {11,4,3},
                      {2,2,3}
                      };
    calSum(nums, 2);
}