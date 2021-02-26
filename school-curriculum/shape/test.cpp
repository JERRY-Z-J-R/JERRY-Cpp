#include <iostream>
#include"shapeservice.h"
#include"circle.h"
#include "rectangle.h"
using namespace std;

int main(int argc, char** argv)
{
   ShapeService shapeService;
   Circle circle(10);
   Rectangle rectangle(5,10);
   
   cout << shapeService.shapeArea(circle) << endl;
  
   cout << shapeService.shapeArea(rectangle) << endl;

	return 0;
}
