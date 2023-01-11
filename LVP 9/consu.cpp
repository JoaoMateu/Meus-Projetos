#include "consu.h"

Concessionaria::Concessionaria(){
	name = " ";
	user  = " ";
	password = 0;
	
	int year;
	string model_car,number_chassi, brand_car;
	double price;
	
	ifstream arquivocarro;
	arquivocarro.open("save_carro.txt");
	
	if(arquivocarro.is_open()){
		while(!arquivocarro.eof()){
			arquivocarro>>year;
			if (arquivocarro.eof()){
				break;
			}
			getline(arquivocarro,number_chassi);
			arquivocarro>>price;
			getline(arquivocarro,brand_car);
			getline(arquivocarro,model_car);
			car carro_ficha(year,number_chassi,price,brand_car,model_car);
			sell_car.push_back(carro_ficha);
			arquivocarro.ignore();
		}
		arquivocarro.close();
	}
	else{
		cout<<"Não Foi possivel executar o arquivo"<<endl;
	} 
	int year_trunk,cap_trunk;
	string model_trunk,number_chassitrunk,brand_trunk;
	double price_trunk;
	
	ifstream arquivocaminhao;
	arquivocaminhao.open("save_caminhao.txt");
	if(arquivocaminhao.is_open()){
		while(!arquivocaminhao.eof()){
			arquivocaminhao>>year_trunk;
			if(arquivocaminhao.eof()){
				break;
			}
			getline(arquivocaminhao,number_chassitrunk);
			arquivocaminhao>>price_trunk;
			getline(arquivocaminhao,brand_trunk);
			getline(arquivocaminhao,model_trunk);
			arquivocaminhao>>cap_trunk;
			trunk caminhao_ficha(year_trunk,number_chassitrunk,price_trunk,brand_trunk,model_trunk,cap_trunk);
			sell_trunk.push_back(caminhao_ficha);
			arquivocaminhao.ignore();
		}
		arquivocaminhao.close();
	}
	else{
		cout<<"Não foi possivel executar o arquivo!!"<<endl;
	}
	
}

Concessionaria::~Concessionaria(){
	save_arqui();
	cout<<"\n Encerrando Programa..."<<endl;
}
void Concessionaria::setuser(string user){
	this -> user = user;
}

void Concessionaria::setpassword(int password){
	this -> password = password;
}

void Concessionaria::setname(string name){
	this -> name = name;
}

string Concessionaria::getuser(){
	return user;
}

int  Concessionaria::getpassword(){
	return password;
}

string Concessionaria::getname(){
	return name;
}

bool Concessionaria::login(string usuario, int senha){
	if (user == usuario and password == senha){
		return true;
	}
	
	return false;

}

bool Concessionaria::register_car(car cari, string chassi){
	for(unsigned i=0; i< sell_car.size(); i++){
		if(sell_car.size()!=0 and sell_car[i].getnumber_chassi()==chassi){
			return false;
		}
	}
	sell_car.push_back(cari);
	return true;
}

bool Concessionaria::register_trunk(trunk cami, string chassi){
	for(unsigned i=0; i< sell_trunk.size(); i++){
		if(sell_trunk.size()!=0 and sell_trunk[i].getnumber_chassi()==chassi){
			return false;
		}
	}
	sell_trunk.push_back(cami);
	return true;
	
}

bool Concessionaria::selling_car(){
	string vendedor;
	cout<<"informe o chassi do carro que você deseja vender:"<<endl;
	cin>> vendedor;
	for(unsigned i = 0; i < sell_car.size(); i++){
		if(sell_car.size() != 0 and sell_car[i].getnumber_chassi() == vendedor){ 
            sell_car.erase(sell_car.begin()+i);
            return true;
        }
	}
	return false;
}


bool Concessionaria::selling_trunk(){
	string  vendedor;
	cout<<"informe o chassi do caminhão que você deseja vender:"<<endl;
	cin>> vendedor;
	for(unsigned i = 0; i < sell_car.size(); i++){
		if(sell_trunk.size() != 0 and sell_trunk[i].getnumber_chassi() == vendedor){ 
            sell_trunk.erase(sell_trunk.begin()+i);
            return true;
        }
	}
	return false;
}

bool Concessionaria::display_cars(){
	cout<<"####TODOS OS CARROS DISPONIVEIS###"<<endl;
	cout<<"Tipo: \t \t Modelo: \t \t Chassi: \t \t Ano de fabricação: \t \t Preço:"<<endl;
	if(sell_car.size()==0){
		return false;
	}
	else{
		for(unsigned i = 0; i < sell_car.size(); i++){
			cout<<sell_car[i].getbrand_car()<<"\t \t "<<sell_car[i].getmodel_car()<<"\t\t     "<<sell_car[i].getnumber_chassi()<<"\t\t\t   "<<sell_car[i].getyear_of_manufacture()<<"\t   \t\t\t"<<sell_car[i].getprice()<<endl;
		}
	}
	return true;
}

bool Concessionaria::display_trunks(){
	cout<<"####TODOS OS CAMINHÃO DISPONIVEIS###"<<endl;
	cout<<"Tipo: \t \t Modelo: \t \t Chassi: \t \t Ano de fabricação: \t \t Preço:"<<endl;
	if(sell_trunk.size()==0){
		return false;
	}
	else{
		for(unsigned i = 0; i < sell_trunk.size(); i++){
			cout<< sell_trunk[i].getbrand_trunk()<<"\t \t "<<sell_trunk[i].getmodel_trunk()<<"\t\t     "<<sell_trunk[i].getnumber_chassi()<<"\t\t\t   "<<sell_trunk[i].getyear_of_manufacture()<<"\t   \t\t\t"<<sell_trunk[i].getprice()<<endl;
		}
	}
	return true;
}

void Concessionaria::save_arqui(){
	ofstream arquivocarro;
	arquivocarro.open("save_carro.txt",ios::trunc);
	if(arquivocarro.is_open()){
		for(unsigned i=0;i<sell_car.size();i++){
			arquivocarro<<sell_car[i].getyear_of_manufacture()<<endl;
			arquivocarro<<sell_car[i].getnumber_chassi()<<endl;
			arquivocarro<<sell_car[i].getprice()<<endl;
			arquivocarro<<sell_car[i].getbrand_car()<<endl;
			arquivocarro<<sell_car[i].getmodel_car()<<endl;
		}
		arquivocarro.close();
	}
	else{
		cout<<"Não foi possivel executar o arquivo!"<<endl;
	}
	ofstream arquivocaminhao;
	arquivocaminhao.open("save_caminhao.txt",ios::trunc);
	if(arquivocaminhao.is_open()){
		for(unsigned i=0;i<sell_trunk.size();i++){
			arquivocaminhao<<sell_trunk[i].getyear_of_manufacture()<<endl;
			arquivocaminhao<<sell_trunk[i].getnumber_chassi()<<endl;
			arquivocaminhao<<sell_trunk[i].getprice()<<endl;
			arquivocaminhao<<sell_trunk[i].getbrand_trunk()<<endl;
			arquivocaminhao<<sell_trunk[i].getmodel_trunk()<<endl;
			arquivocaminhao<<sell_trunk[i].getmodel_trunk()<<endl;
			arquivocaminhao<<sell_trunk[i].getcapacity()<<endl;	
		}
		arquivocaminhao.close();
	}
	else{
		cout<<"Não foi possivel executar o arquivo!"<<endl;
	}
}
