#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/*
	Source by AlphaCodingSkills (https://www.alphacodingskills.com)
	Modified For Learn by RK
	I.D.E : VS2022
*/

int main() {
	char str1[] = "123";
	char str2[] = "10.55";
	char str3[] = "100 some words";
	char str4[] = "some words 555";

	int num1 = atoi(str1);
	int num2 = atoi(str2);
	int num3 = atoi(str3);
	int num4 = atoi(str4);

	//menampilkan hasil
	printf("atoi(\"%s\") = %d\n", str1, num1);
	printf("atoi(\"%s\") = %d\n", str2, num2);
	printf("atoi(\"%s\") = %d\n", str3, num3);
	printf("atoi(\"%s\") = %d\n", str4, num4);

	_getch();
	return 0;
}