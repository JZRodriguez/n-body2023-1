// Author: Jadiel Zuñiga Rodriguez
// zujadiel@gmail.com
// GNU/Linux
#include <stdio.h>
#include "jelly.h"

//flavor 0:limon, 1:strawberry...  color 0:black

Jelly new_jelly(int flavor, int color) {
  Jelly jelly;
  jelly.flavor = flavor;
  jelly.color = color;
  return jelly;
}

void print_jelly(Jelly jelly) {
  switch(jelly.flavor)
    {
    case 0:
      printf("Lemon\n");
      break;
    case 1:
      printf("Strawberry\n");
      break;
    default:
      printf("Unknown\n");
      break;
    }
  switch(jelly.color)
    {
    case 0:
      printf("Black\n");
      break;
    case 1:
      printf("Green\n");
      break;
    case 2:
      printf("Red\n");
      break;
    default:
      printf("Unknown!\n");
      break;
    }
}
