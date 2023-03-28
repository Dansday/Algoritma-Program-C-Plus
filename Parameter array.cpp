#include<iostream>
using namespace std;
void isiarray(int A[], int N)
{
	int i;
	for(int i=0;i<N;i++)
	  {cout<<"Masukkan elemen ke-"<<i+1<<"=";
	  cin>>A[i];
	  }
}
//////////////////////////////////////////////
void tampilarray(int A[], int N)
{
	int i;
	for(int i=0;i<N;i++)
	  {
	  cout<<"Elemen ke-"<<i+1<<"=";
	  cout<<A[i]<<endl;
      }
}
/////////////////////////////////////////////
int tampilmax(int A[], int N)
{
	int i, max=0;
	for(i=0;i<N;i++)
	{
		if (A[i]>max)
		{max=A[i];}
	}
	return max;
}
/////////////////////////////////////////////
int tampilmin(int A[], int N)
{
	int i, min=100;
	for(i=0;i<N;i++)
	{
		if (A[i]<min)
		{min=A[i];}
	}
	return min;
}
///////////////////////////////////////////////
int main()
{
	int nilai[100], size;
	cout<<"Masukkan banyak elemen= ";
	cin>>size;
	isiarray(nilai, size);
	tampilarray(nilai, size);
	cout<<"Nilai Terbesar= "<<tampilmax(nilai, size)<<endl;
	cout<<"Nilai Terkecil= "<<tampilmin(nilai, size);
}
