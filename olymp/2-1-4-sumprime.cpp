#include <iostream>
using namespace std;

using number = int;
number n;

number get_first(number n)
{
    if (n==2) return 0;
    if(n%2==0)  return 2;

    for (number i=3; i*i <= n; i+=2)
    {
        if (n%i == 0)  return i;
    }
    return 0;
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> n;

    number sum = 0;
	for (number i = 4; i <= n; ++i)
	{
		sum+=get_first(i);
	}	
	cout <<sum;
}
