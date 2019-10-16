#include <stdio.h>
#include<conio.h>

void display(int a[] , int n)
{
int i;
for(i=0; i<n; i++)
	printf("%d ",a[i]);
printf("\n");
}

void insert_sort(int a[], int n)
{
int i, j, t;
for (i = 1 ; i <= n - 1; i++)
{
    j = i;

    while ( j > 0 && a[j-1] > a[j])
    {
      t = a[j];
      a[j]   = a[j-1];
      a[j-1] = t;

      j--;
    }
}
printf("Sorting using Insertion Sort :: ");
display(a,n);
}

void select_sort(int a[], int n)
{
	int i, j pos, t;
	for(i=0; i<n-1; i++)
	{
		pos = i;
		for(j=i+1; j<n; j++)
		{
			if(a[pos] > a[j])
				pos = j;
		}
		if(pos != i)
		{
			t = a[i];
			a[i] = a[pos];
			a[pos] = a[i];
		}
	}
	printf("Sorting using Selection Sort :: ");
	display(a,n);
}


void main()
{
  int n, a[10], i;
  clrscr();
  printf("Enter number of elements :: ");
  scanf("%d", &n);
  printf("Enter %d numbers\n", n);
  for (i = 0; i < n; i++)
	  scanf("%d", &a[i]);
  insert_sort(a, n);
  getch();
}
