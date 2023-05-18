#include <iostream>
using namespace std;

//1

//int main() {
//    setlocale(LC_ALL, "Russian");
//    int num;
//    cout << "введите число ";
//    cin >> num;
//
//    int arr[3][3]; 
//    arr[0][0] = num;
//
//  
//    for (int i = 0; i < 3; i++) {
//        for (int j = 0; j < 3; j++) {
//            if (j == 0 && i > 0) {
//                arr[i][j] = arr[i - 1][j] * 2; 
//            }
//            else if (j > 0) {
//                arr[i][j] = arr[i][j - 1] * 2; 
//            }
//        }
//    }
//
//    for (int i = 0; i < 3; i++) {
//        for (int j = 0; j < 3; j++) {
//            cout << arr[i][j] << ' ';
//        }
//    }
//}

//2

//int main() {
//    setlocale(LC_ALL, "Russian");
//    int num;
//    cout << "введите число ";
//    cin >> num;
//
//    int arr[3][3]; 
//    arr[0][0] = num; 
//
//    
//    for (int i = 0; i < 3; i++) {
//        for (int j = 0; j < 3; j++) {
//            if (j == 0 && i > 0) {
//                arr[i][j] = arr[i - 1][j] + 1; 
//            }
//            else if (j > 0) {
//                arr[i][j] = arr[i][j - 1] + 1;
//            }
//        }
//    }
//
//    
//    cout << "Вывод массива:\n";
//    for (int i = 0; i < 3; i++) {
//        for (int j = 0; j < 3; j++) {
//            cout << arr[i][j] << " ";
//        }
//    }
//}