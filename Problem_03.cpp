#include <iostream>
#include <string>

using namespace std;

enum enNumberType { Odd = 1, Even = 2 };

int ReadNumber()
{
    int number = 0;
    cout << "Please enter a number : ";
    cin >> number;
    return number;
}

enNumberType CheckNumberType(int number)
{
    return number % 2 == 0 ? enNumberType::Even : enNumberType::Odd;
}

void PrintNumberType(enNumberType NumberType)
{
    if (NumberType == enNumberType::Even)
        cout << "Number is Even\n";
    else
        cout << "Number is Odd\n";
}

int main()
{
    PrintNumberType(CheckNumberType(ReadNumber()));
    return 0;
}