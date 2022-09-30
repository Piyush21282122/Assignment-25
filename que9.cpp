
#include<iostream>
#include<conio.h>
#define  PI 3.14
using namespace std;

class Circle
{
    private:
       int radius;
       float area;
    public:
       void setR(int R)
       {
         radius = R;
       }
       int getR()
       {
         return radius;
       }
       float getArea()
       {
         return area;
       }
       void calculateCircleArea()
       {
          area = PI * radius * radius;
       }
};

int main()
{
    Circle c1,c2;

    c1.setR(5);
    c1.calculateCircleArea();
    cout<<" Area of Circle is "<<c1.getArea();
    cout<<endl;

    c2.setR(8);
    c2.calculateCircleArea();
    cout<<" Area of Cricle is "<<c2.getArea();
    cout<<endl;

    getch();
    return 0;

}