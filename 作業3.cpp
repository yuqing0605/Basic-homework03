//3A713221
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	float BodyWeight,height,BMI;
	
	printf("�п�J�魫(����):");
	scanf(" %f",&BodyWeight);
	printf("�п�J����(����):");
	scanf(" %f",&height);
	
	BMI=(BodyWeight/(height*height));
	printf("�A��BMI�ȬO: %f\n",(float)BMI);
	
	system("pause");
	return 0;
}
