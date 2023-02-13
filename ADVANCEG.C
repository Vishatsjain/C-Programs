#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<math.h>
#include<string.h>

void main()
{                   // n is for x
		    // m is for y
  float n=-225,m=0,x,y,x1,y1,x2,y2,dx,dy,step,xinc,yinc;
  int gd=DETECT,gm;

  char str[200];
  int i=0,j=0,chr=0,st=1,a,b=2,c;
 clrscr();
  initgraph(&gd,&gm,"C:\\TurboC3\\BGI");

  puts("Enter your word : ");
  gets(str);
  for(j=0;str[j]!='\0';j++)
  {
      a=str[j];
      switch(a)
      {
	  case '@':
	    //line 1
  x1=250+n;y1=150+m;x2=250+n;y2=202+m;
  if(x1==846)
     m=m+75;

  dx=(x2-x1);
  dy=(y2-y1);

  if(abs(dx)>=abs(dy))
	 step=abs(dx);
  else
	 step=abs(dy);

  xinc=dx/step;
  yinc=dy/step;

  x=x1;
  y=y1;
  putpixel(x,y,1);

  for(i=0;i<step;i++)
  {
	x=x+xinc;
	y=y+yinc;
	putpixel(x,y,1);

  }
	    //line 2
  x1=250+n;y1=202+m;x2=290+n;y2=202+m;
  if(x1==846)
     m=m+75;

  dx=(x2-x1);
  dy=(y2-y1);

  if(abs(dx)>=abs(dy))
	 step=abs(dx);
  else
	 step=abs(dy);

  xinc=dx/step;
  yinc=dy/step;

  x=x1;
  y=y1;
  putpixel(x,y,2);

  for(i=0;i<step;i++)
  {
	x=x+xinc;
	y=y+yinc;
	putpixel(x,y,2);

  }

	    //line 3
  x1=250+n;y1=150+m;x2=296+n;y2=150+m;
  dx=(x2-x1);
  dy=(y2-y1);

  if(abs(dx)>=abs(dy))
	 step=abs(dx);
  else
	 step=abs(dy);

  xinc=dx/step;
  yinc=dy/step;

  x=x1;
  y=y1;
  putpixel(x,y,3);

  for(i=0;i<step;i++)
  {
	x=x+xinc;
	y=y+yinc;
	putpixel(x,y,3);

  }
	    //line 4
  x1=296+n;y1=150+m;x2=296+n;y2=192+m;
  dx=(x2-x1);
  dy=(y2-y1);

  if(abs(dx)>=abs(dy))
	 step=abs(dx);
  else
	 step=abs(dy);

  xinc=dx/step;
  yinc=dy/step;

  x=x1;
  y=y1;
  putpixel(x,y,4);

  for(i=0;i<step;i++)
  {
	x=x+xinc;
	y=y+yinc;
	putpixel(x,y,4);

  }

	    //line 5
  x1=296+n;y1=192+m;x2=260+n;y2=192+m;
  if(x1==846)
     m=m+75;

  dx=(x2-x1);
  dy=(y2-y1);

  if(abs(dx)>=abs(dy))
	 step=abs(dx);
  else
	 step=abs(dy);

  xinc=dx/step;
  yinc=dy/step;

  x=x1;
  y=y1;
  putpixel(x,y,5);

  for(i=0;i<step;i++)
  {
	x=x+xinc;
	y=y+yinc;
	putpixel(x,y,5);

  }
	    //line 6
  x1=260+n;y1=192+m;x2=260+n;y2=160+m;
  if(x1==846)
     m=m+75;

  dx=(x2-x1);
  dy=(y2-y1);

  if(abs(dx)>=abs(dy))
	 step=abs(dx);
  else
	 step=abs(dy);

  xinc=dx/step;
  yinc=dy/step;

  x=x1;
  y=y1;
  putpixel(x,y,6);

  for(i=0;i<step;i++)
  {
	x=x+xinc;
	y=y+yinc;
	putpixel(x,y,6);

  }

	    //line 7
  x1=260+n;y1=160+m;x2=286+n;y2=160+m;
  dx=(x2-x1);
  dy=(y2-y1);

  if(abs(dx)>=abs(dy))
	 step=abs(dx);
  else
	 step=abs(dy);

  xinc=dx/step;
  yinc=dy/step;

  x=x1;
  y=y1;
  putpixel(x,y,8);

  for(i=0;i<step;i++)
  {
	x=x+xinc;
	y=y+yinc;
	putpixel(x,y,8);

  }
	    //line 8
  x1=286+n;y1=160+m;x2=286+n;y2=191+m;
  dx=(x2-x1);
  dy=(y2-y1);

  if(abs(dx)>=abs(dy))
	 step=abs(dx);
  else
	 step=abs(dy);

  xinc=dx/step;
  yinc=dy/step;

  x=x1;
  y=y1;
  putpixel(x,y,9);

  for(i=0;i<step;i++)
  {
	x=x+xinc;
	y=y+yinc;
	putpixel(x,y,9);

  }
	    //line 9
  x1=287+n;y1=160+m;x2=287+n;y2=191+m;
  dx=(x2-x1);
  dy=(y2-y1);

  if(abs(dx)>=abs(dy))
	 step=abs(dx);
  else
	 step=abs(dy);

  xinc=dx/step;
  yinc=dy/step;

  x=x1;
  y=y1;
  putpixel(x,y,10);

  for(i=0;i<step;i++)
  {
	x=x+xinc;
	y=y+yinc;
	putpixel(x,y,10);

  }
	  n=n+10+46;
	  break;
	  case 'a':
	  //line 1
  x1=250+n;y1=202+m;x2=270+n;y2=150+m;
     if(x1==846)
	 m=m+75;
  dx=(x2-x1);
  dy=(y2-y1);

  if(abs(dx)>=abs(dy))
	 step=abs(dx);
  else
	 step=abs(dy);

  xinc=dx/step;
  yinc=dy/step;

  x=x1;
  y=y1;
  putpixel(x,y,4);

  for(i=0;i<step;i++)
  {
	x=x+xinc;
	y=y+yinc;
	putpixel(x,y,4);

  }
	    //line 2
   x1=270+n;y1=150+m;x2=290+n;y2=202+m;
  dx=(x2-x1);
  dy=(y2-y1);

  if(abs(dx)>=abs(dy))
	 step=abs(dx);
  else
	 step=abs(dy);

  xinc=dx/step;
  yinc=dy/step;

  x=x1;
  y=y1;
  putpixel(x,y,5);

  for(i=0;i<step;i++)
  {
	x=x+xinc;
	y=y+yinc;
	putpixel(x,y,5);

  }

	    //line 3
  x1=257+n;y1=185+m;x2=282+n;y2=185+m;
  dx=(x2-x1);
  dy=(y2-y1);

  if(abs(dx)>=abs(dy))
	 step=abs(dx);
  else
	 step=abs(dy);

  xinc=dx/step;
  yinc=dy/step;

  x=x1;
  y=y1;
  putpixel(x,y,2);

  for(i=0;i<step;i++)
  {
	x=x+xinc;
	y=y+yinc;
	putpixel(x,y,2);

  }
	  n=n+40+10;

	//     printf("!");
	  break;
	  case 'b':

	  //line 1
  x1=250+n;y1=150+m;x2=250+n;y2=202+m;
  if(x1==846)
     m=m+75;

  dx=(x2-x1);
  dy=(y2-y1);

  if(abs(dx)>=abs(dy))
	 step=abs(dx);
  else
	 step=abs(dy);

  xinc=dx/step;
  yinc=dy/step;

  x=x1;
  y=y1;
  putpixel(x,y,4);

  for(i=0;i<step;i++)
  {
	x=x+xinc;
	y=y+yinc;
	putpixel(x,y,4);

  }
	    //line 2
  x1=250+n;y1=150+m;x2=263+n;y2=163+m;
  dx=(x2-x1);
  dy=(y2-y1);

  if(abs(dx)>=abs(dy))
	 step=abs(dx);
  else
	 step=abs(dy);

  xinc=dx/step;
  yinc=dy/step;

  x=x1;
  y=y1;
  putpixel(x,y,5);

  for(i=0;i<step;i++)
  {
	x=x+xinc;
	y=y+yinc;
	putpixel(x,y,5);

  }

	    //line 3
  x1=263+n;y1=163+m;x2=250+n;y2=176+m;
  dx=(x2-x1);
  dy=(y2-y1);

  if(abs(dx)>=abs(dy))
	 step=abs(dx);
  else
	 step=abs(dy);

  xinc=dx/step;
  yinc=dy/step;

  x=x1;
  y=y1;
  putpixel(x,y,2);

  for(i=0;i<step;i++)
  {
	x=x+xinc;
	y=y+yinc;
	putpixel(x,y,2);

  }
	    //line 4
  x1=250+n;y1=176+m;x2=263+n;y2=189+m;
  dx=(x2-x1);
  dy=(y2-y1);

  if(abs(dx)>=abs(dy))
	 step=abs(dx);
  else
	 step=abs(dy);

  xinc=dx/step;
  yinc=dy/step;

  x=x1;
  y=y1;
  putpixel(x,y,5);

  for(i=0;i<step;i++)
  {
	x=x+xinc;
	y=y+yinc;
	putpixel(x,y,5);

  }

	    //line 5
  x1=263+n;y1=189+m;x2=250+n;y2=202+m;
  dx=(x2-x1);
  dy=(y2-y1);

  if(abs(dx)>=abs(dy))
	 step=abs(dx);
  else
	 step=abs(dy);

  xinc=dx/step;
  yinc=dy/step;

  x=x1;
  y=y1;
  putpixel(x,y,2);

  for(i=0;i<step;i++)
  {
	x=x+xinc;
	y=y+yinc;
	putpixel(x,y,2);

  }

		 n=n+10+13;


	  //   printf("@");
	  break;
	  case 'c':
	  //line 1
  x1=250+n;y1=150+m;x2=250+n;y2=202+m;
  if(x1==846)
     m=m+75;

  dx=(x2-x1);
  dy=(y2-y1);

  if(abs(dx)>=abs(dy))
	 step=abs(dx);
  else
	 step=abs(dy);

  xinc=dx/step;
  yinc=dy/step;

  x=x1;
  y=y1;
  putpixel(x,y,4);

  for(i=0;i<step;i++)
  {
	x=x+xinc;
	y=y+yinc;
	putpixel(x,y,4);

  }
	    //line 2
   x1=250+n;y1=150+m;x2=276+n;y2=150+m;
  dx=(x2-x1);
  dy=(y2-y1);

  if(abs(dx)>=abs(dy))
	 step=abs(dx);
  else
	 step=abs(dy);

  xinc=dx/step;
  yinc=dy/step;

  x=x1;
  y=y1;
  putpixel(x,y,5);

  for(i=0;i<step;i++)
  {
	x=x+xinc;
	y=y+yinc;
	putpixel(x,y,5);

  }

	    //line 3
  x1=250+n;y1=202+m;x2=276+n;y2=202+m;
  dx=(x2-x1);
  dy=(y2-y1);

  if(abs(dx)>=abs(dy))
	 step=abs(dx);
  else
	 step=abs(dy);

  xinc=dx/step;
  yinc=dy/step;

  x=x1;
  y=y1;
  putpixel(x,y,2);

  for(i=0;i<step;i++)
  {
	x=x+xinc;
	y=y+yinc;
	putpixel(x,y,2);

  }
	  n=n+26+10;

    //	     printf("#");
	  break;
	  case 'd':

	  //line 1
  x1=260+n;y1=150+m;x2=260+n;y2=202+m;
  if(x1==846)
     m=m+75;

  dx=(x2-x1);
  dy=(y2-y1);

  if(abs(dx)>=abs(dy))
	 step=abs(dx);
  else
	 step=abs(dy);

  xinc=dx/step;
  yinc=dy/step;

  x=x1;
  y=y1;
  putpixel(x,y,4);

  for(i=0;i<step;i++)
  {
	x=x+xinc;
	y=y+yinc;
	putpixel(x,y,4);

  }
	    //line 2
  x1=286+n;y1=150+m;x2=286+n;y2=202+m;
  dx=(x2-x1);
  dy=(y2-y1);

  if(abs(dx)>=abs(dy))
	 step=abs(dx);
  else
	 step=abs(dy);

  xinc=dx/step;
  yinc=dy/step;

  x=x1;
  y=y1;
  putpixel(x,y,5);

  for(i=0;i<step;i++)
  {
	x=x+xinc;
	y=y+yinc;
	putpixel(x,y,5);

  }

	    //line 3
  x1=286+n;y1=150+m;x2=250+n;y2=150+m;
  dx=(x2-x1);
  dy=(y2-y1);

  if(abs(dx)>=abs(dy))
	 step=abs(dx);
  else
	 step=abs(dy);

  xinc=dx/step;
  yinc=dy/step;

  x=x1;
  y=y1;
  putpixel(x,y,2);

  for(i=0;i<step;i++)
  {
	x=x+xinc;
	y=y+yinc;
	putpixel(x,y,2);

  }
	    //line 4
  x1=286+n;y1=202+m;x2=250+n;y2=202+m;
  dx=(x2-x1);
  dy=(y2-y1);

  if(abs(dx)>=abs(dy))
	 step=abs(dx);
  else
	 step=abs(dy);

  xinc=dx/step;
  yinc=dy/step;

  x=x1;
  y=y1;
  putpixel(x,y,5);

  for(i=0;i<step;i++)
  {
	x=x+xinc;
	y=y+yinc;
	putpixel(x,y,5);

  }
	   n=n+10+36;

	  //   printf("$");
	  break;
	  case 'e':
	  //line 1
  x1=250+n;y1=150+m;x2=250+n;y2=202+m;
  if(x1==846)
     m=m+75;

  dx=(x2-x1);
  dy=(y2-y1);

  if(abs(dx)>=abs(dy))
	 step=abs(dx);
  else
	 step=abs(dy);

  xinc=dx/step;
  yinc=dy/step;

  x=x1;
  y=y1;
  putpixel(x,y,4);

  for(i=0;i<step;i++)
  {
	x=x+xinc;
	y=y+yinc;
	putpixel(x,y,4);

  }
	    //line 2
  x1=250+n;y1=150+m;x2=276+n;y2=150+m;
  dx=(x2-x1);
  dy=(y2-y1);

  if(abs(dx)>=abs(dy))
	 step=abs(dx);
  else
	 step=abs(dy);

  xinc=dx/step;
  yinc=dy/step;

  x=x1;
  y=y1;
  putpixel(x,y,5);

  for(i=0;i<step;i++)
  {
	x=x+xinc;
	y=y+yinc;
	putpixel(x,y,5);

  }

	    //line 3
  x1=250+n;y1=176+m;x2=258+n;y2=176+m;
  dx=(x2-x1);
  dy=(y2-y1);

  if(abs(dx)>=abs(dy))
	 step=abs(dx);
  else
	 step=abs(dy);

  xinc=dx/step;
  yinc=dy/step;

  x=x1;
  y=y1;
  putpixel(x,y,2);

  for(i=0;i<step;i++)
  {
	x=x+xinc;
	y=y+yinc;
	putpixel(x,y,2);

  }
	    //line 4
  x1=250+n;y1=202+m;x2=276+n;y2=202+m;
  dx=(x2-x1);
  dy=(y2-y1);

  if(abs(dx)>=abs(dy))
	 step=abs(dx);
  else
	 step=abs(dy);

  xinc=dx/step;
  yinc=dy/step;

  x=x1;
  y=y1;
  putpixel(x,y,5);

  for(i=0;i<step;i++)
  {
	x=x+xinc;
	y=y+yinc;
	putpixel(x,y,5);

  }
	    n=n+10+26;

	//     printf("%");
	  break;
	  case 'f':
	  //line 1
  x1=250+n;y1=150+m;x2=250+n;y2=202+m;
  if(x1==846)
     m=m+75;

  dx=(x2-x1);
  dy=(y2-y1);

  if(abs(dx)>=abs(dy))
	 step=abs(dx);
  else
	 step=abs(dy);

  xinc=dx/step;
  yinc=dy/step;

  x=x1;
  y=y1;
  putpixel(x,y,4);

  for(i=0;i<step;i++)
  {
	x=x+xinc;
	y=y+yinc;
	putpixel(x,y,4);

  }
	    //line 2
  x1=250+n;y1=150+m;x2=276+n;y2=150+m;
  dx=(x2-x1);
  dy=(y2-y1);

  if(abs(dx)>=abs(dy))
	 step=abs(dx);
  else
	 step=abs(dy);

  xinc=dx/step;
  yinc=dy/step;

  x=x1;
  y=y1;
  putpixel(x,y,5);

  for(i=0;i<step;i++)
  {
	x=x+xinc;
	y=y+yinc;
	putpixel(x,y,5);

  }

	    //line 3
  x1=250+n;y1=176+m;x2=263+n;y2=176+m;
  dx=(x2-x1);
  dy=(y2-y1);

  if(abs(dx)>=abs(dy))
	 step=abs(dx);
  else
	 step=abs(dy);

  xinc=dx/step;
  yinc=dy/step;

  x=x1;
  y=y1;
  putpixel(x,y,2);

  for(i=0;i<step;i++)
  {
	x=x+xinc;
	y=y+yinc;
	putpixel(x,y,2);

  }
	    n=n+10+26;
       //	     printf("^");
	  break;
	  case 'g':
	  //line 1
  x1=250+n;y1=150+m;x2=250+n;y2=202+m;
  if(x1==846)
     m=m+75;

  dx=(x2-x1);
  dy=(y2-y1);

  if(abs(dx)>=abs(dy))
	 step=abs(dx);
  else
	 step=abs(dy);

  xinc=dx/step;
  yinc=dy/step;

  x=x1;
  y=y1;
  putpixel(x,y,4);

  for(i=0;i<step;i++)
  {
	x=x+xinc;
	y=y+yinc;
	putpixel(x,y,4);

  }
	    //line 2
  x1=250+n;y1=150+m;x2=276+n;y2=150+m;
  dx=(x2-x1);
  dy=(y2-y1);

  if(abs(dx)>=abs(dy))
	 step=abs(dx);
  else
	 step=abs(dy);

  xinc=dx/step;
  yinc=dy/step;

  x=x1;
  y=y1;
  putpixel(x,y,5);

  for(i=0;i<step;i++)
  {
	x=x+xinc;
	y=y+yinc;
	putpixel(x,y,5);

  }

	    //line 3
  x1=250+n;y1=202+m;x2=276+n;y2=202+m;
  dx=(x2-x1);
  dy=(y2-y1);

  if(abs(dx)>=abs(dy))
	 step=abs(dx);
  else
	 step=abs(dy);

  xinc=dx/step;
  yinc=dy/step;

  x=x1;
  y=y1;
  putpixel(x,y,2);

  for(i=0;i<step;i++)
  {
	x=x+xinc;
	y=y+yinc;
	putpixel(x,y,2);

  }
	    //line 4
  x1=276+n;y1=202+m;x2=276+n;y2=176+m;
  dx=(x2-x1);
  dy=(y2-y1);

  if(abs(dx)>=abs(dy))
	 step=abs(dx);
  else
	 step=abs(dy);

  xinc=dx/step;
  yinc=dy/step;

  x=x1;
  y=y1;
  putpixel(x,y,5);

  for(i=0;i<step;i++)
  {
	x=x+xinc;
	y=y+yinc;
	putpixel(x,y,5);

  }

	    //line 5
  x1=276+n;y1=176+m;x2=263+n;y2=176+m;
  dx=(x2-x1);
  dy=(y2-y1);

  if(abs(dx)>=abs(dy))
	 step=abs(dx);
  else
	 step=abs(dy);

  xinc=dx/step;
  yinc=dy/step;

  x=x1;
  y=y1;
  putpixel(x,y,2);

  for(i=0;i<step;i++)
  {
	x=x+xinc;
	y=y+yinc;
	putpixel(x,y,2);

  }

		 n=n+10+26;

	 //    printf("&");
	  break;
	  case 'h':
	  //line 1
  x1=250+n;y1=150+m;x2=250+n;y2=202+m;
  if(x1==846)
     m=m+75;

  dx=(x2-x1);
  dy=(y2-y1);

  if(abs(dx)>=abs(dy))
	 step=abs(dx);
  else
	 step=abs(dy);

  xinc=dx/step;
  yinc=dy/step;

  x=x1;
  y=y1;
  putpixel(x,y,4);

  for(i=0;i<step;i++)
  {
	x=x+xinc;
	y=y+yinc;
	putpixel(x,y,4);

  }
	    //line 2
  x1=250+n;y1=176+m;x2=280+n;y2=176+m;
  dx=(x2-x1);
  dy=(y2-y1);

  if(abs(dx)>=abs(dy))
	 step=abs(dx);
  else
	 step=abs(dy);

  xinc=dx/step;
  yinc=dy/step;

  x=x1;
  y=y1;
  putpixel(x,y,5);

  for(i=0;i<step;i++)
  {
	x=x+xinc;
	y=y+yinc;
	putpixel(x,y,5);

  }

	    //line 3
  x1=280+n;y1=150+m;x2=280+n;y2=202+m;
  dx=(x2-x1);
  dy=(y2-y1);

  if(abs(dx)>=abs(dy))
	 step=abs(dx);
  else
	 step=abs(dy);

  xinc=dx/step;
  yinc=dy/step;

  x=x1;
  y=y1;
  putpixel(x,y,2);

  for(i=0;i<step;i++)
  {
	x=x+xinc;
	y=y+yinc;
	putpixel(x,y,2);

  }
	n=n+10+30;
//	     printf("*");
	  break;
	  case 'i':
	  //line 1
  x1=250+n;y1=150+m;x2=290+n;y2=150+m;
  if(x1==846)
     m=m+75;

  dx=(x2-x1);
  dy=(y2-y1);

  if(abs(dx)>=abs(dy))
	 step=abs(dx);
  else
	 step=abs(dy);

  xinc=dx/step;
  yinc=dy/step;

  x=x1;
  y=y1;
  putpixel(x,y,4);

  for(i=0;i<step;i++)
  {
	x=x+xinc;
	y=y+yinc;
	putpixel(x,y,4);

  }
	    //line 2
  x1=270+n;y1=150+m;x2=270+n;y2=202+m;
  dx=(x2-x1);
  dy=(y2-y1);

  if(abs(dx)>=abs(dy))
	 step=abs(dx);
  else
	 step=abs(dy);

  xinc=dx/step;
  yinc=dy/step;

  x=x1;
  y=y1;
  putpixel(x,y,5);

  for(i=0;i<step;i++)
  {
	x=x+xinc;
	y=y+yinc;
	putpixel(x,y,5);

  }

	    //line 3
  x1=250+n;y1=202+m;x2=290+n;y2=202+m;
  dx=(x2-x1);
  dy=(y2-y1);

  if(abs(dx)>=abs(dy))
	 step=abs(dx);
  else
	 step=abs(dy);

  xinc=dx/step;
  yinc=dy/step;

  x=x1;
  y=y1;
  putpixel(x,y,2);

  for(i=0;i<step;i++)
  {
	x=x+xinc;
	y=y+yinc;
	putpixel(x,y,2);

  }
	  n=n+10+40;

//	     printf("(");
	  break;
	  case 'j':
	  //line 1
  x1=250+n;y1=150+m;x2=290+n;y2=150+m;
  if(x1==846)
     m=m+75;

  dx=(x2-x1);
  dy=(y2-y1);

  if(abs(dx)>=abs(dy))
	 step=abs(dx);
  else
	 step=abs(dy);

  xinc=dx/step;
  yinc=dy/step;

  x=x1;
  y=y1;
  putpixel(x,y,4);

  for(i=0;i<step;i++)
  {
	x=x+xinc;
	y=y+yinc;
	putpixel(x,y,4);

  }
	    //line 2
  x1=270+n;y1=150+m;x2=270+n;y2=202+m;
  dx=(x2-x1);
  dy=(y2-y1);

  if(abs(dx)>=abs(dy))
	 step=abs(dx);
  else
	 step=abs(dy);

  xinc=dx/step;
  yinc=dy/step;

  x=x1;
  y=y1;
  putpixel(x,y,5);

  for(i=0;i<step;i++)
  {
	x=x+xinc;
	y=y+yinc;
	putpixel(x,y,5);

  }

	    //line 3
  x1=270+n;y1=202+m;x2=250+n;y2=202+m;
  dx=(x2-x1);
  dy=(y2-y1);

  if(abs(dx)>=abs(dy))
	 step=abs(dx);
  else
	 step=abs(dy);

  xinc=dx/step;
  yinc=dy/step;

  x=x1;
  y=y1;
  putpixel(x,y,2);

  for(i=0;i<step;i++)
  {
	x=x+xinc;
	y=y+yinc;
	putpixel(x,y,2);

  }
	    //line 4
  x1=250+n;y1=202+m;x2=250+n;y2=187+m;
  dx=(x2-x1);
  dy=(y2-y1);

  if(abs(dx)>=abs(dy))
	 step=abs(dx);
  else
	 step=abs(dy);

  xinc=dx/step;
  yinc=dy/step;

  x=x1;
  y=y1;
  putpixel(x,y,5);

  for(i=0;i<step;i++)
  {
	x=x+xinc;
	y=y+yinc;
	putpixel(x,y,5);

  }
	   n=n+10+40;

   //	     printf(")");
	  break;
	  case 'k':
	  //line 1
  x1=250+n;y1=150+m;x2=250+n;y2=202+m;
  if(x1==846)
     m=m+75;

  dx=(x2-x1);
  dy=(y2-y1);

  if(abs(dx)>=abs(dy))
	 step=abs(dx);
  else
	 step=abs(dy);

  xinc=dx/step;
  yinc=dy/step;

  x=x1;
  y=y1;
  putpixel(x,y,4);

  for(i=0;i<step;i++)
  {
	x=x+xinc;
	y=y+yinc;
	putpixel(x,y,4);

  }
	    //line 2
  x1=250+n;y1=176+m;x2=276+n;y2=150+m;
  dx=(x2-x1);
  dy=(y2-y1);

  if(abs(dx)>=abs(dy))
	 step=abs(dx);
  else
	 step=abs(dy);

  xinc=dx/step;
  yinc=dy/step;

  x=x1;
  y=y1;
  putpixel(x,y,5);

  for(i=0;i<step;i++)
  {
	x=x+xinc;
	y=y+yinc;
	putpixel(x,y,5);

  }

	    //line 3
  x1=250+n;y1=176+m;x2=276+n;y2=202+m;
  dx=(x2-x1);
  dy=(y2-y1);

  if(abs(dx)>=abs(dy))
	 step=abs(dx);
  else
	 step=abs(dy);

  xinc=dx/step;
  yinc=dy/step;

  x=x1;
  y=y1;
  putpixel(x,y,2);

  for(i=0;i<step;i++)
  {
	x=x+xinc;
	y=y+yinc;
	putpixel(x,y,2);

  }
	   n=n+10+26;
//	     printf("-");
	  break;
	  case 'l':
	  //line 1
  x1=250+n;y1=150+m;x2=250+n;y2=202+m;
  dx=(x2-x1);
  dy=(y2-y1);

  if(abs(dx)>=abs(dy))
	 step=abs(dx);
  else
	 step=abs(dy);

  xinc=dx/step;
  yinc=dy/step;

  x=x1;
  y=y1;
  putpixel(x,y,4);

  for(i=0;i<step;i++)
  {
	x=x+xinc;
	y=y+yinc;
	putpixel(x,y,4);

  }
	    //line 2
  x1=250+n;y1=202+m;x2=276+n;y2=202+m;
  dx=(x2-x1);
  dy=(y2-y1);

  if(abs(dx)>=abs(dy))
	 step=abs(dx);
  else
	 step=abs(dy);

  xinc=dx/step;
  yinc=dy/step;

  x=x1;
  y=y1;
  putpixel(x,y,5);

  for(i=0;i<step;i++)
  {
	x=x+xinc;
	y=y+yinc;
	putpixel(x,y,5);

  }
	   n=n+10+26;
//	     printf("+");
	  break;
	  case 'm':
	    //line 1
  x1=250+n;y1=150+m;x2=250+n;y2=202+m;
  if(x1==846)
     m=m+75;

  dx=(x2-x1);
  dy=(y2-y1);

  if(abs(dx)>=abs(dy))
	 step=abs(dx);
  else
	 step=abs(dy);

  xinc=dx/step;
  yinc=dy/step;

  x=x1;
  y=y1;
  putpixel(x,y,4);

  for(i=0;i<step;i++)
  {
	x=x+xinc;
	y=y+yinc;
	putpixel(x,y,4);

  }
	    //line 2
  x1=250+n;y1=150+m;x2=270+n;y2=176+m;
  dx=(x2-x1);
  dy=(y2-y1);

  if(abs(dx)>=abs(dy))
	 step=abs(dx);
  else
	 step=abs(dy);

  xinc=dx/step;
  yinc=dy/step;

  x=x1;
  y=y1;
  putpixel(x,y,5);

  for(i=0;i<step;i++)
  {
	x=x+xinc;
	y=y+yinc;
	putpixel(x,y,5);

  }

	    //line 3
  x1=270+n;y1=176+m;x2=290+n;y2=150+m;
  dx=(x2-x1);
  dy=(y2-y1);

  if(abs(dx)>=abs(dy))
	 step=abs(dx);
  else
	 step=abs(dy);

  xinc=dx/step;
  yinc=dy/step;

  x=x1;
  y=y1;
  putpixel(x,y,2);

  for(i=0;i<step;i++)
  {
	x=x+xinc;
	y=y+yinc;
	putpixel(x,y,2);

  }
	    //line 4
  x1=290+n;y1=150+m;x2=290+n;y2=202+m;
  dx=(x2-x1);
  dy=(y2-y1);

  if(abs(dx)>=abs(dy))
	 step=abs(dx);
  else
	 step=abs(dy);

  xinc=dx/step;
  yinc=dy/step;

  x=x1;
  y=y1;
  putpixel(x,y,5);

  for(i=0;i<step;i++)
  {
	x=x+xinc;
	y=y+yinc;
	putpixel(x,y,5);

  }
	   n=n+10+40;


//	     printf("{");
	  break;
	  case 'n':
	    //line 1
  x1=250+n;y1=150+m;x2=250+n;y2=202+m;
  if(x1==846)
     m=m+75;

  dx=(x2-x1);
  dy=(y2-y1);

  if(abs(dx)>=abs(dy))
	 step=abs(dx);
  else
	 step=abs(dy);

  xinc=dx/step;
  yinc=dy/step;

  x=x1;
  y=y1;
  putpixel(x,y,4);

  for(i=0;i<step;i++)
  {
	x=x+xinc;
	y=y+yinc;
	putpixel(x,y,4);

  }
	    //line 2
  x1=250+n;y1=150+m;x2=287+n;y2=202+m;
  dx=(x2-x1);
  dy=(y2-y1);

  if(abs(dx)>=abs(dy))
	 step=abs(dx);
  else
	 step=abs(dy);

  xinc=dx/step;
  yinc=dy/step;

  x=x1;
  y=y1;
  putpixel(x,y,5);

  for(i=0;i<step;i++)
  {
	x=x+xinc;
	y=y+yinc;
	putpixel(x,y,5);

  }

	    //line 3
  x1=287+n;y1=150+m;x2=287+n;y2=202+m;
  dx=(x2-x1);
  dy=(y2-y1);

  if(abs(dx)>=abs(dy))
	 step=abs(dx);
  else
	 step=abs(dy);

  xinc=dx/step;
  yinc=dy/step;

  x=x1;
  y=y1;
  putpixel(x,y,2);

  for(i=0;i<step;i++)
  {
	x=x+xinc;
	y=y+yinc;
	putpixel(x,y,2);

  }
	  n=n+10+37;

//	     printf("}");
	  break;
	  case 'o':
	    //line 1
  x1=250+n;y1=150+m;x2=250+n;y2=202+m;
  if(x1==846)
     m=m+75;

  dx=(x2-x1);
  dy=(y2-y1);

  if(abs(dx)>=abs(dy))
	 step=abs(dx);
  else
	 step=abs(dy);

  xinc=dx/step;
  yinc=dy/step;

  x=x1;
  y=y1;
  putpixel(x,y,4);

  for(i=0;i<step;i++)
  {
	x=x+xinc;
	y=y+yinc;
	putpixel(x,y,4);

  }
	    //line 2
  x1=250+n;y1=150+m;x2=283+n;y2=150+m;
  if(x1==846)
     m=m+75;

  dx=(x2-x1);
  dy=(y2-y1);

  if(abs(dx)>=abs(dy))
	 step=abs(dx);
  else
	 step=abs(dy);

  xinc=dx/step;
  yinc=dy/step;

  x=x1;
  y=y1;
  putpixel(x,y,5);

  for(i=0;i<step;i++)
  {
	x=x+xinc;
	y=y+yinc;
	putpixel(x,y,5);

  }

	    //line 3
  x1=283+n;y1=150+m;x2=283+n;y2=202+m;
  dx=(x2-x1);
  dy=(y2-y1);

  if(abs(dx)>=abs(dy))
	 step=abs(dx);
  else
	 step=abs(dy);

  xinc=dx/step;
  yinc=dy/step;

  x=x1;
  y=y1;
  putpixel(x,y,2);

  for(i=0;i<step;i++)
  {
	x=x+xinc;
	y=y+yinc;
	putpixel(x,y,2);

  }
	    //line 4
  x1=283+n;y1=202+m;x2=250+n;y2=202+m;
  dx=(x2-x1);
  dy=(y2-y1);

  if(abs(dx)>=abs(dy))
	 step=abs(dx);
  else
	 step=abs(dy);

  xinc=dx/step;
  yinc=dy/step;

  x=x1;
  y=y1;
  putpixel(x,y,5);

  for(i=0;i<step;i++)
  {
	x=x+xinc;
	y=y+yinc;
	putpixel(x,y,5);

  }
	  n=n+10+33;
//	     printf("[");
	  break;
	  case 'p':
	    //line 1
  x1=250+n;y1=150+m;x2=250+n;y2=202+m;
  if(x1==846)
     m=m+75;

  dx=(x2-x1);
  dy=(y2-y1);

  if(abs(dx)>=abs(dy))
	 step=abs(dx);
  else
	 step=abs(dy);

  xinc=dx/step;
  yinc=dy/step;

  x=x1;
  y=y1;
  putpixel(x,y,4);

  for(i=0;i<step;i++)
  {
	x=x+xinc;
	y=y+yinc;
	putpixel(x,y,4);

  }
	    //line 2
  x1=250+n;y1=150+m;x2=280+n;y2=150+m;
  dx=(x2-x1);
  dy=(y2-y1);

  if(abs(dx)>=abs(dy))
	 step=abs(dx);
  else
	 step=abs(dy);

  xinc=dx/step;
  yinc=dy/step;

  x=x1;
  y=y1;
  putpixel(x,y,5);

  for(i=0;i<step;i++)
  {
	x=x+xinc;
	y=y+yinc;
	putpixel(x,y,5);

  }

	    //line 3
  x1=280+n;y1=150+m;x2=280+n;y2=176+m;
  dx=(x2-x1);
  dy=(y2-y1);

  if(abs(dx)>=abs(dy))
	 step=abs(dx);
  else
	 step=abs(dy);

  xinc=dx/step;
  yinc=dy/step;

  x=x1;
  y=y1;
  putpixel(x,y,2);

  for(i=0;i<step;i++)
  {
	x=x+xinc;
	y=y+yinc;
	putpixel(x,y,2);

  }
	    //line 4
  x1=280+n;y1=176+m;x2=250+n;y2=176+m;
  dx=(x2-x1);
  dy=(y2-y1);

  if(abs(dx)>=abs(dy))
	 step=abs(dx);
  else
	 step=abs(dy);

  xinc=dx/step;
  yinc=dy/step;

  x=x1;
  y=y1;
  putpixel(x,y,5);

  for(i=0;i<step;i++)
  {
	x=x+xinc;
	y=y+yinc;
	putpixel(x,y,5);

  }
	  n=n+10+30;
//	     printf("]");
	  break;
	  case 'q':
	    //line 1
  x1=250+n;y1=150+m;x2=250+n;y2=202+m;
  if(x1==846)
     m=m+75;

  dx=(x2-x1);
  dy=(y2-y1);

  if(abs(dx)>=abs(dy))
	 step=abs(dx);
  else
	 step=abs(dy);

  xinc=dx/step;
  yinc=dy/step;

  x=x1;
  y=y1;
  putpixel(x,y,4);

  for(i=0;i<step;i++)
  {
	x=x+xinc;
	y=y+yinc;
	putpixel(x,y,4);

  }
	    //line 2
  x1=290+n;y1=150+m;x2=250+n;y2=150+m;
  if(x1==846)
     m=m+75;

  dx=(x2-x1);
  dy=(y2-y1);

  if(abs(dx)>=abs(dy))
	 step=abs(dx);
  else
	 step=abs(dy);

  xinc=dx/step;
  yinc=dy/step;

  x=x1;
  y=y1;
  putpixel(x,y,5);

  for(i=0;i<step;i++)
  {
	x=x+xinc;
	y=y+yinc;
	putpixel(x,y,5);

  }

	    //line 3
  x1=290+n;y1=150+m;x2=290+n;y2=202+m;
  dx=(x2-x1);
  dy=(y2-y1);

  if(abs(dx)>=abs(dy))
	 step=abs(dx);
  else
	 step=abs(dy);

  xinc=dx/step;
  yinc=dy/step;

  x=x1;
  y=y1;
  putpixel(x,y,2);

  for(i=0;i<step;i++)
  {
	x=x+xinc;
	y=y+yinc;
	putpixel(x,y,2);

  }
	    //line 4
  x1=290+n;y1=202+m;x2=250+n;y2=202+m;
  dx=(x2-x1);
  dy=(y2-y1);

  if(abs(dx)>=abs(dy))
	 step=abs(dx);
  else
	 step=abs(dy);

  xinc=dx/step;
  yinc=dy/step;

  x=x1;
  y=y1;
  putpixel(x,y,5);

  for(i=0;i<step;i++)
  {
	x=x+xinc;
	y=y+yinc;
	putpixel(x,y,5);

  }
	    //line 5
  x1=258+n;y1=194+m;x2=290+n;y2=210+m;
  dx=(x2-x1);
  dy=(y2-y1);

  if(abs(dx)>=abs(dy))
	 step=abs(dx);
  else
	 step=abs(dy);

  xinc=dx/step;
  yinc=dy/step;

  x=x1;
  y=y1;
  putpixel(x,y,5);

  for(i=0;i<step;i++)
  {
	x=x+xinc;
	y=y+yinc;
	putpixel(x,y,5);

  }

	  n=n+10+40;
//	     printf("|");
	  break;
	  case 'r':
	    //line 1
  x1=250+n;y1=150+m;x2=250+n;y2=202+m;
  if(x1==846)
     m=m+75;

  dx=(x2-x1);
  dy=(y2-y1);

  if(abs(dx)>=abs(dy))
	 step=abs(dx);
  else
	 step=abs(dy);

  xinc=dx/step;
  yinc=dy/step;

  x=x1;
  y=y1;
  putpixel(x,y,4);

  for(i=0;i<step;i++)
  {
	x=x+xinc;
	y=y+yinc;
	putpixel(x,y,4);

  }
	    //line 2
  x1=250+n;y1=150+m;x2=280+n;y2=150+m;
  if(x1==846)
     m=m+75;

  dx=(x2-x1);
  dy=(y2-y1);

  if(abs(dx)>=abs(dy))
	 step=abs(dx);
  else
	 step=abs(dy);

  xinc=dx/step;
  yinc=dy/step;

  x=x1;
  y=y1;
  putpixel(x,y,5);

  for(i=0;i<step;i++)
  {
	x=x+xinc;
	y=y+yinc;
	putpixel(x,y,5);

  }

	    //line 3
  x1=280+n;y1=150+m;x2=280+n;y2=176+m;
  dx=(x2-x1);
  dy=(y2-y1);

  if(abs(dx)>=abs(dy))
	 step=abs(dx);
  else
	 step=abs(dy);

  xinc=dx/step;
  yinc=dy/step;

  x=x1;
  y=y1;
  putpixel(x,y,2);

  for(i=0;i<step;i++)
  {
	x=x+xinc;
	y=y+yinc;
	putpixel(x,y,2);

  }
	    //line 4
  x1=280+n;y1=176+m;x2=250+n;y2=176+m;
  dx=(x2-x1);
  dy=(y2-y1);

  if(abs(dx)>=abs(dy))
	 step=abs(dx);
  else
	 step=abs(dy);

  xinc=dx/step;
  yinc=dy/step;

  x=x1;
  y=y1;
  putpixel(x,y,5);

  for(i=0;i<step;i++)
  {
	x=x+xinc;
	y=y+yinc;
	putpixel(x,y,5);

  }
	    //line 5
  x1=250+n;y1=176+m;x2=280+n;y2=202+m;
  dx=(x2-x1);
  dy=(y2-y1);

  if(abs(dx)>=abs(dy))
	 step=abs(dx);
  else
	 step=abs(dy);

  xinc=dx/step;
  yinc=dy/step;

  x=x1;
  y=y1;
  putpixel(x,y,5);

  for(i=0;i<step;i++)
  {
	x=x+xinc;
	y=y+yinc;
	putpixel(x,y,5);

  }

	  n=n+10+40;

//	     printf("a");
	  break;
	  case 's':
	    //line 1
  x1=250+n;y1=150+m;x2=285+n;y2=150+m;
  if(x1==846)
     m=m+75;

  dx=(x2-x1);
  dy=(y2-y1);

  if(abs(dx)>=abs(dy))
	 step=abs(dx);
  else
	 step=abs(dy);

  xinc=dx/step;
  yinc=dy/step;

  x=x1;
  y=y1;
  putpixel(x,y,4);

  for(i=0;i<step;i++)
  {
	x=x+xinc;
	y=y+yinc;
	putpixel(x,y,4);

  }
	    //line 2
  x1=250+n;y1=150+m;x2=250+n;y2=176+m;
  if(x1==846)
     m=m+75;

  dx=(x2-x1);
  dy=(y2-y1);

  if(abs(dx)>=abs(dy))
	 step=abs(dx);
  else
	 step=abs(dy);

  xinc=dx/step;
  yinc=dy/step;

  x=x1;
  y=y1;
  putpixel(x,y,5);

  for(i=0;i<step;i++)
  {
	x=x+xinc;
	y=y+yinc;
	putpixel(x,y,5);

  }

	    //line 3
  x1=250+n;y1=176+m;x2=285+n;y2=176+m;
  dx=(x2-x1);
  dy=(y2-y1);

  if(abs(dx)>=abs(dy))
	 step=abs(dx);
  else
	 step=abs(dy);

  xinc=dx/step;
  yinc=dy/step;

  x=x1;
  y=y1;
  putpixel(x,y,2);

  for(i=0;i<step;i++)
  {
	x=x+xinc;
	y=y+yinc;
	putpixel(x,y,2);

  }
	    //line 4
  x1=285+n;y1=176+m;x2=285+n;y2=202+m;
  dx=(x2-x1);
  dy=(y2-y1);

  if(abs(dx)>=abs(dy))
	 step=abs(dx);
  else
	 step=abs(dy);

  xinc=dx/step;
  yinc=dy/step;

  x=x1;
  y=y1;
  putpixel(x,y,5);

  for(i=0;i<step;i++)
  {
	x=x+xinc;
	y=y+yinc;
	putpixel(x,y,5);

  }
	    //line 5
  x1=285+n;y1=202+m;x2=250+n;y2=202+m;
  dx=(x2-x1);
  dy=(y2-y1);

  if(abs(dx)>=abs(dy))
	 step=abs(dx);
  else
	 step=abs(dy);

  xinc=dx/step;
  yinc=dy/step;

  x=x1;
  y=y1;
  putpixel(x,y,5);

  for(i=0;i<step;i++)
  {
	x=x+xinc;
	y=y+yinc;
	putpixel(x,y,5);

  }

	  n=n+10+35;

//	     printf(":");
	  break;
	  case 't':
  x1=250+n;y1=150+m;x2=290+n;y2=150+m;
  if(x1==846)
     m=m+75;

  dx=(x2-x1);
  dy=(y2-y1);

  if(abs(dx)>=abs(dy))
	 step=abs(dx);
  else
	 step=abs(dy);

  xinc=dx/step;
  yinc=dy/step;

  x=x1;
  y=y1;
  putpixel(x,y,4);

  for(i=0;i<step;i++)
  {
	x=x+xinc;
	y=y+yinc;
	putpixel(x,y,4);

  }
	    //line 2
  x1=270+n;y1=150+m;x2=270+n;y2=202+m;
  if(x1==846)
     m=m+75;

  dx=(x2-x1);
  dy=(y2-y1);

  if(abs(dx)>=abs(dy))
	 step=abs(dx);
  else
	 step=abs(dy);

  xinc=dx/step;
  yinc=dy/step;

  x=x1;
  y=y1;
  putpixel(x,y,5);

  for(i=0;i<step;i++)
  {
	x=x+xinc;
	y=y+yinc;
	putpixel(x,y,5);

  }

	  n=n+10+40;

//	     printf(";");
	  break;
	  case 'u':
	  //line 1
  x1=250+n;y1=150+m;x2=250+n;y2=202+m;
  if(x1==846)
     m=m+75;

  dx=(x2-x1);
  dy=(y2-y1);

  if(abs(dx)>=abs(dy))
	 step=abs(dx);
  else
	 step=abs(dy);

  xinc=dx/step;
  yinc=dy/step;

  x=x1;
  y=y1;
  putpixel(x,y,4);

  for(i=0;i<step;i++)
  {
	x=x+xinc;
	y=y+yinc;
	putpixel(x,y,4);

  }
	    //line 2
  x1=250+n;y1=202+m;x2=290+n;y2=202+m;
  if(x1==846)
     m=m+75;

  dx=(x2-x1);
  dy=(y2-y1);

  if(abs(dx)>=abs(dy))
	 step=abs(dx);
  else
	 step=abs(dy);

  xinc=dx/step;
  yinc=dy/step;

  x=x1;
  y=y1;
  putpixel(x,y,5);

  for(i=0;i<step;i++)
  {
	x=x+xinc;
	y=y+yinc;
	putpixel(x,y,5);

  }

	    //line 3
  x1=290+n;y1=202+m;x2=290+n;y2=150+m;
  dx=(x2-x1);
  dy=(y2-y1);

  if(abs(dx)>=abs(dy))
	 step=abs(dx);
  else
	 step=abs(dy);

  xinc=dx/step;
  yinc=dy/step;

  x=x1;
  y=y1;
  putpixel(x,y,2);

  for(i=0;i<step;i++)
  {
	x=x+xinc;
	y=y+yinc;
	putpixel(x,y,2);

  }

	  n=n+10+40;

//	     printf(">");
	  break;
	  case 'v':
	  //line 1
  x1=250+n;y1=150+m;x2=270+n;y2=202+m;
  if(x1==846)
     m=m+75;

  dx=(x2-x1);
  dy=(y2-y1);

  if(abs(dx)>=abs(dy))
	 step=abs(dx);
  else
	 step=abs(dy);

  xinc=dx/step;
  yinc=dy/step;

  x=x1;
  y=y1;
  putpixel(x,y,4);

  for(i=0;i<step;i++)
  {
	x=x+xinc;
	y=y+yinc;
	putpixel(x,y,4);

  }
	    //line 2
  x1=290+n;y1=150+m;x2=270+n;y2=202+m;
  if(x1==846)
     m=m+75;

  dx=(x2-x1);
  dy=(y2-y1);

  if(abs(dx)>=abs(dy))
	 step=abs(dx);
  else
	 step=abs(dy);

  xinc=dx/step;
  yinc=dy/step;

  x=x1;
  y=y1;
  putpixel(x,y,5);

  for(i=0;i<step;i++)
  {
	x=x+xinc;
	y=y+yinc;
	putpixel(x,y,5);

  }
	    n=n+10+40;
//	     printf("<");
	  break;
	  case 'w':
	    //line 1
  x1=250+n;y1=150+m;x2=250+n;y2=202+m;
  if(x1==846)
     m=m+75;

  dx=(x2-x1);
  dy=(y2-y1);

  if(abs(dx)>=abs(dy))
	 step=abs(dx);
  else
	 step=abs(dy);

  xinc=dx/step;
  yinc=dy/step;

  x=x1;
  y=y1;
  putpixel(x,y,4);

  for(i=0;i<step;i++)
  {
	x=x+xinc;
	y=y+yinc;
	putpixel(x,y,4);

  }
	    //line 2
  x1=250+n;y1=202+m;x2=270+n;y2=176+m;
  dx=(x2-x1);
  dy=(y2-y1);

  if(abs(dx)>=abs(dy))
	 step=abs(dx);
  else
	 step=abs(dy);

  xinc=dx/step;
  yinc=dy/step;

  x=x1;
  y=y1;
  putpixel(x,y,5);

  for(i=0;i<step;i++)
  {
	x=x+xinc;
	y=y+yinc;
	putpixel(x,y,5);

  }

	    //line 3
  x1=270+n;y1=176+m;x2=290+n;y2=202+m;
  dx=(x2-x1);
  dy=(y2-y1);

  if(abs(dx)>=abs(dy))
	 step=abs(dx);
  else
	 step=abs(dy);

  xinc=dx/step;
  yinc=dy/step;

  x=x1;
  y=y1;
  putpixel(x,y,2);

  for(i=0;i<step;i++)
  {
	x=x+xinc;
	y=y+yinc;
	putpixel(x,y,2);

  }
	    //line 4
  x1=290+n;y1=150+m;x2=290+n;y2=202+m;
  dx=(x2-x1);
  dy=(y2-y1);

  if(abs(dx)>=abs(dy))
	 step=abs(dx);
  else
	 step=abs(dy);

  xinc=dx/step;
  yinc=dy/step;

  x=x1;
  y=y1;
  putpixel(x,y,5);

  for(i=0;i<step;i++)
  {
	x=x+xinc;
	y=y+yinc;
	putpixel(x,y,5);

  }
	   n=n+10+40;


//	     printf("?");
	  break;
	  case 'x':
	  //line 1
  x1=250+n;y1=150+m;x2=290+n;y2=202+m;
  if(x1==846)
     m=m+75;

  dx=(x2-x1);
  dy=(y2-y1);

  if(abs(dx)>=abs(dy))
	 step=abs(dx);
  else
	 step=abs(dy);

  xinc=dx/step;
  yinc=dy/step;

  x=x1;
  y=y1;
  putpixel(x,y,4);

  for(i=0;i<step;i++)
  {
	x=x+xinc;
	y=y+yinc;
	putpixel(x,y,4);

  }
	    //line 2
  x1=290+n;y1=150+m;x2=250+n;y2=202+m;
  if(x1==846)
     m=m+75;

  dx=(x2-x1);
  dy=(y2-y1);

  if(abs(dx)>=abs(dy))
	 step=abs(dx);
  else
	 step=abs(dy);

  xinc=dx/step;
  yinc=dy/step;

  x=x1;
  y=y1;
  putpixel(x,y,5);

  for(i=0;i<step;i++)
  {
	x=x+xinc;
	y=y+yinc;
	putpixel(x,y,5);

  }
	    n=n+10+40;

//	     printf("/");
	  break;
	  case 'y':
	  //line 1
  x1=250+n;y1=150+m;x2=269+n;y2=176+m;
  if(x1==846)
     m=m+75;

  dx=(x2-x1);
  dy=(y2-y1);

  if(abs(dx)>=abs(dy))
	 step=abs(dx);
  else
	 step=abs(dy);

  xinc=dx/step;
  yinc=dy/step;

  x=x1;
  y=y1;
  putpixel(x,y,4);

  for(i=0;i<step;i++)
  {
	x=x+xinc;
	y=y+yinc;
	putpixel(x,y,4);

  }
	    //line 2
  x1=290+n;y1=150+m;x2=250+n;y2=202+m;
  if(x1==846)
     m=m+75;

  dx=(x2-x1);
  dy=(y2-y1);

  if(abs(dx)>=abs(dy))
	 step=abs(dx);
  else
	 step=abs(dy);

  xinc=dx/step;
  yinc=dy/step;

  x=x1;
  y=y1;
  putpixel(x,y,5);

  for(i=0;i<step;i++)
  {
	x=x+xinc;
	y=y+yinc;
	putpixel(x,y,5);

  }
	    n=n+10+40;

//	     printf("~");
	  break;
	  case 'z':
	    //line 1
  x1=250+n;y1=150+m;x2=290+n;y2=150+m;
  if(x1==846)
     m=m+75;

  dx=(x2-x1);
  dy=(y2-y1);

  if(abs(dx)>=abs(dy))
	 step=abs(dx);
  else
	 step=abs(dy);

  xinc=dx/step;
  yinc=dy/step;

  x=x1;
  y=y1;
  putpixel(x,y,4);

  for(i=0;i<step;i++)
  {
	x=x+xinc;
	y=y+yinc;
	putpixel(x,y,4);

  }
	    //line 2
  x1=250+n;y1=202+m;x2=290+n;y2=202+m;

  dx=(x2-x1);
  dy=(y2-y1);

  if(abs(dx)>=abs(dy))
	 step=abs(dx);
  else
	 step=abs(dy);

  xinc=dx/step;
  yinc=dy/step;

  x=x1;
  y=y1;
  putpixel(x,y,5);

  for(i=0;i<step;i++)
  {
	x=x+xinc;
	y=y+yinc;
	putpixel(x,y,5);

  }

	    //line 3
  x1=250+n;y1=202+m;x2=290+n;y2=150+m;
  if(x1==846)
     m=m+75;

  dx=(x2-x1);
  dy=(y2-y1);

  if(abs(dx)>=abs(dy))
	 step=abs(dx);
  else
	 step=abs(dy);

  xinc=dx/step;
  yinc=dy/step;

  x=x1;
  y=y1;
  putpixel(x,y,4);

  for(i=0;i<step;i++)
  {
	x=x+xinc;
	y=y+yinc;
	putpixel(x,y,4);

  }

	  n=n+10+40;


//	     printf("b");
	  break;
	  case ' ':
	     printf("_");
	     n=n+27;
	  break;
	  case '.':
	  //line 1
  x1=250+n;y1=202+m;x2=253+n;y2=202+m;
  if(x1==846)
     m=m+75;

  dx=(x2-x1);
  dy=(y2-y1);

  if(abs(dx)>=abs(dy))
	 step=abs(dx);
  else
	 step=abs(dy);

  xinc=dx/step;
  yinc=dy/step;

  x=x1;
  y=y1;
  putpixel(x,y,4);

  for(i=0;i<step;i++)
  {
	x=x+xinc;
	y=y+yinc;
	putpixel(x,y,4);

  }
	     n=n+10+3;
//	     printf("\n");
	  case ',':

	     printf(";");
	  break;
	  default:

		 c=b;

      }
    chr+=1;
  }
  if(c==2)
  {
    printf("\nPlease write your text in small alphabets");
  }

  getch();
  closegraph();
}