#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


vector<int> v;
bool is_up = false;
void up(int r)
{
	//cout << "up("<<r<<") -> ";
	if(r==v.size())
	{
		fill(begin(v), end(v), 0);
		v.push_back(1);
		is_up = true;
		return;
	}
	if(v[r] == 9)
		up(r+1);
	else
	{
		++v[r];
		fill(begin(v), begin(v)+r, 0);
		is_up = true;
	}
}

int nextYear(int a)
{
	++a;
	if(a> 98765431)
		return -1;

	while(a!=0)
	{
		v.push_back(a%10);
		a/=10;
	}

	do{

		int bits=0;
		is_up = false;
		for(int i = v.size()-1; i>=0; --i)
		{
			if (v[i] == 0 || v[i] == 2 || (bits & (1<<v[i])))
			{
				up(i);
				break;
			}
			bits |= 1<<v[i];
		}

	}while (is_up);

	int x = 0;
	int dec = 1;
	for (int i = 0; i < v.size(); ++i, dec*=10)
		x+=v[i]*dec;
	return x;

}


auto checks = {1, 2, 398, 1145, 1198, 1345, 2020,2567, 97888889, 98765430, 98765431, 999999999};

void do_checks()
{
	for(auto i:checks)
	{
		v.clear();
		cout << i << " -> " << nextYear(i) << "\n";
	}
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int a;
	cin >> a;
	cout << nextYear(a);
}
