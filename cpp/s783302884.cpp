#include<iostream>
#include<algorithm>
#include<iomanip>
using namespace std;

int main()
{
	//unsigned long long w, h, x, y;5
	double w, h, x, y;
	cin >> w >> h >> x >> y;
	if (x == w / 2 && y == h / 2)
	{
		cout << fixed << setprecision(15) << w * h / 2 << " 1";
	}
	else if (w / x == h / y || w/x == h/(h-y))
	{
		cout << fixed << setprecision(15) << w * h / 2 << " 0";
	}
	else if ((x == 0 || x == w)&&(y == 0 || y == h))

	{
		cout << fixed << setprecision(15) << w * h / 2 << " 0";
	}
	else
	{
		unsigned long long menseki[5];
		menseki[1] = x * y;
		menseki[2] = (w - x) * y;
		menseki[3] = (w - x) * (h - y);
		menseki[4] = x * (h - y);

		unsigned long long mensekia = menseki[1] + menseki[2];
		unsigned long long mensekib = menseki[2] + menseki[3];
		unsigned long long mensekic = menseki[3] + menseki[4];
		unsigned long long mensekid = menseki[1] + menseki[4];

		unsigned long long mensekis1 = min(mensekia, mensekic);
		unsigned long long mensekis2 = min(mensekib, mensekid);
		cout << max(mensekis1, mensekis2);
		if (mensekis1 == mensekis2)
		{
			cout << " 1" << endl;
		}
		else cout << " 0" << endl;
	}

}