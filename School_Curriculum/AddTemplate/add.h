#ifndef ADD_H
#define ADD_H

template<typename T>
class Add
{
private:
	T num1, num2;
public:
	Add()
	{
		num1 = (T)0;
		num2 = (T)0;
	}

	void setNum1(T num1)
	{
		this->num1 = num1;
	}

	void setNum2(T num2)
	{
		this->num2 = num2;
	}

	T add()
	{
		return num1 + num2;
	}
};

#endif
