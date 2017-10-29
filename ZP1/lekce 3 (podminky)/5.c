#include<stdio.h>
#include<stdlib.h>

/* 5. Nactete ze vstupu souradnice stredu kruznice a její polomer. Vypiste kvadranty, do kterych kruznice zasahuje. */

int main() {
  int sx , sy, r;
  scanf("%d %d %d", &sx, &sy, &r);
  
  if ((sx-r)>0) {
      if ((sy-r)>0) printf("Zasahuje do 1. kvadrantu.\n");
      else if ((sy-r)<0) printf("Zasahuje do 4. kvadrantu.\n");      
  } else if ((sx-r)<0) {
      if ((sy-r)>0) printf("Zasahuje do 2. kvadrantu.\n");
      else if ((sy-r)<0) printf("Zasahuje do 3. kvadrantu.\n");
  }    
    
    if ((sx+r)>0) {
      if ((sy-r)>0) printf("Zasahuje do 1. kvadrantu.\n");
      else if ((sy-r)<0) printf("Zasahuje do 4. kvadrantu.\n");      
  } else if ((sx+r)<0) {
      if ((sy-r)>0) printf("Zasahuje do 2. kvadrantu.\n");
      else if ((sy-r)<0) printf("Zasahuje do 3. kvadrantu.\n");
  }
    
    if ((sx-r)>0) {
      if ((sy+r)>0) printf("Zasahuje do 1. kvadrantu.\n");
      else if ((sy+r)<0) printf("Zasahuje do 4. kvadrantu.\n");      
  } else if ((sx-r)<0) {
      if ((sy+r)>0) printf("Zasahuje do 2. kvadrantu.\n");
      else if ((sy+r)<0) printf("Zasahuje do 3. kvadrantu.\n");
  }
    
    if ((sx+r)>0) {
      if ((sy+r)>0) printf("Zasahuje do 1. kvadrantu.\n");
      else if ((sy+r)<0) printf("Zasahuje do 4. kvadrantu.\n");      
  } else if ((sx+r)<0) {
      if ((sy+r)>0) printf("Zasahuje do 2. kvadrantu.\n");
      else if ((sy+r)<0) printf("Zasahuje do 3. kvadrantu.\n");
  }    
}
