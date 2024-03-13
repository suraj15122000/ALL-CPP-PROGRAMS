#include <iostream>
#include <algorithm>
using namespace std;

int calculate_total_cost(int n, int m, int a, int b) {
   // int individual_cost = n * a;
    int groups = n / m;
    int remainder = n % m;
    int m_ticket_cost = groups * b + remainder * a ;
    return m_ticket_cost;
}

int main() {
    int n, m, a, b;
    cin >> n >> m >> a >> b;
    int total_cost = calculate_total_cost(n, m, a, b);
    cout << total_cost << endl;
    return 0;
}
