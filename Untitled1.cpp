#include <iostream>
using namespace std ;
int main()
{
	double i; //so tien gui
	double n; //lai xuat 
 	double k; //so tien ky vong
	cout<<"Nhap so tien gui:";
	cin>>i;
	cout<<"Nhap lai xuat (%):";
	cin>>n;
	cout<<"Nhap so tien ky vong:";
	cin>>k;
	double e=0;
	while(i<k)
	{
		i=i+(i*(n/100));
		e=e+1;
	}
	cout<<"so nam de dat duoc so tien ky vong:"<<e;
	return 0;
}
