#include <iostream>
#include <string>
using namespace std;
// Function to generate the Nth ticket code
string generateTicketCode(int N) {
    if (N == 1) {
        return "A";
    } else {
        string previousCode = generateTicketCode(N - 1);
        string currentCode = "";
        
        int i = 0;
        while (i < previousCode.length()) {
            char currentChar = previousCode[i];
            int count = 1;
            while (i + 1 < previousCode.length() && previousCode[i] == previousCode[i + 1]) {
                count++;
                i++;
            }
            currentCode +=to_string(count) + currentChar;
            i++;
        }
        
        return currentCode;
    }
}

int main() {
    int N;
    cout << "Enter the value of N: ";
    cin >> N;
    
    string nthTicketCode = generateTicketCode(N);
    cout << "The ticket code is:" << nthTicketCode <<endl;
    
    return 0;
}
