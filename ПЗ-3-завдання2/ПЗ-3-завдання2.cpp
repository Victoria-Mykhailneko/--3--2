// ПЗ-3-завдання2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    double a, b, h, R, S;

    cout << "Введіть номер фігури (1-прямокутник, 2-трикутник, 3-трапеція, 4-коло): ";
    cin >> n;

    switch (n) {
    case 1:
        cout << "Введіть сторони a і b: ";
        cin >> a >> b;
        S = a * b;
        break;
    case 2:
        cout << "Введіть основу a і висоту h: ";
        cin >> a >> h;
        S = (a * h) / 2;
        break;
    case 3:
        cout << "Введіть основи a і b та висоту h: ";
        cin >> a >> b >> h;
        S = (a + b) / 2 * h;
        break;
    case 4:
        cout << "Введіть радіус R: ";
        cin >> R;
        S = PI * R * R;
        break;
    default:
        cout << "Невірний номер фігури!" << endl;
        return 1;
    }

    cout << "Площа фігури: " << S << endl;
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
