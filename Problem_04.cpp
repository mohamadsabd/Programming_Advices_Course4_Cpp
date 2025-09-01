#include <iostream>
#include <string>

using namespace std;

struct stInfo
{
    int age;
    bool hasdrivinglicense;
};

stInfo ReadInfo()
{
    stInfo Info;
    cout << "Please enter your age : ";
    cin >> Info.age;

    cout << "\nDo you have driver license ? [1] Yes [0] No : ";
    cin >> Info.hasdrivinglicense;

    return Info;
}

bool isAccepted(stInfo info)
{
    return (info.age > 21 && info.hasdrivinglicense); //Acceptance Condition Age > 21 and Has a driver license
}

void PrintResult(stInfo info)
{
    if (isAccepted(info))
        cout << "\nHire\n";
    else
        cout << "\nRejected\n";
}

int main()
{
    PrintResult(ReadInfo());
    return 0;
}
