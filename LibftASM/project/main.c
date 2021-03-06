#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "libftasm.h"

void check_alpha (void)
{
	printf("/n   ----- ALPHA -----\n");

	printf("   should be alpha %d\n", ft_isalpha('A'));
	printf("   should be alpha %d\n", ft_isalpha('Z'));
	printf("   should be alpha %d\n", ft_isalpha('B'));
	printf("   should be alpha %d\n", ft_isalpha('a'));
	printf("   should not be alpha %d\n", ft_isalpha('*'));
	printf("   should not be alpha %d\n", ft_isalpha('~'));
	printf("   should not be alpha %d\n", ft_isalpha('.'));
	printf("   should not be alpha %d\n", ft_isalpha('0'));

	printf("   -----------------\n\n");
}

void check_isdigit(){
	printf("\n   ----- ISDIGIT -----\n");

	printf("   should be digit %d\n", ft_isdigit('0'));
	printf("   should be digit %d\n", ft_isdigit('2'));
	printf("   should be digit %d\n", ft_isdigit('1'));
	printf("   should be digit %d\n", ft_isdigit('4'));
	printf("   should not be digit %d\n", ft_isdigit('z'));
	printf("   should not be digit %d\n", ft_isdigit('b'));
	printf("   should not be digit %d\n", ft_isdigit('.'));
	printf("   should not be digit %d\n", ft_isdigit('q'));

	printf("   -----------------\n\n");
}

void	check_isascii(){
	printf("\n   ----- ISASCII -----\n");
	printf("   '%c' should be ascii %d\n", 'Q',ft_isascii('Q'));
	printf("   '%c' should be ascii %d\n", '@',ft_isascii('@'));
	printf("   '%c' should be ascii %d\n", '$',ft_isascii('$'));
	printf("   '%c' should not be ascii %d\n", 245,ft_isascii(245));
	printf("   '%c' should not be ascii %d\n", 211,ft_isascii(211));
	printf("   '%c' should not be ascii %d\n", 250,ft_isascii(250));
	printf("   -----------------\n\n");
}

void check_isalnum(){
	printf("\n   ----- ISALNUM -----\n");
	printf("   '%c' should be alnum %d\n", 'Q',ft_isalnum('Q'));
	printf("   '%c' should be alnum %d\n", '7',ft_isalnum('7'));
	printf("   '%c' should be alnum %d\n", 'p',ft_isalnum('p'));
	printf("   '%c' should not be alnum %d\n", '#',ft_isalnum('#'));
	printf("   '%c' should not be alnum %d\n", '%',ft_isalnum('%'));
	printf("   '%c' should not be alnum %d\n", '}',ft_isalnum('}'));

	printf("   -----------------\n\n");
}

void check_isprint(){
	printf("\n   ----- ISPRINT -----\n");
	printf("   '%c' should be printable %d\n", 33,ft_isprint(33));
	printf("   '%c' should be printable %d\n", 126,ft_isprint(126));
	printf("   '%c' should be printable %d\n", 119,ft_isprint(119));
	printf("   '%c' should  not be printable %d\n", 127,ft_isprint(127));
	printf("   '%c' should  not be printable %d\n", 0,ft_isprint(0));
	printf("   '%c' should  not be printable %d\n", 13,ft_isprint(13));
	printf("   -----------------\n\n");
}
void check_toupper(){
	printf("\n   ----- TOUPPER -----\n");
	printf("   '%c' upper case is: '%c'\n", 97,ft_toupper(97));
	printf("   '%c' upper case is: '%c'\n", 100,ft_toupper(100));
	printf("   '%c' upper case is: '%c'\n", 122,ft_toupper(122));
	printf("   '%c' upper case is: '%c'\n", 65,ft_toupper(65));
	printf("   '%c' upper case is: '%c'\n", 126,ft_toupper(126));
	printf("   '%c' upper case is: '%c'\n", 76,ft_toupper(76));

	printf("   -----------------\n\n");

}
void check_tolower(){
	printf("\n   ----- TOLOWER -----\n");
	printf("   '%c' lower case is: '%c'\n", 97,ft_tolower(97));
	printf("   '%c' lower case is: '%c'\n", 100,ft_tolower(100));
	printf("   '%c' lower case is: '%c'\n", 122,ft_tolower(122));
	printf("   '%c' lower case is: '%c'\n", 65,ft_tolower(65));
	printf("   '%c' lower case is: '%c'\n", 126,ft_tolower(126));
	printf("   '%c' lower case is: '%c'\n", 76,ft_tolower(76));

	printf("   -----------------\n\n");
}

