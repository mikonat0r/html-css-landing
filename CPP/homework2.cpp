#include <iostream>
#include <string>
using namespace std;
int main() {
    // ДЗ 1
    double a, b;
    char op;
    cin >> a >> op >> b;
    switch(op) {
        case '+': cout << a + b << endl; break;
        case '-': cout << a - b << endl; break;
        case '*': cout << a * b << endl; break;
        case '/':
            if (b == 0)
                cout << "Division by zero" << endl;
            else
                cout << a / b << endl;
            break;
        default:
            cout << "Invalid operator" << endl;
    }
    // ДЗ 2
    int month;
    cin >> month;
    switch(month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            cout << 31 << endl;
            break;
        case 4: case 6: case 9: case 11:
            cout << 30 << endl;
            break;
        case 2:
            cout << 28 << endl;
            break;
        default:
            cout << "Invalid month" << endl;
    }
    // ДЗ 3
    char cmd;
    cin >> cmd;
    switch(cmd) {
        case 'w': cout << "Up" << endl; break;
        case 'a': cout << "Left" << endl; break;
        case 's': cout << "Down" << endl; break;
        case 'd': cout << "Right" << endl; break;
        case 'q': cout << "Quit" << endl; break;
        default: cout << "Unknown" << endl;
    }
    // ДЗ 4
    int menu, sub;
    cin >> menu;
    switch(menu) {
        case 1:
            cin >> sub;
            switch(sub) {
                case 1: cout << "Login..." << endl; break;
                case 2: cout << "Logout..." << endl; break;
                default: cout << "Invalid" << endl;
            }
            break;
        case 2:
            cout << "Help opened" << endl;
            break;
        case 3:
            cout << "Bye" << endl;
            break;
        default:
            cout << "Invalid" << endl;
    }
    // ДЗ 5
    double price;
    int code;
    cin >> price >> code;
    double discount;
    switch(code) {
        case 1: discount = 0.05; break;
        case 2: discount = 0.10; break;
        case 3: discount = 0.20; break;
        default: discount = 0.0;
    }
    double final = price * (1 - discount);
    cout << final << endl;
}