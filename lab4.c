#include <stdio.h>
int main(void)
{
	/ "Alex Cox
		115 Lab 3
		Shift Encoder"/

		/ "Declaring Variables" /
		int n; / "First for loop"
		int i; 


							int n; / "counter for loop" /
							int i; / "another loop counter" /
							int q; / "another loop counter" /
							char alpha[26] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z' }
	char shift[26] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z' }
	char message[100]; /* here the user entered message can be up to 100 characters long*/
	int length; /* length of message */
	char code[100];

	/* Get message and key from user */
	printf("Please use CAPITAL LETTERS\n\nEnter message: ");
	gets_s(message, 100);
	printf("Enter Key : ");
	scanf_s("%d", &i);

	for (n = 0; n < 26; n++) {
		printf("%c ", alpha[n);
	}
	printf("\n");
	for (n = 0; n < 26; n++) {
		shift[n] = alpha[n - i];
	}
	for (n = 0; n < 26; n++) {
		shift[n] = alpha[(26 + n) - i];
	}
	for (n = 0; n < 26; n++){
		printf("%c ", shift[n]);
	}

	printf("\n message to be encoded : ");
	printf(message);
	printf("\n");

	length = strlen(message); / " Number of characters in the user entered message " /
	strcpy(code, message);
	for (n = 0; n < length; n++){
		for (q = 0; q < 26; q++){
			if (message[n] == alpha[q])
			{
				code[n] = shift[q];
			}
		}
	}
	printf("%s", code); / " here the code is printed " /
		printf("\n");

	return 0;
}