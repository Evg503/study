#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

using number=long double;
constexpr number eps = 1.e-13;

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

    number cx, cy, cr;

    cin >> cx >> cy >> cr;
	int n;

	cin >> n;

    v.reserve(n+1);
    for( int i = 0; i <= n; ++i)
    {
        number a;
        cin >> a;
        v.push_back(a);
    }
    number x0;
    cin >> x0;
	
    number l = x0-2.1*cr;
    number r = x0;


    while (abs(l-r)>eps)
    {
        number mid = (l+r)/2;

        number x = mid;
        number y = f(mid);
        if ((x-cx)*(x-cx) + (y-cy)*(y-cy) > cr*cr)
            l = mid;
        else
            r = mid;
    }
    cout.precision(17);
    cout <<r;
}
