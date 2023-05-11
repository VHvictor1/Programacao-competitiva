#include <algorithm>
#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n, g, f, c, casais = 0;
    scanf("%d %d %d %d", &n, &g, &f, &c);
 
   if (g <= f){
    casais = g;
   } else {
    casais = f;
   }
 
   if (casais > n){
    printf("%d", n);
   } else {
    if (casais + c >= n){
        printf("%d", n);
    } else {
        printf("%d",casais + c);
    }
   }
 
    return 0;
};