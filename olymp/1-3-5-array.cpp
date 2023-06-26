#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n;
	int m;
	cin >> n >> m;
	vector<int> v;
    v.reserve(n);
    for( int i = 0; i < n; ++i)
    {
        int a;
        cin >>a;
        v.push_back(a);
    }
	
	for( int i = 0; i < m; ++i)
	{
		int l = -1;
		int r = n;

        int k;
        cin >> k;

		while (l+1<r)
		{
			int mid = (l+r)/2;

			if (v[mid] <= k)
				l = mid;
			else
				r = mid;
		}
        if (r<n)
            cout << v[r] << "\n";
        else
    		cout << "NO SOLUTION\n"; 
	}
}