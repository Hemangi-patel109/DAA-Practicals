#include<stdio.h>
#include<conio.h>
void main()
{
long int n,min,i,j,temp;
long int elapsed_time;
long int start_t,end_t;
printf("enter size of array=");
scanf("%d",&n);
long int a[n];
for(i=0;i<n;i++){
a[i] = rand();
printf("value a[%d]=%d\n",i,a[i]);
}
start_t = clock();
for(i=0;i<n-1;i++){
min=i;
for(j=i+1;j<n;j++){
if(a[j]<a[min]){
min=j;
}
}
if(min!=i){
temp=a[i];
a[i]=a[min];
a[min]=temp;
}
}
end_t = clock();
printf("sorted array\n");
for(i=0;i<n;i++){
printf("%d\t",a[i]);
}
printf("\nStart time::%ld \nEnd time::%ld",start_t,end_t);
elapsed_time = (end_t - start_t);
printf("\nTotal Time:: %ld",elapsed_time);
}