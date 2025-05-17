#pragma once
#ifndef UU_BK_DM_JI_CPP 
#define UU_BK_DM_JI_CPP

#include<iostream>
#include<bitset>
#include<windows.h>
#include<cstdio>
#include<conio.h>
#include<stdio.h>
//*#include  <E:\lib\前置变量.h>
//*#include  <E:\lib\检测按键是否按下.h>

using namespace std;

struct 鼠标 :public 检测按键是否按下{
public:
  前置计算_不使用前置变量  qmvi计不;
  前置cout qmviC;
public:
  POINT p;
  vector<int> vi坐标;
  //pair<int, int> 坐标pair;
  COORD 坐标;  fCOORD CO坐标;
  int 侧键4键和5键是否相反 = 0;

public:
  COORD ret坐标( ){ GetCursorPos( &p );    坐标.X = p.x;    坐标.Y = p.y;    return(坐标); }/*COORD*/;
  void get坐标( /*!输出*/COORD& CO1 ){ GetCursorPos( &p );    CO1.X = p.x;    CO1.Y = p.y; }/*void*/;
  void get坐标( /*!输出*/fCOORD& CO1 ){ GetCursorPos( &p );    CO1.X = p.x;    CO1.Y = p.y; }/*void*/;/*2025年5月17日14:03:25*/
  auto set坐标( int y, int x ){ SetCursorPos( x, y ); }/*auto*/;
  auto set坐标( fCOORD CO1 ){ SetCursorPos( CO1.X, CO1.Y ); }/*auto*/;
  auto set坐标xy( int x, int y ){
    SetCursorPos( x, y );
  }/*auto*/
  auto set坐标( COORD C ){
    SetCursorPos( C.X, C.Y );
  }/*auto*/
  ///2024年2月28日
  /*按下*/
  void 按下鼠标Y1( ){
    keybd_event( VK_XBUTTON1, 0, 0, 0 );
  }
  void 按下鼠标X2( ){
    keybd_event( VK_XBUTTON2, 0, 0, 0 );
  }
  /*弹起*/
  void 弹起鼠标X1( ){
    keybd_event( VK_XBUTTON1, 0, KEYEVENTF_KEYUP, 0 );
  }
  void 弹起鼠标X2( ){
    keybd_event( VK_XBUTTON2, 0, KEYEVENTF_KEYUP, 0 );
  }
  /*按下-->按下,弹起-->弹起*/
  void 使用按键后，使用鼠标X1( int 键码 ){
    if( 是否按下( 键码 ) == 1 ){
      //现在 按下
      std::cout << "/X1下!\n";
      keybd_event( VK_XBUTTON1, 0, 0, 0 );
    }/*if*/
    if( 是否弹起( 键码 ) == 1 ){
      std::cout << "/X1上!\n";
      keybd_event( VK_XBUTTON1, 0, KEYEVENTF_KEYUP, 0 );
    }/*if*/
  }
  void 使用按键后，使用鼠标X2( int 键码 ){
    if( 是否按下( 键码 ) == 1 ){
      //现在 按下
      std::cout << "/X2下!\n";
      keybd_event( VK_XBUTTON2, 0, 0, 0 );
    }/*if*/
    if( 是否弹起( 键码 ) == 1 ){
      std::cout << "/X2上!\n";
      keybd_event( VK_XBUTTON2, 0, KEYEVENTF_KEYUP, 0 );
    }/*if*/
  }
  void 按下后，按下鼠标X1( int 键码 ){
    if( 是否按下( 键码 ) == 1 ){
      //现在 按下
      std::cout << "/X1下!\n";
      keybd_event( VK_XBUTTON1, 0, 0, 0 );
    }/*if*/
  }
  void 弹起后，弹起鼠标X1( int 键码 ){
    if( 是否弹起( 键码 ) == 1 ){
      std::cout << "/X1上!\n";
      keybd_event( VK_XBUTTON1, 0, KEYEVENTF_KEYUP, 0 );
    }/*if*/
  }
  void 按下后，按下鼠标X2( int 键码 ){
    if( 是否按下( 键码 ) == 1 ){
      //现在 按下
      std::cout << "/X2下!\n";
      keybd_event( VK_XBUTTON2, 0, 0, 0 );
    }/*if*/
  }
  void 弹起后，弹起鼠标X2( int 键码 ){
    if( 是否弹起( 键码 ) == 1 ){
      std::cout << "/X2上!\n";
      keybd_event( VK_XBUTTON2, 0, KEYEVENTF_KEYUP, 0 );
    }/*if*/
  }
  /*按下-->单击*/
  void 按下后，单击鼠标X1( int 键码 ){
    if( 检测按键是否按下::现在[键码] == 1 ){
      //现在 按下
      std::cout << "/下!\n";
      keybd_event( VK_XBUTTON1, 0, 0, 0 );
      keybd_event( VK_XBUTTON1, 0, KEYEVENTF_KEYUP, 0 );
    }/*if*/
  }
  /*弹起-->单击*/
  void 弹起后，单击鼠标X1( int 键码 ){
    if( 是否弹起( 键码 ) == 1 ){
      //现在 按下
      std::cout << "/下!\n";
      keybd_event( VK_XBUTTON1, 0, 0, 0 );
      keybd_event( VK_XBUTTON1, 0, KEYEVENTF_KEYUP, 0 );
    }
  }
  /**///▬鼠标点击▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
  /**///▬mouse_event▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
  void 可能是移动某距离( float y, float x ){/*x * 65535 / 屏幕x, y * 65535 / 屏幕y,*/		mouse_event( MOUSEEVENTF_MOVE, x, y, 0, 0 ); }
  void 可能是移动某距离xy( float x, float y ){ mouse_event( MOUSEEVENTF_MOVE, x, y, 0, 0 ); }/*void*/;/*2025年5月17日09:49:42*/
  void 滚动( ){ //没用
    mouse_event( MOUSEEVENTF_WHEEL, 0, 0, 0, 0 );
  }
  /*?不能,用<GetCursorPos()>*/
  //*#define tp set坐标
  //*  void set坐标(float y, float x ){    mouse_event( MOUSEEVENTF_MOVE | MOUSEEVENTF_ABSOLUTE, x, y, MOUSEEVENTF_MOVE, 0 );  }/*void*/;
  //*#define tpXY set坐标xy
  //*    void set坐标xy( float x, float y ){    mouse_event( MOUSEEVENTF_MOVE | MOUSEEVENTF_ABSOLUTE, x, y, MOUSEEVENTF_MOVE, 0 );  }/*void*/;/*2025年5月17日09:49:42*/

