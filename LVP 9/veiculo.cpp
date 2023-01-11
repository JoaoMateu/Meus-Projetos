#include "veiculo.h"

/* Atribuir as funções referentes ao veiculo */

vehicle::vehicle(){
	year_of_manufacture = 0;
	number_chassi = " ";
	price = 0;
}

void vehicle::setyear_of_manufacture(int year_of_manufacture){
	this -> year_of_manufacture = year_of_manufacture;
}


void vehicle::setnumber_chassi(string number_chassi){
	this -> number_chassi = number_chassi;
}

void vehicle::setprice(double price){
	this -> price = price;
}

int vehicle::getyear_of_manufacture(){
	return year_of_manufacture;
}

string vehicle::getnumber_chassi(){
	return number_chassi;
}

double vehicle::getprice(){
	return price;
}