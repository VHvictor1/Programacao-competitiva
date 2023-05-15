#include <bits/stdc++.h>

using namespace std;

int main(){
    string v;
    int aux = 0;
    int i = 0;
    bool ra = false;
    int total = 0;

    cin >> v;

    while(i < v.size()){
        if(v[i] == 'r'){
            ra = true;
            total = aux + total;
            aux = 0;
        }
        else if(v[i] == '.' && ra == true){
            aux++;
        }
        else if(v[i] == 's' && ra == true){
            aux = 0;
            ra = false;
        }
        i++;
    }
    if(aux != 0){
        cout << total + aux << endl;
    } else {
        cout << total << endl;
    }
    return 0;
}