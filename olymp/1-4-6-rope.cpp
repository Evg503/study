#include <iostream>
#include <vector>

using number = long long;
using namespace std;

int n, k;
vector<number> st;


bool can_cut(number dist)
{
    int nropes = 0;
    for(auto d:st)
    {
        nropes += d/dist;
        if(nropes>=k)
            return true;
    }
    return false;
}

int main()
{
    cin >> n >> k;
    st.resize(n);

    number s = 0;
    for (auto& v:st)
    {
        cin >> v;
        s += v;
    }
    number l = 0;
    number r = s;
    while (l + 1 <r)
    {
        number mid = l + (r -l)/2;
        if(can_cut(mid))
            l = mid;
        else
            r = mid;
    }
    cout << l;
}

