// Implemente um sistema de gerenciamento de banco de baterias (BMS). O BMS é composto de sensores, um concentrador e acessórios. Sua função principal é, 
//a partir do sensoriamento de variáveis importantes, comparar os dados recebidos com valores ideais de funcionamento. 
//Em caso de valores não conformes com condições pré-definidas, o Controlador BMS detecta a disparidade e emite um aviso sobre tal condição, com o objetivo de garantir segurança.
// Utilizado principalmente em veículos elétricos, o programa controlador BMS coleta e testa os dados. 
//Dessa forma, o programa deverá inicializar o valor dos atributos dos dados sensoriados através do construtor e demonstrar a utilização do método destrutor através de uma mensagem de sinalização da execução do método.
#include <iostream>
#include <locale>
#include <iomanip>
#include <cmath>
#include <string>

using namespace std;
 //Aqui estou criando uma classe que vai receber as informacoes//
 class controlador_BMS
 {
 float tensao_instantanea;
 int temperatura;
 float corrente_sobrecarga;
 int   nivel_bateria;
 float calculo_potencia;
 float corrente;

 public:
     void settensao_instantanea(float);
     void settemperatura(int);
     void setcorrente_sobrecarga(float);
     void setnivel_bateria(int);
     void setcorrente(float);
     float getcalculo_potencia();
     string situacao1();
     string situacao2();
     string situacao3();
     controlador_BMS();
    ~controlador_BMS();


 };

 //construtor com parametros//
 controlador_BMS::controlador_BMS()
 {
    tensao_instantanea = 0;
    temperatura = 0;
    corrente_sobrecarga = 0;
    nivel_bateria = 0;
    corrente = 0;
 }

//destrutor quando ativado exibe uma mensagem//
controlador_BMS::~controlador_BMS()
{
    cout << "teste realizado com sucesso." <<endl;
}



//Tratamento para as informações que o usuario deve digitar tem que ser postitivo//

 void controlador_BMS::setnivel_bateria(int nivel)
 {
 nivel_bateria = (nivel > 0) ? nivel: 0;
 }

 void controlador_BMS::setcorrente_sobrecarga(float sobre)
 {
 corrente_sobrecarga = (sobre > 0) ? sobre: 0;
 }

 void controlador_BMS::settemperatura(int temp)
 {
 temperatura = (temp > 0) ? temp: 0;
 }


 void controlador_BMS::settensao_instantanea(float tens)
 {
 tensao_instantanea = (tens > 0) ? tens: 0;
 }


 void controlador_BMS::setcorrente(float corrent)
 {
 corrente = (corrent > 0) ? corrent: 0;
 }

//criando comparativo//
string controlador_BMS::situacao1()
{
    if (temperatura > 25)
        return "Temperatura Anormal";
    else
        return "Temperatura Normal";
}


string controlador_BMS::situacao2()
{
    if (nivel_bateria < 30)
        return "Estado da Carga Anormal ";
    else
        return "Estado da Carga Normal ";
}

string controlador_BMS::situacao3()
{
    if (corrente >= corrente_sobrecarga)
        return "Corrente Anormal";
    else
        return "Corrente Normal";
}




 //Calculo da potencia da bateria//
 float controlador_BMS::getcalculo_potencia()
 {
 calculo_potencia = (corrente * tensao_instantanea);
 return calculo_potencia;
 }


 int main(){
     setlocale(LC_ALL,"Portuguese");
    //Definindo como teste 1 na classe//
    controlador_BMS teste1;
    float tensao_instantanea, corrente, corrente_sobrecarga;
    int nivel_bateria, temperatura;
    //Pedindo informacoes ao usuario//
    cout << "Sistema de gerenciamento de banco de baterias (BMS).LTD"<< endl;
    cout << "Informe o valor da tensao instantanea da  bateria (Volts):  "<<endl;
    cin >> tensao_instantanea;
    cout << "Informe o valor da corrente(Ampere): "<<endl;
    cin >> corrente;
    cout << "Informe o valor da temperatura(Celsus): "<<endl;
    cin >> temperatura;
    cout << "Informe o valor da corrente de sobrecarga: " <<endl;
    cin  >> corrente_sobrecarga;
    cout << "Informe quantos % esta carga da bateria: " <<endl;
    cin >> nivel_bateria;
    //atruibuindo od valores//
    teste1.settensao_instantanea(tensao_instantanea);
    teste1.setcorrente(corrente);
    teste1.settemperatura(temperatura);
    teste1.setcorrente_sobrecarga(corrente_sobrecarga);
    teste1.setnivel_bateria(nivel_bateria);
    //Resultado//
    cout<< "Tensão Bateria: " << tensao_instantanea <<"V" << endl;
    cout<< "Corrente da Bateria: "<<corrente << "A " << teste1.situacao3() << endl;
    cout<< "Potencia: "<< teste1.getcalculo_potencia()<< "W" << endl;
    cout<< "Sensor de Temperatura: " <<  temperatura << "°c " << teste1.situacao1() << endl;
    cout<<"Estado da Carga: " << nivel_bateria <<"% "  << teste1.situacao2() << endl;


return 0;
}