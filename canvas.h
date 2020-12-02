
struct CanvasInterface{
  virtual void Blit(int width,int height,unsigned char* buffer);
};

//仮想キャンバス。フレームバッファに相当
//
struct FrameBuffer {
  int width=200;
  int height=200;
  unsigned char* buffer;

  static FrameBuffer* From(int w,int h){
    FrameBuffer* result = new FrameBuffer();
    return result;   
  }


  //VGA(640x480) = 307KB x 4 = 1.2MB;
  //320x240なら300KB？
};

struct CanvasRGB{
  FrameBuffer** framebuffers;

};

