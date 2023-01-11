//Programa que  Leia os valores para horário e a data e armazene no compromisso, incluindo o texto do compromisso. Em seguida escreva os valores armazenados no Compromisso.//
#include <iostream>
#include <string>
using namespace std;
struct compromisso {
    int dia;
    int mes;
    int ano;
    int hora;
    int minutos;
    int segundos;
    string atividade;
}missao;
int main() {
   //entrada das informacoes//
   cout <<"Informe o valor da horas: \n";
   cin >> missao.hora;

    cout <<"Informe o valor dos minutos \n";
   cin >> missao.minutos;

    cout <<"Informe o valor dos segundos \n";
   cin >> missao.segundos;

    cout <<"Informe o valor do dia \n";
   cin >> missao.dia;

    cout <<"Informe o valor do mes \n";
   cin >> missao.mes;

    cout <<"Informe o valor do ano \n";
   cin >> missao.ano;

    cout <<"Informe a atividade que voceh tera \n";
   cin.ignore();
   getline(cin,missao.atividade);

    // saida das informacoes//
    cout << "Seu compromisso eh \n \n";
    cout << "seu horario eh:" << missao.hora <<":"<< missao.minutos<<":"<<missao.segundos<<"\n \n";
    cout<< "sua data eh:"<<missao.dia<<"/"<< missao.mes<<"/"<<missao.ano<< "\n \n";
    cout<<"Compromisso:"<<missao.atividade<<"\n fim ";


 


    return 0;
}