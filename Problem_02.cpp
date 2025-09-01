#include <iostream>
#include <string>

using namespace std;

string ReadName()
{
    string name = "";
    cout << "Please Enter The Name : ";
    getline(cin, name);
    return name;
}

void PrintName(string name)
{
    cout << "\nYour Name is : " << name << "\n";
}

int main()
{
    PrintName(ReadName());
    return 0;
}

