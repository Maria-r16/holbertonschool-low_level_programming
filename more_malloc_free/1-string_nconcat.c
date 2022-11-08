#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: type unsigned int
 * Return: pointer to new memory
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *pointer;
int len1 = 0, len2 = 0, i = 0, j = 0;
int x = n;

if (s1 == NULL){
s1 = "";
}

if (s2 == NULL){
s2 = "";
}

while (s1[len1] != '\0'){
len1++;
}

while (s2[len2] != '\0'){
len2++;
}

if (x >= len2){
x = len2;
pointer = malloc(sizeof(char) * (len1 + len2 + 1));
}
else{
pointer = malloc(sizeof(char) * (len1 + n + 1));
}

if (pointer == NULL){
return (NULL);
}
while (i < len1){
pointer[i] = s1[i];
i++;
}
while (j < x){
pointer[i++] = s2[j];
j++;
}
pointer[i++] = '\0';
return (pointer);
}