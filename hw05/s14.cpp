#include <iostream>
using namespace std;

int Sum(int A[5]) {
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += A[i]; 
    }
    return sum;
}

int main() {
    int d[5] = {1, 2, 3, 4, 5}; 
    int s;

    s = Sum(d);  

    cout << "s: " << s << endl;

    return 0;
}
