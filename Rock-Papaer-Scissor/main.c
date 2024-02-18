/**copyright 2024 fari*/
#include "main.h"
int game(char you, char puter) {
  if (you == puter)
    return -1;

  if (you == 's' && puter == 'p')
    return 0;

  else if (you == 'p' && puter == 's')
    return 1;

  if (you == 's' && puter == 'z')
    return 1;

  else if (you == 'z' && puter == 's')
    return 0;

  if (you == 'z' && puter == 'p')
    return 1;

  else if (you == 'p' && puter == 'z')
    return 0;
}

int main() {
  int n;

  char you, puter, result;

  srand(time(NULL));

  n = rand() % 100;

  if (n < 33)
    puter = 's';
  else if (n > 33 && n < 66)
    puter = 'p';
  else
    puter = 'z';

  printf("\n\n\n\n\t\t\t\tEnter s for Stone, p for Paper and z for "
         "Scissor\n\t\t\t\t\t\t\t");

  scanf("%c", &you);

  result = game(you, puter);

  if (result == -1) {
    printf("\n\n\t\t\tGame draw!!\n");
  } else if (result == 1) {
    printf("\n\n\t\t\tGame Won!!!\n\t\t\tCongrats!!!\n\t\t\t:)\n");
  } else {
    printf("\n\n\t\t\tGame Lost :(\n\t\t\tTry Again!\n");
  }
  printf("\n\t\t\tYou choose : %c and Computer choose : %c\n", you, puter);
}
