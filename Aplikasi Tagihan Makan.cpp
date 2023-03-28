#include <iostream>
using namespace std;
int main(void)
{
 int HM, TH, B, TG, JPO, disc, Pa;
 string NM, JP, KM;
 
 cout<<"aplikasi tagihan makan by Danto"<<endl;
 cout<<"--------------------------------"<<endl;
 cout<<" Nomor meja  : ";
 cin>>NM;
 cout<<" Jenis pelanggan : ";
 cin>>JP;
 cout<<" Kode menu  : ";
 cin>>KM;
 cout<<" jumlah porsi  : ";
 cin>>JPO;
 
  if (KM=="a")
  {
   HM=50000;
   cout<<" Harga per Porsi : Rp. 50000"<<endl;
  }
  else if (KM=="b")
  {
   HM=40000;
   cout<<" Harga per Porsi  : Rp. 40000"<<endl;
  }
  else if (KM=="c")
  {   
   HM=30000;
   cout<<" Harga per Porsi  : Rp. 30000"<<endl;
  }
  else if (KM=="d")
  {
   HM=20000;
   cout<<" Harga per Porsi  : Rp. 20000"<<endl;
  }
  else
  {
   HM=10000;
   cout<<" Harga per Porsi  : Rp. 10000"<<endl;
  }
 
 TH=HM*JPO;
 cout<<" Total Harga  : Rp. "<<TH<<endl;
 
 cout<<" Diskon   : Rp. ";
  if (JP=="member")
  {
   disc=0.1*TH;
   cout<<disc<<endl;
  }
  else
  {
   disc=0;
   cout<<"0"<<endl;
  }
 
 B=TH-disc;
 
 Pa=0.1*B;
 cout<<" Pajak   : Rp. "<<Pa<<endl;
 
 TG=B+Pa;
 cout<<" Total Tagihan  : Rp. "<<TG<<endl;
 
 return 0;
}
