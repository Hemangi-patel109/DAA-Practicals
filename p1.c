#include<stdio.h>
#include<conio.h>
void main(){
long int n,i,j,temp;
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
for(j=0;j<n-1-i;j++){
if(a[j]>a[j+1]){
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
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