#include <iostream>
using namespace std;
int main()
{
	int x=10;
	int hasil;
	while (x>=2)
	{
		cout<<x<<"+";
		hasil=hasil+x;
		x-=2;
	}
	cout<<"="<<hasil;
	return 0;
}
