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

const int INF = 1e9;

/*
Revi no email, os arquivos, e fiz a solução correta em javascript.
*/

int solucao()
{
    int menor = INF;
    int maior = -INF;
    int somaTotal = 0;
    for(int dia=0; dia < tamanhoDoVetor; dia++)
    {
        if(faturamento[dia] < menor) menor = faturamento[dia];
        if(faturamento[dia] > maior) maior = faturamento[dia];
        somaTotal += faturamento[dia];
    }
    double media = somaTotal/qntDias;
    int diasFaturamentoMaior = 0;
    for(int dia=0; dia < tamanhoDoVetor; dia++)
    {
        if(faturamento[dia] > media) diasFaturamentoMaior++;
    }
    // A resposta estaria nessas 3 variaveis.
}

signed main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	return 0;
}
