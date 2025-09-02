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

int SumOf3Numbers(int number1, int number2, int number3)
{
    return number1 + number2 + number3;
}

void PrintResult(int total)
{
    cout << "\nThe total of sum numbers is : " << total << "\n";
}

int main()
{
    int number1 = ReadNumber();
    int number2 = ReadNumber();
    int number3 = ReadNumber();

    PrintResult(SumOf3Numbers(number1, number2, number3));
    return 0;
}
