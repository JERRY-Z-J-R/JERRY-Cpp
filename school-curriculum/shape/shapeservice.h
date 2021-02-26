#ifndef SHAPESERVICE_H
#define SHAPESERVICE_H
#include"shape.h"
using namespace std;

class ShapeService
{ 
	public:
		float shapeArea(Shape &shape)
		{
			return shape.area();
		}
};

#endif
