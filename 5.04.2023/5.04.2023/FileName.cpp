#include <iostream>
using namespace std;

//1

//int main()
//{
//	char arr[32]{ "Denyar is tastier than shawarma" };
//
//	for (int i = 0; i < 32; i++)
//	{
//		if (arr[i] == ' ') {
//			arr[i] = '\t';
//		}
//	}  
//
//	for (int i = 0; i < 32; i++)
//	{
//		cout << arr[i];
//	}
//}

//2

//int main()
//{
//	char arr[13]{ "f1bri bf8 21" };
//	int letters = 0, digits = 0, other = 0;
//	for (int i = 0; i < 13; i++)
//	{
//		if (isalpha(arr[i]))
//			letters++;
//		else if (isdigit(arr[i]))
//			digits++;
//		else
//			other++;
//	}
//}

//3

//int main()
//{
//	char arr[32]{ "Denyar is tastier than shawarma" };
//	int res = 1;
//	for (int i = 0; i < 32; i++)
//	{
//		if (arr[i] == ' ') {
//			res++;
//		}
//	}
//	cout << res << endl;
//}

//4 

int main()
{
	int result = 0;
	char arr[]{ "lol" };
	for (int i = 0; i <= 3; i++)
	{
		int result = 0;
		for (int j = 0; j <= 3; j++)
		{
			if (i == j)
				result++;
		}
	}
	if (result == 3)
		cout << "it's a palindrome" << endl;
	else
		cout << "it's not a polydrome" << endl;


}