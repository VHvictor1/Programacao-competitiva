#include <bits/stdc++.h>

using namespace std;

int main()
{
    int number;
    char response;
    char awnswer;
    int correct = 0;
    float nota;

    scanf("%d\n", &number);

    for (int i = number; i >= 1; i--)
    {
        scanf("%c %c\n", &response, &awnswer);
        if (response == awnswer)
        {
            correct += 1;
        }
        else {
            correct += 0;
        }
    }
    
    nota = (10.0 / (float)number) * correct;
    printf("Nota: %.2f\n", nota);

    return 0;
}