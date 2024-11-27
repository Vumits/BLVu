#include <iostream>
#include <stdio.h>
using namespace std;

int main () 
{
    int i;
const int max = 9;
for (i = 1; i <= max; i++) {
    printf("\n");
    for (int j = 1; j <= max; j++) {
        printf("%d x %d = %d",  i,j, i * j);
        printf("\n");
    }
  }
}