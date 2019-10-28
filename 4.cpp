#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

typedef struct _point {
    double xPosition;
    double yPosition;
} point;

class Circle // เขียน Class Circle เอง

int main()
{
point initail, to_check_;
    double radius_;

    cout << "Center of Circle: ";
    cin >> initial.xPosition >> initial.yPosition;
    cout << "Radius of Circle: "
    cin >> radius_;
    cout << "Point to Check: ";
    cin >> to_check_.xPosition >> to_check_.yPosition;

    Circle *circle_ = new Circle(initial, radius_);
    cout << "Area of Circle is " << circle_->area() << "\nDistance from Center to Point (" << to_check_.xPosition << ", " << to_check_.yPosition << ") is " << circle_->distanceFromCenter(To_check_) << endl;
    if (!circle_->contains(to_check_)) {
        cout << "This point is not in this circle.";
    } else {
        cout << "This circle contains this point.";
    }
}