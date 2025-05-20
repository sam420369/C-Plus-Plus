#include <iostream>
#include <string>
#include <stack>

using namespace std;

bool isOperator(char x) {
    return x == '+' || x == '-' || x == '*' || x == '/';
}

int precedence(char x) {
    if (x == '+' || x == '-') {
        return 1;
    } else if (x == '*' || x == '/') {
        return 2;
    }
    return 0;
}

string infixPostfix(string infix) {
    stack<char> st;
    string postFix;

    for (char ch : infix) {
        if (isOperator(ch)) {
            while (!st.empty() && precedence(st.top()) >= precedence(ch)) {
                postFix += st.top();
                st.pop();
            }
            st.push(ch);
        } else {
            postFix += ch;
        }
    }

    // Pop remaining operators in the stack
    while (!st.empty()) {
        postFix += st.top();
        st.pop();
    }

    return postFix;
}

int main() {
    string test = "a+b*c-d/e";
    string output;

    output = infixPostfix(test);

    cout << output << endl;

    return 0;
}
