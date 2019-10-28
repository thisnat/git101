#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

typedef struct _point {
    double xPosition;
    double yPosition;
} point;

    class Circle{
        private:
        point centerPoint;
        double radius;
        public:
        Circle(point center, double radius){
            this->radius = radius;
            centerPoint.xPosition = center.xPosition;
            centerPoint.yPosition = center.yPosition;
        }
        double area() const{
            return (M_PI) * radius * radius;
        }

        double distanceFromCenter(point pt) const{
            double xsqr = pow((pt.xPosition - centerPoint.xPosition), 2);
            double ysqr = pow((pt.yPosition - centerPoint.yPosition), 2);
            return sqrt(xsqr + ysqr);
        }
        int contains(point pt) const{
            double xsqr = pow((pt.xPosition - centerPoint.xPosition), 2);
            double ysqr = pow((pt.yPosition - centerPoint.yPosition), 2);
            double distance = sqrt(xsqr + ysqr);
            if (distance > radius) return 0;
            else if (distance <= radius) return 1;
        }
    };