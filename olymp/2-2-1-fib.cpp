#include <iostream>

using namespace std;

using number = int;
number n;
number mod = 1000003;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> n;
    number f0=0;
    number f1=1;
	for (number i = 0; i < n; ++i)
	{
		number a = (f0+f1) % mod;
        f0 = f1;
        f1 = a;
	}	
	cout <<f1;
}
