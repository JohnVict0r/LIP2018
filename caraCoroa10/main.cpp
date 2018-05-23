#include <iostream>
#include <cstdlib>
#include <ctime>

bool jogar();

using namespace std;

int main()
{
    srand(time(NULL));

    for(int i=0; i<20; i++)
    {

        cout<<6+4*rand()%5<<endl;

        if(jogar())
        {
            cout<<"GANHOU"<<endl;
        }
        else
        {
            cout<<"PERDEU"<<endl;
        }
    }


    return 0;
}

bool jogar()
{
    int
    r=rand()%10;

    if(r==0)
    {

        return true;

    }
    else
    {

        return false;
    }
}
