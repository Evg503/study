#include <iostream>

using namespace std;

int n;
int max1 = 0;
int idx1 = 0;
int max2 = 0;
int idx2 = 0;

int mod = 1791791791;
long long cur, a, b;
int NextRand() {
	    cur = (cur * a + b) %mod;
	    return cur;
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> n;
	cin >> cur;
	cin >> a;
	cin >> b;

	for (int i = 1; i <= n; ++i)
	{
		int a = NextRand();
		if (max1<a){
			max2 = max1;
			idx2 = idx1;
			idx1 = i;
			max1 = a;
		}else if (max2<a)
		{
			max2 = a;
			idx2 = i;
		}
	}	
	cout <<idx1<<" " <<idx2<<"\n";
}
