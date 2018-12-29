#include<stdio.h>
void main()
{
int a[10][10],b[10],d[10][10];
int i,j,p,q,m,n,k;
printf("Enter size of the A matrix:");
scanf("%d%d",&p,&q);
printf("Enter the size of the b matrix:");
scanf("%d%d",&m,&n);
if(q==m)
{
printf("Enter the elements of a matrix\n");
for(i=0;i<p;i++)
{
for(j=0;j<q;j++)
scanf("%d",&a[i][j]);
}
printf("enter the elements of b matrix\n"),
for(i=0;i<p;i++)
{
for(j=0;j<q;j++)
scanf("%d"&a[i][j]);
}
printf("Enter the elements of b matrix\n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&b[i][j]);



