
#include<stdio.h>
int main()
{
union

{

unsigned long I;

unsigned int d[2] ;

char ch[4];

} a;

strcpy ( a.ch, "ABC" ) ;

printf ( "%s\n", a.ch ) ;

printf ( "%u %u\n", a.d[0], a.d[1]) ;

printf ( "%Iu", a.I) ;
return 0;
}
