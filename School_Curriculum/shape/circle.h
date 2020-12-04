#ifndef CIRCLE_H
#define CIRCLE_H
#include"shape.h"
using namespace std;

class Circle:public Shape
{ 
	public:
		Circle(float radius)
		{
			this->radius = radius;
		}

		void setRadius(float radius)
		{
			this->radius = radius;
		}

		float getRadius()
		{
			return radius;
		}

		virtual float area()
		{
			return radius * radius * 3.14;
		}

	private:
		float radius;
};

#endif
