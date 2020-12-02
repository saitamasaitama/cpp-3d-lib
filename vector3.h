#pragma once
#include<math.h>

struct Vector3{

  float x=0.0f;
  float y=0.0f;
  float z=0.0f;

  static Vector3* From(float x,float y,float z){
    Vector3* result=new Vector3();
    result->x=x;
    result->y=y;
    result->z=z;
    
    return result;
  }
};

struct Line3{
  Vector3 from;
  Vector3 to;

  bool isCross(Line3 B){
    //座標を持たない直線
    //
    return false;
  }

  float Length(){
    //from - to ^2
    return 3.0;
  };

  static Line3* From(Vector3 from,Vector3 to){
    Line3* result= new Line3();
    result->from=from;
    result->to = to;
    return result;
  }
  static bool isCross(Line3 A, Line3 B)
  {
    return true;
  }
};

//帯
struct LineStrip3
{

};

