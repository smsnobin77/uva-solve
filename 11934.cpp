#include <bits/stdc++.h>

using namespace std;
int main() {
    int a,b,c,d,l;
    while(scanf("%d%d%d%d%d",&a,&b,&c,&d,&l) != EOF){
        if( a == 0 && b == 0 && c == 0 && d == 0 && l == 0 ) break;
        int cnt = 0;
        for(int i = 0; i <= l ; i++){
            if((a*i*i + b*i + c) % d == 0 ){
                cnt++;
            }
        }
        printf("%d\n",cnt);
    }
    return 0;
}