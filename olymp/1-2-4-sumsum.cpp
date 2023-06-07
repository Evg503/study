#include <vector>
#include <iostream>

using namespace std;

int n;
int q;
vector<long long> presum;

long long sum = 0;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> n;
	cin >> q;
	presum.resize(n+1);
	presum[0]=0;

	for (int i = 1; i <= n; ++i)
	{
		int a;
		cin >> a;
		presum[i]=presum[i-1]+a;
	}

	for (int i = 0; i<q; ++i)
	{
		int l,r;
		cin >>l>>r;
		cout << presum[r]-presum[l-1]<<"\n";
	}
}
