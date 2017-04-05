---Make.c
int suma(int*a){
 int i, total;
 for (i=0, total=0;
      i<4; i++)
   total += a[i];
 return total;
