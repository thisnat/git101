#include <iostream>
#include <string>
using namespace std;
class Hero {
    private:
      string name ;
      int level ;

    public:
     Hero (string n , int num) {
         name = n ;
         level = num ;
     }
    string  getName() {
        return name ;
    }
    int getLevel() {
        return level ;
    }
};