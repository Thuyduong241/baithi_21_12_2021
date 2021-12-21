// baithiso2_21_12_2021.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <math.h>
#include <iomanip>
#include <string>
#include <algorithm>

using namespace std;

struct congnhan {
    string hoten;
    string macongnhan; 
    double hesoluong;
    int ngaycong;
    void input() {
        getline(cin, hoten);
        cin >> macongnhan >> hesoluong >> ngaycong;
    }
};

int main() {
    //bai 2
    congnhan a[5];
    for (int i = 0; i < 5; i++) {
        a[i].input();
    }
    string s;
    cout << "Nhap ma cong nhan ban muon tim kiem: ";
    cin >> s;
    for (int i = 0; i < 5; i++) {
        if (a[i].macongnhan == s) {
            cout << "Ho ten cong nhan: " << a[i].hoten << endl;
            cout << "He so luong cua cong nhan: " << a[i].hesoluong << endl;
            cout << "So ngay cong: " << a[i].ngaycong;
        }
    }
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
