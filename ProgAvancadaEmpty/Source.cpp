#include <iostream>
#include "NumberTwoException.h"
#include "NumberThreeException.h"

using namespace std;

void C(int x)
{
	if (x == 3) throw NumberThreeException("Number 3 means bronze medal. You can do better.");

	cout << "We all love number " << x << endl;
}

void B(int x)
{
	if (x == 2) throw NumberTwoException("Number 2 is not nice, you should dream bigger.");
	C(x);
}

void A(int x)
{
	try {
		B(x);
	}
	catch (Exception &ex) {
		cout << "Execution stopped with the following error: " << ex.getMessage() << endl;
	}
}

int main()
{
	A(1);

	system("pause");
	return 0;
}