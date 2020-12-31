首先，ACLLIB为一个用于绘图的C++的头文件
它可以为用户提供一个可以弹窗现实的接口，同时也可以给出一个东西用来绘图

''' c++
  string str = "";
  str +="==================\n"
  str +="  学号 : 202019090   "
  str +="==================\n"
msgBox("tltle" , str.c_str() , 0 );

initWindow("title" , DEFAULT , DEFAULT , 800 , 600);
initWindow("title" , 左上角横 , 左上角纵 , 宽 ,  长);

beginPaint();
endPaint();
这两个函数需要成对用，一个是开头，在读取到end的时候才开始绘图

line(10,10,10,100);
line((x1,y1),(x2,y2));


