#include <stdio.h>
#include <stdlib.h>
#include "jelly.h"

// SI se tiene una biblioteca en el path, home o en donde se está programando, se  tiene que usar las comillas libres ("stdio.h")

int encrypt(int x, int key) {
  return x + key;
}

int unencrypt(int x, int key) {
  return x - key;
}

int main(int argn, char **args) {
  Jelly jadiels_jelly;
  Jelly sofias_jelly;

  jadiels_jelly = new_jelly(1, 2);
  sofias_jelly = new_jelly(0, 1);

  print_jelly(jadiels_jelly);
  print_jelly(sofias_jelly);
  


  
  //  int a = 1;
  //  int *y;
  //  int *y0;
//  char b = 'n';  // A C no le gusta las dobles comillas para los char (caracteres)
//  char text[] = "VICTOR";  // En los string se usan las dobles comillas. Por cierto este string tiene 7 caracteres (ya que siempre tiene un caracter oculto que avisa cuando termina el texto
//  char encrypt_txt[7];
//  char original_txt[7];
//  int key = 2;
//  int N;
//
//  sscanf(args[1], "%i", &N);
//
//  y0 = y = malloc(8*N);
//  
//  for (int i = 0; i < N; i++) {
//    (*y) = i;
//    y = y + 1;
//  }
//  
//  for (int i = 0; i < N; i++) {
//    y = y - 1;
//    printf("%i,", (*y) );
//  }
//
//  printf("\n\n");
//
//  y = y + 10;
//  
//  //for (int i = 0; i < N; i++) {
//  //  printf("%i,", y0[i]);
//  //}
//
//  //free(y0);
//  
//  //  y = malloc(16);   // Malloc asigna espacio de memoria RAM (en este caso, un espacio de 4 bytes)
//  //*y = 0;
//
//  //printf("Value:%i\n", *y );
//  //printf("Block: %X\n", &(*y) );
//
//  //y = y + 1;
//  //*y = 1000;
//
//  //printf("Value:%i\n", *y );
//  //printf("Block: %X\n", &(*y) );
//
//  //y = y - 1;
//
//  //printf("Value:%i\n", *y );
//  //printf("Block: %X\n", &(*y) );
//
//  
//  
//  // y -> 32 bits de espacio en la memoria RAM
//  // Dirección de memoria (memory address)
//  // 4 bits -> 1111_2 -> 15_10
//  // ¿Cuántos espacios de memoria puede representar con 4 bits?
//  // R: 16 bloques de memoria
//  // ¿De que size máximo (bits) pueden ser esos espacios de memoria?
//  // R: 4 bits por espacio de memoria.
//
//  // ¿De cuántos Bytes máximo podemos instalar en esta arquitectura de 4 bits?
//  // R: 16*4 = 64 bits/8 = 8 Bytes
//
//
//  // Arquitectura de 16 bits
//  // Bloques de memoria 2^16 + 1 = 65536 bloques de memoria
//  // Cada bloque puede guardar 16 bits es decir 2 Bytes!
//  // RAM MAX = 65536 * 2 Bytes = 1048576 bits / 8 = 131072 Bytes / 1024 = 128KB
//
//
//  // 32 bits
//  // Blocks: 2^32 = 4294967296 bloques de memoria
//  // Size block: 32 bits / 8 = 4 Bytes
//  // RAM Max: 137438953472 bits / 8 = 17179869184 Bytes / 1024 = 16777216 KB / 1024 = 16384 MB / 1024 = 16GB
//
//
//  // 64 bits
//  // Blocks: 2^64 = 1.84e19 blocks
//  // Size block = 64 bits / 8 = 8 Bytes
//  // RAM Max : 2^(64 + 6) = 2^70 bits / 8 = 2^(70-3) = 2^67 Bytes / 1024 = 2^57 KB = 2^47 MB / 1024 = 2^37 GB / 1024 = 2^27 TB = 1.34e8 TB
//  
//  
//  //y = f(b);
//  //printf("n + 1 = %i\n", y);
//  //printf("%i\n", b);
//
//  printf("original = %s\n", text);
//  printf("encriptada = ");
//  for(int i = 0; i < 6; i++){
//    encrypt_txt[i] = encrypt(text[i], key);
//    printf("%c", encrypt_txt[i]);
//  }
//  printf("\n");
//
//  printf("desencriptada = ");
//  for(int i = 0; i < 6; i++){
//    original_txt[i] = unencrypt(encrypt_txt[i], key);
//    printf("%c", original_txt[i]);
//  }
//  printf("\n");
//
//  
//  //printf("%s\n", text);
  return 0;
}
