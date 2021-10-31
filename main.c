#include <stdio.h>
#include <string.h>





void swap(char* a1, char* a2)
{
  char t = *a1;
  *a1 = *a2;
  *a2 = t;
}

void reverse(char* A, int size)
{
  char* a1 = A;
  char* a2 = A + size - 1;
  while (a1 < a2)
  {
    swap(a1, a2);
    a1++;
    a2--;
  }
}

int main()
{
    while(1)
    {
        char A[1000];

        printf("Enter the symbols:\n");
        gets(A);

        int size = strlen(A);
        reverse(A, size);

        printf("\n");
        printf("Reversed string:\n%s\n\n", A);
    }




    return 0;
}







