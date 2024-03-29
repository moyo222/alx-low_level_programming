#include "main.h" 
  
 /** 
  * _strncpy - This function copies a string 
  * @dest: This is known as the destination string 
  * @src: This is the source string 
  * @n: This is the number of bytes to copy 
  * 
  * Return: pointer to the resulting string 
  */ 
 char *_strncpy(char *dest, char *src, int n) 
 { 
         int i; 
  
         i = 0; 
  
         while (src[i] != '\0' && i < n) 
         { 
                 dest[i] = src[i]; 
                 i++; 
         } 
  
         while (i < n) 
         { 
                 dest[i] = '\0'; 
                 i++; 
         } 
  
         return (dest); 
 }
