#include <iostream>
using namespace std;

using number = int;
number n, m;
number a[1005];

number norm(number v, number m)
    {
        return ((v%m)+m)%m;
    }
number f(number x, number m)
{
    number r=0;
	for (number i = 0; i <= n; ++i)
    {
        r*=x;
        r+=a[i];
        r=norm(r, m);
    }
    return r;
}

number sum = 0;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> n >> m;
	for (number i = 0; i <= n; ++i)
	{
		cin >> a[i];
    }

	for (number i = 0; i < m; ++i)
	{
		if(f(i, m) == 0)
        {
            cout<<i;
            return 0;
        }
    }
	cout <<-1;
}
