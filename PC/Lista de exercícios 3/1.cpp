#include <bits/stdc++.h>

using namespace std;
 
int main() {   
    long long int n, t, c, ans = 0, aux = 0;
    bool entrou = false;
 
    cin >> n >> t >> c;
 
    for(int i = 0; i < n; i++){
        long long int x;
        cin >> x;
        if(x <= t){
            aux++;
        }else{
            entrou = true;
            if(aux >= c){
                ans += aux - c + 1;
            }
            aux = 0;
        }
    }
    
    if(aux >= c)
        ans += aux - c + 1;
 
    
    entrou? cout << ans : cout << n - c + 1;
    
    return 0;
}