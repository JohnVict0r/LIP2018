#include <iostream>
#include <cstring>
#include <cstdlib>
#include <ctime>

#define MAX 100

void senhaAleatoria(char senha[MAX]);

using namespace std;

int main()
{
    char senha[MAX];
    srand(time(NULL));

    char escolha;

    do{
    senhaAleatoria(senha);
    cout<<"senha gerada:"<<senha<<endl;
    cout<<"deseja gerar novamente(S/N):";
    cin>>escolha;
    }while(escolha=='S'||escolha=='s');

    return 0;
}

void senhaAleatoria(char senha[MAX])
{


    char char_especial[MAX] = "@#%&*()";
    char numeros[MAX] = "0123456789";
    char letra_minuscula[MAX] = "abcdefghijklmnopqrstuvwxyz";
    char letra_maiuscula[MAX] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    int tn = strlen(numeros);
    int tce=strlen(char_especial);
    int tlmi = strlen(letra_minuscula);
    int tlma = strlen(letra_maiuscula);



    for(int i=0;i<5;i++)
    {

        senha[i]= numeros[rand()%tn];

    }

    senha[5]=char_especial[rand()%tce];
    senha[6]=char_especial[rand()%tce];
    senha[7]=letra_minuscula[rand()%tlmi];
    senha[8]=letra_minuscula[rand()%tlmi];
    senha[9]=letra_maiuscula[rand()%tlma];
    senha[10]='\0';

    int ts=strlen(senha);
    int a;
    char aux;

    for(int j=0;j<10;j++)
    {
        for(int i=0;i<ts;i++)
        {
            do{
                a=rand()%10;
            }while(a==i);

            aux = senha[i];
            senha[i]=senha[a];
            senha[a]=aux;

        }
    }




}
