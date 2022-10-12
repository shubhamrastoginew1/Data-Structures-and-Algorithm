#include<stdio.h>
int main(){
   int size, i, first[20], sec[20];
   printf("enter the size of array:");
   scanf("%d", &size);
   printf("enter first array ele:\n");
   for(i = 0; i < size; i++){
      scanf("%d", &first[i]);
   }
   printf("enter second array ele:\n");
   for(i = 0; i < size; i ++){
      scanf("%d", &sec[i]);
   }
   //Swapping two Arrays
   for(i = 0; i < size; i++){
      first[i] = first[i] + sec[i];
      sec[i] = first[i] - sec[i];
      first[i] = first[i] - sec[i];
   }
   printf("\n first array after swapping %d elements\n", size);
   for(i = 0; i < size; i ++){
      printf(" %d \t ",first[i]);
   }
   printf("sec array after Swapping %d elements\n", size);
   for(i = 0; i < size; i ++){
      printf(" %d \t ",sec[i]);
   }
   return 0;
}