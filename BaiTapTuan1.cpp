#include<bits/stdc++.h>

using namespace std;

int main(int argc, char* argv[]) {
    if (argc == 3) {
        long double num;
        string op;
        op = argv[1];
        num = stod(argv[2]);
        if (op == "sin") cout << sin(num);
        else if (op == "cos") cout << cos(num);
        else if (op == "tan") {
            if (cos(num) == 0) {
                cout << "Invalid";
            } else {
                cout << tan(num);
            }
        } else if (op == "cot") {
            if (sin(num) == 0) {
                cout << "Invalid";
            } else {
                cout << 1 / tan(num);
            }
        } else {
            cout << "Invalid";
        }
    } else if (argc == 4) {
        long double num1, num2;
        char op;
        num1 = stod(argv[1]);
        op = argv[2][0];
        num2 = stod(argv[3]);
        if (op == '+') cout << num1 + num2;
        else if (op == '-') cout << num1 - num2;
        else if (op == '*') cout << num1 * num2;
        else if (op == '/') cout << num1 / num2;
        //else if (op == '%') cout << num1 % num2;
        else cout << "Invalid";
    } else {
        cout << "Invalid";
    }
    return 0;
}
