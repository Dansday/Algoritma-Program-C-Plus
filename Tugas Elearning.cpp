#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
 int i;
 int kb[5];
 int jumlah[5];
 int hb[5];
 int dc[5];
 int pnj[5];
 int pb[5];
 int totalpb=0;
 int totalpnj=0;
 int totaldc=0;
 
 for(i=0;i<5;i++)
 {
 cout<<"Masukkan kode barang ke-"<<i+1<<" =";
 cin>>kb[i];
 fflush(stdin);
 
 cout<<"Masukkan jumlah barang ke-"<<i+1<<" =";
 cin>>jumlah[i];
 fflush(stdin);
 
 if(kb[i]==1)
 hb[i]=20000;
 
 else if(kb[i]==2)
 hb[i]=15000;
 
 else if(kb[i]==3)
 hb[i]=10000;
 
 else
 hb[i]=8000;
 
 pnj[i]=hb[i]*jumlah[i];
 
 if(pnj[i]>=500000)
 {
  dc[i]=pnj[i]*0.1;
 }
 else
 
 {
  dc[i]=0;
 }
 pb[i]=pnj[i]-dc[i];
 
 totalpb=totalpb+pb[i];
 totalpnj=totalpnj+pnj[i];
 totaldc=totaldc+dc[i];
}
 cout<<"LAPORAN PENJUALAN BARANG by Akbar Yudhanto"<<endl;
  cout<<"======================"<<endl;
  cout<<"---------------------------------------------------------"<<endl;
  cout<<"NO  KODEBARANG  HARGA  JUMLAH  PENJUALAN  DISKON  BERSIH"<<endl;
  cout<<"---------------------------------------------------------"<<endl;
  for(i=0;i<5;i++)
  {
   cout<<i+1<<" 	"<<kb[i]<<" 	"<<hb[i]<<" 	"<<jumlah[i]<<" 	"<<pnj[i]<<"  	   "<<dc[i]<<" 	  "<<pb[i]<<"  "<<endl;
  }
   cout<<"TOTAL=    			"<<totalpnj<<"     "<<totaldc<<"      "<<totalpb<<"  "<<endl;
  return 0;
}
