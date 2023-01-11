#include "prototipo.h"
//incluindo o arquivo que contem a classes//

//contruindo um contruct//
Estacionamento::Estacionamento(){
    nome = " ";
    placa = " ";
    entrada.hora = entrada.minutos = entrada.segundos = 0;
    saida.hora = saida.minutos = saida.segundos = 0;
    cal = 0;
    calexit = 0;
    horas_ocupadas = 0;
    
}
//inserindo um destruct//
Estacionamento::~Estacionamento(){
    cout << "Fim das operações."<<endl;
}



// inserindo as informações nas variaveis private//
void Estacionamento::setnome(string nome){
        this->nome=nome;
    }

void Estacionamento::setplaca(string placa){
       this->placa=placa;
    }

void Estacionamento::setentrada(int horas, int minutos , int segundos){
    entrada.hora = horas;
    entrada.minutos =  minutos;
    entrada.segundos = segundos;
    }

void Estacionamento::setsaida(int time, int minutes, int seconds){
    saida.hora = time;
    saida.minutos = minutes;
    saida.segundos= seconds;

}
string Estacionamento::getplaca(){
	return placa;
}

string Estacionamento::getnome(){
	return nome;
}
	



//calculo de conversão em segundos da saida//
void Estacionamento::convertexit(){
saida.hora = saida.hora * 3600;
saida.minutos = saida.minutos * 60;
saida.segundos = saida.segundos;
calexit = saida.hora + saida.minutos + saida.segundos;
}

//calculo de conversão em segundos  da entrada//
void Estacionamento::convert(){
entrada.hora = entrada.hora * 3600;
entrada.minutos = entrada.minutos * 60;
entrada.segundos = entrada.segundos;
cal = entrada.hora + entrada.minutos + entrada.segundos;
}



//calculo para saber quanto tempo carro ficou//
float Estacionamento::gethoras_ocupadas(){
	convert();
	convertexit();
	horas_ocupadas = (calexit - cal) /3600;
	horas_ocupadas = ceil(horas_ocupadas);
	return horas_ocupadas;
	}

	
float Estacionamento::getcalculo_valor(){
	
	calculo_valor = (horas_ocupadas * 2) + 5;
	return calculo_valor;
}