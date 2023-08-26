#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <unistd.h>
void main(){
  int h,m,s;

  printf("enter the seconds : ");
  scanf("%d", &s);

  m = s/60;
  h = s/(60*60);
  s = s%60;

  for(int i=h*60*60+m*60+s; i>=0; i--){
    system("clear");
    printf("time : %d:%d:%d\n", h, m, s);
    if(s==0){
      s=60;
      --m;
    } if(m==0){
      m=59;
      --h;
    }
    --s;
    sleep(1);
  }
}
