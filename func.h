#include<iostream>

#ifndef FUNC_H_
#define FUNC_H_
//namespace YI
//{//namespace YI

class Lingdian
{
private:
	int k,b;
	double A,P,E;

	double GetFunc(double X)const;
public:
	Lingdian();
	void process();
	void show()const;
};

//}//namespace YI

#endif
