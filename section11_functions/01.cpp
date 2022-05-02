#include<iostream>

using namespace std;
const double pi {3.14159};
void area_circle();
double calc_area_circle(double radius);
void volume_cylinder();

double calc_volume_cylinder ( double radius, double height);
int main()

{
    area_circle();
    volume_cylinder();
    return 0;
}

void area_circle()
{
    cout<<"\n Enter the radius of the circle:";
    double radius{};
    cin>>radius;
    cout<<"The area of a circle with radius "<<radius<<" is "<<calc_area_circle(radius)<<endl;
}
double calc_area_circle(double radius)
{
    return (pi*radius*radius);
}

void volume_cylinder()
{
    cout<<"\nEnter the radius of the cylinder";
    double radius{};
    double height {};
    cin >>radius;
    cout<<"\nEnter the height of the cylinder";
    cin>>height;

    cout<<"The volume with a cylinder with radius "<<radius<<" and height "<< height<< "is" << calc_volume_cylinder(radius,height)<<endl;
}

double calc_volume_cylinder ( double radius, double height)
{

    return (calc_area_circle(radius)*height);
}