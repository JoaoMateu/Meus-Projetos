#include "marca.h"

/* Atribuir as funções referentes aos detalhes do carro */

car::car(int year_of_manufacture, string number_chassi, double price, string brand_car , string model_car){
	setbrand_car(brand_car);
	setmodel_car(model_car);
	setyear_of_manufacture(year_of_manufacture);
	setnumber_chassi(number_chassi);
	setprice(price);
}

car::~car(){
	
}
void car::setbrand_car(string brand_car){
	this -> brand_car = brand_car;
}

void car::setmodel_car(string model_car){
	this -> model_car = model_car;
}

string car::getbrand_car(){
	return brand_car;
}

string car::getmodel_car(){
	return model_car;
}