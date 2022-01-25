#include <iostream>
#include <locale.h>

using namespace std;

int Op; //Operação
float num1 = 0;
float num2 = 0;
float res = 0;
char retorno;


void calculadora(float num1, float num2, int Op)
{
	switch (Op)
	{
	case 1: // Soma
	{
		res = num1 + num2;
		cout << endl << num1 << " + " << num2 << " = " << res;
		break;
	}

	case 2: // Subtração
	{
		res = num1 - num2;
		cout << endl << num1 << " - " << num2 << " = " << res;
		break;
	}

	case 3: // Multiplicação
	{
		res = num1 * num2;
		cout << endl << num1 << " * " << num2 << " = " << res;
		break;
	}

	case 4: // Divisão
	{
		res = num1 / num2;
		cout << endl << num1 << " / " << num2 << " = " << res;
		break;
	}

	case 5: // Resto
	{
		res = (int)num1 % (int)num2;
		cout << endl << (int)num1 << " % " << (int)num2 << " = " << res;
		break;
	}

	case 6: // Exponenciação
	{
		res = pow(num1, num2);
		cout << endl << num1 << " ^ " << num2 << " = " << res;
		break;
	}

	case 7: // Raíz quadrada
	{
		res = sqrt(num1);
		cout << endl << " Raíz de " << num1 << " = " << res;
		break;
	}

	case 8: // Fatorial
	{
		res = 1;
		int valor = (int)num1;
		while ((int)num1 > 1)
			res *= (int)num1--;
		cout << endl << " Fatorial de " << valor << " = " << res;
		break;
	}

	default: // Só pra garantir que não haverá um retorno vazio.
	{
		printf("Operação não reconhecida.");
		break;
	}
	}
}


int main()
{
	setlocale(LC_ALL, "Portuguese");// Habilita a acentuação para o português.

	cout << "*** CALCULADORA ***\n\n";
	cout << " 1 = soma; 2 = subtração;\n 3 = multiplicação; 4 = divisão;\n 5 = resto; 6 = exponenciação;\n 7 = raiz quadrada; 8 = fatorial.\n";
	cout << "Digite a operação que deseja:\n";
	cin >> Op;

	if (Op > 0 && Op < 9) // Coloquei para usar apenas as operações utilizadas. Dessa forma não é gerado retorno vazio.
	{

		if (Op == 7 || Op == 8)
		{
			cout << "Digite o valor:\n";
			cin >> num1;

			calculadora(num1, 0, Op);
			cout << "\nDeseja continuar? S ou N:\n";
			cin >> retorno;

			if (toupper(retorno) == 'S')
				main();
			else
				printf("Até a próxima.");
		}

		else
		{
			cout << "Digite os dois valores:\n";
			cin >> num1;
			cin >> num2;

			calculadora(num1, num2, Op);
			cout << "\nDeseja continuar? S ou N:\n";
			cin >> retorno;

			if (toupper(retorno) == 'S')
				main();
			else
				printf("Até a próxima.");

		}
	}
	else
	{
		printf("Operação não reconhecida.");
		cout << "\nDeseja continuar? S ou N:\n";
		cin >> retorno;

		if (toupper(retorno) == 'S')
			main();
		else
			printf("Até a próxima.");
	}
}

