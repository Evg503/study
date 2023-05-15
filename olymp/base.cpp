#include <iostream>

using namespace std;
/*
#include <chrono> 
using namespace std::chrono; 
    auto start = high_resolution_clock::now();
    auto stop = high_resolution_clock::now(); 
    cout << endl << duration_cast<milliseconds>(stop - start).count() << "ms\n";
*/


using number = int;
number n;

number sum = 0;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> n;

	for (number i = 0; i < n; ++i)
	{
		number a;
		cin >> a;
		sum+=a;
	}	
	cout <<sum;
}
