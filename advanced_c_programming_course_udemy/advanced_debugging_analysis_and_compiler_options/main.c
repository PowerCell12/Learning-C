#include <stdlib.h>
#include <stdio.h>

#ifdef DEB
    #ifndef DEBUG_USER_LEVEL    
        #define DEBUG_USER_LEVEL 2 
    #endif

    #define DEBUG(level, fmt, ...) \
        if (level >= DEBUG_USER_LEVEL) { \
            fprintf(stderr, fmt, __VA_ARGS__); \
        }
#else 
    #define DEBUG(level, fmt, ...) 
#endif

int sum(int x, int y, int z) {
  char c = 2;
  int *a;
  int variable = 5;

  DEBUG(2, "x=%d\ny=%d\nz=%d\na=%ld\n", x, y, z, (long)a);

  a = &variable;

  fprintf(stderr, "*a=%d\n", *a);

  return (c + x + y + z + *a) / 3;
}

int main(int argc, char *argv[]) {
  int i, j, k;
  int result;

  DEBUG(2, "Argument Count = %d\n", argc);

  if (argc == 1) {
     printf("Please specify three numbers as parameters.\n");
     exit(1);
  }

  i = atoi(argv[1]);

  DEBUG(2, "i=%d\n", i);

  j = atoi(argv[2]);

  DEBUG(2, "j=%d\n", j);

  k = atoi(argv[3]);

  DEBUG(2, "k=%d\n", k);

  result = sum(i,j,12) + sum(j,k,19) + sum(i,k,13);

  DEBUG(2, "%d\n", result);

  return 0;
}
