#ifndef RECTANGLE_H
#define RECTANGLE_H
#include"shape.h"
using namespace std;

class Rectangle:public Shape
{ 
	public:
		Rectangle(float len,float wid)
		{
	 		length = len;
	 		width = wid;
		}
	
		virtual float area()
		{
			return length * width;
		}

	private:
		float length,width;
};

#endif
