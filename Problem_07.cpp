#include <iostream>
#include <string>

using namespace std;

int ReadNumber()
{
    int number = 0;
    cout << "Please enter a number : ";
    cin >> number;
    return number;
}

float CalculateHalfNumber(int number)
{
    return (float)number / 2;
}

void PrintResult(int number)
{
    cout << "\nHalf of " << number << " is " << CalculateHalfNumber(number) << "\n";
}
int main()
{
    PrintResult(ReadNumber());
    return 0;
}
