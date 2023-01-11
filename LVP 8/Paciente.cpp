#include "Paciente.h"
//aqui criando um construtor//
paciente::paciente(){
	nome =  " ";
	registro = 0;
	motivo = " ";
}
//declarando as funções set(inserir valores) e get(puxar valores)//
void paciente::setnome(string nome){
	this -> nome = nome;

}

void paciente::setregistro(int registro){
	this -> registro = registro;
}

void paciente::setmotivo(string motivo){
	this -> motivo = motivo;
}

string paciente::getnome(){
	return nome;
}

int paciente::getregistro(){
	return registro;
}

string paciente::getmotivo(){
	return motivo;
}
