#ifndef ADD_H
#define ADD_H
template<typename T>
class Add
{
	public:
		Add(T parameter1, T parameter2)
		{
			this->parameter1 = parameter1;
			this->parameter2 = parameter2;
		}
		void setParameter1(T parameter1)
		{
			this->parameter1 = parameter1;
		}
		T getParameter1()
		{
			return parameter1;
		}
		T plus(){
			return parameter1 + parameter2;
		}
	private:
		T parameter1;
		T parameter2;
};
#endif
		
