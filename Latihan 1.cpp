#include <iostream>
#include <conio.h>
#define max 10
#include <cstdlib>
using namespace std;

//inisialisasi stack
struct Tumpukan {
	int atas ;
	char data [max];
}T;

//inisialisasi T awal
void awal(){
	T.atas=-1;
}

//inisialisasi Tumpukan apabila kosong
int kosong (){
	if (T.atas == -1)
	return 1;
	else
	return 0;
}

//pengecekan Tumpukan apabila penuh
int penuh (){
if (T.atas==max-1)
return 1;
else
return 0;
}

//proses input data
void input (char data){
	if (kosong ()==1)
		{T.atas ++ ;
		T.data [T.atas]=data;
		
		cout<<"Data " <<T.data[T.atas]<<"masuk ke stack";
		}
	else if (penuh()==0)
	{T.atas++;
	T.data [T.atas]=data;
	cout<<"Data "<<T.data[T.atas]<<" masuk ke stack";
	}
	else
		cout<<"Tumpukan penuh";
}

//proses hapus
void hapus(){
	if (kosong()==0){
		cout <<"Data teratas sudah teambil";
	T.atas--;
	}
	else
	cout<<"Data kososng";
}

//tampil data
void tampil (){
	cout <<"isi tumpukan"<<endl;
	if (kosong()==0)
	{
		for (int i=T.atas ; i>=0 ; i--)
		{
			cout <<T.data[i]<<endl;
		}
	}
	else
	cout <<"tumpukan kosong";
}

//menghapus tumpukan
void bersih(){
	T.atas=-1;
	
	cout<<"Tumpukan kosong!";
}
int main (){
	int pil ;
	char data;
	awal();
	do
	{
		//program menu stack
	system ("CLS");
	cout<<"Menu stack"<<endl;
	cout<<"1.push\n 2. pop\n 3. tampil\n 4. bersihkan\n 5. 	keluar\n masukkan pilihan ;";
	cin>>pil;
	switch (pil)
	{case 1 : cout<<"masukkan data = "; cin>>data;
	input(data);
	break;
	
	case 2 : hapus();
	break;
	
	case 3: tampil();
	break;
	
	case 4: bersih ();
	break;
	
	case 5 : cout<<"Terimakasih, tekan enter untuk keluar";
	}
	getch();
}
while (pil!=5);
}
