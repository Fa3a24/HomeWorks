#include <iostream>
using namespace std;

//2

int length = 5;

//void average(int arr[]) 
//{
//    int sum = 0;
//    for (int i = 0; i < length; i++) {
//        sum += arr[i];
//    }
//    cout << sum / length << endl;
//}
//int main()
//{
//int arr[] = { 1, 2, 3, 4, 5 };
//average(arr);
//}

//3

void funk(int arr[])
{
    int positive, negative, zero;
    positive = negative = zero = 0;
    for (int i = 0; i < length; i++) {
        if (arr[i] > 0) {
            positive++;
        }
        else if (arr[i] < 0) {
            negative++;
        }
        else {
            zero++;
        }
    }
    cout << "positive: " << positive << endl << "negative: " << negative << endl << "zero: " << zero << endl;
}

int main()
{
    int arr[] = { -1, 0, 2, 3, -4 };
    funk(arr);
}