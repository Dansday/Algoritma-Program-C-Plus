#include <iostream>
using namespace std;
int main()
{
	int x=1;
	int hasil;
	while (x<=10)
	{
		cout<<x<<"*";
		hasil=hasil*x;
		x++;
	}
	cout<<"="<<hasil;
	return 0;
}
