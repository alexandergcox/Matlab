#include <stdio.h>
int main(void)
{
	/*Alex Cox
	115 Lab 3
	Shift Encoder*/

	/*Declaring Variables*/
	int n; /*First for loop*/
	int i; /*Second for loop*/
	int q;
	char message[100];
	int key;
	char abc[26] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', };
	char sabc[26] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', };
	int length;
	char code[100];

	/*User Inputs*/
	printf("Please use CAPITAL LETTERS ONLY \n");
	printf("Please enter message to be encrypted : ");
	gets_s(message,100);
	printf("Please enter shift key amount :");
	scanf_s("%d", &key);

	/*Shift abc*/
	for (n = 0; n < 26; n++){
		sabc[n] = abc[n - (key)];
	}
	for (n = 0; n < key; n++) {
		sabc[n] = abc[(26 + n) - key];
	}

	/*Print abc and shifted abc*/
	for (n - 0; n < 26; n++) {
		printf("%c ", abc[n]);
	}
	printf("\n");
	for (n = 0; n < 26; n++) {
		printf("%c ", sabc[n]);
	}
	/*Get length of message*/
	length = strlen(message);


	for (n = 0; n < length; n++){
		for (i = 0; i < 26; i++){
			if (message[n] == abc[i]){
				code[n] = sabc[i];
			}
		}
	}
	printf("\n The message is : ");
	for (n = 0; n < length; n++){
		printf("%c", code[n]);
	}

	return 0;
}