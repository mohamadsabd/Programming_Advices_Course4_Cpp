#include <iostream>
#include <string>

using namespace std;

struct stInfo
{
    int age;
    bool hasdriverlicense;
    bool hasrecommendation;
};

stInfo ReadInfo()
{
    stInfo info;

    cout << "Please Enter Your Age ? ";
    cin >> info.age;

    cout << "\nDo you have driver license ? [1] yes [0] no : ";
    cin >> info.hasdriverlicense;

    cout << "\nDo you have recommendation ? [1] yes [0] no : ";
    cin >> info.hasrecommendation;

    return info;
}

bool isAccepted(stInfo info)
{
    return info.hasrecommendation ? true : (info.age > 21 && info.hasdriverlicense);
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
