#include <iostream>
#include "s14f.h"  // Include function header

using namespace std;

int main() {
    int d[5] = {1, 2, 3, 4, 5};  // Initialize array with values
    int s;

    s = Sum(d);  // Call Sum function

    cout << "s: " << s << endl;

    return 0;
}

int Sum(int A[5]) {
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += A[i];  // Add each element to sum
    }
    return sum;
}