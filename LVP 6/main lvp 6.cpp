//Primeiro devem ser informados a placa e o nome do proprietário do carro, em seguida o horário de entrada e de saída do veículo.
//O programa deve mostrar a placa do veículo, nome do proprietário, quantidade de horas que o carro ficou no estacionamento (arredondado para cima) e o valor a ser pago.
#include <iostream>
#include <string>
#include <iomanip>
#include <locale>
#include <cmath>
using namespace std;
//incluindo os programas cabeçarios//
#include "prototipo.cpp"

int main(){
    setlocale(LC_ALL, "Portuguese");
    Estacionamento Cliente1;
    string nome,placa;
    //aqui atribuido a horas de entrada//
    int horas,minutos, segundos;
    //aqui atribuido a horas de saida//
    int time, minutes, seconds;
	cout<<"Informe o nome do Dono do Carro: ";
    cin >> nome;
	cout <<"Informe a Placa do Veículo ";
	cin >> placa;
	cout << "Qual Horário de entrada do veículo em Horas: ";
	cin >> horas;
	cout << "Qual Horário de entrada do veículo em Minutos: ";
	cin >> minutos;
	cout << "Qual Horário de entrada do veículo em Segundos: ";
	cin >> segundos;
	cout << "Qual Horário de saida do veículo em Horas: ";
	cin >> time;
	cout << "Qual Horário de entrada do veículo em Minutos: ";
	cin >> minutes; 
    cout << "Qual Horário de entrada do veículo em Segundos: ";
	cin >> seconds;
	
	//atribuindo valores as variaveis//
	Cliente1.setnome(nome);
	Cliente1.setplaca(placa);
	Cliente1.setentrada(horas,minutos,segundos);
	Cliente1.setsaida(time,minutes,seconds);
	//Print das informações//
	
	cout <<"Placa do veículo: " << Cliente1.getplaca() << endl;
	cout <<"Dono do Veículo: "<<Cliente1.getnome()<< endl;
	cout <<"Horas ocupadas: "<<Cliente1.gethoras_ocupadas()<< endl;
	cout <<"Valor R$: "<<Cliente1.getcalculo_valor() <<endl;
	
	


    return 0;}