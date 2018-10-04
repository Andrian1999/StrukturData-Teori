#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	int angka[20], nilai_akhir = 0,jumlah;
	cout<<"masukan jumlah data : "; cin>>jumlah;
	for(int i = 1; i <= jumlah; i++)
	{
		cout<<"masukan nilai angka ke "<<i<< " : "; cin>>angka[i];
		nilai_akhir = nilai_akhir + angka[i];  
	}
	nilai_akhir = nilai_akhir/jumlah;
	cout<<"nilai rata-rata = "<<nilai_akhir;
	getch();
}