void check_bzero(){
char string[] = "Zero";
		printf("\n   ----- BZERO -----\n");
		for (int i = 0; i < 4; i++){
		if (string[i] == '\0'){
			printf("   String index %d is \033[0;32m\033[1mNULL\033[0m\n", i);
		}
		else{
			printf("   String index %d is \033[0;31m\033[1mNOT NULL\033[0m\n", i);
		}
	}
	printf("    \n--- Calling ft_bzero ---\n\n");
	ft_bzero(string, 4);
	for (int i = 0; i < 4; i++){
		if (string[i] == '\0'){
			printf("   String index %d is \033[0;32m\033[1mNULL\033[0m\n", i);
		}
		else{
			printf("   String index %d is \033[0;31m\033[1mNOT NULL\033[0m\n", i);
		}
	}

	printf("   -----------------\n\n");

}
void	check_strcat(){
	char stringHalf[100] = "Hello ";
	char *stringFull = "World!";
	char stringInit[100] = "Initilized";
	char *stringEnd = ", String";
	char stringRuby[100] = "R_u_b_y - ";
	char *stringDuby = "D_u_b_y";
	printf("\n   ----- STRCAT -----\n");
	printf("   String 1: '%s' cat with '%s'\n", stringHalf, stringFull);
	ft_strcat(stringHalf, stringFull);
	printf("   == '%s'\n\n", stringHalf);
	printf("   String 2: '%s' cat with '%s'\n", stringInit, stringEnd);
	ft_strcat(stringInit, stringEnd);
	printf("   == '%s'\n\n", stringInit);
	printf("   String 3: '%s' cat with '%s'\n", stringRuby, stringDuby);
	ft_strcat(stringRuby, stringDuby);
	printf("   == '%s'\n", stringRuby);
	printf("   -----------------\n\n");
}
void	check_puts(){
	char strg1[100] = "   String 1: QWERTYUIOP";
	char strg2[100]= "   String 2: 1234859604";
	char strg3[100] = "   String 3: @#*&+$^#&#";
	char strg4[100] = "   String 4: QqWwEeRrTt";
	char strg5[100] = "   String 5: = | = | = |";
	char strg6[100] = "   String 6: 1w$^^=++}{{";
	
	printf("\n   ----- PUTS ---------\n\n");
	ft_puts(strg1);
	printf("\n");
	ft_puts(strg2);
	printf("\n");
	ft_puts(strg3);
	printf("\n");
	ft_puts(strg4);
	printf("\n");
	ft_puts(strg5);
	printf("\n");
	ft_puts(strg6);
	printf("\n");
	ft_puts("   Testing Null: ");
	ft_puts(NULL);
	printf("\n");
	ft_puts("   Testing Null: ");
	ft_puts(NULL);
	printf("\n");
	ft_puts("   Testing Null: ");
	ft_puts(NULL);
	ft_puts("\n   ---------------------\n");

}

void	check_strlen(){
	char *str1 = "QWERT";
	char *str2= "1234859604";
	char *str3 = "@#*&+$^#";
	char *str4 = "Qq";
	char *str5 = "= | = | = |";
	char *str6 = "1w$^^=++}";

	printf("\n   ----- STRLEN ---------\n\n");
	printf("   String: '%s' is [%d] --> ft_strlen[%zu]\n", str1,  5, ft_strlen(str1));
	printf("   String: '%s' is [%d] --> ft_strlen[%zu]\n", str2,  10, ft_strlen(str2));
	printf("   String: '%s' is [%d] --> ft_strlen[%zu]\n", str3,  8, ft_strlen(str3));
	printf("   String: '%s' is [%d] --> ft_strlen[%zu]\n", str4,  2, ft_strlen(str4));
	printf("   String: '%s' is [%d] --> ft_strlen[%zu]\n", str5,  11, ft_strlen(str5));
	printf("   String: '%s' is [%d] --> ft_strlen[%zu]\n", str6,  9, ft_strlen(str6));
	printf("\n   ---------------------\n");

}

