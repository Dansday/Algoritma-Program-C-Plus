#include <iostream>
using namespace std;
int main()
{
int Jam,Menit,Detik;
cout<<"Program Danto"<<endl;
cout<<"Masukkan Jam=";
cin>>Jam;
cout<<"Masukkan Menit=";
cin>>Menit;
Detik=Jam*3600+Menit*60;
cout<<"Detik=";
cout<<Detik;
return 0;
}
