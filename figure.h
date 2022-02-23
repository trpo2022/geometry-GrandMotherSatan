#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define _TRUE         1
#define _FALSE        0
#define _STRING_LENGTH 50
#define _INVALID_VALUE -919939
#define _IS_CIRCLE    11

typedef struct
{
  float x;
  float y;
  float radius;
  int flag_x;
  int flag_y;
  int flag_radius;
} Circle;

