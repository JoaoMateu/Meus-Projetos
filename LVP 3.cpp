//Escreva um programa que converta uma velocidade, recebida como entrada do usuário, para uma determinada unidade. As conversões que o programa deve fornecer são://
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    //abrindo um union que converte a velocidade//
    union velocidade
    {
        int convert;
        float kmh,ms,mh;
        float conversao1,conversao2,conversao3;
    } velo;

    cout<< setprecision(2)<<fixed;
    //pedindo ao usuario as informações//
    cout<<"Qual medida você que converter?"<<endl;
	cout<<"Digite 1 para converter para km/h em m/s \nDigite 2 para converter de m/s em km/h \nDigite 3 para converter m/h em km/h "<<endl;
    cin>>velo.convert;


    //separando as conversoes pela escolha do usuario//

    if (velo.convert == 1)

    {


        cout<<"Digite a velocidade em  km/h para ser convertida em m/s: "<<endl;
        cin>>velo.kmh;


        //calculo da conversao//
        velo.conversao1 = (velo.kmh / 3.6);

        cout<<"A velocidade em m/s é: "<<velo.conversao1<<endl;
    }





    else if(velo.convert==2)
    {
        //convertendo de m/s para km/h

        cout<<"Digite a velocidade em m/s para ser convertida em km/h: "<<endl;
        cin>>velo.ms;




        velo.conversao2= (velo.ms * 3.6);

        cout<< "A velocidade em km/h é: "<<velo.conversao2<<endl;
    }



    else if(velo.convert==3)
    {
        //convertendo de m/h para km/h//
        cout<<"Digite a velocidade em m/h para ser convertida em km/h: "<<endl;
        cin>>velo.mh;




        velo.conversao3= (velo.mh / 1000);

        cout<< "A velocidade em km/h é: "<<velo.conversao3<<endl;

    }

    return 0;
}
