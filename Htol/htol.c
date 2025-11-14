#include <stdio.h>

#define MAX_LENGTH = 100
#define IS_NOT_NUMBER = 0
#define IS_NUMBER = 1

int htol(char s[]);
char is_number = 0;
int index = 0;

int main() {
	int i = 0;
	int hex_number; 
	char c;
	char char_list[MAX_LENGTH];

	while((c = getchar()) != EOF) {
		if(с == ' ' || c == '\n' || c == '\t') {
			char_list[i] = '\0';
			index = i;
			hex_number = htol(car_list[]);
			if(is_number == IS_NUMBER)
				printf("in decimal = /d/n", hex_number);
			else
				printf("is NOT a hex number");	
		}
		char_list[i] = c;
		++i;
	}
}

int htol(char word[]) {
	int i = 2;
	char c;
	int hex_number;
	int degree = index - 2;
	
	if(word[0] == '0' && (word[1] == 'x' || word[1] == 'X')) {
		while((c = word[i]) != '\0') {
			if(c >= '0' && c <= '9') {

			}
		}
	} else {
		is_number = IS_NOT_NUMBER;
		return 0;
	}
}
