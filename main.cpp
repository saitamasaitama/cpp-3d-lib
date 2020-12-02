#include<stdio.h>
#include "./vector2.h"

int main(){
  printf("AAA");
  printf("is_cross= %d",Vector2::isCross());
  Vector2* v2=new Vector2();
  //printf("is_cross[S]=%d is_cross[O]=%d",Vector2::isCross(),v2->isCross(3));
  return 0;
}
