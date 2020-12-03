#include<stdio.h>
#include <graphics.h>
#include<conio.h>
int main () 
{ 
   int gd = DETECT, gm; 
   initgraph (&gd, &gm, "C:\\TURBOC3\\BGI"); 
   circle (250, 200, 50); 
   line (100,100,300,300);
   getch (); 
   closegraph (); 
   return 0; 
}
