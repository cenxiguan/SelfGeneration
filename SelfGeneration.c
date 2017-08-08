/* Name: R. Guan
 * Email: tianbao971@gmail.com
 * Date: March, 2016
 * The program prints its source codes, except for 'Hello'
 * at the beginning and 'Goodbye' at the end.*/

#include <stdio.h>

int main() {
	char *s[24] = {
	"Hello",
	"/* Name: R. Guan",
	" * Email: tianbao971@gmail.com",
	" * Date: March, 2016",
	" * The program prints its source codes, except for 'Hello'",
	" * at the beginning and 'Goodbye' at the end.*/",
	"",
	"#include <stdio.h>",
	"",
	"int main() {",
	"	char *s[24] = {",
	"	",
	"%s%c%s%c%c%c",
	"	};",
	"	for (int i = 0; i < 11; i++)",
	"		puts(s[i]);",
	"	for (int j = 0; j < 23; j++)",
	"		printf(s[12], s[11], 34, s[j], 34, ',', 10);",
	"	printf(s[12], s[11], 34, s[23], 34, ' ', 10);",
	"	for (int k = 13; k < 24; k++)",
	"		puts(s[k]);",
	"	return 0;",
	"} ",
	"Goodbye" 
	};
	for (int i = 0; i < 11; i++)
		puts(s[i]);
	for (int j = 0; j < 23; j++)
		printf(s[12], s[11], 34, s[j], 34, ',', 10);
	printf(s[12], s[11], 34, s[23], 34, ' ', 10);
	for (int k = 13; k < 24; k++)
		puts(s[k]);
	return 0;
} 

