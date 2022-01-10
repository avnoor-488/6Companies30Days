// Given two rectangles, find if the given two rectangles overlap or not.
// A rectangle is denoted by providing the x and y coordinates of two points: 
// the left top corner and the right bottom corner of the rectangle. Two rectangles
// sharing a side are considered overlapping. (L1 and R1 are the extreme points of the first rectangle and L2 and R2 are the extreme points of the second rectangle).


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


void solve()
{
    int l1[2], r1[2], l2[2], r2[2];
    cin >> l1[0] >> l1[1] >> r1[0] >> r1[1] >> l2[0] >> l2[1] >> r2[0] >> r2[1];
    int ans = 1;

    if (l1[0] > r2[0] or l2[0] > r1[0])ans = 0;
    if (r1[1] > l2[1] or r2[1] > l1[1])ans = 0;

    cout << ans;
}

int main() {

// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;


    while (t--) {
        solve();
    }

    return 0;
}

// coded with the ❤️ Avnoor



