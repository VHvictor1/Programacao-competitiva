#include <bits/stdc++.h>

using namespace std;

int main (){
    long long int n;
    cin >> n;

    vector<long long int> lista(n - 1);

    for(long long int i=0; i<n-1; i++){
        cin >> lista[i];
    }

    sort(lista.begin(), lista.end());
    
    long long int i = 0;

    if(lista.size() == 1){
        if(lista[0] == 1){
            printf("%lld", lista[0] + 1);
        } else {
            printf("%lld", lista[0] - 1);
        }
    } else {
        while(lista[i] == lista[i+1] - 1){
            i++;
        }
        printf("%lld\n", lista[i] + 1);
    }


    return 0;
}