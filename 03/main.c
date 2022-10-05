#include <stdio.h>

int main(int argc, char* argv[]) 
{
  printf("Bonjour %d %d %s", argc, argc*2, argv[0]);
  return 0; // Status de sortie de type int. 
}