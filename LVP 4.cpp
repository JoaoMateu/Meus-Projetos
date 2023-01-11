//Crie uma classe Empresa_Solar para calcular a quantidade de painéis solares necessários para uma residência em função do consumo mensal em kWh do imóvel. 
//Além do número de painéis deverá ser determinado também a área mínima que esses painéis ocupam e a economia anual gerada pela adoção do sistema com base no valor mensal gasto pelo imóvel, 
//fornecido pelo usuário em reais.

#include <iostream>
#include <locale>
#include <iomanip>
#include <cmath>

using namespace std;
//abrindo uma classe com nome de Empresa_Solar
class Empresa_Solar {
    float gasto_mensal;
    float potencia_imovel;
    float calculo_painel;
    float area_install;
    float economia_anual;
public:
    void setgasto_mensal(float);
    void setpotencia_imovel(float);
    float getcalculo_painel();
    float getare_install();
    float geteconomia_anual();

};
//Aqui estou atruibuindo para receber valores positivos//
void Empresa_Solar::setgasto_mensal(float gasto) {
    gasto_mensal = (gasto > 0) ? gasto : 0;
}

void Empresa_Solar::setpotencia_imovel(float imovel) {
    potencia_imovel = (imovel > 0) ? imovel : 0;
}
//aqui estou fazendo os calculos//
float Empresa_Solar::getcalculo_painel() {
    calculo_painel = (potencia_imovel / 32);
    calculo_painel = ceil(calculo_painel);
    return calculo_painel;
}
float Empresa_Solar::getare_install(){
    area_install = calculo_painel * 2.5;
    return area_install;
}
float Empresa_Solar::geteconomia_anual(){
    economia_anual= (gasto_mensal * 12) - ((gasto_mensal*12)/10);
    return economia_anual;

}
int main() {
    //Definindo  como uma empresa 1 na classe//
    Empresa_Solar empresa1;
    float gasto_mensal,potencia_imovel;
    //Pedindo as informacoes ao usuario//
    cout << "Informe os valores os valores em Reais e kWh!"<< endl;
    cout << "Informe o gasto mensal da residencia" << endl;
    cin >> gasto_mensal;
    cout <<"Informe a potencia do imovel:" << endl;
    cin >> potencia_imovel;
    empresa1.setgasto_mensal(gasto_mensal);
    empresa1.setpotencia_imovel(potencia_imovel);
    //os resultados//
    cout << "Quantos paineis: " << empresa1.getcalculo_painel() << endl;
    cout << "Valor da area dos paineis: " << empresa1.getare_install() <<  " m^2" << endl;
    cout << "Economia Anual R$: " << empresa1.geteconomia_anual() << endl;
return 0;
};