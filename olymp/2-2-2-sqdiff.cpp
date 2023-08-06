#include <iostream>

using namespace std;

using number = int;
number a, b;
number mod = 1000007;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> a >>b;

	cout <<((a*a-b*b)%mod + mod)%mod;
}
