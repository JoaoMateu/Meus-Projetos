#ifndef CAMINHAO_H
#define CAMINHAO_H

/* Determinando uma classe para as informações do caminhão */

class trunk : public vehicle{
	private:
		string brand_trunk;
		string model_trunk;
		int capacity;
		
	public:
		trunk(int = 0, string = " ", double = 0.0 , string = " ", string = " ", int = 0);
		~trunk();
		void setbrand_trunk(string);
		void setmodel_trunk(string);
		void setcapacity(int);
		string getbrand_trunk();
		string getmodel_trunk();
		int getcapacity();
};
#endif