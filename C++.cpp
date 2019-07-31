#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
#include<queue>
#include<cstring>
#include<stack>
using namespace std;
const int MOD = 1000000007;
int E, V, n, d;

int gcd(int a, int b){
    if(b == 0) return a;
    else return gcd(b, a%b);
}

int main()
{
    scanf("%d", &n);
    while(n--){
        scanf("%d %d", &V, &E);
        if(E % V != 0){
            d = gcd(E, V);
            E /= d; V /= d;
            printf("%d\\%d\n", E%MOD, V%MOD);
        }
        else printf("%d\n", E/V % MOD);
    }
    return 0;
}
