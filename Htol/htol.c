#include <stdio.h>

#define MAX_LENGTH 100
#define IS_NOT_NUMBER 0
#define IS_NUMBER 1

int htol(char s[]);
char is_number = IS_NOT_NUMBER;

int main() {
    int i = 0;
    int hex_number; 
    char c;
    char char_list[MAX_LENGTH];

    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t') {
            // Если что-то накопили — обработать слово
            if (i > 0) {
                char_list[i] = '\0';          // завершаем строку
                hex_number = htol(char_list); // конвертируем

                if (is_number == IS_NUMBER)
                    printf("in decimal %s = %d\n", char_list, hex_number);
                else
                    printf("is NOT a hex number\n");

                i = 0; // готовимся читать следующее слово
            }
        } else {
            // Накопление символов слова, защита от переполнения
            if (i < MAX_LENGTH - 1) {
                char_list[i] = c;
                ++i;
            }
            // Иначе — можно было бы выдать сообщение о том, что слово слишком длинное
        }
    }

    // Обработка последнего слова, если файл не заканчивается пробелом/переводом строки
    if (i > 0) {
        char_list[i] = '\0';
        hex_number = htol(char_list);

        if (is_number == IS_NUMBER)
            printf("in decimal %s = %d\n", char_list, hex_number);
        else
            printf("is NOT a hex number\n");
    }

    return 0;
}

int htol(char word[]) {
	int i = 2;
	char c = ' ';
	int hex_number = 0;
	int value;
	
	if(word[0] == '0' && (word[1] == 'x' || word[1] == 'X')) {
		while((c = word[i]) != '\0') {
			if(c >= '0' && c <= '9') {
				value = c - '0';
			} else if(c >= 'a' && c <= 'f') {
				value = c - 'a' + 10;
			} else if(c >= 'A' && c <= 'F') {
				value = c - 'A' + 10;
			} else {
				is_number = IS_NOT_NUMBER;
				return 0;
			}
			hex_number = hex_number * 16 + value;
			++i;
		}
		is_number = IS_NUMBER;
		return hex_number;
	} else {
		is_number = IS_NOT_NUMBER;
		return 0;
	}
}

