#include <iostream>
#include <algorithm>

using namespace std;

using number = int;

number n;

number gcd(number a, number b)
{
    if(a<b)
        swap(a,b);
    if(b==0)
        return a;
    return gcd(b, a%b);
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> n; 
    number a = 0;
    for (int i=0; i<n; ++i)
    {
        number v;    
        cin >> v;
        a = gcd(v,a);
    }
	cout << a;
}
