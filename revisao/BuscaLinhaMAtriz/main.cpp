#include <iostream>

#define MAX_N 50
#define MAX_M 50

using namespace std;

int buscarLinha(int a[MAX_N], int b[MAX_M][MAX_N], int m, int n);

int main()
{
    int m,n;
    int a[MAX_N];
    int b[MAX_M][MAX_N];
    int r;

    cout<<"informe as dimensoes de n:";
    cin>>n;
    cout<<"informe as dimensoes de m:";
    cin>>m;

    cout<<"insira os valores do seu array a de tamanho n"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"insira os valores do seu array Bidimensional b de tamanho mXn"<<endl;
    for(int i=0;i<m;i++)
    {
        cout<<"preencha a linha:"<<i<<endl;
        for(int j=0;j<n;j++)
        {
            cin>>b[i][j];
        }
    }

    r=buscarLinha(a,b,m,n);
    if(r>-1)
    {
        cout<<"o Array a esta na linha: "<<r<<endl;
    }else
    {
        cout<<"nao encontrou"<<endl;
    }



    return 0;
}

int buscarLinha(int a[MAX_N], int b[MAX_M][MAX_N], int m, int n)
{
    int r=-1;

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(b[i][j]!=a[j])
            {
                break;
            }
            if(j==n-1)
            {
                r=i;
                return r;
            }
        }
    }
    return r;
}
