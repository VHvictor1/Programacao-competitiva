#include <bits/stdc++.h>
using namespace std;
int main(){
    string tecladoBom;
    string tecladoRuim;
    string palavra;
    cin >> tecladoBom;
    cin >> tecladoRuim;
    int n;
    cin >> n;
    map <char, char> teclas;

    for (int i = 0; i < tecladoBom.size(); i++){
        teclas[tecladoBom[i]] = tecladoRuim[i];
        teclas[toupper(tecladoBom[i])] = toupper(tecladoRuim[i]);
    }

    for (int i = 0; i < n; i++) {
        cin >> palavra;
        for (int j = 0; j < palavra.size(); j++){
            if (teclas.find(palavra[j])!= teclas.end()){
                palavra[j] = teclas[palavra[j]];
            }
        }
        cout << palavra << endl;
    }

    return 0;
}