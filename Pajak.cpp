#include <iostream>
using namespace std;
float x,y;
float z;
float pajak ( float A, float B)
{
 float C;
 C = (A*B)*0.1;
 return C;
};
int main ()
{
 cout<<"Harga = "<<endl;
 cin>>x;
 cout<<"Jumlah Porsi = "<<endl;
 cin>>y;
 z=pajak (x,y);
 cout<<"Pajak = ";
 cout<<z<<endl;
}
