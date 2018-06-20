#include <iostream>

using namespace std;


int quociente(int a, int b);

int main()
{
    int a,b;

    cout<<"informe os o numero a:";
    cin>>a;

    cout<<"informe os o numero b:";
    cin>>b;

    cout<<"a divisao de a/b ="<<quociente(a,b);

    return 0;
}

int quociente(int a, int b)
{
    if(a<b){
        return 0;
    }else
    {
        return 1 + quociente(a-b,b);
    }
}
