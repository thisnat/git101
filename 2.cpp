#include <iostream>
#include <string>

using namespace std;

class Hero 

int main()
{
    int levell,level;
    string namel,name;
    cin >> namel;
    cin >> levell;
    Hero H(namel,levell);
    cout << H.getName() << " " << H.getLevel();
}