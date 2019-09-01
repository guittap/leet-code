#include <iostream>
#include <stack>

using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack <char> c;

        for (int i = 0; i < s.length(); i++) {
            if (isLeft(s[i])) {
                c.push(s[i]);
            }

            else {
                if (c.size() == 0 || !checkRightIfLeft(c.top(), s[i])) {
                    return false;
                }

                c.pop();
            }
        }

        if (c.size() > 0) {
            return false;
        }

        return true;
    }
    
    bool isLeft(char s) {
        if (s == '(' || s == '{' || s == '[') {
            return true;
        }

        return false;
    }

    bool checkRightIfLeft (char pop, char s) {
        if (pop == '{' && s == '}') {
            return true;
        }

        else if (pop == '(' && s == ')') {
            return true;
        }

        else if (pop == '[' && s == ']') {
            return true;
        }

        return false;
    }
};

int main() {
    string parenString;
    Solution test;

    cout << "please enter parenthesis statement" << endl;
    cin >> parenString;
    
    if (test.isValid(parenString)) {
        cout << "true" << endl;
    }

    else {
        cout << "false" << endl;
    }

    return 0;
}