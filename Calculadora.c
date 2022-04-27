//Calculadora:
//Imports:
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
//Int main:
int main(void){
//Local:
setlocale(LC_ALL,"Portuguese");
//Variáveis:
int operacao_menu, operacao_fg, somar_1, somar_2, somar_r, subtrair_1, subtrair_2, subtrair_r, multiplicar_1, multiplicar_2, multiplicar_r, dividir_1, dividir_2, dividir_r, raiz_1, raiz_r, potencia_1, potencia_2, potencia_r, bhaskara_a, bhaskara_b, bhaskara_c, bhaskara_delta, bhaskara_r1, bhaskara_r2, quadrado_1, quadrado_2, quadrado_r, triangulo_base, triangulo_altura, triangulo_r; 
float porcen_1, porcen_2, porcen_r, circulo_1, circulo_r;
//Interação:
printf("\n[Calculadora (Beta 2)]\n\n");
printf("Selecione a operação teclando o número correspondente:\n\n1.Somar.\n2.Subtrair.\n3.Multiplicar.\n4.Dividir.\n5.Raiz Quadrada.\n6.Potência.\n7.Formula de Bháskara.\n8.Porcentagem.\n9.Figuras geométricas.\n\n");
scanf("%i", &operacao_menu);
printf("\n------------------------------------------------------------------------\n\n");
	//Somar:
	if(operacao_menu == 1){
		printf("Para começar a soma, digite o primeiro número e em seguida aperte 'Enter':\n\n");
		scanf("%i", &somar_1);
		printf("\nDigite o segundo número:\n\n");
		scanf("%i", &somar_2);
		printf("\n------------------------------------------------------------------------\n\n");
			somar_r = somar_1 + somar_2;	//Cálculo
		printf("\nO resultado da soma é : %i \n", somar_r);
	}
	//Subtrair:
	if(operacao_menu == 2){
		printf("Para começar a subtração, digite o primeiro número e em seguida aperte 'Enter':\n\n");
		scanf("%i", &subtrair_1);
		printf("\nDigite o segundo número:\n\n");
		scanf("%i", &subtrair_2);
		printf("\n------------------------------------------------------------------------\n\n");
			subtrair_r = subtrair_1 - subtrair_2;	//Cálculo
		printf("\nO resultado da subtração é : %i \n", subtrair_r);
	}
	//Multiplicação:
	if(operacao_menu == 3){
		printf("Para começar a multiplicação, digite o primeiro número e em seguida aperte 'Enter':\n\n");
		scanf("%i", &multiplicar_1);
		printf("\nDigite o segundo número:\n\n");
		scanf("%i", &multiplicar_2);
		printf("\n------------------------------------------------------------------------\n\n");
			multiplicar_r = multiplicar_1 * multiplicar_2;	//Cálculo
		printf("\nO resultado da multiplicação é : %i \n", multiplicar_r);
	}
	//Divisão:
	if(operacao_menu == 4){
		printf("Para começar a divisão, digite o primeiro número e em seguida aperte 'Enter':\n\n");
		scanf("%i", &dividir_1);
		printf("\nDigite o segundo número:\n\n");
		scanf("%i", &dividir_2);
		printf("\n------------------------------------------------------------------------\n\n");
			dividir_r = dividir_1 / dividir_2;	//Cálculo
		printf("\nO resultado da divisão é : %i \n", dividir_r);
	}
	//Raiz Quadrada:
	if(operacao_menu == 5){
		printf("Para calcular a raiz, digite o número que desejar e aperte 'Enter':\n\n");
		scanf("%i", &raiz_1);
		printf("\n------------------------------------------------------------------------\n\n");
			raiz_r = sqrt(raiz_1);	//Cálculo
		printf("\nO resultado da raiz quadrada é : %i \n", raiz_r);
	}
	//Potência:
	if(operacao_menu == 6){
		printf("Para calcular a potência, digite o número que desejar e aperte 'Enter':\n\n");
		scanf("%i", &potencia_1);
		printf("Digite o expoente do seu número:\n\n");
		scanf("%i", &potencia_2);
		printf("\n------------------------------------------------------------------------\n\n");
			potencia_r = pow(potencia_1, potencia_2);
		printf("O resultado da potenciação é : %i \n", potencia_r);
	}
	//Bháskara:
	if(operacao_menu == 7){
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
		printf("\nUtilizando raiz de delta positivo em X1 e raiz de delta negativo em X2, podemos adquirir o seguinte resultado:\n\n");
		printf("X1 = %d \nX2 = %d \n", bhaskara_r1, bhaskara_r2);
	}
	//Porcentagem:
	if(operacao_menu == 8){
		printf("\nPara calcular a porcentagem, digite o valor que deseja ser o porcento 'Enter':\n\n");
		scanf("%f", &porcen_1);
		printf("\nDigite o valor de onde o porcento irá retirar o resultado:\n\n");
		scanf("%f", &porcen_2);
			porcen_r = porcen_2*(porcen_1/100);		//Cálculo
		printf("\n------------------------------------------------------------------------\n\n");
		printf("\nO resultado desse cálculo é: %f \n", porcen_r);
	}
	//Áreas de figuras geométricas:
	if(operacao_menu == 9){
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
		printf("\nO valor da área do quadrado/retângulo é: %i \n", quadrado_r);
	}
		//Círculo:
		if(operacao_fg == 2){
		printf("\nPara calcular a área do círculo, insira o valor do raio:\n\n");
		scanf("%f", &circulo_1);
			circulo_r = 3.14 * pow(circulo_1, 2);	//Cálculo
		printf("\n------------------------------------------------------------------------\n\n");
		printf("\nO valor da área do círculo é : %f \n", circulo_r);
	}
		//Triângulo:
		if(operacao_fg == 3){
		printf("\nPara calcular a área do triângulo, insira o valor da base:\n\n");
		scanf("%i", &triangulo_base);
		printf("\nInsira o valor da altura:\n\n");
		scanf("%i", &triangulo_altura);
			triangulo_r = (triangulo_base*triangulo_altura)/2;	//Cálculo
		printf("\n------------------------------------------------------------------------\n\n");
		printf("\nO valor da área do triângulo é : %i \n", triangulo_r);
		}
//Finalizações:
printf("\n\n|***Obrigada pela visita e feche a aplicação.<3***|\n\n");
system("Pause");
return 0;
}
//Fim do código.
