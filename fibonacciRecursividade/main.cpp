#include <iostream>

void imprimirFibonacci(int a);
int fibonacci (int n);

using namespace std;

int main()
{
    int n;

    cout<<"quantos termos que exibir da sequencia de fibonacci:";
    cin>>n;
    imprimirFibonacci(n);
    return 0;
}

int fibonacci (int n)
{
    if(n==0 || n==1)
    {

        return 1;

    }else
    {

        return fibonacci(n-1)+fibonacci(n-2);

    }

}

void imprimirFibonacci(int a)
{
    for(int i=0;i<a;i++)
    {
        cout<<fibonacci(i)<<" ";
    }
}
