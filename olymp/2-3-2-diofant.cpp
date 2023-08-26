#include <iostream>
#include <algorithm>

using namespace std;

using number = int;
number a, b, c;


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

	cin >> a >> b >> c; 
    number g = gcd(abs(a), abs(b));
	cout << (c%g==0);
}
