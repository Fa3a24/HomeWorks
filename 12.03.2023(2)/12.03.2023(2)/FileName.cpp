#include <iostream>
using namespace std;

//1

//void funk(int num, int degree)
//{
//	int num2 = num;
//	for (int i = 1; i < degree; i++)
//	{
//		num *= num2;
//	}
//
//	cout << num << endl;
//}
//
//int main()
//{
//	int num=2, degree=2;
//
//	funk(num, degree);
//}

//2

//void funk(int num1, int num2) 
//{
//    int result = 0;
//    for (int i = num1 + 1; i < num2; i++) {
//        result += i;
//    }
//    cout << result << endl;
//}
//
//int main() 
//{
//    int num1 = 1, num2 = 5;
//    funk(num1, num2);
//}

//3

//bool perfect(int num) 
//{
//    int sum = 0;
//    for (int i = 1; i < num; i++) {
//        if (num % i == 0) {
//            sum += i;
//        }
//    }
//    return sum == num;
//}
//
//void funk(int start, int end) 
//{
//    for (int num = start; num <= end; num++) {
//        if (perfect(num)) {
//            cout << num << " is a perfect number" << endl;
//        }
//    }
//}
//
//int main()
//{
//    int start = 1, end = 10000;
//    funk(start, end);
//}
