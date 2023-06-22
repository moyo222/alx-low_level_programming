#include "main.h" 
  
 /** 
  * _strncat - This function concatenates n bytes from a string to another 
  * @dest: This is the destination string 
  * @src: This is the source string 
  * @n: This refers to the number of bytes of str to concatenate 
  * 
  * Return: a pointer to the resulting string dest 
  */ 
 char *_strncat(char *dest, char *src, int n) 
 { 
         int i, j; 
  
         i = 0; 
         j = 0; 
  
         while (dest[i] != '\0') 
                 i++; 
  
         while (src[j] != '\0' && j < n) 
         { 
                 dest[i] = src[j]; 
                 i++; 
                 j++; 
         } 
  
         dest[i] = '\0'; 
  
         return (dest); 
 }
