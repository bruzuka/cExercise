#include <stdio.h>

#define MAXLINE 1000 /* maximum input line size */

int get_line(char linef[], int maxline);
void copy(char to[], char fromf[]);

/* print longest input line */ 
int main() {
	int len; /* current line length */
	int max; /* maximum length seen so far */
	char line[MAXLINE]; /* current input line */
	char longest[MAXLINE]; /* longest line saved here */
	int total_len; /* lenght of longest line */

	total_len = 0;
	max = 0;
	while ((len = get_line(line, MAXLINE)) > 0) {
		total_len = len;
		while (len == MAXLINE - 1 && line[len - 1] != '\n') {
			len = get_line(line, MAXLINE);
			total_len += len;	
		}
		if (total_len > max) {
			max = total_len;
			copy(longest, line);
		}
	}
	if (max > 0) { /* there was a line */
		printf("The most longest line has %d chars.\n", max);
		printf("Line output is:\n%s", longest);
	}	
	return 0;
}

/* get_line: read a line into s, return length */
int get_line(char s[], int lim) {
	int c, i;

	for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
		s[i] = c;
	if (c == '\n') {
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}

/* copy: copy 'from' into 'to'; assume to is big enough */
void copy(char to[], char from[]) {
	int i;

	i = 0;
	while ((to[i] = from[i]) != '\0')
		++i;
}

