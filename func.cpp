#include"func.h"
#include<climits>
#include<float.h>
using namespace std;

Lingdian::Lingdian()
{
	cout<<"作者水平有限，仅限一次函数，仅限R上增函数"<<endl<<"请输入(整数类型) “k(空格)b(回车):”"<<endl;
	cin>>k>>b;

	A=-1000;//DBL_MIN;
        P=0;
        E=1000;

}

double Lingdian::GetFunc(double X)const
{
	return(this->k*X+this->b);
}

void Lingdian::process()
{
	for(int i=0;i<1000;i++)
	{
	if(GetFunc(P)>0){A=A;E=P;P=(A+P)/2;}
	if(GetFunc(P)<0){A=P;P=(P+E)/2;E=E;}
//	cout<<i+1<<":     "<<"A="<<A<<"      E="<<E<<endl;
	}
}


void Lingdian::show()const
{
//	cout<<"零点在区间("<<A<<","<<E<<")上"<<endl;
	cout<<"零点大概在: x="<<A<<endl;
}
