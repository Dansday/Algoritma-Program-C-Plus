#include <iostream>
using namespace std;
int nk;
int waktu;
int kendaraan;
int biaya;
int main()
{
cout<<"PROGRAM PARKIR KENDARAAN MOTOR DAN MOBIL"<<endl;
cout<<"Nomor Kendaraan : ";
cin>>nk;
cout<<"Masukkan Lama Parkir (jam): ";
cin>>waktu;
cout<<"Jenis Kendaraan (1. Mobil  2. Motor) : ";
cin>>kendaraan;

if (kendaraan=1)
   cout<<"biaya: 5000"<<endl;
else
  cout<<"biaya: 1000"<<endl;
  
return 0;
}
