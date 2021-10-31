#include <stdio.h>
#include <string.h>





void swapElementsOfString(char* a1, char* a2)
{
  char t = *a1;
  *a1 = *a2;
  *a2 = t;
}

void reverseString(char* originalString, int size)
{
  char* a1 = originalString;
  char* a2 = originalString + size - 1;
  while (a1 < a2)
  {
    swap(a1, a2);
    a1++;
    a2--;
  }
}

int main()
{

    char originalString[1000];

    printf("Enter the symbols:\n");
    gets(originalString);

    int size = strlen(originalString);
    reverse(originalString, size);

    printf("\n");
    printf("Reversed string:\n%s\n\n", originalString);





    return 0;
}







