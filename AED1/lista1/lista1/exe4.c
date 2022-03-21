#include <stdio.h>
#include <locale.h>

void a(void);
void b(void);
void c(void);
void d(void);
void e(void);
void f(void);
void g(void);
void h(void);
void i(void);
void j(void);
int main(){
	setlocale(LC_ALL, "Portuguese");
	char atividade;
	printf("\n Escolha a atividade de A - J (Basta digitar a letra). caso deseje fechar o programa digite 0: ");
	while (scanf_s("%c", &atividade))
	{
		printf("\n Escolha a atividade de A - J (Basta digitar a letra). caso deseje fechar o programa digite 0: ");
		switch (toupper(atividade))
		{
		case 'A':
			system("cls");
			a();
			break;
		case 'B':
			system("cls");
			b();
			break;
		case 'C':
			system("cls");
			c();
			break;
		case 'D':
			system("cls");
			d();
			break;
		case 'E':
			system("cls");
			e();
			break;
		case 'F':
			system("cls");
			f();
			break;
		case 'G':
			system("cls");
			g();
			break;
		case 'H':
			system("cls");
			h();
			break;
		case 'I':
			system("cls");
			j();
			break;
		case 'J':
			system("cls");
			j();
			break;
		case '0':
			exit(0);
			break;
		};
	}
	return 0;
}
void a() {
	printf("Exercicio 4 \n A)");
	int num;
	printf("Escreva um número: ");
	scanf_s("%i", &num);
	printf("O sucessor do número %i é %i", num, (num + 1));
}

void b() {
	printf("Exercicio 4 \n B)");
	int num,soma,i;
	soma = 0;
	for (i = 0; i < 4; i++)
	{
		printf("Digíte o %i Numero ",i+1);
		scanf_s("%i", &num);
		soma += num;
	}
	printf("A média é %i ", (soma / 4));
}

void c() {
	printf("Exercicio 4 \n C)");
	int i,nota,soma,div;
	float media;
	soma = 0;
	div = 0;
	for (i = 0; i < 3; i++) {
		printf("Digite a %i Nota: ", i + 1);
		scanf_s("%i", &nota);
		soma += nota;
		div += i + 1;
	}
	media = soma / div;
	printf("A média ponderada das notas é: %0.2f", media);
}

void d() {
	printf("Exercicio 4 \n D)");
	float c, f;
	printf("Digite a temperatura em Celsius: ");
	scanf_s("%f", &c);
	f = (c * 9 / 5 ) + 32;
	printf("A temperatura convertida em Fahrenheit: %1.2f", f);
}

void e() {
	printf("Exercicio 4 \n E)");
	float salario, aumento;
	printf("Digite o valor do salario: ");
	scanf_s("%f", &salario);
	printf("Digite o percentual de aumento: ");
	scanf_s("%f", &aumento);
	printf("Valor do salario com o aumento: %.2f", (salario * ((aumento / 100) + 1)));
}

void f() {
	printf("Exercicio 4 \n F)");
	float base, altura,area;
	printf("Digite a base do triangulo: ");
	scanf_s("%f",&base);
	printf("Digite a altura do triangulo: ");
	scanf_s("%f", &altura);
	area = (base * altura) / 2;
	printf("a area do triangulo: %.2f", area);
}

void g() {
	printf("Exercicio 4 \n G)");
	float pacote, quant_racao, resto,gasto;
	int gatos, dias;
	char mensagem;
	gatos = 2;
	dias = 5;
	printf("Digite o Peso do saco de ração em kilos: ");
	scanf_s("%f", &pacote);
	printf("Digite digite a quantidade de ração em gramas: ");
	scanf_s("%f", &quant_racao);
	pacote = pacote * 1000;
	gasto = ((quant_racao * gatos) * dias);
	resto = pacote - gasto;
	 if (gasto > pacote) {
		 printf("Quantidade de ração não sera suficiente para os %i dias \n faltante %.2f ", dias, (gasto - pacote));
	}
	else {
		 printf("Ira sobrar %0.0f gramas de ração", resto);
	}
}

void h() {
	printf("Exercicio 4 \n H)");
	int a, b,t;
	printf("Escreva o primeiro número: ");
	scanf_s("%i",&a);
	printf("Escreva o segundo número: ");
	scanf_s("%i",&b);
	t = a;
	a = b;
	b = t;
	printf("Valor do Primeiro numero %i \n", a);
	printf("Valor do Segundo numero %i \n", b);
}

void i() {
	printf("Exercicio 4 \n I)");

	int div, num, resto;
	div = 7;
	printf("Digite um número: ");
	scanf_s("%i", &num);
	resto = (num % div);
	printf("O resto da divisão do numero %i por %i: %i", num, div, resto);
}

void j() {
	printf("Exercicio 4 \n J)");

	int num[3],quant_termo,i,soma;
	printf("Digite o primeiro termo: ");
	scanf_s("%i", & num[0]);
	printf("Digite o segundo termo: ");
	scanf_s("%i", &num[1]);
	printf("Digite a Quantidade de termo: ");
	scanf_s("%i", &quant_termo);

	// an = a1 + (n - 1).r,
	num[2] = num[0] + (quant_termo - 1) * (num[1] - num[0]);
	// Sn=n*(a1+an)/2,
	soma = quant_termo * (num[0] + num[2]) / 2;
	printf("A soma dos termos e %i ", soma);
}