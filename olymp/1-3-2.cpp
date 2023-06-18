#include <iostream>

using namespace std;

int main()
{

	int n;
	int m;
	cin >> n >> m;
	
	//for( int i = 0; i < m; ++i)
	{
		int l = -1;
		int r = n;

		while (l+1<r)
		{
			int a;
			cin >> a;
			int mid = (l+r)/2;
			if (a == 0)
				l = mid;
			else
				r = mid;
		}
		cout << r; 
	}
}
