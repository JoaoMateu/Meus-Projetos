//Primeiro devem ser informados a placa e o nome do propriet�rio do carro, em seguida o hor�rio de entrada e de sa�da do ve�culo.
//O programa deve mostrar a placa do ve�culo, nome do propriet�rio, quantidade de horas que o carro ficou no estacionamento (arredondado para cima) e o valor a ser pago.
#include <iostream>
#include <string>
#include <iomanip>
#include <locale>
#include <cmath>
using namespace std;
//incluindo os programas cabe�arios//
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
	cout <<"Informe a Placa do Ve�culo ";
	cin >> placa;
	cout << "Qual Hor�rio de entrada do ve�culo em Horas: ";
	cin >> horas;
	cout << "Qual Hor�rio de entrada do ve�culo em Minutos: ";
	cin >> minutos;
	cout << "Qual Hor�rio de entrada do ve�culo em Segundos: ";
	cin >> segundos;
	cout << "Qual Hor�rio de saida do ve�culo em Horas: ";
	cin >> time;
	cout << "Qual Hor�rio de entrada do ve�culo em Minutos: ";
	cin >> minutes; 
    cout << "Qual Hor�rio de entrada do ve�culo em Segundos: ";
	cin >> seconds;
	
	//atribuindo valores as variaveis//
	Cliente1.setnome(nome);
	Cliente1.setplaca(placa);
	Cliente1.setentrada(horas,minutos,segundos);
	Cliente1.setsaida(time,minutes,seconds);
	//Print das informa��es//
	
	cout <<"Placa do ve�culo: " << Cliente1.getplaca() << endl;
	cout <<"Dono do Ve�culo: "<<Cliente1.getnome()<< endl;
	cout <<"Horas ocupadas: "<<Cliente1.gethoras_ocupadas()<< endl;
	cout <<"Valor R$: "<<Cliente1.getcalculo_valor() <<endl;
	
	


    return 0;}