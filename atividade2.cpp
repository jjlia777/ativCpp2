/*
1 – Uma empresa vende sorvetes no valor atacado, se o cliente comprar até 25
unidades, é cobrado R$1.50 por unidade, acima disso, é cobrado R$1.25. Faça
que calcule quanto um determinado cliente irá pagar
*/


#include <iostream>
using namespace std;
int main(int argc, char* argv[]) {
	int unidades = 28;
	if (unidades <= 25) {
		double valor1 = unidades * 1.50;
		cout << "O cliente vai pagar " << valor1 << " reais.";
	}
	else{
		double valor2 = unidades * 1.25;
		cout << "O cliente vai pagar " << valor2 << " reais.";
	}

	return 0;
}






/*
2 – Declare uma variável com um número, se ele for maior que 10, faça o
cálculo do número + 10 * 2. Senão faça número + 9 * 3 – 8
*/


#include <iostream>
using namespace std;
int main(int argc, char* argv[]) {
	int num = 8;
	if (num > 10) {
		int calc = num + 10 * 2;
		cout << "Resultado: " << calc;
	}
	else {
		int calc2 = numero + 9 * 3 - 8;
		cout << "Resultado: " << calc2;
	}

	return 0;
}




/*
3 – Faça um código que verifique se um número é positivo ou negativo
*/


#include <iostream>
using namespace std;
int main(int argc, char* argv[]) {
	int num = -25;
	if (num >= 0) {
		cout << "Numero Positivo";
	}
	else {
		cout << "Numero Negativo";
	}

	return 0;
}




/*
4 – Faça um codigo que tenha duas variáveis numéricas e mostre qual delas é
a maior
*/


#include <iostream>
using namespace std;
int main(int argc, char* argv[]) {
	int num1 = 5;
	int num2 = 9;

	if (num1 > num2) {
		cout << "Numero " << num1 << " maior que " << num2;
	}
	else {
		cout << "Numero " << num2 << " maior que " << num1;
	}

	return 0;
}





/*
5 – Um professor deseja um sistema para o cálculo de média dos seus alunos,
para isso, declare duas variáveis para as notas, realize o cálculo da média e
mostre, se a média for maior ou igual a 7 mostre “Aprovado”, senão mostre
“Reprovado”
*/


#include <iostream>
using namespace std;
int main(int argc, char* argv[]) {
	double nota = 7.5;
	double nota2 = 5;
	double media = (nota + nota2) / 2;

	if (media >= 7) {
		cout << "Aprovado";
	}
	else {
		cout << "Reprovado";
	}

	return 0;
}
