#include <iostream>
#include <string.h>
#include <conio.h>
using namespace std;
int main()
{
	char kata[20];
	int w;
	cout<<"masukan kata : "; cin>>kata;
	w=strlen(kata);
	for(int i=w; i>=0; i--)
	{
		for(int j = 0; j<i; j++)
		{
			cout<<kata[j];
		}
		cout<<endl;
	}
getch();
}
