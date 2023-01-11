#include "Caminhao.h"

trunk::trunk(int year_of_manufacture, string number_chassi, double price, string brand_trunck, string model_trunck, int capacity){
	setbrand_trunk(brand_trunck);
	setmodel_trunk(model_trunk);
	setyear_of_manufacture(year_of_manufacture);
	setnumber_chassi(number_chassi);
	setprice(price);
	setcapacity(capacity);
	
}

trunk::~trunk(){
	
}

void trunk::setbrand_trunk(string brand_trunk){
	this -> brand_trunk = brand_trunk;
}

void trunk::setmodel_trunk(string model_trunk){
	this -> model_trunk = model_trunk;
}



void trunk::setcapacity(int capacity){
	this -> capacity = capacity;
}

string trunk::getbrand_trunk(){
	return brand_trunk;
}

string trunk::getmodel_trunk(){
	return model_trunk;
}

int trunk::getcapacity(){
	return capacity;
}

