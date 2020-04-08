#include <iostream>
#include "shape.h"
#include "circle.h"
#include "rectangle.h"

// function prototype
void printShape(shape *p);

int main(){

  shape A;
  float a, b, r;
  cout << "Please enter the sides of the Rectangle you wish to create"
       << endl;
  cin >> a >> b;
  cout << "Please enter the radius of the disk you wish to create"
       << endl;
  cin >> r;

  // Call the constructors
  rectangle Box(a,b);
  circle Disk(r);

  // print the areas
  printShape(&A);
  printShape(&Box);
  printShape(&Disk);
  return 0;
}

void printShape(shape *p){
cout << "The area of your shape is: " << p->area()<<endl;
}
