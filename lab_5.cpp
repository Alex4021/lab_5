#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	setlocale(0, "");
	int x, n, k;
	double z, y , s, f;
	cout << "Enter z,y,N" << endl;
	cin >> z >> y >> n;
	s = 0;
	k = 0;
	for (x = 1; x <= n, x++)
	{
		f = pow(x, 2) / z - pow(z, 3) / pow(x + y, 2) + pow(x, 2) * pow(2 - y, 2) / pow(x + 2, 2);
		cout << "F=" << f << endl;
		if (x % 2 == 1)
		{
			s = s + f;
			k += 1;
		}
	}
	cout << "Количество нечетных членов: " << k << endl;
	cout << "Сумма нечетных членов: " << s << endl;
	system("pause");
	return 0;
}
