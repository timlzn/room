#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
  int pp;
  int cp;
  int i = 0;
  int ps = 0;
  int cs = 0;
  srand(time(NULL));
  for(i = 0; i < 5; i++){
    printf("Enter\n");
    scanf("%d", &pp);
      cp = rand()%5;
      if(pp == 0){
        if(cp == 2 || cp == 4){
          printf("yah\n");
          ps++;
        }
        if(cp == 1 || cp == 3){
          printf("no\n");
          cs++;
        }
        if(cp == 0){
          printf("draw\n");
        }
      }
      else if(pp == 1){
        if(cp == 0 || cp == 3){
          printf("yah\n");
          ps++;
        }
        if(cp == 2 || cp == 4){
          printf("no\n");
          cs++;
        }
        if(cp == 1){
          printf("draw\n");
        }

      }
      else if(pp == 2){
        if(cp == 1 || cp == 4){
          printf("yah\n");
          ps++;
        }
        if(cp == 0 || cp == 3){
          printf("no\n");
          cs++;
        }
        if(cp == 2){
          printf("draw\n");
        }
      }
      else if(pp == 3){
        if(cp == 0 || cp == 2){
          printf("yah\n");
          ps++;
        }
        if(cp == 1 || cp == 4){
          printf("no\n");
          cs++;
        }
        if(cp == 3){
          printf("draw\n");
        }
      }
      else if(pp == 4){
        if(cp == 1 || cp == 3){
          printf("yah\n");
          ps++;
        }
        if(cp == 0 || cp == 2){
          printf("no\n");
          cs++;
        }
        if(cp == 4){
          printf("draw\n");
        }
      }
      else {
        printf("wrong\n");
        i--;
      }
      if(cs == 3){
        break;
      }
      if(ps == 3){
        break;
      }
  }
  if(cs > ps){
    printf("lose\n");
  }
  else if(ps > cs){
    printf("win\n");
  }
  else {
    printf("no winner\n");
  }
  return 0;
} 
