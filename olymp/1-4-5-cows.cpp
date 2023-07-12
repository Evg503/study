#include <iostream>
#include <vector>

using number = int;
using namespace std;

int n, k;
vector<number> st;


bool can_cow(number dist)
{
    int last = - dist;
    int cows = k;
    for(auto x:st)
    {
        if(last + dist <= x)
        {
            last = x;
            --cows;

            if(cows == 0)
                return true;
        }
    }
    return false;
}

int main()
{
    cin >> n >> k;
    st.resize(n);
    for (auto& v:st)
    {
        cin >> v;
    }
    number l = 1;
    number r = st[n-1];
    while (l + 1 <r)
    {
        number mid = l + (r -l)/2;
        if(can_cow(mid))
            l = mid;
        else
            r = mid;
    }
    cout << l;
}
