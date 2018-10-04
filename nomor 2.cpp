#include <iostream>
#include <math.h>
#include <conio.h>
using namespace std;
main ()
{
  	float angka[20], rata = 0,jumlah, deviasi,sd;
	cout<<"masukan jumlah data : "; cin>>jumlah;
	for(int i = 1; i <= jumlah; i++)
	{
		cout<<"masukan nilai angka ke "<<i<< " : "; cin>>angka[i];
		rata = rata + angka[i];
	}
	rata = rata/jumlah;
	for(int i = 1; i <= jumlah; i++)
	{
	  deviasi = deviasi+((angka[i]-rata)*(angka[i]-rata));
	}
	sd=sqrt(deviasi/(jumlah-1));
	cout<<"standar deviasi = "<<sd<<endl;

	getch();
}
