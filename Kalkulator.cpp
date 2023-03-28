#include<iostream>
using namespace std;
float x,y;
int z;
float tambah(float A, float B)
{
 float C;
 C = A+B;
 return C;
};

float kurang (float A, float B)
{
 float C; 
 C = A-B;
 return C;
};

float kali (float A, float B)
{
 float C;
 C = A*B;
 return C;
};

float bagi (float A, float B)
{
 float C;
 C = A/B;
 return C;
};

int main ()
{
 cout<<"------------------"<<endl;
 cout<<"Kalkulator Menu :"<<endl;
 cout<<"1. Tambah"<<endl;
 cout<<"2. Kurang"<<endl;
 cout<<"3. Kali  "<<endl;
 cout<<"4. Bagi  "<<endl;
 cout<<"------------------"<<endl;
 cout<<"Masukan Pilihan = ";
 cin>>z;
 cout<<"Masukan Nilai A = ";
 cin>>x;
 cout<<"Masukan Nilai B = ";
 cin>>y;

 if (z==1)
 {
 z=tambah (x,y);
 cout<<"Hasil = ";
 cout<<z;
 }

 else if (z==2)
 {
 z=kurang (x,y);
 cout<<"Hasil = ";
 cout<<z;
 }
 
 else if (z==3)
 {
 z=kali (x,y);
 cout<<"Hasil = ";
 cout<<z;
 }

 else if (z==4)
 {
 z=bagi (x,y);
 cout<<"Hasil = ";
 cout<<z;
 }
 
 return 0;
}
