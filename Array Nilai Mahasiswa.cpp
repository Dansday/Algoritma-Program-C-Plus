#include <iostream>
using namespace std;
int main()
{
 int a[5];
 int i;
 int max=0;
 int min=1000;
 int total=0;
 float rata=0;
 cout<<"Memasukan Nilai Mahasiswa"<<endl;
 for (i=0; i<5; i++)
 {
  cout<<"Nilai Mahasiswa - "<<i<<" =";
  cin>>a[i];
   if (a[i]>max)
   max= a[i];
  if (a[i]<min)
  min= a[i];
  total= total+a[i];
 }
 rata=total/5;
 cout<<"------------------------"<<endl; 
 cout<< "Masukan Terbesar ="<<max<<endl;
 cout<<" Nilai Terkecil ="<<min<<endl;
 cout<<" Nilai Total ="<<total<<endl;
 cout<<" Nilai rata-rata ="<<rata<<endl;
 
 return 0;
}
