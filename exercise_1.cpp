#include <iostream>
using namespace std;

void swap(int* x, int* y);

int main()
{
    int num1, num2;

    cout << "Input the value of 1st element : ";
    cin >> num1;
    cout << "Input the value of 2nd element : ";
    cin >> num2;

    cout << "The value before swapping are : " << endl;
    cout << "element 1 = " << num1 << endl;
    cout << "element 2 = " << num2 << endl;

    swap(&num1, &num2);

    cout << "The value after swapping are: " << endl;
    cout << "element 1 = " << num1 << endl;
    cout << "element 2 = " << num2 << endl;

    return 0;
}

void swap(int* x, int* y)
{
    int temp;

    temp = *x;
    *x = *y;
    *y = temp;
}
