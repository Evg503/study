#include <iostream>
#include <vector>

using namespace std;

using number=long double;
constexpr number eps = 1.e-7;

vector<number> v;

inline number f(number x)
{
    number res = 0;
    for (auto a:v)
        res = res*x +a;
    return res;
}


int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n;

	cin >> n;

    v.reserve(n+1);
    for( int i = 0; i <= n; ++i)
    {
        number a;
        cin >> a;
        v.push_back(a);
    }
	
    number l = -100;
    number r = 100;


    while (abs(l-r)>eps)
    {
        number mid = (l+r)/2;

        if (f(mid)<0.0)
            l = mid;
        else
            r = mid;
    }
    cout.precision(17);
    cout <<r;
}
