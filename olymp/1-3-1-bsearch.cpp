#include <iostream>

using namespace std;

int main()
{

	int n;
	int m;
	cin >> n >> m;
	
	for( int i = 0; i < m; ++i)
	{
		int k;
		cin >> k;
		int l = -1;
		int r = n;
		int count = 0;

		while (l+1<r)
		{
			int mid = (l+r)/2;
			if (mid<k)
				l = mid;
			else
				r = mid;
			++count;
		}
		cout << count << "\n";
	}
}
