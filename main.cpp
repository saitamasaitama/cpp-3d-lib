#include<stdio.h>
#include "./vector2.h"
#include "./vector3.h"
#include "./quaternion.h"
#include "./canvas.h"

int main(){
  printf("AAA");
  printf("int=%ld",sizeof(int));
  printf("Quaternion=%ld",sizeof(Quaternion));
  printf("Vector3=%ld",sizeof(Vector3));
  printf("is_cross= %d",Vector2::isCross());
  Vector2* v2=new Vector2();
  //printf("is_cross[S]=%d is_cross[O]=%d",Vector2::isCross(),v2->isCross(3));
  return 0;
}
