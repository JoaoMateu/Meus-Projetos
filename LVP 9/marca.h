#ifndef MARCA_H
#define MARCA_H	

/* Determinando uma classe para as informações do veículo especificamente a marca e modelo */


class car : public vehicle{
	private:
		string brand_car;
		string model_car;
		
	public:
		car(int = 0, string = " ", double = 0.0, string = " ", string = " ");
		~car();
		void setbrand_car(string);
		void setmodel_car(string);
		string getbrand_car();
		string getmodel_car();
		
};
#endif