#include<stdio.h>

float calcula_imc(float imc){
	float peso, altura;

	imc = peso / (altura*altura)

	return imc;
}

int main(){
	float peso, altura;

	print("Informe o peso e a altura:\n");
	scanf("%f %f", &peso, &altura);
