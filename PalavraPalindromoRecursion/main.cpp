#include <iostream>
#include <cstring>

#define MAX 100

void ehPalindromo(char palavra[MAX]);

using namespace std;

int main()
{
    char p[MAX];

    cout<<"informe uma palavra para verificar se eh um palindromo:";
    cin.getline(p,MAX);

    ehPalindromo(p);
    return 0;
}

void ehPalindromo(char palavra[MAX])
{
    int t = strlen(palavra);
    if(t==1 || t==0)
    {
        cout<<"eh palindromo!";
    }else
    {
        if(palavra[0]==palavra[t-1])
        {
            int cont=0;
            for(int i=0;i<t-2;i++)
            {
                palavra[i]=palavra[i+1];
                cont++;
            }
            palavra[cont]='\0';
            ehPalindromo(palavra);
        }else
        {
            cout<<"nao eh palindromo";
        }


    }

}
