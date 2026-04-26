#include <iostream>
#include <string>

using namespace std;

int main()
{
    string name, surname;
    int age = 123;
    
    cin >> name;
    cin >> surname;

    cout << "Hello " << name << " " << surname << endl;
    cout << name[0] << name[1] << surname[0] << surname[1] << endl;

    return 0;
}