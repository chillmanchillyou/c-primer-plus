#include <iostream>
using namespace std;
int main()
{
	if (typeid(20000000000) == typeid(long))
	{
		cout << "yes" << endl;
	}
	return 0;
}
