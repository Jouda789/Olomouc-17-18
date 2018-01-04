#include <stdio.h>
#include <string.h>
#define VEL 12

int main()
{
    int pole[VEL] = {4,3,6,9,8,5,2,7,1,13,12,11};
    int i,j,t,min;
  
    for(j=1;j<VEL;j++){
      
      t = pole[j];
      i = j-1;
      
      while((i>=0)&&(pole[i]<t)){
        
        pole[i+1] = pole [i];
        i--;
      }
      pole[i+1] = t;
      
    }
  
  for(i=0;i<VEL-1;i++){
    
    min = i;
    
    for(j=i+1;j<VEL;j++)
    {if(pole[j]<pole[min]) min = j;}
        
    t = pole[min];
    pole[min] = pole[i];
    pole[i] = t;
    
  }
  
  for(i=0;i<VEL;i++) printf("%d ", pole[i]); 
}
