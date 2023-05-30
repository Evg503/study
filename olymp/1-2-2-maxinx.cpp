#include <iostream>

using namespace std;

int n;

long long sum = 0;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> n;

	int max;
	int idx = 1;
	cin >> max;
	for (int i = 2; i <= n; ++i)
	{
		int a;
		cin >> a;
		if (max<a){
			idx = i;
			max = a;
		}
	}	
	cout <<idx;
}
