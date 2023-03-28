#include<iostream>
using namespace std;
int main()
{
	int X[5];
	int i;
	int y=0;
	int total=0;
	int NIM[5];
	char nama[5][100];
	float avg;
	int max=0;
	int min=100;
	cout<<"Masukkan Data Mahasiswa"<<endl;
	cout<<"======================="<<endl;
	for (i=0;i<5;i++)
	{
		cout<<"Masukkan NIM-ke "<<i+1<<"              =";
		cin>>NIM[i];
		cout<<"Masukkan Nama-ke "<<i+1<<"             =";
		cin>>nama[i];
		cout<<"Masukkan Nilai Mahasiswa-ke "<<i+1<<"  =";
		cin>>X[i];
		cout<<endl;
		
		if (X[i]>max)
		max=X[i];
		if (X[i]<min)
		min=X[i];
		total=total+X[i];
	}
		avg=total/5;
		
		cout<<"DAFTAR NILAI MAHASISWA"<<endl;
		cout<<"======================"<<endl;
		cout<<"---------------------------------------------------------"<<endl;
		cout<<"No          NIM             NAMA           NILAI"<<endl;
		cout<<"---------------------------------------------------------"<<endl;
		for(i=0;i<5;i++)
		{
			cout<<i+1<<"    "<<"      "<<NIM[i]<<"             "<<nama[i]<<"                    "<<X[i]<<"    "<<endl;
		}
		cout<<"---------------------------------------------------------"<<endl;
		cout<<"Nilai Mahasiswa Terbesar   ="<<max<<endl;
		cout<<"Nilai Mahasiswa Terkecil   ="<<min<<endl;
		cout<<"Nilai Total                ="<<total<<endl;
		cout<<"Nilai Rata-Rata            ="<<avg<<endl;
	return 0;
}
