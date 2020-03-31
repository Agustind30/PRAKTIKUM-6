#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;


int main(int argc, char** argv) 
{
	char kata [35] = "UNESA" ;
	int inputkata ;
	int i ;
	
	cout<<"=== STACK MENGEMBALIKAN KATA === \n" ;
	
	cout<< "Kata yang dimasukkan adalah : " <<kata<<endl;
	inputkata = strlen (kata) ;
	cout <<"Kata dibalik menjadi :" ;
		for (i=inputkata; i>=1;i--)
		{
			char stack =kata[i-1];
			cout<< stack;
		}
	getch();
	return 0;
}
