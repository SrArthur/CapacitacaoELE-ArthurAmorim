#include <iostream>
#include <locale.h>

using namespace std;

int Op; //Opera��o
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

	case 2: // Subtra��o
	{
		res = num1 - num2;
		cout << endl << num1 << " - " << num2 << " = " << res;
		break;
	}

	case 3: // Multiplica��o
	{
		res = num1 * num2;
		cout << endl << num1 << " * " << num2 << " = " << res;
		break;
	}

	case 4: // Divis�o
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

	case 6: // Exponencia��o
	{
		res = pow(num1, num2);
		cout << endl << num1 << " ^ " << num2 << " = " << res;
		break;
	}

	case 7: // Ra�z quadrada
	{
		res = sqrt(num1);
		cout << endl << " Ra�z de " << num1 << " = " << res;
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

	default: // S� pra garantir que n�o haver� um retorno vazio.
	{
		printf("Opera��o n�o reconhecida.");
		break;
	}
	}
}


int main()
{
	setlocale(LC_ALL, "Portuguese");// Habilita a acentua��o para o portugu�s.

	cout << "*** CALCULADORA ***\n\n";
	cout << " 1 = soma; 2 = subtra��o;\n 3 = multiplica��o; 4 = divis�o;\n 5 = resto; 6 = exponencia��o;\n 7 = raiz quadrada; 8 = fatorial.\n";
	cout << "Digite a opera��o que deseja:\n";
	cin >> Op;

	if (Op > 0 && Op < 9) // Coloquei para usar apenas as opera��es utilizadas. Dessa forma n�o � gerado retorno vazio.
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
				printf("At� a pr�xima.");
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
				printf("At� a pr�xima.");

		}
	}
	else
	{
		printf("Opera��o n�o reconhecida.");
		cout << "\nDeseja continuar? S ou N:\n";
		cin >> retorno;

		if (toupper(retorno) == 'S')
			main();
		else
			printf("At� a pr�xima.");
	}
}

