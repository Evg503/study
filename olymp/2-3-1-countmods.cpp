#include <iostream>
#include <algorithm>

using namespace std;
/*
#include <chrono> 
using namespace std::chrono; 
    auto start = high_resolution_clock::now();
    auto stop = high_resolution_clock::now(); 
    cout << endl << duration_cast<milliseconds>(stop - start).count() << "ms\n";
*/


using number = int;
number a, b;

number counter = 0;

number gcd(number a, number b)
{
    if(a<b)
        swap(a,b);
    if(b==0)
        return a;
    ++counter;
    return gcd(b, a%b);
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> a >> b;
    gcd(a, b);
	cout << counter;
}
