# ifndef PROTOTIPO_H
# define PROTOTIPO_H

//essa parte aqui estou definindo como uma arquivo "cabecario"//

//aqui estou criando um struct para armazenar o horario de entrada e saida//
struct tempo{
    int hora;
    int minutos;
    int segundos;

};
//abrindo uma classe que ira armazenar nome do cliente e a placa//
class Estacionamento{
	string nome;
	string placa;
	tempo entrada;
	tempo saida;
	float calculo_valor;
    float cal;
    float calexit;
    float horas_ocupadas;
    
  public:
  	 void  setplaca(string);
  	 void  setnome(string);
  	 void  setentrada(int,int,int);
  	 void  setsaida(int,int,int);
  	 float getcalculo_valor();
  	 void  convert();
  	 void  convertexit();
     Estacionamento();
    ~Estacionamento();
     string getplaca();
     string getnome();
     float gethoras_ocupadas();
     
};
#endif
