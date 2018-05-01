#include<stdio.h>

int main(){
	/*Converts Celsius to Fahrenheit by the formula C = (5/9)*(F-32) */
	float fahr, celsius;
	printf ("%s %s\n", "Fahren", "Celsius");
	for(fahr=0;fahr<=300;fahr+=20){
		celsius = (5.0/9.0)*(fahr-32.0);
		printf("%6.0f %6.1f\n", fahr, celsius);
	}
	return 0;
}