#include <iostream>
#include <queue>
#include <string>
using namespace std;

string reverseString(string str) {
    queue<char> q1, q2;

    for (char ch : str)
        q1.push(ch);

    while (!q1.empty()) {
        char frontChar = q1.front();
        q1.pop();
        q2.push(frontChar);
    }

    string reversed = "";
    while (!q2.empty()) {
        reversed = q2.front() + reversed;
        q2.pop();
    }

    return reversed;
}

int main() {
    int N;
    cin >> N;

    for (int i = 0; i < N; i++) {
        string str;
        cin >> str;
        cout << str << " " << reverseString(str) << endl;
    }

    return 0;
}
