#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int *filtr (char a[])
{
	int *h=malloc(6*sizeof(char*));
	int i,j,k=strlen(a);
	for (i=0,j=0;i<k;i++)
	{
		if (a[i]-48>=0 && a[i]-48<=9)
		{
			if (j==6) break;
			h[j]=a[i]-48;
			j++;
		}
	}
	return h;
}

int main ()
{
	char str[16];
	fgets (str,16,stdin);
	int *dane=filtr(str);
	int h=(10*dane[0]+dane[1]),m=(10*dane[2]+dane[3]),s=(10*dane[4]+dane[5]);
	printf ("%d:%d:%d",h,m,s);
	return 0;
}
