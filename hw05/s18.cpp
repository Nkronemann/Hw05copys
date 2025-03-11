#include <iostream>
using namespace std;

int Sum(int *A[], int r) {

    int j, k, sum = 0;

    for ( j = 0; j < r; j++) {
        for (k = 0; k < 8; k++) {
            sum += A[j][k];
        }
    }
    return sum;
}

int main() {
    int *d[5], s, i, j, k;
    for ( i = 0; i < 5; i++) 
        d[i] = new int[8];
    for ( j = 0; j < 5; j++)
        for (k = 0; k < 8 k++)
            *(d[j]+k) = j+k;
    s = Sum( d, 5);
    for (i = 0; i < 5; i++)
        delete d[i];
}