#include <iostream>
#include <string>

using namespace std;

int ReadMark()
{
    int mark = 0;
    do
    {
        cout << "Please enter the mark : ";
        cin >> mark;
    } while (mark < 0 || mark > 100);   //The Mark Should not be > 100 or < 0
    return mark;
}

bool CheckMark(int mark)
{
    return mark >= 60;   //Success Condition Mark > 60
}

void PrintResult(int mark)
{
    if (CheckMark(mark))
        cout << "\nSuccessful\n";
    else
        cout << "\nFailde\n";
}

int main()
{
    PrintResult(ReadMark());
    return 0;
}
