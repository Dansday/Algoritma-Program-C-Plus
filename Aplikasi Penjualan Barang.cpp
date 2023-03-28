#include <iostream>
#include <io.h>
using namespace std;
int main()
{
char kb[20],nb[20];
float hb,jb,penjualan,diskon,totalpenjualan;
cout<<"Program Aplikasi Penjualan Barang by Akbar Yudhanto"<<endl;
cout<<"Masukkan Kode Barang=";
gets(kb);
cout<<"Masukkan Nama Barang=";
gets(nb);
cout<<"Masukkan Harga Barang=";
cin>>hb;
cout<<"Jumlah Barang=";
cin>>jb;

penjualan=hb*jb;
cout<<"Penjualan=";
cout<<penjualan<<endl;

if(penjualan>500000){
diskon=penjualan*0.1;
cout<<"Diskon 10%=";
cout<<diskon<<endl;}
else
cout<<"Tidak Diskon"<<endl;

totalpenjualan=penjualan-diskon;
cout<<"Total Penjualan=";
cout<<totalpenjualan<<endl;
cout<<endl;

cout<<"Terima Kasih";
return 0;
}
