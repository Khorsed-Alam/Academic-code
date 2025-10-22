#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool isValid(string str) {
    stack<char> st;
    for (int i = 0; i < str.length(); i++) {
        char ch = str[i];
        if (ch == '(' || ch == '{' || ch == '[') {
            st.push(ch);
        } else {
            if (st.empty()) {
                return false;
            }
            char topChar = st.top();
            if ((ch == ')' && topChar == '(') ||
                (ch == '}' && topChar == '{') ||
                (ch == ']' && topChar == '[')) {
                st.pop();
            } else {
                return false;
            }
        }
    }
    return st.empty();
}

int main() {
    int N;
    cin >> N;
    cin.ignore();
    for (int i = 0; i < N; i++) {
        string str;
        cin >> str;
        cout << str << " " << (isValid(str) ? "Yes" : "No") << endl;
    }
    return 0;
}

 
