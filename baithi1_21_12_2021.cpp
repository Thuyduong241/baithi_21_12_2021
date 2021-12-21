// baithi1_21_12_2021.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include<iostream>
#include<string>
using namespace std;

int main() {
    int n;
    int arr[100];
    cout << "Nhap vao phan tu n: "; 
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
            
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}