#include <bits/stdc++.h>

using namespace std;

#define ll long long
//#define int long long
#define vi vector<int>
#define pii pair<int,int>
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define endl '\n'
#define mset(A,X) memset(A,X,sizeof A)
#define bug(x) cerr << #x << "  >>>>>>>  " << x << '\n'
#define _ << " , " <<

const int maxn = 1e5;

signed main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);
    int ind = 13, soma = 0, k = 0;
    while(k<ind){
        k = k+1;
        soma = soma+k;
    }
    cout << soma << endl;
	return 0;
}
