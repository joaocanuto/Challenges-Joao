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

const int maxn = 93;
int sequenciaFibonnaci[94];

// Função para gerar os primeiros 93 numeros da sequencia
// Pq nao geramos mais numeros ?
// Acima de 93 ele da overflow no long long do C++, talvez em outra linguagem ou outro metodo
// de armazenar big ints funcione.
void gerarFibonacci()
{
    sequenciaFibonnaci[0] = 0;
    sequenciaFibonnaci[1] = 1;
    for(int i = 2; i < maxn; i++)
    {
        int num = sequenciaFibonnaci[i-1] + sequenciaFibonnaci[i-2];
        sequenciaFibonnaci[i] = num;
    }
}

int buscaBinaria(int x)
{
    int ini = 0, fim = maxn;
    while(ini <= fim)
    {
        int meio = (ini + fim)/2;
        if(sequenciaFibonnaci[meio] == x) return meio;
        if(sequenciaFibonnaci[meio] < x) ini = meio+1;
        if(sequenciaFibonnaci[meio] > x) fim = meio-1;

    }
    return -1;
}


signed main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);
    int num;
    gerarFibonacci();
    cout << "Digite o numero que deseja verificar se esta na sequencia de fibonacci:" << "\n";
    cin >> num;
    cout << "\n";
    /*Depois de gerarmos a sequencia, uma maneira eficiente de verificarmos se um numero esta
    na sequência é verificar usando o algorimot de busca binária:
    */
    int posicao = buscaBinaria(num);
    posicao != -1 ? (cout << "O numero esta na sequencia e sua posicao e: " << posicao) : (cout << "O numero nao esta na sequencia!");
    cout << endl;
	return 0;
}
