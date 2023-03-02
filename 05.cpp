#include <bits/stdc++.h>

using namespace std;

#define int long long
#define ll long long
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


string inverteString(string str)
{
    string resposta = "";
    int finalstr = str.size();
    for(int i=finalstr; i > -1; i--)
    {
        resposta += str[i];
    }
    return resposta;
}

signed main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);
    cout << "Digite a string que deseja inverter: " << endl;
    string str;
    getline(cin,str);
    cout << str << endl;
    cout << inverteString(str) << endl;
	return 0;
}
