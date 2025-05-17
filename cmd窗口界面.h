#pragma once
#ifndef CMD窗口界面_H 
#define CMD窗口界面_H

//#include<E:\lib\预编译头文件 无其他.h>

#include  <E:\lib\define.h> ///#include<E:\lib\namespace\简写.h>
#include  <E:\lib\cmd.h>
#include<E:\lib\头文件 c++.h>
#include <E:\lib\文件读写.h>
#include  <E:\lib\窗口.h>
#include<E:\lib\类型转换.h>
#include  <E:\lib\按键.h>
#include  <E:\lib\鼠标.h>
#include  <E:\lib\用地址计算.h>

using namespace std;
class cmd窗口界面 :cmd{
public:

public:

  /*static*/ const char* ccCr_lf = "\r\n";

public:

public:
  /**///▬cmd实现窗口UI▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬

  /*显示: 序号or标记->标题->内容*/
  /**///▬cmd工具栏菜单▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬

  /**///▬cmd列表`!写入,!从文件读取▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
  /*创建vec-->写入文件--读取vec,3个lam*/

  /**///▬列表`读取▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
  /*show列表*/

   /**///▬小组件▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
  void cout光标yx( COORD COORD1 ){
    cout << std::format( "光标 Y={},X={}\n", COORD1.Y, COORD1.X );
  }
  void cout光标yx( ){
    get光标位置( ); cout << std::format( "光标 Y={},X={}\n", cmd屏幕缓冲区信息.dwCursorPosition.Y, cmd屏幕缓冲区信息.dwCursorPosition.X );
  }
  void cout光标xy( ){
    get光标位置( ); cout << std::format( "光标 Y={},X={}\n", cmd屏幕缓冲区信息.dwCursorPosition.X, cmd屏幕缓冲区信息.dwCursorPosition.Y );
  }
  /**///▬杂项▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬

  /**///▬我不知道▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬

};




#endif