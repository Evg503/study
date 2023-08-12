#include <iostream>

using namespace std;

template <int N, typename Integer = long long>
class Number
{
    Integer v;
    void norm()
    {
        v = ((v%N)+N)%N;
    }
    public:

    Number(Integer v=0):v(v)
    {
        norm();
    }

    Number & operator *= (const Number& i)
    {
        v *= i.v;
        norm();
    }
    template <int P, typename T>
    friend ostream & operator<<(ostream & out, const Number<P, T> &n);
};

template <int N, typename Integer>
ostream & operator<<(ostream & out, const Number<N, Integer> &n)
{
    return out << n.v;
}

constexpr int MOD = 1000003;

using number = Number<MOD>;

int n;

number fact = 1;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> n;

    if(n>=MOD)
    {
        cout << 0;
    }
    else
    {
        for (int i = 1; i <= n; ++i)
        {
            fact*=i;
        }	
        cout <<fact;
    }
}
