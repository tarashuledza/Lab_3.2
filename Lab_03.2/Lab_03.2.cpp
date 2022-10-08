#include <iostream>
using namespace std;
int main()
{
	double x;
	double a;
	double b;
	double c;
	double F;
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;
	cout << "x = "; cin >> x;

	if (c < 0 && b != 0)
		F = a * x * x + b * b * x;
	else
		if (c > 0 && b == 0)
			F = (x + a) / (x + c);
		else
			F = x / c;
	cout << "F = " << F << endl;

	cin.get();
	return 0;
}
