#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	double tienvon;
	double tienkivong;
	double nam;
	double laisuat;
	double a,b;
	cout<<"Nhap vao so tien von: ";
	cin>>tienvon;
	cout<<"Nhap vao lai suat: ";
	cin>>laisuat;
	cout<<"Nhap vao so tien ki vong: ";
	cin>>tienkivong;
	laisuat= double(laisuat/100);
	a= double(tienkivong/tienvon);
	b= double(1+laisuat);
	if(tienkivong>tienvon)
{
	nam=double(log(a)/log(b));
	cout<<"So nam can thiet de dat so tien ki vong :"<<nam;
}
	else
{
	cout<<"khong hop le.";
}
	return 0;
}

