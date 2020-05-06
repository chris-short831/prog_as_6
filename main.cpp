#include <iostream>
#include <cmath>
using namespace std;

#define PI 3.1415927

// base container class
class Container {
// protected data members
protected:
float height, width, radius;
// public method
public:
void set_volume(float h, float w, float r)
{
height = h;
width = w;
radius = r;
}
};

// child class Sphere
class Sphere : public Container {
// public method
public:
float volume()
{
float v = (4.0/3)*PI*pow(radius,3);
return v;
}
};

// child class Sphere
class Cylinder : public Container {
// public method
public:
float volume()
{
float v = PI*pow(radius,2)*height;
return v;
}
};

// main function
int main()
{
// declaring objects of Sphere and Cylinder class
Sphere sphere;
Cylinder cylinder;
  
// pointer of Container class referencing the objects
Container *ptrContainer1 = &sphere;
Container *ptrContainer2 = &cylinder;
  
// calling set_volume() using the pointers
// sphere of height = 33.5, width = 0, radius = 25.11
ptrContainer1->set_volume(33.5,0,25.11);
// cylinder of height = 13, width = 0, radius = 15
ptrContainer2->set_volume(13,0,15);
  
// displaying volume
cout << "The volume of sphere is " << sphere.volume() << endl;
cout << "The volume of cylinder is " <<cylinder.volume() << endl;
  
return 0;
}