void	check_memset(){
	char string1[20] = "This is a string";
	char string2[20] = "Also a string";
	char string3[20] = "Working Memset";
	char string4[20]= "Breaks string";
	char string5[20] = "Assembly memset test";
	char string6[20] = "Last string";
	printf("\n   ----- MEMSET ---------\n\n");
	printf("   String1:      [%s]\n", string1);
	printf("   String1:  after memset with '%d' chars of '%c' == '%s\n\n", 15 , '@',ft_memset(string1, '@', 15*sizeof(char)));
	 
	printf("   String2:      [%s]\n", string2);
	printf("   String2:  after memset with '%d' chars of '%c' == '%s'\n\n", 4 , '+',ft_memset(string2, '+', 4*sizeof(char)));

	printf("   String3:      [%s]\n", string3);
	printf("   String3:  after memset with '%d' chars of '%c' == '%s'\n\n", 9 , '0',ft_memset(string3, '0', 9*sizeof(char)));

	printf("   String4:      [%s]\n", string4);
	printf("   String4:  after memset with '%d' chars of '%c' == '%s'\n\n", 3 , '*',ft_memset(string4, '*', 3*sizeof(char)));

	printf("   String5:      [%s]\n", string5);
	printf("   String5:  after memset with '%d' chars of '%c' == '%s'\n\n", 10 , 'X',ft_memset(string5, 'X', 10*sizeof(char)));

	printf("   String6:      [%s]\n", string6);
	printf("   String6:  after memset with '%d' chars of '%c' == '%s'\n",  7 , '#',ft_memset(string6, '#', 7*sizeof(char)));
	printf("\n   ---------------------\n");
}

void	check_memcpy(){
	char string1[20] = "This is a string";
	char string2[20] = "Also a string";
	char string3[20] = "Working Memcpy";
	char string4[20]= "Breaks string";
	char string5[20] = "Assembly memset test";
	char string6[20] = "Last string";
	printf("\n   ----- MEMCPY ---------\n\n");
	printf("   String1: [%s] || String:2 [%s]\n", string1, string2);
	printf("   After memcpy with '%d' chars of '%s' into '%s'\n", 4 , string2, string1);
	ft_memcpy(string1, string2, 4*sizeof(char));
	printf("   String1: [%s] || String:2 [%s]\n\n", string1, string2);

	 
	printf("   String3: [%s] || String:4 [%s]\n", string3, string4);
	printf("   After memcpy with '%d' chars of '%s' into '%s'\n", 10 , string4, string3);
	ft_memcpy(string3, string4, 10*sizeof(char));
	printf("   String3: [%s] || String:4 [%s]\n\n", string3, string4);

	printf("   String5: [%s] || String:6 [%s]\n", string5, string6);
	printf("   After memcpy with '%d' chars of '%s' into '%s'\n", 9 , string6, string5);
	ft_memcpy(string5, string6, 9*sizeof(char));
	printf("   String5: [%s] || String:6 [%s]\n", string5, string6);
	printf("\n   ---------------------\n");
}

void	check_strdup(){
	char string1[20] = "This is a string";
	char *string1dup = NULL;
	char string2[20] = "Assembly Strdup test";
	char *string2dup = NULL;
	char string3[20] = "Also a string";
	char *string3dup = NULL;
	printf("\n   ----- STRDUP ---------\n\n");
	printf("   Before Strdup --- String1: [%s] || String1dup [%s]\n", string1, string1dup);
	// string1dup = strdup(string1);
	string1dup = ft_strdup(string1);
	printf("   After Strdup  --- String1: [%s] || String1dup [%s]\n\n", string1, string1dup);
	printf("   Before Strdup --- String2: [%s] || String2dup [%s]\n", string2, string2dup);
	// string2dup = strdup(string2);
	string2dup = ft_strdup(string2);
	printf("   After Strdup  --- String2: [%s] || String2dup [%s]\n\n", string2, string2dup);
	printf("   Before Strdup --- String3: [%s] || String3dup [%s]\n", string3, string3dup);
	// string3dup = strdup(string3);
	string3dup = ft_strdup(string3);
	printf("   After Strdup  --- String3: [%s] || String3dup [%s]\n", string3, string3dup);
	printf("\n   ---------------------\n");
}
void	check_cat(){
	int fd;
	char file1[50] = "src/cat_tests/testfile1.txt";
	char file2[50] = "src/cat_tests/testfile2.txt";
	char file3[50] = "src/cat_tests/testfile3.txt";
	printf("\n   ----- CREATE FILE ---------\n\n");
	printf("   Testing file 1:\n");
	fd = open(file1, O_RDONLY);
	ft_cat(fd);
	close(fd);
	printf("\n\n   Testing file 2:\n");
	fd = open(file2, O_RDONLY);
	ft_cat(fd);
	close(fd);
	printf("\n\n   Testing file 3:\n");
	fd = open(file3, O_RDONLY);
	ft_cat(fd);
	close(fd);
	printf("\n   ---------------------\n");
}
int main (void)
{
	// Basic Functions
	check_alpha();
	check_isdigit();
	check_isascii();
	check_isalnum();
	check_isprint();
	check_toupper();
	check_tolower();
	check_bzero();
	check_strlen();
	check_strcat();
	check_puts();

	// Less Basic Functions
	check_strlen();
	check_memset();
	check_memcpy();
	check_strdup();

	// Advanced Functions
	check_cat();

	// Random Functions
	
}
