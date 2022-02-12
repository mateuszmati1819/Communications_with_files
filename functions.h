
int count_letters(char *surname);
void clearScreen();


int count_letters(char *surname)
{
    int j;
    for(int i=0; surname[i]!='\0'; i++)
        {
          j=i;  
        }
        return j+1;
}

void clearScreen()
{
  // const char *CLEAR_SCREEN_ANSI = "\e[1;1H\e[2J";
  // write(STDOUT_FILENO, CLEAR_SCREEN_ANSI, 12);
  printf("\e[1;1H\e[2J");
}

