#include<iostream>
using namespace std;
int n;
void ULANG(char kar, int jum)
{
 for (int i=1;i<=jum;i++)
 {
  cout<<kar;
 }
 cout<<endl;
}
int main ()
{
 cout<<"Masukan Nilai = ";
 cin>>n;
 
 if (n%2==0)
 ULANG ('*',n);
 
 else
 ULANG ('#',n);
return 0;
}
