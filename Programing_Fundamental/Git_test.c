#include<stdio.h>

int main() {
	char Name[100] = "Billy";
	printf("Enter name: ");
	scanf("%s", &Name);
	printf("Hello, %s", Name);
}