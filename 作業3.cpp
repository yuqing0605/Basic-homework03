//3A713221
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	float BodyWeight,height,BMI;
	
	printf("請輸入體重(公斤):");
	scanf(" %f",&BodyWeight);
	printf("請輸入身高(公尺):");
	scanf(" %f",&height);
	
	BMI=(BodyWeight/(height*height));
	printf("你的BMI值是: %f\n",(float)BMI);
	
	system("pause");
	return 0;
}
