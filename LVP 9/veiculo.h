#ifndef VEICULO_H
#define VEICULO_H

/* Determinando uma classe para as informações do veículo */
class vehicle {
	protected:
		int year_of_manufacture;
		string number_chassi;
		double price;
		
	public:
		vehicle();
		void setyear_of_manufacture(int);
		void setnumber_chassi(string);
		void setprice(double);
		
		int getyear_of_manufacture();
		string getnumber_chassi();
		double getprice();
				
};

#endif