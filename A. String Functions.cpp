#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
bool cmp(pair<int,int>a,pair<int,int> b)
{
    if(a.first > b.first)
        return true;
    else if(a.first == b.first and a.second<b.second)
        return true;

    return false;
}
//vector<ll>v;
//void primeFactors(ll n)
//{
//    // Print the number of 2s that divide n
//    while (n % 2 == 0)
//    {
//        v.push_back(2);
//        n = n/2;
//    }
//
//    // n must be odd at this point. So we can skip
//    // one element (Note i = i +2)
//    for (ll i = 3; i*i<=n; i = i + 2)
//    {
//        // While i divides n, print i and divide n
//        while (n % i == 0)
//        {
//            // cout<<i<<ss;
//            v.push_back(i);
//            n = n/i;
//        }
//    }
//
//    // This condition is to handle the case when n
//    // is a prime number greater than 2
//    if (n > 2)
//        v.push_back(n);
//}
const int N = 1e5+10;
bitset <N> vis;
void sieve (void)
{
    for (int i = 2; i * i < N; ++i)
    {
        if (!vis[i])
        {
            for (int j = i * i; j < N; j += i) vis[j] = 1;
        }
    }
}
void solve()
{
    ll n, q;
    cin >> n >> q;
    string s;
    cin >> s;
    while(q--)
    {
        string x;
        cin >> x;
        if(x=="pop_back")
        {
            s.pop_back();
        }
        else if(x=="front")
        {
            cout << s.front() << endl;
        }
        else if(x=="back")
        {
            cout << s.back() << endl;
        }
        else if(x=="sort")
        {
            int l, r;
            cin >> l >> r;
            if(r<l)
                swap(l, r);
            sort(s.begin() + l - 1, s.begin() + r);
        }
        else if(x=="reverse")
        {
            int l, r;
            cin >> l >> r;
            if (r < l)
                swap(l, r);
            reverse(s.begin() + l - 1, s.begin() + r);
        }
        else if(x=="print")
        {
            int i;
            cin >> i;
            cout << s[i - 1] << endl;
        }
        else if(x=="substr")
        {
            int l, r;
            cin >> l >> r;
            if(r<l)
                swap(l, r);
            l--;
            cout << s.substr(l, r - l) << endl;
        }
        else
        {
            char ch;
            cin >> ch;
            s += ch;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
//    ll t;
//    cin >> t;
//    while(t--)
    {
        solve();

    }
    return 0;
}
