#include <iostream>
using namespace std;


//1

//int foo(int num1, int num2) 
//{
//	if (num2 < 1)
//		return 1;
// 
//	return num1 * foo(num1, num2 - 1);
//}
//
//int main()
//{
//	int num1{}, num2{};
//	cout << "Enter number: ";
//	cin >> num1;
//	cout << "Enter degree: ";
//	cin >> num2;
//	cout << "Result is: " << foo(num1, num2);
//}

//2

//int foo(int num) 
//{
//	if (num + 1 > 1)
//		cout << '*';
//
//	return foo(--num);
//		return 1;
//}
//int main()
//{
//	int num{};
//	cout << "Enter the number of stars: ";
//	cin >> num;
//	cout << foo(num);
//}

//3

//int foo(int num1, int num2)
//{
//	if (num1 == num2)
//		return 0;
//
//	return num1 + foo(num1 + 1, num2);
//}
//
//int main()
//{
//	int num1{}, num2{};
//	cout << "Enter the first number: ";
//	cin >> num1;
//	cout << "Enter the second number: ";
//	cin >> num2;
//	cout << foo(num1 + 1, num2);
//}

//5

const int length = 5;

int foo(int arr[], int num)
{
	for (int i = 0; i < length; i++)
	{
		if (num < arr[i]) 
		{
			num = arr[i];
		}
	}
	return num;
}

double foo(double arr[], double num)
{
	for (int i = 0; i < length; i++)
	{
		if (num < arr[i])
		{
			num = arr[i];
		}
	}
	return num;
}

