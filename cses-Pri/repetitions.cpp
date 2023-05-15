#include <bits/stdc++.h>

using namespace std;

int main(){

    string sequence;
    long long int count, aux = 0;

    cin >> sequence;

    for(long long int i=0; i<sequence.size(); i++){
        if(sequence[i] == sequence[i+1]){
            count++;
            if(count > aux){
                aux = count;
            }
        }
        
    }

    printf("%lld\n", aux);

};