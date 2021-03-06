#include <bits/stdc++.h>
using namespace std;

#define mp make_pair
#define pb push_back
#define fi first
#define sec second
#define forT(t) for(int i=0;i<t;i++)
#define forN(n) for(int j=0;j<n;j++)
#define MOD 1000000007
// #define num 4 e6 + 5
#define vll vector<ll>
#define pll pair<ll, ll>




typedef pair<int, int> pii;
typedef vector<string> vs;
typedef set<int> seti;
typedef long long int ll;
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<vi> vv;
typedef vector<vector<string>> vss;
// typedef map<int,int>

void fastscan( ll &number)
{
    bool negative = false;
    register int c;

    number = 0;

    c = getchar();
    if (c == '-')
    {
        negative = true;

        c = getchar();
    }

    for (; (c > 47 && c < 58); c = getchar())
        number = number * 10 + c - 48;


    if (negative)
        number *= -1;
}



ll gcd (ll a, ll b)
{
    if (b == 0)
        return a;

    return gcd(b, a % b);
}

int c2calc(int p,
           int q)
{
    int mod = 998244353, expo;
    expo = mod - 2;
    while (expo)
    {
        if (expo & 1)
        {
            p = (p * q) % mod;
        }
        q = (q * q) % mod;
        expo >>= 1;
    }
    return p;
}


void solve(vi vec, int k)
{

    deque<int>dq;
    vi ans;
    vi temp;
    int i = 0;
    for ( i = 0; i < k; i++)
    {
        while (!dq.empty() and vec[i] >= vec[dq.back()])dq.pop_back();
        dq.push_back(i);
    }


    ans.push_back(vec[dq.front()]);
    for (; i < vec.size(); i++) {
        while (!dq.empty() && dq.front() <= i - k) dq.pop_front();
        while (!dq.empty() && vec[i] >= vec[dq.back()]) dq.pop_back();
        dq.push_back(i);
        ans.push_back(vec[dq.front()]);
    }

    for (auto it : ans)cout << it << " ";
}



int main() {

// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, tc = 1;
    cin >> t;


    while (t--)
    {
        int n;
        cin >> n;
        vi vec;

        for (int i = 0; i < n; i++)
        {
            int num;
            cin >> num;
            vec.pb(num);
        }

        int k;
        cin >> k;


        solve(vec, k);
    }
    return 0;
}

// coded with the ?????? Avnoor


