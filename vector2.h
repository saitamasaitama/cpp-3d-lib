#include<math.h>

template <class T>
struct IisCross{
  bool isCross(T B);
};

struct Vector2:IisCross<Vector2>{

  float x=0.0f;
  float y=0.0f;
  bool isCross(Vector2 B){
    //座標を持たない直線
    //
    return false;
  }
  static bool isCross(){

    return true;
  }
  static Vector2* From(float x,float y){
    Vector2* result=new Vector2();
    result->x=x;
    result->y=y;
    
    return result;
  }
};

struct Line2:IisCross<Line2>{
  Vector2 from;
  Vector2 to;

  bool isCross(Line2 B){
    //座標を持たない直線
    //
    return false;
  }

  float Length(){
    //from - to ^2
    return 3.0;
      /*pow(
      (this.from.x - this.to.y) * (this.from.x - this.to.y)
      +(this.from.y - this.to.x) * (this.from.y - this.to.x)
      );*/
      
  };

  static Line2* From(Vector2 from,Vector2 to){
    Line2* result= new Line2();
    result->from=from;
    result->to = to;
    return result;
  }
  static bool isCross(Line2 A, Line2 B)
  {
    float ta = (B.from.x - B.to.x) * (A.from.y - B.from.y) + (B.from.y - B.to.y) * (B.from.x - A.from.x);
    float tb = (B.from.x - B.to.x) * (A.to.y - B.from.y) + (B.from.y - B.to.y) * (B.from.x - A.to.x);
    float tc = (A.from.x - A.to.x) * (B.from.y - A.from.y) + (A.from.y - A.to.y) * (A.from.x - B.from.x);
    float td = (A.from.x - A.to.x) * (B.to.y - A.from.y) + (A.from.y - A.to.y) * (A.from.x - B.to.x);
    return tc * td < 0 && ta * tb < 0;
  }
};

//帯
struct LineStrip2
{

};

