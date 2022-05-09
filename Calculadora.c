//Calculadora:
//Imports(Bibliotecas):
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
//Int main e locale:
int main(void){
setlocale(LC_ALL,"Portuguese");
//Variáveis:
int operacao_menu, operacao_basic, operacao_fg, operacao_form, somar_1, somar_2, somar_r, subtrair_1, subtrair_2, subtrair_r, multiplicar_1, multiplicar_2, multiplicar_r, raiz_1, raiz_r, potencia_1, potencia_2, potencia_r, bhaskara_a, bhaskara_b, bhaskara_c, bhaskara_delta, bhaskara_r1, bhaskara_r2, quadrado_1, quadrado_2, quadrado_r, triangulo_base, triangulo_altura, triangulo_r; 
float porcen_1, porcen_2, porcen_r, circulo_1, circulo_r, dividir_1, dividir_2, dividir_r;
//Interação:
printf("\n[Calculadora (V3.0)]\n\n");
printf("Selecione a operação teclando o número correspondente e pressionando 'Enter':\n\n1.Operações básicas.\n2.Raiz Quadrada.\n3.Potência.\n4.Fórmula de Bháskara.\n5.Porcentagem.\n6.Figuras geométricas.\n0.Fórmulas matemáticas.\n\n");
scanf("%i", &operacao_menu);
printf("\n------------------------------------------------------------------------\n\n");
	//Operações básicas:
	if(operacao_menu == 1){
		printf("Selecione qual operação básica deseja realizar e pressione a tecla 'Enter':\n\n1.Somar.\n2.Subtrair.\n3.Multiplicar.\n4.Dividir.\n\n");
		scanf("%i", &operacao_basic);
		printf("\n------------------------------------------------------------------------\n\n");
	}
		//Somar:
	if(operacao_basic == 1){
		printf("Para começar a soma, digite o primeiro número e em seguida aperte 'Enter':\n\n");
		scanf("%i", &somar_1);
		printf("\nDigite o segundo número:\n\n");
		scanf("%i", &somar_2);
		printf("\n------------------------------------------------------------------------\n\n");
			somar_r = somar_1 + somar_2;	//Cálculo
		printf("O resultado da soma é : %i \n", somar_r);
	}
		//Subtrair:
	if(operacao_basic == 2){
		printf("Para começar a subtração, digite o primeiro número e em seguida aperte 'Enter':\n\n");
		scanf("%i", &subtrair_1);
		printf("\nDigite o segundo número:\n\n");
		scanf("%i", &subtrair_2);
		printf("\n------------------------------------------------------------------------\n\n");
			subtrair_r = subtrair_1 - subtrair_2;	//Cálculo
		printf("O resultado da subtração é : %i \n", subtrair_r);
	}
		//Multiplicação:
	if(operacao_basic == 3){
		printf("Para começar a multiplicação, digite o primeiro número e em seguida aperte 'Enter':\n\n");
		scanf("%i", &multiplicar_1);
		printf("\nDigite o segundo número:\n\n");
		scanf("%i", &multiplicar_2);
		printf("\n------------------------------------------------------------------------\n\n");
			multiplicar_r = multiplicar_1 * multiplicar_2;	//Cálculo
		printf("O resultado da multiplicação é : %i \n", multiplicar_r);
	}
		//Divisão:
	if(operacao_basic == 4){
		printf("Para começar a divisão, digite o primeiro número e em seguida aperte 'Enter':\n\n");
		scanf("%f", &dividir_1);
		printf("\nDigite o segundo número:\n\n");
		scanf("%f", &dividir_2);
		printf("\n------------------------------------------------------------------------\n\n");
			dividir_r = dividir_1 / dividir_2;	//Cálculo
		printf("O resultado da divisão é : %f. \n", dividir_r);
		}
	//Raiz Quadrada:
	if(operacao_menu == 2){
		printf("Para calcular a raiz, digite o número que desejar e aperte 'Enter':\n\n");
		scanf("%i", &raiz_1);
		printf("\n------------------------------------------------------------------------\n\n");
			raiz_r = sqrt(raiz_1);	//Cálculo
		printf("O resultado da raiz quadrada é : %i. \n", raiz_r);
	}
	//Potência:
	if(operacao_menu == 3){
		printf("Para calcular a potência, digite o número que desejar e aperte 'Enter':\n\n");
		scanf("%i", &potencia_1);
		printf("Digite o expoente do seu número:\n\n");
		scanf("%i", &potencia_2);
		printf("\n------------------------------------------------------------------------\n\n");
			potencia_r = pow(potencia_1, potencia_2);
		printf("O resultado da potenciação é : %i. \n", potencia_r);
	}
	//Bháskara:
	if(operacao_menu == 4){
		printf("Para fazer o cálculo da fórmula de bhaskara digite o número correspondente a 'A' e aperte 'Enter':\n\n");
		scanf("%d", &bhaskara_a);
		printf("\nDigite o valor de 'B':\n\n");
		scanf("%d", &bhaskara_b);
		printf("\nDigite o valor de 'C':\n\n");
		scanf("%d", &bhaskara_c);
			bhaskara_delta = pow(bhaskara_b, 2) - 4*bhaskara_a*bhaskara_c;	//Cálculo de delta
			bhaskara_r1 = -bhaskara_b+sqrt(bhaskara_delta)/(2*bhaskara_a);	//Cálculo de X1
			bhaskara_r2 = -bhaskara_b-sqrt(bhaskara_delta)/(2*bhaskara_a);	//Cálculo de X2
		printf("\n------------------------------------------------------------------------\n\n");
		printf("Utilizando raiz de delta positivo em X1 e raiz de delta negativo em X2, podemos adquirir o seguinte resultado:\nX1 = %d. \nX2 = %d. \n\n", bhaskara_r1, bhaskara_r2);
	}
	//Porcentagem:
	if(operacao_menu == 5){
		printf("\nPara calcular a porcentagem, digite o valor que deseja ser o porcento 'Enter':\n\n");
		scanf("%f", &porcen_1);
		printf("\nDigite o valor de onde o porcento irá retirar o resultado:\n\n");
		scanf("%f", &porcen_2);
			porcen_r = porcen_2*(porcen_1/100);		//Cálculo
		printf("\n------------------------------------------------------------------------\n\n");
		printf("O resultado desse cálculo é: %f. \n", porcen_r);
	}
	//Áreas de figuras geométricas:
	if(operacao_menu == 6){
		printf("\nSelecione a figura geométrica que desejar para calcular sua área:\n\n1.Quadrado ou retângulo.\n2.Círculo.\n3.Triângulo.\n\n");
		scanf("%i", &operacao_fg);
	}
		//Quadrado/Retângulo:
	if(operacao_fg == 1){
		printf("\nPara continuar a operação, informe o valor do lado de cima ou de baixo do quadrado/retângulo: _\n\n");
		scanf("%i", &quadrado_1);
		printf("\nInsira o valor do lado esquerdo ou direito do quadrado/retângulo: |\n\n");
		scanf("%i", &quadrado_2);
			quadrado_r = quadrado_1 * quadrado_2;	//Cálculo
		printf("\n------------------------------------------------------------------------\n\n");
		printf("O valor da área do quadrado/retângulo é: %i \n", quadrado_r);
	}
		//Círculo:
		if(operacao_fg == 2){
		printf("\nPara calcular a área do círculo, insira o valor do raio:\n\n");
		scanf("%f", &circulo_1);
			circulo_r = 3.14 * pow(circulo_1, 2);	//Cálculo
		printf("\n------------------------------------------------------------------------\n\n");
		printf("O valor da área do círculo é : %f \n", circulo_r);
	}
		//Triângulo:
		if(operacao_fg == 3){
		printf("\nPara calcular a área do triângulo, insira o valor da base:\n\n");
		scanf("%i", &triangulo_base);
		printf("\nInsira o valor da altura:\n\n");
		scanf("%i", &triangulo_altura);
			triangulo_r = (triangulo_base*triangulo_altura)/2;	//Cálculo
		printf("\n------------------------------------------------------------------------\n\n");
		printf("O valor da área do triângulo é : %i \n", triangulo_r);
		}
	//Fórmulas matemáticas:
		if(operacao_menu == 0){
		printf("\nDigite o número correspondente a cada formula e pressione a tecla 'Enter':\n1.Fórmula de Bháskara.\n2.Relatividade.\n3.Área do quadrado/retângulo.\n4.Circunferência.\n5.Área do Triângulo.\n");
		scanf("%i", &operacao_form);
		printf("\n------------------------------------------------------------------------\n\n");
		}
		//Fórmula de Bháskara:
		if(operacao_form == 1){
		printf("delta = b² - 4*a*c\n\n-b +-raiz{delta}/2*a.\n");
		}
		//Relatividade:
		if(operacao_form == 2){
		printf("E = m*c*2.\n");
		}
		//Área do quadrado/retângulo:
		if(operacao_form == 3){
		printf("Área = Base * Altura.\n");
		}
		//Circunferência:
		if(operacao_form == 4){
		printf("C = 2*pi*r.\n");
		}
		//Triângulo:
		if(operacao_form == 5){
		printf("A = base*altura/2.\n");
		}
//Finalizações:
printf("\n------------------------------------------------------------------------\n\n");
printf("|***Obrigada pela visita e feche a aplicação.<3***|\n\n");
system("Pause");
return 0;
}
//Fim do código.
