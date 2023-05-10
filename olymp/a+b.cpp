#include <iostream>

using namespace std;

using number = int;
number a, b;

number sum = 0;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> a >> b;

    sum = a+b;

	cout <<sum;
}
