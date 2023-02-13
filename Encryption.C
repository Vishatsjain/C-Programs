#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()                                      
{					// This is a C program which convert normal text to Encrypted text.
  char str[200];			
  int i=0,chr=0,st=1,a,b=2,c;
  clrscr();

  puts("Enter your message :- \n");
  gets(str);

  for(i=0;str[i]!='\0';i++)
  {
      a=str[i];
      switch(a)
      {
	  case 'a':
	     printf("!");
	  break;
	  case 'b':
	     printf("@");
	  break;
	  case 'c':
	     printf("#");
	  break;
	  case 'd':
	     printf("$");
	  break;
	  case 'e':
	     printf("%");
	  break;
	  case 'f':
	     printf("^");
	  break;
	  case 'g':
	     printf("&");
	  break;
	  case 'h':
	     printf("*");
	  break;
	  case 'i':
	     printf("(");
	  break;
	  case 'j':
	     printf(")");
	  break;
	  case 'k':
	     printf("-");
	  break;
	  case 'l':
	     printf("+");
	  break;
	  case 'm':
	     printf("{");
	  break;
	  case 'n':
	     printf("}");
	  break;
	  case 'o':
	     printf("[");
	  break;
	  case 'p':
	     printf("]");
	  break;
	  case 'q':
	     printf("|");
	  break;
	  case 'r':
	     printf("a");
	  break;
	  case 's':
	     printf(":");
	  break;
	  case 't':
	     printf(";");
	  break;
	  case 'u':
	     printf(">");
	  break;
	  case 'v':
	     printf("<");
	  break;
	  case 'w':
	     printf("?");
	  break;
	  case 'x':
	     printf("/");
	  break;
	  case 'y':
	     printf("~");
	  break;
	  case 'z':
	     printf("b");
	  break;
	  case ' ':
	     printf("_");
	  break;
	  case '.':
	     printf("\n");
	  case ',':
	     printf("c");
	  break;
	  default:
       //	     printf("Please write your text in small alphabets");
		 c=b;

      }
    chr+=1;
  }
  if(c==2)
  {
    printf("\nPlease write your text in small alphabets");
  }
 /*  printf("\nNumber of letters in the string are : %d\n",chr);
  for(i=0;i<=chr-1;i++)
  {
    if(str[i]==' ')
   {
      st+=1;
    }
  }

  printf("Number of words : %d",st);  */
  getch();


}
