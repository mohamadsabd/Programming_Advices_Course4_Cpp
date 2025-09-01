#include <iostream>
#include <string>

using namespace std;

struct stInfo
{
    string FirstName;
    string LastName;
};

stInfo ReadInfo()
{
    stInfo info;

    cout << "Please Enter Your First Name : ";
    getline(cin, info.FirstName);

    cout << "\nPlease Enter Your Last Name : ";
    getline(cin, info.LastName);

    return info;
}

string GetFullName(stInfo info)
{
    return info.FirstName + " " + info.LastName;
}

void PrintFullName(string fullname)
{
    cout << "\nThe Full Name is : " << fullname << "\n";
}


int main()
{
    PrintFullName(GetFullName(ReadInfo()));
    return 0;
}
