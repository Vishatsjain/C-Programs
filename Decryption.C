#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
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
	  case '!':
	     printf("a");
	  break;
	  case '@':
	     printf("b");
	  break;
	  case '#':
	     printf("c");
	  break;
	  case '$':
	     printf("d");
	  break;
	  case '%':
	     printf("e");
	  break;
	  case '^':
	     printf("f");
	  break;
	  case '&':
	     printf("g");
	  break;
	  case '*':
	     printf("h");
	  break;
	  case '(':
	     printf("i");
	  break;
	  case ')':
	     printf("j");
	  break;
	  case '-':
	     printf("k");
	  break;
	  case '+':
	     printf("l");
	  break;
	  case '{':
	     printf("m");
	  break;
	  case '}':
	     printf("n");
	  break;
	  case '[':
	     printf("o");
	  break;
	  case ']':
	     printf("p");
	  break;
	  case '|':
	     printf("q");
	  break;
	  case 'a':
	     printf("r");
	  break;
	  case ':':
	     printf("s");
	  break;
	  case ';':
	     printf("t");
	  break;
	  case '>':
	     printf("u");
	  break;
	  case '<':
	     printf("v");
	  break;
	  case '?':
	     printf("w");
	  break;
	  case '/':
	     printf("x");
	  break;
	  case '~':
	     printf("y");
	  break;
	  case 'b':
	     printf("z");
	  break;
	  case '_':
	     printf(" ");
	  break;
	  case '\n':
	     printf(".");
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