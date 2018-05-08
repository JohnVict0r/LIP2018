#include <iostream>
#define MAX 100
#include <locale.h>

void PreencherSequencia(int v[MAX], int n);
int somaSegmento(int v[MAX], int a, int b);
void verificarPorSegmento(int v[MAX], int n,int &a, int &b);
void imprimirSegmento(int v[MAX], int a, int b);

using namespace std;




int main()
{
    setlocale(LC_ALL, "Portuguese");

    int n=0;
    int v[MAX];
    int inicio=0,fim=0;//indices para inicio e fim da sequencia com maior valor;


    cout<<"informe o valor de n:";
    cin>>n;

    PreencherSequencia(v, n);
    verificarPorSegmento(v,n,inicio,fim);

    cout<<"segmento de maior valor: ";
    imprimirSegmento(v,inicio,fim);
    cout<<endl<<"a soma do segmento é "<<somaSegmento(v,inicio,fim);


    return 0;
}

void PreencherSequencia(int v[MAX], int n)
{

    for(int i=0; i<n; i++)
    {

        cout<<i+1<<"º termo da sequencia:";
        cin>>v[i];

    }

}

void verificarPorSegmento(int v[MAX], int n,int &a, int &b)
{

    int verificar=0;
    int maiorSegmento=-56546;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i<j|| i==j)
            {

                verificar=somaSegmento(v,i,j);
                if(verificar>=maiorSegmento)
                {
                    maiorSegmento=verificar;
                    a=i;
                    b=j;
                }
                //cout<<i<<" "<<j;
                //cout<<endl;
            }
        }
        //cout<<endl;
    }



}


int somaSegmento(int v[MAX], int a, int b)
{
    int soma=0;
    for(int i=a; i<=b; i++)
    {
        soma+= v[i];
    }
    return soma;
}

void imprimirSegmento(int v[MAX], int a, int b)
{
    cout<<"{";
    for(int i=a; i<=b; i++)
    {


        cout<<v[i];
        if(i==b){

        }else{
            cout<<", ";
        }


    }

    cout<<"}";


}
