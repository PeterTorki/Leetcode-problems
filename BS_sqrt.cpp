#include <bits/stdc++.h>
#define Time cerr << "Time Taken: " << (float)clock() / CLOCKS_PER_SEC << " Secs"<< "\n";
using namespace std;
#define endl "\n"
#define Pair pair<int, int>
#define ll long long int
#define alls(s) s.begin(), s.end()
#define ralls(s) s.rbegin(), s.rend()
#define ull unsigned long long int
#define EPS 1e-9
#define Mod 1'000'000'007
#define INF 2'000'000'000
#define EPS 1e-9
#define sz(x) int(x.size())
#define fi first
#define se second
#define INF 2'000'000'000
#define PI acos(-1)
#define newl cout << "\n";
#define TC int t; cin >> t; while (t--)
#define fixed(n) cout << fixed << setprecision(n)
#define cin(vec) for (auto &i : vec) cin >> i
#define cout(vec) for (auto &i : vec) cout << i << " "; cout << "\n";
#define cin_2d(vec, n, m) for (int i = 0; i < n; i++) \
for (int j = 0; j < m && cin >> vec[i][j]; j++);
#define cout_2d(vec, n, m) for (int i = 0; i < n; i++, cout << "\n") \
for (int j = 0; j < m && cout << vec[i][j] << " "; j++);
#define vec_2d(arr, n, m) vector<vector<int>> arr(n, vector<int>(m));
#define getline(s) getline(cin >> ws, s)

int mySqrt(int x) {
        if(x==0||x==1)
            return x;
        int l=1,r=x/2;
        int m;
        while(l<=r)
        {
             m=l+(r-l)/2;int best=x/m;
            if(best==m)
                return best;
             else
             (best>m)?l=m+1:r=m-1; 
        }
        return r;
    }
void Code_Crush()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin), freopen("output.txt", "w ", stdout);
#endif
}
int main()
{
    Code_Crush();
    int x;
    cin>>x;
    cout<<mySqrt(x);
 }
