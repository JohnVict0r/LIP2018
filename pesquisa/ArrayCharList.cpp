#include <iostream>
#include <cstring>

#define MAX_L 100
#define MAX_C 50
using namespace std;


bool busca(char v[MAX_C], char chave[MAX_C]);
void preencherLista(char v[MAX_L][MAX_C], int n);
void ordenar(char v[MAX_L][MAX_C], int n);
void pesquisar(char v[MAX_L][MAX_C], char chave[MAX_C], int n);
void imprimir(char v[MAX_L][MAX_C],int n);

int main()
{

    char lista[MAX_L][MAX_C], chave[MAX_C];
    bool y;
    int n;

    cout<< "informe o numero de linha que vai inserir:";
    cin>>n;
    cin.ignore();

    preencherLista(lista,n);
    ordenar(lista,n);

    cout<<"informe a chave que deseja pesquisar:";
    cin.getline(chave,MAX_C);

    cout<<"pesquisando..."<<endl;
    pesquisar(lista,chave,n);

    return 0;
}
bool busca(char v[MAX_C], char chave[MAX_C])
{
    int tv=strlen(v);
    int tc=strlen(chave);
    int cont=0;

    for (int i=0; i<tv; i++)
    {
        cont=0;
        for(int j=0; j<tc; j++)
        {
            if(v[i+j]==chave[j])
            {
                cont++;

            }
        }

        if(cont==tc)
        {
            return true;

        }
    }
    return false;
}

void preencherLista(char v[MAX_L][MAX_C], int n)
{
    for(int i=0; i<n;i++)
    {
        cin.getline(v[i],MAX_C);
    }
}

void ordenar(char v[MAX_L][MAX_C], int n)
{
    char aux[MAX_C];
    int ultimo=n-1;
    bool troca;

    do
    {
        troca = false;
        for(int i=0; i<ultimo;i++)
        {
            if(strcmp(v[i],v[i+1])>0)
            {
                strcpy(aux,v[i]);
                strcpy(v[i],v[i+1]);
                strcpy(v[i+1],aux);

                troca = true;
            }
        }
    }while(troca);

}

void pesquisar(char v[MAX_L][MAX_C], char chave[MAX_C], int n)
{
    int r;
    int cont=0;

    cout<<"chave informada:"<<chave<<endl;

    for(int i=0; i< n; i++)
    {
        r=busca(v[i],chave);

        if(r)
        {
            cout<<v[i]<<endl;
            cont++;
        }


    }

    cout<<cont <<" nome(s) encontrado(s)";

}

void imprimir(char v[MAX_L][MAX_C],int n)
{
    for(int i=0; i<n;i++)
    {
        cout<<v[i]<<endl;
    }
}
