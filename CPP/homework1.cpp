#include <iostream>
using namespace std;

int main() {

    // Задание 1
    int a, b;
    cin >> a >> b;
    if (a > b)
        cout << a << endl;
    else
        cout << b << endl;

    // Задание 2
    int n;
    cin >> n;
    cout << n * n << endl;

    // Задание 3
    int num;
    cin >> num;
    cout << num + 10 << endl;

    // Задание 4
    double x, y;
    cin >> x >> y;
    cout << x / y << endl;

    // Задание 5
    double price;
    int n;
    cin >> price >> n;
    cout << price * n << endl;

    // Задание 6
    int n;
    cin >> n;
    if (n > 0)
        cout << "POSITIVE" << endl;
    else
        cout << "NEGATIVE" << endl;

    // Задание 7
    int month;
    cin >> month;
    if (month == 1) cout << "January" << endl;
    else if (month == 2) cout << "February" << endl;
    else if (month == 3) cout << "March" << endl;
    else if (month == 4) cout << "April" << endl;
    else if (month == 5) cout << "May" << endl;
    else if (month == 6) cout << "June" << endl;
    else if (month == 7) cout << "July" << endl;
    else if (month == 8) cout << "August" << endl;
    else if (month == 9) cout << "September" << endl;
    else if (month == 10) cout << "October" << endl;
    else if (month == 11) cout << "November" << endl;
    else if (month == 12) cout << "December" << endl;
    else cout << "ERROR" << endl;

    // Задание 8
    int age;
    cin >> age;
    if (age >= 7 && age <= 18)
        cout << "SCHOOL" << endl;
    else
        cout << "NOT SCHOOL" << endl;

    // Задание 9
    string login, password;
    cin >> login >> password;
    if (login == "admin" && password == "1234")
        cout << "OK" << endl;
    else
        cout << "ERROR" << endl;

    // Задание 10
    int temp;
    cin >> temp;
    if (temp < 0 || temp > 35)
        cout << "EXTREME" << endl;
    else
        cout << "NORMAL" << endl;
}