#include <stdio.h> 

float fahrenheit_para_celsius(float f) { 
	float c; 

	c = (f - 32.0)/1.8; 

	return c; 	
}
 
int main() { 

	float c, f; 

	printf("Entre com a temperatura em Fahrenheit:\n"); 
	scanf("%f", &f); 

	c =  fahrenheit_para_celsius(f); 

	printf("Celsius: %.2f\n", c); 
	
	return 0; 
}
