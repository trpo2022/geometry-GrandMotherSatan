#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define _TRUE         1
#define _FALSE        0
#define _STRING_LENGTH 50
#define _INVALID_VALUE -919939
#define IS_CIRCLE    11

typedef struct
{
  float x;
  float y;
  float radius;
  int flag_x;
  int flag_y;
  int flag_radius;
} Circle;

int _if_is_circle(char *figure)
{
  if ((figure[0] == 'c' || figure[0] == 'C') &&
      (figure[1] == 'i' || figure[1] == 'I') &&
      (figure[2] == 'r' || figure[2] == 'R') &&
      (figure[3] == 'c' || figure[3] == 'C') &&
      (figure[4] == 'l' || figure[4] == 'L') &&
      (figure[5] == 'e' || figure[5] == 'E'))
  {
    return IS_CIRCLE;

