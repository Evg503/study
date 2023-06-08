#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int n;
vector<long long> presum;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> n;
	presum.resize(n+1);
	presum[0]=0;

	for (int i = 1; i <= n; ++i)
	{
		int a;
		cin >> a;
		presum[i]=presum[i-1]+a;
	}

	
	long long mx = presum[1];
	auto minit = begin(presum);
	for (auto it =begin(presum)+2; it != end(presum);++it)
	{
		if(*minit > *(it-1))
			minit = it-1;

		mx= max(mx,*it - *minit);
	}
	cout <<mx<<"\n";

}