    //单击
#define 点击 左键单击
#define 单击 左键单击
  void 左键单击( ){ //float a, float b, float c, float d
    mouse_event( MOUSEEVENTF_LEFTDOWN | MOUSEEVENTF_LEFTUP, 0, 0, 0, 0 );
  }
  void 单击( float y, float x ){ set坐标( y, x ); 单击( ); }/*void*/;
  void 单击AC( float y, float x ){ set坐标( y, x ); 单击( ); qmviC.set字色( 6 ); cout5( "单击了坐标(y=", y, ",x=", x, ")" ); qmviC.set字色( 7 ); coutEnd; }/*void*/;
  void 单击AC( fCOORD CO ){单击AC( CO.Y, CO.X );  }/*void*/;/*2025年5月17日14:27:12*/
#define 右键点击 右键单击@
  void 右键单击( ){
    mouse_event( MOUSEEVENTF_RIGHTDOWN | MOUSEEVENTF_RIGHTUP, 0, 0, 0, 0 );
  }
  void 中键点击( ){
    mouse_event( MOUSEEVENTF_MIDDLEDOWN | MOUSEEVENTF_MIDDLEUP, 0, 0, 0, 0 );
  }
  void X1点击( ){
    keybd_event( VK_XBUTTON1, 0, 0, 0 );
    keybd_event( VK_XBUTTON1, 0, KEYEVENTF_KEYUP, 0 );
  }
  void X2点击( ){
    keybd_event( VK_XBUTTON2, 0, 0, 0 );
    keybd_event( VK_XBUTTON2, 0, KEYEVENTF_KEYUP, 0 );
  }
  void 单击X1( ){

  }
  void 侧4键点击( ){
    X2点击( );
  }
  void 侧5键点击( ){
    X1点击( );
  }

