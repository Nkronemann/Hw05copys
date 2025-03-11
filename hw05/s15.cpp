#include <iostream>
using namespace std;

int Sum(int *p, int k) {
    int i;
    int sum = 0;
    for(i=0;i<k;++i) {
        sum += *(p+i);
    }
    return sum;
}
    
int main() {
    int d[5];
    int s;
    s = Sum(d,5);
    cout << "s: " << s;
    return 0;
}
    