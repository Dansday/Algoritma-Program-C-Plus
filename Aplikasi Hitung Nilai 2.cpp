#include <iostream>
#include <io.h>
using namespace std;
int main()
{
char nim[20],nama[20],prodi[20],matakuliah[20];
float quiz,mid,uas,tugas,akhir;
cout<<"Program Aplikasi Nilai by Akbar Yudhanto"<<endl;
cout<<"//////////////////////////////////////////////"<<endl;
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
cout<<"//////////////////////////////////////////////"<<endl;
//////////////////////////////////////////////
akhir=0.15*quiz+0.25*mid+0.30*tugas+0.30*uas;
cout<<"Nilai Akhir=";
cout<<akhir<<endl;
cout<<"//////////////////////////////////////////////"<<endl;
/////////////////////////////////////////////
if(akhir>=80&&akhir<=100){
cout<<"Grade A"<<endl;
cout<<"Mutu 4";}
/////////////////////////////////////////////
else if(akhir>=75&&akhir<=79.99){
cout<<"Grade B+"<<endl;
cout<<"Mutu 3.5";}
/////////////////////////////////////////////
else if(akhir>=70&&akhir<=74.99){
cout<<"Grade B"<<endl;
cout<<"Mutu 3";}
/////////////////////////////////////////////
else if(akhir>=65&&akhir<=69.99){
cout<<"Grade C+"<<endl;
cout<<"Mutu 2.5";}
/////////////////////////////////////////////
else if(akhir>=60&&akhir<=64.99){
cout<<"Grade C"<<endl;
cout<<"Mutu 2";}
/////////////////////////////////////////////
else if(akhir>=55&&akhir<=59.99){
cout<<"Grade D+"<<endl;
cout<<"Mutu 1.5";}
/////////////////////////////////////////////
else if(akhir>=50&&akhir<=54.99){
cout<<"Grade D"<<endl;
cout<<"Mutu 1";}
/////////////////////////////////////////////
else if(akhir>=0&&akhir<=49.99){
cout<<"Grade E"<<endl;
cout<<"Mutu 0";}
/////////////////////////////////////////////
else
cout<<"Anda salah inputkan nilai!!!";
return 0;
}
