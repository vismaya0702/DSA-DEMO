#include<stdio.h>
int main()
{
int a[10],b[10],c[20],i,n,m;
printf("Merging 2 arrays");
printf("Enter the size of the first array : ");
scanf("%d",&n);
printf("Enter %d elements : ",n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("Enter the size of the second array : ");
scanf("%d",&m);
printf("Enter %d elements : ",m);
for(i=0;i<m;i++)
{
scanf("%d",&b[i]);
}

for(i=0;i<n;i++)
{
c[i]=a[i];
}
for(i=0;i<m;i++)
{
c[n+i]=b[i];
}
printf("Merged Array is : ");
for(i=0;i<m+n;i++)
{
printf("%d_",c[i]);
}
return 0;
}






