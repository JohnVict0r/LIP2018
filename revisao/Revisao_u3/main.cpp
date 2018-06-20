//Questão 02 Revisão

#include <iostream>
#include <cstdlib>

using namespace std;

#define MAX_PONTOS 50

struct Ponto
{
    float x;
    float y;
    float z;
};

void gerar(Ponto p[MAX_PONTOS], int n);
void imprimir(Ponto p[MAX_PONTOS], int n);
Ponto centro(Ponto p[MAX_PONTOS],int n);

int main()
{

    Ponto p[MAX_PONTOS];
    int n;

    cout<<"informe a quantidade de pontos a ser gerados:";
    cin>>n;

    gerar(p,n);
    imprimir(p,n);

    Ponto c;
    c=centro(p,n);

    cout<<"o centro dos pontos é: ("<<c.x<<","<<c.y<<","<<c.z<<")"<<endl;
    return 0;
}

void gerar(Ponto p[MAX_PONTOS], int n)
{
    for(int i=0; i<n;i++)
    {
        p[i].x=(rand()/(float)RAND_MAX)*(rand()%100);
        p[i].y=(rand()/(float)RAND_MAX)*(rand()%100);
        p[i].z=(rand()/(float)RAND_MAX)*(rand()%100);
    }
}

void imprimir(Ponto p[MAX_PONTOS], int n)
{
    for(int i=0; i<n;i++)
    {
        cout<<"Ponto "<<i+1<<endl;
        cout<<p[i].x<<endl;
        cout<<p[i].y<<endl;
        cout<<p[i].z<<endl;
        cout<<endl;
    }
}

Ponto centro(Ponto p[MAX_PONTOS],int n)
{
    Ponto c;

    c.x=0.0;
    c.y=0.0;
    c.z=0.0;

    for(int i=0; i<n;i++)
    {
        c.x+=p[i].x;
        c.y+=p[i].y;
        c.z+=p[i].z;
    }
    c.x=c.x/(float)n;
    c.y=c.y/(float)n;
    c.z=c.z/(float)n;

    return c;
}

