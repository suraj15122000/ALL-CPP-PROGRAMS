#include <iostream>
using namespace std;

int factorial(int num) {
    if (num == 0) return 1;
    int fact = 1;
    for (int i = 1; i <= num; i++) {
        fact *= i;
    }
    return fact;
}

bool checkStrongno(int n) {
    int temp = n;
    int sum = 0;
    while (temp > 0) {
        int rem = temp % 10;
        sum += factorial(rem);
        temp /= 10;
    }
    return (sum == n);
}

int main() {
    int n;
    cin >> n;
    if (checkStrongno(n)) {
        cout << "Number is a Strong no. ";
    } else {
        cout << "Number is not a strong no.";
    }
    return 0;
}
