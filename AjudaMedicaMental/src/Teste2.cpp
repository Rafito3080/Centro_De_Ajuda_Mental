#include <iostream>
using namespace std;

int main() {
	int AjM;
	int SCh;
	cout << "Obrigado por ligar ao Centro de Ajuda Mental. Aperte 1 se quiser falar com nossa nova inteligência artificial. Aperte 2 para falar conosco. Aperte 3 para falar com \nurgêngia à um médico. Aperte 4 para falar com nossa médica que irá te indicar remédios. Ou aperte 5 para agendar uma terapia. \nNúmero: ";
	cin >> AjM;
	cin.ignore();
	switch (AjM){
	case 1:
		cout << "Olá! Sou a Milena, nova inteligência artificial, como poderia te ajudar neste momento tão difícil?";
		break;
	case 2:
		cout << "Olá! Sou atendente do Centro de Ajuda Mental, qual o seu incômodo?" ;
		break;
	case 3:
		cout <<"Qual é sua urgência?";
		break;
	case 4:
		cout << "Qual o seu diagnóstico para poder indicar suas medicações? ";
		break;
	case 5:
		cout << "Qual data você gostaria de agendar sua seção de terapia? ";
		break;
	default :
		cout << "Esse número não deve ser pressionado. Tente novamente com 1, 2, 3, 4 ou 5. \nNúmero: ";
		cin >> SCh;
		cin.ignore();
		switch (SCh){
			case 1:
				cout << "Olá! Sou a Milena, nova inteligência artificial, como poderia te ajudar neste momento tão difícil?";
				break;
			case 2:
				cout << "Olá! Sou atendente do Centro de Ajuda Mental, qual o seu incômodo?" ;
				break;
			case 3:
				cout <<"Qual é sua urgência?";
				break;
			case 4:
				cout << "Qual o seu diagnóstico para poder indicar suas medicações? ";
				break;
			case 5:
				cout << "Qual data você gostaria de agendar sua seção de terapia? ";
				break;
			default :
				cout <<"Esse número não deve ser pressionado. Desculpe, estamos tentando resolver este problema, por favor, tente novamente mais tarde.";
				break;
		}
		break;
		}
	return 0;
}
