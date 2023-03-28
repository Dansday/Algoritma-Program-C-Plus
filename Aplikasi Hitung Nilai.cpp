#include <iostream>
#include <io.h>
using namespace std;
int main()
{
char nim[20],nama[20],prodi[20],matakuliah[20];
float quiz,mid,uas,tugas,akhir;
cout<<"Program Aplikasi Nilai by Akbar Yudhanto"<<endl;
cout<<"Masukkan Nim=";
gets(nim);
cout<<"Masukkan Nama=";
gets(nama);
cout<<"Masukkan Prodi=";
gets(prodi);
cout<<"Masukkan Mata Kuliah=";
gets(matakuliah);
cout<<"Nilai Quiz=";
cin>>quiz;
cout<<"Nilai Mid=";
cin>>mid;
cout<<"Nilai UAS=";
cin>>uas;
cout<<"Nilai Tugas=";
cin>>tugas;
akhir=0.15*quiz+0.25*mid+0.30*tugas+0.30*uas;
cout<<"Nilai Akhir=";
cout<<akhir<<endl;
if(akhir>59)
cout<<"Anda Lulus";
else
cout<<"Anda Tidak Lulus";
return 0;
}