  //按下 放开
  void 按下( ){
    mouse_event( MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0 );
  }
  void 放开( ){
    mouse_event( MOUSEEVENTF_LEFTUP, 0, 0, 0, 0 );
  }
  void 中键按下( ){
    mouse_event( MOUSEEVENTF_MIDDLEDOWN, 0, 0, 0, 0 );
  }
  void 中键放开( ){
    mouse_event( MOUSEEVENTF_MIDDLEUP, 0, 0, 0, 0 );
  }
  void 右键按下( ){
    mouse_event( MOUSEEVENTF_RIGHTDOWN, 0, 0, 0, 0 );
  }
  void 右键放开( ){
    mouse_event( MOUSEEVENTF_RIGHTUP, 0, 0, 0, 0 );
  }
  //▬侧4键 X2 点击▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
  void X2按下( ){
    keybd_event( VK_XBUTTON2, 0, 0, 0 );
  }
  void X2放开( ){
    keybd_event( VK_XBUTTON2, 0, KEYEVENTF_KEYUP, 0 );
  }
  //侧5键 X1 点击
  void X1按下( ){
    keybd_event( VK_XBUTTON1, 0, 0, 0 );
  }
  void X1放开( ){
    keybd_event( VK_XBUTTON1, 0, KEYEVENTF_KEYUP, 0 );
  }

  //双击
  void 双击( ){ //,float c,float d
    mouse_event( MOUSEEVENTF_LEFTDOWN | MOUSEEVENTF_LEFTUP, 0, 0, 0, 0 );
    mouse_event( MOUSEEVENTF_LEFTDOWN | MOUSEEVENTF_LEFTUP, 0, 0, 0, 0 );
  }
  void 右键双击( ){
    mouse_event( MOUSEEVENTF_RIGHTDOWN | MOUSEEVENTF_RIGHTUP, 0, 0, 0, 0 );
    mouse_event( MOUSEEVENTF_RIGHTDOWN | MOUSEEVENTF_RIGHTUP, 0, 0, 0, 0 );
  }
  void 中键双击( ){
    mouse_event( MOUSEEVENTF_MIDDLEDOWN | MOUSEEVENTF_XUP, 0, 0, 0, 0 );
    mouse_event( MOUSEEVENTF_MIDDLEDOWN | MOUSEEVENTF_XUP, 0, 0, 0, 0 );
  }
  void X2双击( ){
    keybd_event( VK_XBUTTON2, 0, 0, 0 );
    keybd_event( VK_XBUTTON2, 0, KEYEVENTF_KEYUP, 0 );
    keybd_event( VK_XBUTTON2, 0, 0, 0 );
    keybd_event( VK_XBUTTON2, 0, KEYEVENTF_KEYUP, 0 );
  }
  void X1双击( ){
    keybd_event( VK_XBUTTON1, 0, 0, 0 );
    keybd_event( VK_XBUTTON1, 0, KEYEVENTF_KEYUP, 0 );
    keybd_event( VK_XBUTTON1, 0, 0, 0 );
    keybd_event( VK_XBUTTON1, 0, KEYEVENTF_KEYUP, 0 );
  }

  void 锁定鼠标( int x1, int y1, int x2, int y2 ){
    RECT rect;
    rect.bottom = y2;
    rect.right = x2;
    //-----------add------
    rect.left = x1;
    rect.top = y1;
    //-----------end-----
    ClipCursor( &rect );
    ::Sleep( 1500 );
    ClipCursor( NULL );//释放
  }
};

//mouse_event(  ,a,b,0,0);
//    mouse_event(MOUSEEVENTF_XDOWN,a,b,0,0);
//          mouse_event(MOUSEEVENTF_XUP,a,b,0,0);









#endif