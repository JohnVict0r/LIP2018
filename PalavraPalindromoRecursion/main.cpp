#include <iostream>
#include <cstring>

#define MAX 100

void ehPalindromo(char palavra[MAX]);

using namespace std;

int main()
{
    char p[MAX];

    cout<<"informe uma frase/palavra para verificar se eh um palindromo:";
    cin.getline(p,MAX);

    ehPalindromo(p);
    return 0;
}

void ehPalindromo(char palavra[MAX])
{
    int t = strlen(palavra);
    
    //retira os espaço da frase/palavra
    for(int i=0; i<t;i++)
    {
        if((int)palavra[i]==32)
        {
            for(int j=i;j<t;j++)
            {
                palavra[j]=palavra[j+1];
            }
            t=t-1;
        }
    }
   
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
