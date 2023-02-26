#include <bits/stdc++.h>

#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define fRead freopen("in.txt","r",stdin);
#define fWrite freopen ("out.txt","w",stdout);

#define MOD 1000000007
#define INF 1e18
#define PI acos(-1)
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define all(x) x.begin(),x.end()
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a, b)
#define MEM(a,x) memset(a,x,sizeof(a))
#define endl '\n'
#define ll long long
#define llu unsigned long long

using namespace std;

const int N = 1000005;
ll dp[N], h[N], n;

//ll gcd(ll a, ll b){if(b == 0) return a; a %= b; return gcd(b, a);}
//ll lcm(ll a, ll b){return (a / gcd(a, b) * b);}

void wiz()
{
    #ifndef ONLINE_JUDGE
        fRead;
        fWrite;
    #endif
}

void build(int node, int lo, int hi){
    if (lo==hi) {tree[node] = A[lo]; return;}
    build(Left,lo,mid);
    build(Right,mid+1,hi);
    tree[node] = tree[Left] + tree[Right];
}

int query(int node, int lo, int hi, int i, int j){
    if (i>hi || j<lo) return 0;
    if (lo>=i && hi<=j) return tree[node];
    int p1 = query(Left,lo,mid,i,j);
    int p2 = query(Right,mid+1,hi,i,j);
    return p1 + p2;

}
void solve()
{
    int n, q;
    cin >> n >> q;

    vector<int> phi(n + 1);
    for (int i = 0; i <= n; i++)
        phi[i] = i;

    for (int i = 2; i <= n; i++) {
        if (phi[i] == i) {
            for (int j = i; j <= n; j += i)
                phi[j] -= phi[j] / i;
        }
    }

    
    
    
    cout << endl;
}

int main()
{
    fastio();
   // wiz();

    int T = 1;
    //cin >> T;
    for(int t = 1; t <= T; t++){
    //  cout << "Case " << t << ": ";
        solve();
    }

    return 0;
}