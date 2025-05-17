#pragma once
#ifndef CMD窗口界面_小组件H 
#define CMD窗口界面_小组件H 

#include<E:\lib\头文件 c++.h> //#include  <E:\lib\按键检测.h>
#include  <E:\lib\define.h>
////#include<E:\lib\namespace\简写.h>
#include  <E:\lib\cmd.h>
#include <E:\lib\文件读写.h>
#include  <E:\lib\窗口.h>
#include<E:\lib\类型转换.h>//#include  <E:\lib\键盘.h>
#include  <E:\lib\按键.h>
#include  <E:\lib\鼠标.h>
#include  <E:\lib\用地址计算.h>

using namespace std;
#define struct_cmd窗口界面_小组件 cmd窗口界面_小组件
#define structCmd窗口界面_小组件 cmd窗口界面_小组件
///class cmd窗口界面_小组件 :public cmd
struct cmd窗口界面_小组件 :public cmd//*
  , public c注释info
  //*, public cmd窗口界面不用文件vs的变量
{
public/*class*/:
  //用地址计算 地址算;
  类型转换 lzxy转换;
  前置计算_不使用前置变量 qmvi计算_不使用前置变量;
  前置cout qmviCout;
  前置计算 qmvi计算;
  ///cmd cmd1;
  窗口 idkb;
  检测按键是否按下 jmceanjm;
  鼠标 UuBc;
  文字读取  wfzi读取;
  文件读写 wfjm读写;
  //*cmd窗口界面_小组件 cmdIdkb界面_小组件;
  //*cmd窗口界面不用文件vs_页面_修改外观 cmd窗界页面_修改外观;
public/*struct*/:
  /**///记录`窗口信息
  HWND 窗口hwnd;
  HDC 窗口hdc;
  HDC create窗口hdc;
  HBITMAP create窗口map;
  BITMAPINFO bitmap信息;
  COORD 鼠标坐标;
  COORD 刚才的鼠标坐标;
  /*鼠标相对于窗口*/int 左边的距离 = 0, 上边的距离 = 0;
  int 点的是不是这个窗口 = 0;
  int 鼠标是否按住 = 0;
  /*struct*/ tagRECT 窗口Rect { //用 *=& 引用 \ 0, 0, 0, 0
  }; ////tagRECT.LPRECT;
public:
  //>cmd窗口界面不用文件vs`class
  //*自动操作文件的预设策略 自操文预;
  //>cmd窗口界面不用文件vs`struct
  path内文件属性info p内文属i;
  //*资源管理器info 资管i;
  cmd窗口界面不用文件vsInfo cmd窗界i;
public:
  ///class_cmd窗口界面_小组件( ){
  cmd窗口界面_小组件( ){
    ///cout1( "class cmd窗口界面_小组件;", "{ ", " }\n" ); coutEnd;
    ///cout1( "struct cmd窗口界面_小组件;", "{ ", " }\n" ); coutEnd;
    函数前( 3, "cmd窗口界面_小组件" );
    jmceanjm.多个之前和现在归零( 1400 );/*初始=0, 检测是否=1*/
  }/*()*/;
  ~cmd窗口界面_小组件( ){
    函数后( 1, "cmd窗口界面_小组件" )
      jmceanjm.多个之前和现在归零( 1400 );/*初始=0, 检测是否=1*/
  }/*()*/;
  /**/;//▬鼠标交互c▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
  /*不修改`窗口大小; 不计算输出;*/
  /*像素,鼠标坐标-窗口Rect*/
  /*输入:{ cmd窗口info.可操作范围.f上_百分比 f下_百分比 f左_百分比 f右_百分比 }*/
  /*输出的初始值=初始的`c的字数*/
  /*不包含`if按下等于1*/
  int getc能拖的进度条_显示两次(/*输入*/cmd窗口info& 窗口信息1, float 上限, float 下限, float retu时的系数, /*输出*/float& 输出 ){
    /*c符号, 最大字数=每行的长度or尺寸x*/
    /*!(float& 输出) 影响c的字数, 要c了再改*/
    /*c的字数=2*比值还原*/
    auto lamc内容 = [&]( )->void{
      /*c*/
      idkb.c窗口Rect( 窗口Rect );
      couta3( "窗口信息1.窗口大小_像素y=", 窗口信息1.窗口大小_像素y, endl );
      couta3( "窗口信息1.窗口大小_像素x=", 窗口信息1.窗口大小_像素x, endl );
      couta3( "上_像素=", 窗口信息1.可操作范围.上_像素, endl );
      couta3( "下_像素=", 窗口信息1.可操作范围.下_像素, endl );
      couta3( "左_像素=", 窗口信息1.可操作范围.左_像素, endl );
      couta3( "右_像素=", 窗口信息1.可操作范围.右_像素, endl );
      couta3( "可操作范围.y=", 窗口信息1.可操作范围.y, endl );
      couta3( "可操作范围.x=", 窗口信息1.可操作范围.x, endl );

      /*初始情况`输出=初始百分比; 也就是( 显示`刚才的操作结果 )*//*y坐标没有影响的*//*坐标/字宽=字数*/
      //?不能		/ /*字的大小(y*2=x)*/窗口信息1.字的大小y**/
      size_t i; for( i = 0; i < /*字数=3*比值还原/字宽*/输出 * /*感觉是*/2*窗口信息1.窗口大小_字数x; i++ ){
        //couta1("▬");
        couta1( "=" );
      }/*for*/
      couta1( "\n" );
      couta3( "显示完了,字符数量=", i, "\n" );
      coutsf( "retu时的系数= {}\n", retu时的系数 );
      /*变量*/
      couta3( "左边的距离= ", 左边的距离, endl );
      couta3( "上边的距离= ", 上边的距离, endl );
      coutsf( "左边的距离/窗口信息1.可操作范围.x= {}/{}\n", 左边的距离, 窗口信息1.可操作范围.x );
      coutsf( "输出= {}\n", 输出 );
      鼠标坐标 = UuBc.ret坐标( );
      /*?鼠标坐标之后的cout,闪一下清屏*/
      idkb.c鼠标坐标( );
      ///coutsf("测试`在(lam清屏，c内容)中的(c鼠标坐标)之后的c能否显示{}\n",输出);/*可以*/
      };
    auto lamget窗口RectANDgetcmd窗口info = [&](/*输入*/HWND 窗口hwnd,/*输出*/tagRECT& 窗口Rect ){
      /*第一次*/
      idkb.get窗口Rect( idkb.ret前台( ), 窗口Rect );
      /*get( cmd窗口info.窗口大小_像素 )*/
      窗口信息1.窗口大小_像素y = 窗口Rect.bottom - 窗口Rect.top;
      窗口信息1.窗口大小_像素x = 窗口Rect.right - 窗口Rect.left;
      /*get( cmd窗口info.可操作范围.4点 )*/
      窗口信息1.可操作范围.上_像素 = 窗口Rect.top + 窗口信息1.窗口大小_像素y * 窗口信息1.可操作范围.f上_百分比;
      窗口信息1.可操作范围.下_像素 = 窗口Rect.top + 窗口信息1.窗口大小_像素y * 窗口信息1.可操作范围.f下_百分比;
      窗口信息1.可操作范围.左_像素 = 窗口Rect.left + 窗口信息1.窗口大小_像素x * 窗口信息1.可操作范围.f左_百分比;
      窗口信息1.可操作范围.右_像素 = 窗口Rect.left + 窗口信息1.窗口大小_像素x * 窗口信息1.可操作范围.f右_百分比;
      /*ge<t( cmd窗口info.可操作范围 )*/
      /*//>这个就是`窗口尺寸*/
      /*todo 这个还没有用*/
      /*可操作范围 应该改成 窗口内容尺寸*/
      窗口信息1.可操作范围.y = 窗口信息1.可操作范围.下_像素 - 窗口信息1.可操作范围.上_像素;
      窗口信息1.可操作范围.x = 窗口信息1.可操作范围.右_像素 - 窗口信息1.可操作范围.左_像素;
      ///窗口信息1.可操作范围.y = 窗口信息1.可操作范围.下_像素 - 窗口信息1.可操作范围.上_像素;
      ///窗口信息1.可操作范围.x = 窗口信息1.可操作范围.右_像素 - 窗口信息1.可操作范围.左_像素;
      };
    auto lamget对比上限和下限AND修改 = [&](/*输入*/float 上限, float 下限,/*输出*/float& 输出 ){
      if( 输出>上限 ){
        输出 = 上限;
      }/*if`上限*/
      if( 输出<下限 ){
        输出 = 下限;
      }/*if`下限*/
      };
    /*还原*/输出 /= retu时的系数;
    /*设置*/
    /*cmd1.*/禁止鼠标左键点ANDset字的大小( 窗口信息1.字的大小y );
    /*开始*/
    if( jmceanjm.ret是否按下( ) == 1 ){
      /*鼠标点击的坐标*/
      if( jmceanjm.现在[MOUSE_MOVED] == 1 ){
        lamget窗口RectANDgetcmd窗口info( idkb.ret前台( ), 窗口Rect );
        lamc内容( );
        /*上下范围之内*/
        if( 鼠标坐标.Y > 窗口信息1.可操作范围.上_像素 ){
          if( 鼠标坐标.Y < 窗口信息1.可操作范围.下_像素 ){
            /*左右范围之内*/
            if( 鼠标坐标.X > 窗口信息1.可操作范围.左_像素 ){
              if( 鼠标坐标.X < 窗口信息1.可操作范围.右_像素 ){
                /*输出=进度/分母=(鼠标x-窗口.左)/窗口x*/
                左边的距离 = 鼠标坐标.X - 窗口Rect.left;
                上边的距离 = 鼠标坐标.Y - 窗口Rect.top;
                /*c*/
                /*!c-->读取坐标-->c*/
                /*?这里不计算=会闪一下`c好几行, 是字数*字大小, 不知道他的位置**/
                /*输出<=1,c的字数<=2*窗口信息1.可操作范围.x*/
                输出 = ((float)左边的距离 / 窗口信息1.可操作范围.x);
                lamget对比上限和下限AND修改( 上限, 下限, 输出 );
                /*若清屏`放在最上面*/
                lamc内容( );
                cout2( R"(这里在"while( true ){"上面)", "\n" );/*存在两个c*/
                /*这里就c了*/
                couta3( "点击的位置是=", 输出, "\n" );
                /*c了再算结果*/输出 = ((float)左边的距离 / 窗口信息1.可操作范围.x)*retu时的系数;
                retu 1;
              }/*if`X*/
            }/*if`X*/
          }/*if`Y*/
        }/*if`Y*/
      }/*if`鼠标按下*/
    }/*if`按下*/
    retu 0;
  }/*int*/
  int getc能拖的进度条(/*输入*/cmd窗口info& 窗口信息1, float 上限, float 下限, float retu时的系数, /*输出*/float& 输出 ){
    /*c符号, 最大字数=每行的长度or尺寸x*/
    /*!(float& 输出) 影响c的字数, 要c了再改*/
    /*c的字数=2*比值还原*/
    auto lamc内容 = [&]( )->void{
      /*c*/
      idkb.c窗口Rect( 窗口Rect );
      couta3( "窗口信息1.窗口大小_像素y=", 窗口信息1.窗口大小_像素y, endl );
      couta3( "窗口信息1.窗口大小_像素x=", 窗口信息1.窗口大小_像素x, endl );
      couta3( "上_像素=", 窗口信息1.可操作范围.上_像素, endl );
      couta3( "下_像素=", 窗口信息1.可操作范围.下_像素, endl );
      couta3( "左_像素=", 窗口信息1.可操作范围.左_像素, endl );
      couta3( "右_像素=", 窗口信息1.可操作范围.右_像素, endl );
      couta3( "可操作范围.y=", 窗口信息1.可操作范围.y, endl );
      couta3( "可操作范围.x=", 窗口信息1.可操作范围.x, endl );

      /*初始情况`输出=初始百分比; 也就是( 显示`刚才的操作结果 )*//*y坐标没有影响的*//*坐标/字宽=字数*/
      //?不能		/ /*字的大小(y*2=x)*/窗口信息1.字的大小y**/
      size_t i; for( i = 0; i < /*字数=3*比值还原/字宽*/输出 * /*感觉是*/2*窗口信息1.窗口大小_字数x; i++ ){
        //couta1("▬");
        couta1( "=" );
      }/*for*/
      couta1( "\n" );
      couta3( "显示完了,字符数量=", i, "\n" );
      coutsf( "retu时的系数= {}\n", retu时的系数 );
      /*变量*/
      couta3( "左边的距离= ", 左边的距离, endl );
      couta3( "上边的距离= ", 上边的距离, endl );
      coutsf( "左边的距离/窗口信息1.可操作范围.x= {}/{}\n", 左边的距离, 窗口信息1.可操作范围.x );
      coutsf( "输出= {}\n", 输出 );
      };
    auto lamget窗口RectANDgetcmd窗口info = [&](/*输入*/HWND 窗口hwnd,/*输出*/tagRECT& 窗口Rect ){
      /*第一次*/
      idkb.get窗口Rect( idkb.ret前台( ), 窗口Rect );
      /*get( cmd窗口info.窗口大小_像素 )*/
      窗口信息1.窗口大小_像素y = 窗口Rect.bottom - 窗口Rect.top;
      窗口信息1.窗口大小_像素x = 窗口Rect.right - 窗口Rect.left;
      /*get( cmd窗口info.可操作范围.4点 )*/
      窗口信息1.可操作范围.上_像素 = 窗口Rect.top + 窗口信息1.窗口大小_像素y * 窗口信息1.可操作范围.f上_百分比;
      窗口信息1.可操作范围.下_像素 = 窗口Rect.top + 窗口信息1.窗口大小_像素y * 窗口信息1.可操作范围.f下_百分比;
      窗口信息1.可操作范围.左_像素 = 窗口Rect.left + 窗口信息1.窗口大小_像素x * 窗口信息1.可操作范围.f左_百分比;
      窗口信息1.可操作范围.右_像素 = 窗口Rect.left + 窗口信息1.窗口大小_像素x * 窗口信息1.可操作范围.f右_百分比;
      /*ge<t( cmd窗口info.可操作范围 )*/
      /*//>这个就是`窗口尺寸*/
      /*todo 这个还没有用*/
      /*可操作范围 应该改成 窗口内容尺寸*/
      窗口信息1.可操作范围.y = 窗口信息1.可操作范围.下_像素 - 窗口信息1.可操作范围.上_像素;
      窗口信息1.可操作范围.x = 窗口信息1.可操作范围.右_像素 - 窗口信息1.可操作范围.左_像素;
      ///窗口信息1.可操作范围.y = 窗口信息1.可操作范围.下_像素 - 窗口信息1.可操作范围.上_像素;
      ///窗口信息1.可操作范围.x = 窗口信息1.可操作范围.右_像素 - 窗口信息1.可操作范围.左_像素;
      };
    /*输出不能大于上限,不能小于下限*/
    auto lamget对比上限和下限AND修改 = [&](/*输入*/float 上限, float 下限,/*输出*/float& 输出 ){
      if( 输出>上限 ){
        输出 = 上限;
      }/*if`上限*/
      if( 输出<下限 ){
        输出 = 下限;
      }/*if`下限*/
      };
    /*还原*/输出 /= retu时的系数;
    /*设置*/
    /*cmd1.*/禁止鼠标左键点ANDset字的大小( 窗口信息1.字的大小y );
    /*开始*/
    if( jmceanjm.ret是否按下( ) == 1 ){
      /*鼠标点击的坐标*/
      if( jmceanjm.现在[MOUSE_MOVED] == 1 ){
        lamget窗口RectANDgetcmd窗口info( idkb.ret前台( ), 窗口Rect );
        ////*(上次操作or已有)的结果*/lamc内容();
        idkb.get鼠标坐标ANDc鼠标坐标( 鼠标坐标 );/*?if没get鼠标坐标=触发不了后面的行*/
        ///coutsf("测试`在(lam清屏，c内容)中的(c鼠标坐标)之后的c能否显示{}\n",输出);/*可以*/
        /*检测鼠标坐标`是否在`上下范围之内*/
        if( 鼠标坐标.Y > 窗口信息1.可操作范围.上_像素 ){
          if( 鼠标坐标.Y < 窗口信息1.可操作范围.下_像素 ){
            /*左右范围之内*/
            if( 鼠标坐标.X > 窗口信息1.可操作范围.左_像素 ){
              if( 鼠标坐标.X < 窗口信息1.可操作范围.右_像素 ){
                /*触发*/
              }/*if`X*/
               /*?if不触发,应该不修改，不应该黑屏啊*/
            }/*if`X*/
          }/*if`Y*/
        }/*if`Y*/
         /*输出=进度/分母=(鼠标x-窗口.左)/窗口x*/
        左边的距离 = 鼠标坐标.X - 窗口Rect.left;
        上边的距离 = 鼠标坐标.Y - 窗口Rect.top;
        /*c*/
        /*!c-->读取坐标-->c*/
        /*?这里不计算=会闪一下`c好几行, 是字数*字大小, 不知道他的位置**/
        /*输出<=1,c的字数<=2*窗口信息1.可操作范围.x*/
        输出 = ((float)左边的距离 / 窗口信息1.可操作范围.x);
        lamget对比上限和下限AND修改( 上限, 下限, 输出 );
        /*若清屏`放在最上面*/
        lamc内容( );
        cout2( R"(这里在"while( true ){"上面)", "\n" );/*存在两个c*/
        /*这里就c了*/
        couta3( "点击的位置是=", 输出, "\n" );
        /*c了再算结果*/输出 = ((float)左边的距离 / 窗口信息1.可操作范围.x)*retu时的系数;
        retu 1;
      }/*if`鼠标按下*/
    }/*if`按下*/
    retu 0;
  }/*int*/
  int getc能拖的进度条(/*输入*/cmd窗口info& 窗口信息1, /*输出*/float& 输出 ){
    retu getc能拖的进度条( 窗口信息1, 1, 0, 1, 输出 );
  }/*void*/
  void get死循环ζcc能拖的进度条(/*输入*/cmd窗口info& 窗口信息1, float retu时的系数, /*输出*/float& 输出 ){
    while( true ){
      getc能拖的进度条( 窗口信息1, 1, 0, retu时的系数, 输出 );
    }/*while*/
  }/*void*/
   /**///▬c▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
  void c光标( COORD& C ){ qmviCout.cCOORD( C, "Ccmd"/* "光标坐标" */ ); }
  void c光标2( COORD& C ){ qmviCout.cCOORD2( C, "Ccmd" ); }
  void c时间( struct_SYSTEMTIMETOS的输入 struct_输入, int 时间的颜色, int 后缀的颜色, int 后的颜色, 新s 后缀 ){ set颜色( 时间的颜色 ); cout1( uijm.retGet当前时间ARetTS_年月日数数秒_数字补到2位( struct_输入 ) ); set颜色( 后缀的颜色 ); cout1( 后缀 ); set颜色( 后的颜色 );  }/*void*/;
  void c时间( int 时间的颜色, int 后缀的颜色, int 后的颜色, 新s 后缀 ){/*2025年3月19日23:19:21*/
    struct_SYSTEMTIMETOS的输入 struct_输入;
    struct_输入.是否加单位年 = 1; struct_输入.是否加单位月 = 1; struct_输入.是否加单位日 = 1;
    struct_输入.是否加单位时 = 1; struct_输入.是否加单位分 = 1; struct_输入.是否加单位秒 = 1;
    struct_输入.是否加单位Nm = 0; struct_输入.是否加单位Yt = 0; struct_输入.是否加单位Ri = 0;
    struct_输入.是否加单位Ui = 0; struct_输入.是否加单位Ff = 0; struct_输入.是否加单位Mc = 0;
    struct_输入.后缀 = "";
    c时间( struct_输入, 时间的颜色, 后缀的颜色, 后的颜色, 后缀 );
  }/*void*/;
  /**///▬来自<cmd窗口界面不用文件vs>▬cout`窗口UIc▬▬▬▬c▬▬▬▬c▬▬▬▬c▬▬▬▬c▬▬▬▬c▬▬▬▬c▬▬▬▬c▬▬▬▬c▬▬▬▬c▬▬▬▬c▬▬▬▬c▬▬▬▬
  //>设置int为`开启c注释
#define 不在cmd窗口界面不用文件vsInfo开启c注释 在cmd窗口界面不用文件vsInfo关闭c注释
  void 在cmd窗口界面不用文件vsInfo关闭c注释( cmd窗口界面不用文件vsInfo& cmd窗界i ){ cmd窗界i.c注释i.是否c注释 = 0; cmd窗界i.c注释i.c注释次数上限 = 1000; }/*void*/;
  void 在cmd窗口界面不用文件vsInfo开启c注释0( cmd窗口界面不用文件vsInfo& cmd窗界i ){ 在cmd窗口界面不用文件vsInfo关闭c注释( cmd窗界i ); }/*void*/;
  void 在cmd窗口界面不用文件vsInfo开启c注释1( cmd窗口界面不用文件vsInfo& cmd窗界i ){ cmd窗界i.c注释i.是否c注释 = 1; cmd窗界i.c注释i.c注释次数上限 = 1000; }/*void*/;
  void 在cmd窗口界面不用文件vsInfo开启c注释14( cmd窗口界面不用文件vsInfo& cmd窗界i ){ cmd窗界i.c注释i.是否c注释 = 14; cmd窗界i.c注释i.c注释次数上限 = 1000; }/*void*/;
#define 不在cmd窗口界面不用文件vsInfo关闭c注释 在cmd窗口界面不用文件vsInfo开启c注释
  void 在cmd窗口界面不用文件vsInfo开启c注释( cmd窗口界面不用文件vsInfo& cmd窗界i ){ 在cmd窗口界面不用文件vsInfo开启c注释1( cmd窗界i ); }/*void*/;
  void 清空vs( cmd窗口界面不用文件vsInfo& cmd窗界i ){
    cmd窗界i.清空vs( );
  };/*void*/
  /**/;//c的最小单位
  /*set颜色-->cVSize-->set默认背景色-->c间隔*/
  void c一个元素size(/*!输入*/cmd窗口界面不用文件vsInfo& cmd窗界i, 新vi vi, 新vs vs, int 行 ){
    set颜色( vi[行] ); cout1( vs[行].size( ) ); set颜色( cmd窗界i.默认背景色 ); cout1( cmd窗界i.s选项间隔 );
  }/*void*/
  void c一个元素size_对齐_if小于c字数上限(/*!输入*/cmd窗口界面不用文件vsInfo& cmd窗界i, 新vi vi, 新vs vs, int 行 ){
    int iVSize字数 = wfzi读取.数4分i.ret整数位数( ((int)vs.size( )) );
    /*set颜色-->cVSize-->coutS( " " )-->set默认背景色-->c间隔*/
    auto lamSet颜色ANDcANDset颜色 = [&]( int 颜色 ){
      set颜色( 颜色 ); cout1( vs[行].size( ) );
      /*if-->set颜色*/if( cmd窗界i.是否补齐到上限的字显示默认背景色 ){ set颜色( cmd窗界i.默认背景色 ); }/*if*/   wfzi读取.coutS( " ", /*还差几个字*/cmd窗界i.选项对齐的字数上限-iVSize字数 );
      set颜色( cmd窗界i.默认背景色 ); cout1( cmd窗界i.s选项间隔 );
      };
    if( 行==cmd窗界i.当前选择的项_v的下标.一 ){/*是否是`光标悬停的`下标*/
      if( cmd窗界i.当前选择的项_v的下标.状态==1/*1=悬停,2=运行前,3=运行时*/ ){
        lamSet颜色ANDcANDset颜色( cmd窗界i.默认运行前高亮色 );
      }/*if*/
      if( cmd窗界i.当前选择的项_v的下标.状态==2 or cmd窗界i.当前选择的项_v的下标.状态==3/*!暂时不区分` 运行前` 运行时*/ ){
        lamSet颜色ANDcANDset颜色( cmd窗界i.默认运行时高亮色 );
      }/*if*/
    }/*if*/
    lamSet颜色ANDcANDset颜色( vi[行] );
  }/*void*/
  void c一个元素size_不超字数上限_对齐(/*!输入*/cmd窗口界面不用文件vsInfo& cmd窗界i, 新vs& vs, 新vi vi, int 行 ){
    int iVSize字数 = wfzi读取.数4分i.ret整数位数( ((int)vs.size( )) );
    /*比较字数*/
    if( iVSize字数==cmd窗界i.选项对齐的字数上限 ){
      c一个元素size( /*!输入*/cmd窗界i, vi, vs, 行 ); retu;
    }/*if*/
    if( iVSize字数<cmd窗界i.选项对齐的字数上限 ){
      c一个元素size_对齐_if小于c字数上限( cmd窗界i, vi, vs, 行 ); retu;
    }/*if*/
  }/*void*/
  void forV2sC元素size( /*!输入*/cmd窗口界面不用文件vsInfo& cmd窗界i, 新vs vs, 新vi vi, int 每行显示几个元素 ){/*c一个v的选项_对齐*/
    cmd窗界i.运行时_当前这一行已经显示了几个元素 = 0;/*每行c几个元素,c=++,c满=0*/
    for( size_t 行 = 0; 行 < vs.size( ); 行++ ){
      /*todo if( 当前行字数>最大字数 ){ c一半-->c下一行 }*/
      c一个元素size(/*!输入*/cmd窗界i, vi, vs, 行 )/*2个v的顺序*/; cmd窗界i.运行时_当前这一行已经显示了几个元素++/*c=++*/;
      //*if( 每行显示几个元素==1 or 列%每行显示几个元素==0/*每行显示几个>1={ 除尽=换行; 最后补一个换行 }*/ ){ coutEndl;continuefor;}
      if( 每行显示几个元素==cmd窗界i.运行时_当前这一行已经显示了几个元素 ){ cmd窗界i.运行时_当前这一行已经显示了几个元素 = 0/*c满=0*/; coutEndl; continuefor; }
    }/*for*/
    if( cmd窗界i.运行时_当前这一行已经显示了几个元素>0 ){ coutEndl; }/*?换行了,没=0,会不会不好*/
  }/*void*/
  void forV2sC元素size_对齐(/*!输入*/cmd窗口界面不用文件vsInfo& cmd窗界i, 新vs vs, 新vi vi, int 每行显示几个元素 ){/*c一个v的选项_对齐*/
    cmd窗界i.运行时_当前这一行已经显示了几个元素++/*c=++*/;
    for( size_t 行 = 0; 行 < vs.size( ); 行++ ){
      /*todo if( 当前行字数>最大字数 ){ 不c了,c下一行 }*/
      c一个元素size_不超字数上限_对齐( /*!输入*/cmd窗界i, vs, vi, 行 ); cmd窗界i.运行时_当前这一行已经显示了几个元素++/*c=++*/;
      if( 每行显示几个元素==cmd窗界i.运行时_当前这一行已经显示了几个元素 ){ cmd窗界i.运行时_当前这一行已经显示了几个元素 = 0/*c满=0*/; coutEndl; continuefor; }
    }/*for*/
    /*补齐\n*/if( cmd窗界i.运行时_当前这一行已经显示了几个元素>0 ){ coutEndl; }
  }/*void*/
   /*c-->c间隔*/
   /*set颜色-->cVs[]-->set默认背景色-->c间隔*/
  void c一个元素( /*!输入*/cmd窗口界面不用文件vsInfo& cmd窗界i, 新vi vi, 新vs vs, int 行 ){
    auto lamSet颜色ANDcANDset颜色 = [&]( int 颜色 ){
      set颜色( 颜色 ); cout1( vs[行] ); set颜色( cmd窗界i.默认背景色 ); cout1( cmd窗界i.s选项间隔 ); retu;
      };
    if( 行==cmd窗界i.当前选择的项_v的下标.一 ){/*if{高亮c}*/
      if( cmd窗界i.当前选择的项_v的下标.状态==1/*1=悬停,2=运行前,3=运行时*/ ){
        lamSet颜色ANDcANDset颜色( cmd窗界i.默认运行前高亮色 );
      }/*if*/
      if( cmd窗界i.当前选择的项_v的下标.状态==2 or  cmd窗界i.当前选择的项_v的下标.状态==3/*!暂时不区分` 运行前` 运行时*/ ){
        lamSet颜色ANDcANDset颜色( cmd窗界i.默认运行时高亮色 );
      }/*if*/
    }/*if*/
    lamSet颜色ANDcANDset颜色( vi[行] );
  }/*void*/
   /*set颜色-->cS-->set默认背景色-->c间隔*/
  void c一个元素( cmd窗口界面不用文件vsInfo& cmd窗界i, 新vi vi, int 行, 新s s ){
    auto lamSet颜色ANDcANDset颜色 = [&]( int 颜色 ){
      set颜色( 颜色 ); cout1( s ); set颜色( cmd窗界i.默认背景色 ); cout1( cmd窗界i.s选项间隔 ); retu;
      };
    if( 行==cmd窗界i.当前选择的项_v的下标.一 ){/*if{高亮c}*/
      if( s==cmd窗界i.当前选择的项_v的下标.s ){/*是否是`光标悬停的`s*/
        if( cmd窗界i.当前选择的项_v的下标.状态==1/*1=悬停,2=运行前,3=运行时*/ ){
          lamSet颜色ANDcANDset颜色( cmd窗界i.默认运行前高亮色 ); retu;
        }/*if*/
        if( cmd窗界i.当前选择的项_v的下标.状态==2 or  cmd窗界i.当前选择的项_v的下标.状态==3/*!暂时不区分` 运行前` 运行时*/ ){
          lamSet颜色ANDcANDset颜色( cmd窗界i.默认运行时高亮色 ); retu;
        }/*if*/
      }/*if*/
    }/*if*/
    lamSet颜色ANDcANDset颜色( vi[行] ); retu;
  }/*void*/
   /**///>比较`字数上限
       /*set颜色-->c-->set默认背景色*/
  void c一个元素_if小于c字数上限( /*!输入*/cmd窗口界面不用文件vsInfo& cmd窗界i, 新vi vi, 新vs vs, int 行, int 选项的字数上限 ){
    auto lamSet颜色ANDcANDset颜色 = [&]( int 颜色 ){
      set颜色( 颜色 ); cout1( vs[行] );
      /*if-->set颜色*/if( cmd窗界i.是否补齐到上限的字显示默认背景色 ){ set颜色( cmd窗界i.默认背景色 ); qmviCout.cs( " ", 选项的字数上限-vs[行].size( ) ); }/*if*/
      set颜色( cmd窗界i.默认背景色 );     if( vs[行]=="\n" ){ retu; }/*if*/cout1( cmd窗界i.s选项间隔 );
      };
    if( 行==cmd窗界i.当前选择的项_v的下标.一 ){/*是否是`光标悬停的`下标*/
      if( vs[行]==cmd窗界i.当前选择的项_v的下标.s ){/*是否是`光标悬停的`s*/
        if( cmd窗界i.当前选择的项_v的下标.状态==1/*1=悬停,2=运行前,3=运行时*/ ){
          lamSet颜色ANDcANDset颜色( cmd窗界i.默认运行前高亮色 ); retu;
        }/*if*/
        if( cmd窗界i.当前选择的项_v的下标.状态==2 or cmd窗界i.当前选择的项_v的下标.状态==3/*!暂时不区分` 运行前` 运行时*/ ){
          lamSet颜色ANDcANDset颜色( cmd窗界i.默认运行时高亮色 ); retu;
        }/*if*/
      }/*if*/
    }/*if*/
    lamSet颜色ANDcANDset颜色( vi[行] ); retu;
  }/*void*/
   /*c-->补齐字数`c空格-->c间隔*/
  void c一个元素_对齐_if小于c字数上限( /*!输入*/cmd窗口界面不用文件vsInfo& cmd窗界i, 新vs vs, int 行 ){/*, int i还差几个到字数上限*/    cout1( vs[行] );    wfzi读取.coutS( " ",/*还差几个字*/ cmd窗界i.选项对齐的字数上限-vs.size( ) );    cout1( cmd窗界i.s选项间隔 ); }/*void*/
  /*set颜色-->c-->set默认背景色-->c间隔*/
  void c一个元素_对齐_if小于c字数上限( /*!输入*/cmd窗口界面不用文件vsInfo& cmd窗界i, 新vi vi, 新vs vs, int 行 ){
    auto lamSet颜色ANDcANDset颜色 = [&]( int 颜色 ){
      set颜色( 颜色 ); cout1( vs[行] );
      /*if-->set颜色*/if( cmd窗界i.是否补齐到上限的字显示默认背景色 ){ set颜色( cmd窗界i.默认背景色 ); }/*if*/   wfzi读取.coutS( " ", /*还差几个字*/cmd窗界i.选项对齐的字数上限-vs.size( ) );
      set颜色( cmd窗界i.默认背景色 ); cout1( cmd窗界i.s选项间隔 );
      };
    if( 行==cmd窗界i.当前选择的项_v的下标.一 ){/*是否是`光标悬停的`下标*/
      if( cmd窗界i.当前选择的项_v的下标.状态==1/*1=悬停,2=运行前,3=运行时*/ ){
        lamSet颜色ANDcANDset颜色( cmd窗界i.默认运行前高亮色 );
      }/*if*/
      if( cmd窗界i.当前选择的项_v的下标.状态==2 or cmd窗界i.当前选择的项_v的下标.状态==3/*!暂时不区分` 运行前` 运行时*/ ){
        lamSet颜色ANDcANDset颜色( cmd窗界i.默认运行时高亮色 );
      }/*if*/
    }/*if*/
    lamSet颜色ANDcANDset颜色( vi[行] );
  }/*void*/
  void c一个元素_不超字数上限( /*!输入*/cmd窗口界面不用文件vsInfo& cmd窗界i, 新vs& vs, 新vi vi, int 行 /*!输出*/ ){/*_不对齐*/
    /*比较字数*/
    if( vs.size( )>cmd窗界i.选项的字数上限 ){
      ///vs[行] = vs[行].substr( 0, 14 );/*原来考虑到了, 但是不应该修改v[]*/
      c一个元素( cmd窗界i, vi, 行, vs[行].substr( 0, 14 ) );
    }/*if*/
    if( vs.size( )==cmd窗界i.选项的字数上限 ){
      c一个元素( cmd窗界i, vi, vs, 行 );
    }/*if*/
    if( vs.size( )<cmd窗界i.选项的字数上限 ){
      c一个元素_if小于c字数上限( cmd窗界i, vi, vs, 行, cmd窗界i.选项的字数上限 );
    }/*if*/
  }/*void*/
  void c一个元素_不超字数上限_对齐( /*!输入*/cmd窗口界面不用文件vsInfo& cmd窗界i, 新vs& vs, 新vi vi, int 行 ){
    /*比较字数*/
    if( vs.size( )>cmd窗界i.选项对齐的字数上限 ){
      ///vs[行] = vs[行].substr( 0, 14 );/*原来考虑到了, 但是不应该修改v[]*/
      c一个元素( cmd窗界i, vi, 行, vs[行].substr( 0, 14 ) );
    }/*if*/
    if( vs.size( )==cmd窗界i.选项对齐的字数上限 ){
      c一个元素( cmd窗界i, vi, vs, 行 );
    }/*if*/
    if( vs.size( )<cmd窗界i.选项对齐的字数上限 ){
      c一个元素_对齐_if小于c字数上限( cmd窗界i, vi, vs, 行 );
    }/*if*/
  }/*void*/
   /*for=cV每个元素,运行时_当前这一行已经显示了几个元素`和`每行显示几个元素=是否换行*/
  void forV2sC元素(/*!输入*/cmd窗口界面不用文件vsInfo& cmd窗界i, 新vs& vs, 新vi& vi, int 每行显示几个元素 ){/*c一个v的选项_对齐*/
    ///if( vs.size( )>14 )/*?没c了*/
    ///  /*?c的很快*//*c*/{ c注释前( 默认注释色, cmd窗i.Ccmd ); cout1( "forV2sC元素{ " ); cout1( "vs.size" );    set颜色( 默认注释高亮色 ); cout2( "=", vs.size( ) ); cout1( " }" ); coutEnd; c注释后( cmd窗i.Ccmd );        sleep14000; }/*c*/
    //*int 我猜coutEndl没用了,还真是! 还有为什么sleep特别快?
    cmd窗界i.运行时_当前这一行已经显示了几个元素 = 0;/*每行c几个元素,c=++,c满=0*/
    for( size_t 行 = 0; 行 < vs.size( ); 行++ ){
      /*todo if( 当前行字数>最大字数 ){ c一半-->c下一行 }*/
      c一个元素_不超字数上限( cmd窗界i, vs, vi, 行 )/*2个v的顺序*/; cmd窗界i.运行时_当前这一行已经显示了几个元素++/*c=++*/;//*/*?2025年1月4日11:27:42`没用*/cout1("\n");cout1("\n");cout1("\n");cout1("\n");
      ////*?c在左上角,共7行*//*c*/{c注释前( 默认注释色, cmd窗i.Ccmd ); cout1( "cmd窗界i.运行时_当前这一行已经显示了几个元素" ); set颜色( 默认注释高亮色 ); cout2( "=", cmd窗界i.运行时_当前这一行已经显示了几个元素 ); coutEnd; c注释后( cmd窗i.Ccmd ); sleep140; }/*c*/
      //*if( 每行显示几个元素==1 or 列%每行显示几个元素==0/*每行显示几个>1={ 除尽=换行; 最后补一个换行 }*/ ){ coutEndl;continuefor;}
      if( 每行显示几个元素==cmd窗界i.运行时_当前这一行已经显示了几个元素 ){ cout1( "\n" ); cmd窗界i.运行时_当前这一行已经显示了几个元素 = 0/*c满=0*/; continuefor; }
    }/*for*/
    if( cmd窗界i.运行时_当前这一行已经显示了几个元素>0 ){ coutEndl; }/*?换行了,没=0,会不会不好*/
  }/*void*/
  /*todo每行c不同个元,自定义换行*/void forV2sC元素_每行显示v行size个选项( /*!输入*/cmd窗口界面不用文件vsInfo& cmd窗界i, 新vs vs, 新vi vi, 新vi& viCVs的行后换行 ){/*forV2sC元素_每行显示最多选项*/
    cmd窗界i.运行时_当前这一行已经显示了几个元素 = 0;/*每行c几个元素,c=++,c满=0*/
    for( size_t 行 = 0; 行 < vs.size( ); 行++ ){
      /*todo if( 当前行字数>最大字数 ){ 不c了,c下一行 }*/
      c一个元素_不超字数上限( cmd窗界i, vs, vi, 行 ); cmd窗界i.运行时_当前这一行已经显示了几个元素++/*c=++*/;
      if( /*viCVs的行后换行中`存在行*/qmvi计算_不使用前置变量.ret是否v中存在此元素( viCVs的行后换行, 行 )==1 ){ cmd窗界i.运行时_当前这一行已经显示了几个元素 = 0/*c满=0,结尾补换行要用*/; coutEndl; continuefor; }
    }/*for*/
    if( cmd窗界i.运行时_当前这一行已经显示了几个元素>0 ){ coutEndl; }/*?换行了,没=0,会不会不好*/
  }/*void*/
  void forV2sC元素_对齐(/*!输入*/cmd窗口界面不用文件vsInfo& cmd窗界i, 新vs& vs, 新vi& vi, int 每行显示几个元素 ){/*c一个v的选项_对齐*/
    cmd窗界i.运行时_当前这一行已经显示了几个元素 = 0/*c=++*/;
    for( size_t 行 = 0; 行 < vs.size( ); 行++ ){
      /*todo if( 当前行字数>最大字数 ){ 不c了,c下一行 }*/
      c一个元素_不超字数上限_对齐( cmd窗界i, vs, vi, 行 ); cmd窗界i.运行时_当前这一行已经显示了几个元素++/*c=++*/;
      if( 每行显示几个元素==cmd窗界i.运行时_当前这一行已经显示了几个元素 ){ cmd窗界i.运行时_当前这一行已经显示了几个元素 = 0/*c满=0*/; coutEndl; continuefor; }
    }/*for*/
    /*补齐\n*/if( cmd窗界i.运行时_当前这一行已经显示了几个元素>0 ){ coutEndl; }
  }/*void*/
  //▬打包c▬
  /*ret行数*/int c说明( int 默认字色,/*!输出*/cmd窗口界面不用文件vsInfo& cmd窗界i ){ int ret行数 = 0; ret行数 += c说明_cmd窗口界面不用文件vs( 默认字色, cmd窗界i ); retu ret行数; }/*int*/
  int c说明_cmd窗口界面不用文件vs( int 默认字色,/*!输出*/cmd窗口界面不用文件vsInfo& cmd窗界i ){
    int ret行数 = 0;
    set颜色( 默认字色 ); cout1( "cmd窗口界面不用文件vs" ); cout1( "" ); cout1( " {" ); coutEnd行加一( ret行数 );
    cout1( "" );
    cout1( "简单 { " ); set颜色( cmd窗界i.默认注释高亮色 ); cout1( "切换窗口时自动禁止输入," ); cout1( " " ); cout1( "同时按下Q和1开启输入功能;" ); set颜色( 默认字色 );
    cout1( " " ); cout1( "}" ); coutEnd行加一( ret行数 );
    cout1( "具体 { " ); coutEnd行加一( ret行数 ); cout1( "前台窗口的hwnd改变=禁止输入;" ); cout1( "同时按下Q和1=开启输入功能;" ); coutEnd行加一( ret行数 );
    cout1( "快捷键 { " ); coutEnd行加一( ret行数 ); cout1( "同时按下某几个键=切换int为0或1;" );
    ///coutEnd行加一( ret行数 );cS1斜杠s2斜杠s3( cmd窗界i.默认背景色,默认运行时高亮色,"同时按下Q和1" ,"同时按下L和1" ,"同时按下空格和L");cout1( "=" ); cout1( "是否开启输入;" );
    coutEnd行加一( ret行数 ); cS1斜杠s2斜杠s3( 默认字色, cmd窗界i.默认运行时高亮色, "Q和1", "L和1", "空格和L" ); cout1( "=" ); cout1( "是否开启输入" ); cout1( ";" );
    coutEnd行加一( ret行数 ); cS1斜杠s2斜杠s3( 默认字色, cmd窗界i.默认运行时高亮色, "方向键", "ESDF", "鼠标悬停" ); cout1( "=" ); cout1( "更改光标位置" ); cout1( ";" );
    coutEnd行加一( ret行数 ); cS1斜杠s2斜杠s3( 默认字色, cmd窗界i.默认运行时高亮色, "回车", "空格", "左键" ); cout1( "=" ); cout1( "运行( 光标坐标对应的选项 )对应的代码" ); cout1( ";" );
    cout1( " " ); cout1( "}" ); cout1( " " ); coutEnd行加一( ret行数 );
    cout1( "}" ); coutEnd行加一( ret行数 );
    cout1( "}" ); coutEnd行加一( ret行数 );
    cmd窗界i.未cV时的cV上面的行数 += ret行数;
    retu ret行数;
  }/*int*/ int cCmd窗口界面不用文件vs的说明(/*!输出*/cmd窗口界面不用文件vsInfo& cmd窗界i ){ retu c说明_cmd窗口界面不用文件vs( cmd窗界i.默认注释色, cmd窗界i ); }/*int*/
  int c说明_get文件目录信息TO文件( int 默认字色,/*!输出*/cmd窗口界面不用文件vsInfo& cmd窗界i ){
    int ret行数 = 0;
    set颜色( 默认字色 ); cout1( "说明_get文件目录信息TO文件" ); cout1( "" ); cout1( " {" ); coutEnd行加一( ret行数 );
    cout1( "运行一个选项-->会在" ); set颜色( cmd窗界i.默认注释高亮色 ); cout1( "C:/`文件属性`文件info`wfjmInfo" ); set颜色( 默认字色 ); cout1( "创建文件" ); coutEnd行加一( ret行数 );
    cout1( "}" ); coutEnd行加一( ret行数 );
    cmd窗界i.未cV时的cV上面的行数 += ret行数;
    retu ret行数;
  }/*int*/
  void getCV上面的c( int& 未cV时的cV上面的行数 ){
    ///cout1( "测试{  }" );  coutEnd行加一( 未cV时的cV上面的行数 );
  }/*void*/
  void c( cmd窗口界面不用文件vsInfo& cmd窗界i ){
    ////*有*//*c*/{c注释前( cmd窗界i,cmd窗界i.默认注释色, cmd窗i.Ccmd );cout1( "c到底有没有运行？(2025年1月4日11:11:27) " );coutEnd; c注释后( cmd窗界i,cmd窗i.Ccmd );    sleep140;}/*c*/
    getCV上面的c( cmd窗界i.未cV时的cV上面的行数 );
    cmd窗界i.是否c顶部工具栏 = 1, cmd窗界i.是否c选项 = 1;
    int c的内容之前有几行 = 0;
    ///cout1( "c{  }" ); coutEnd行加一(c的内容之前有几行);
    if( cmd窗界i.是否c顶部工具栏 ){ forV2sC元素( cmd窗界i, cmd窗界i.vs顶部工具栏, cmd窗界i.vi顶部工具栏颜色, cmd窗界i.每行显示几个顶部工具栏选项 ); }/*if*/
    if( cmd窗界i.是否有某个vs选项是对齐的 ==1 ){
      if( cmd窗界i.是否c选项 ){ if( cmd窗界i.是否对齐选项 ){ forV2sC元素_对齐( cmd窗界i, cmd窗界i.vs选项, cmd窗界i.vi选项颜色, cmd窗界i.每行显示几个选项 ); } else{ forV2sC元素( cmd窗界i, cmd窗界i.vs选项, cmd窗界i.vi选项颜色, cmd窗界i.每行显示几个选项 ); }/*else*/ }/*if*/
      if( cmd窗界i.是否c选项2 ){ if( cmd窗界i.是否对齐选项2 ){ forV2sC元素_对齐( cmd窗界i, cmd窗界i.vs选项2, cmd窗界i.vi选项2颜色, cmd窗界i.每行显示几个选项2 ); } else{ forV2sC元素( cmd窗界i, cmd窗界i.vs选项2, cmd窗界i.vi选项2颜色, cmd窗界i.每行显示几个选项2 ); }/*else*/ }/*if*/
      if( cmd窗界i.是否c选项3 ){ if( cmd窗界i.是否对齐选项3 ){ forV2sC元素_对齐( cmd窗界i, cmd窗界i.vs选项3, cmd窗界i.vi选项3颜色, cmd窗界i.每行显示几个选项3 ); } else{ forV2sC元素( cmd窗界i, cmd窗界i.vs选项3, cmd窗界i.vi选项3颜色, cmd窗界i.每行显示几个选项3 ); }/*else*/ }/*if*/
      if( cmd窗界i.是否c选项4 ){ if( cmd窗界i.是否对齐选项4 ){ forV2sC元素_对齐( cmd窗界i, cmd窗界i.vs选项4, cmd窗界i.vi选项4颜色, cmd窗界i.每行显示几个选项4 ); } else{ forV2sC元素( cmd窗界i, cmd窗界i.vs选项4, cmd窗界i.vi选项4颜色, cmd窗界i.每行显示几个选项4 ); }/*else*/ }/*if*/
      if( cmd窗界i.是否c选项5 ){ if( cmd窗界i.是否对齐选项5 ){ forV2sC元素_对齐( cmd窗界i, cmd窗界i.vs选项5, cmd窗界i.vi选项5颜色, cmd窗界i.每行显示几个选项3 ); } else{ forV2sC元素( cmd窗界i, cmd窗界i.vs选项5, cmd窗界i.vi选项5颜色, cmd窗界i.每行显示几个选项5 ); }/*else*/ }/*if*/
      if( cmd窗界i.是否c选项6 ){ if( cmd窗界i.是否对齐选项6 ){ forV2sC元素_对齐( cmd窗界i, cmd窗界i.vs选项6, cmd窗界i.vi选项6颜色, cmd窗界i.每行显示几个选项3 ); } else{ forV2sC元素( cmd窗界i, cmd窗界i.vs选项6, cmd窗界i.vi选项6颜色, cmd窗界i.每行显示几个选项6 ); }/*else*/ }/*if*/
    } else{
      if( cmd窗界i.是否c选项 ){ forV2sC元素( cmd窗界i, cmd窗界i.vs选项, cmd窗界i.vi选项颜色, cmd窗界i.每行显示几个选项 ); }/*if*/
      if( cmd窗界i.是否c选项2 ){ forV2sC元素( cmd窗界i, cmd窗界i.vs选项2, cmd窗界i.vi选项2颜色, cmd窗界i.每行显示几个选项2 ); }/*if*/
      if( cmd窗界i.是否c选项3 ){ forV2sC元素( cmd窗界i, cmd窗界i.vs选项3, cmd窗界i.vi选项3颜色, cmd窗界i.每行显示几个选项3 ); }/*if*/
      if( cmd窗界i.是否c选项4 ){ forV2sC元素( cmd窗界i, cmd窗界i.vs选项4, cmd窗界i.vi选项4颜色, cmd窗界i.每行显示几个选项4 ); }/*if*/
      if( cmd窗界i.是否c选项5 ){ forV2sC元素( cmd窗界i, cmd窗界i.vs选项5, cmd窗界i.vi选项5颜色, cmd窗界i.每行显示几个选项5 ); }/*if*/
      if( cmd窗界i.是否c选项6 ){ forV2sC元素( cmd窗界i, cmd窗界i.vs选项6, cmd窗界i.vi选项6颜色, cmd窗界i.每行显示几个选项6 ); }/*if*/
    }/*else*/
  };/*void*/
  void cSize( cmd窗口界面不用文件vsInfo& cmd窗界i ){
    cmd窗界i.是否c顶部工具栏 = 1, cmd窗界i.是否c选项 = 1;
    int c的内容之前有几行 = 0;
    ///cout1( "c{  }" ); coutEnd行加一(c的内容之前有几行);
    if( cmd窗界i.是否c顶部工具栏 ){ forV2sC元素size( cmd窗界i, cmd窗界i.vs顶部工具栏, cmd窗界i.vi顶部工具栏颜色, cmd窗界i.每行显示几个顶部工具栏选项 ); }/*if*/
    if( cmd窗界i.是否有某个vs选项是对齐的 ==1 ){
      if( cmd窗界i.是否c选项 ){ if( cmd窗界i.是否对齐选项 ){ forV2sC元素size_对齐( cmd窗界i, cmd窗界i.vs选项, cmd窗界i.vi选项颜色, cmd窗界i.每行显示几个选项 ); } else{ forV2sC元素size( cmd窗界i, cmd窗界i.vs选项, cmd窗界i.vi选项颜色, cmd窗界i.每行显示几个选项 ); }/*else*/ }/*if*/
      if( cmd窗界i.是否c选项2 ){ if( cmd窗界i.是否对齐选项2 ){ forV2sC元素size_对齐( cmd窗界i, cmd窗界i.vs选项2, cmd窗界i.vi选项2颜色, cmd窗界i.每行显示几个选项2 ); } else{ forV2sC元素size( cmd窗界i, cmd窗界i.vs选项2, cmd窗界i.vi选项2颜色, cmd窗界i.每行显示几个选项2 ); }/*else*/ }/*if*/
      if( cmd窗界i.是否c选项3 ){ if( cmd窗界i.是否对齐选项3 ){ forV2sC元素size_对齐( cmd窗界i, cmd窗界i.vs选项3, cmd窗界i.vi选项3颜色, cmd窗界i.每行显示几个选项3 ); } else{ forV2sC元素size( cmd窗界i, cmd窗界i.vs选项3, cmd窗界i.vi选项3颜色, cmd窗界i.每行显示几个选项3 ); }/*else*/ }/*if*/
      if( cmd窗界i.是否c选项4 ){ if( cmd窗界i.是否对齐选项4 ){ forV2sC元素size_对齐( cmd窗界i, cmd窗界i.vs选项4, cmd窗界i.vi选项4颜色, cmd窗界i.每行显示几个选项4 ); } else{ forV2sC元素size( cmd窗界i, cmd窗界i.vs选项4, cmd窗界i.vi选项4颜色, cmd窗界i.每行显示几个选项4 ); }/*else*/ }/*if*/
      if( cmd窗界i.是否c选项5 ){ if( cmd窗界i.是否对齐选项5 ){ forV2sC元素size_对齐( cmd窗界i, cmd窗界i.vs选项5, cmd窗界i.vi选项5颜色, cmd窗界i.每行显示几个选项3 ); } else{ forV2sC元素size( cmd窗界i, cmd窗界i.vs选项5, cmd窗界i.vi选项5颜色, cmd窗界i.每行显示几个选项5 ); }/*else*/ }/*if*/
      if( cmd窗界i.是否c选项6 ){ if( cmd窗界i.是否对齐选项6 ){ forV2sC元素size_对齐( cmd窗界i, cmd窗界i.vs选项6, cmd窗界i.vi选项6颜色, cmd窗界i.每行显示几个选项3 ); } else{ forV2sC元素size( cmd窗界i, cmd窗界i.vs选项6, cmd窗界i.vi选项6颜色, cmd窗界i.每行显示几个选项6 ); }/*else*/ }/*if*/
    } else{
      if( cmd窗界i.是否c选项 ){ forV2sC元素size( cmd窗界i, cmd窗界i.vs选项, cmd窗界i.vi选项颜色, cmd窗界i.每行显示几个选项 ); }/*if*/
      if( cmd窗界i.是否c选项2 ){ forV2sC元素size( cmd窗界i, cmd窗界i.vs选项2, cmd窗界i.vi选项2颜色, cmd窗界i.每行显示几个选项2 ); }/*if*/
      if( cmd窗界i.是否c选项3 ){ forV2sC元素size( cmd窗界i, cmd窗界i.vs选项3, cmd窗界i.vi选项3颜色, cmd窗界i.每行显示几个选项3 ); }/*if*/
      if( cmd窗界i.是否c选项4 ){ forV2sC元素size( cmd窗界i, cmd窗界i.vs选项4, cmd窗界i.vi选项4颜色, cmd窗界i.每行显示几个选项4 ); }/*if*/
      if( cmd窗界i.是否c选项5 ){ forV2sC元素size( cmd窗界i, cmd窗界i.vs选项5, cmd窗界i.vi选项5颜色, cmd窗界i.每行显示几个选项5 ); }/*if*/
      if( cmd窗界i.是否c选项6 ){ forV2sC元素size( cmd窗界i, cmd窗界i.vs选项6, cmd窗界i.vi选项6颜色, cmd窗界i.每行显示几个选项6 ); }/*if*/
    }/*else*/
  };/*void*/
  /*retu cInfo有几行;*/
  int cInfo( cmd窗口界面不用文件vsInfo& cmd窗界i ){
    int cInfo有几行 = 0;
    ///cout1( "cInfo{  }" );  coutEnd行加一( cInfo有几行 );
    set颜色( cmd窗界i.默认注释色 );
    cout1( "cInfo { " );  coutEnd行加一( cInfo有几行 );
    /**///c设置`if1c亮,if0c暗
    cout1( "c设置" ); cout1( "{" );
    cout1( " " ); cout1( "鼠标{" ); ///cout1( " " );
    ifI等于1用不同颜色cS( cmd窗界i.默认注释色, cmd窗界i.默认前景色, "", "鼠标输入", cmd窗界i.是否if鼠标输入 );
    ifI等于1用不同颜色cS( cmd窗界i.默认注释色, cmd窗界i.默认前景色, cmd窗界i.s选项间隔, "左键输入", cmd窗界i.是否if左键输入 );
    ifI等于1用不同颜色cS( cmd窗界i.默认注释色, cmd窗界i.默认前景色, cmd窗界i.s选项间隔, "鼠标悬停时setCcmd", cmd窗界i.是否鼠标悬停时setCcmd );
    cout1( "}" ); cout1( " " );
    cout1( "键盘" );    cout1( "{" ); ///cout1( " " );
    ifI等于1用不同颜色cS( cmd窗界i.默认注释色, cmd窗界i.默认前景色, "", "键盘输入", cmd窗界i.是否if键盘输入 );
    ifI等于1用不同颜色cS( cmd窗界i.默认注释色, cmd窗界i.默认前景色, cmd窗界i.s选项间隔, "方向键输入", cmd窗界i.是否if方向键输入 );
    cout1( "}" ); cout1( " " ); coutEnd行加一( cInfo有几行 );
    ifI等于1用不同颜色cS( cmd窗界i.默认注释色, cmd窗界i.默认前景色, cmd窗界i.s选项间隔, "打开新窗口运行cmd指令", cmd窗界i.是否打开新窗口运行cmd指令 );
    cout1( "}" ); cout1( " " ); coutEnd行加一( cInfo有几行 );

    /**///c按键检测
    ifI等于1用不同颜色cS( cmd窗界i.默认注释色, cmd窗界i.默认前景色, "", "按下", 按下 );
    ifI等于i2用不同颜色cS( cmd窗界i.默认注释色, cmd窗界i.默认前景色, cmd窗界i.s选项间隔, "弹起", 按下, 2 );
    ifI等于1用不同颜色cS( cmd窗界i.默认注释色, cmd窗界i.默认前景色, cmd窗界i.s选项间隔, "1", 现在['1'] );
    ifI等于1用不同颜色cS( cmd窗界i.默认注释色, cmd窗界i.默认前景色, cmd窗界i.s选项间隔, "Q", 现在['Q'] );
    ifI等于1用不同颜色cS( cmd窗界i.默认注释色, cmd窗界i.默认前景色, cmd窗界i.s选项间隔, "L", 现在['L'] );
    ifI等于1用不同颜色cS( cmd窗界i.默认注释色, cmd窗界i.默认前景色, cmd窗界i.s选项间隔, "空格", 现在[VK_SPACE] );
    ifI等于1用不同颜色cS( cmd窗界i.默认注释色, cmd窗界i.默认前景色, cmd窗界i.s选项间隔, "回车", 现在[VK_RETURN] );
    ifI等于1用不同颜色cS( cmd窗界i.默认注释色, cmd窗界i.默认前景色, cmd窗界i.s选项间隔, "上", 现在[VK_UP] );
    ifI等于1用不同颜色cS( cmd窗界i.默认注释色, cmd窗界i.默认前景色, cmd窗界i.s选项间隔, "下", 现在[VK_DOWN] );
    ifI等于1用不同颜色cS( cmd窗界i.默认注释色, cmd窗界i.默认前景色, cmd窗界i.s选项间隔, "左", 现在[VK_LEFT] );
    ifI等于1用不同颜色cS( cmd窗界i.默认注释色, cmd窗界i.默认前景色, cmd窗界i.s选项间隔, "右", 现在[VK_RIGHT] );
    set颜色( cmd窗界i.默认注释色 ); coutEnd行加一( cInfo有几行 );
    cout1( "常量" ); cout1( "{" );
    cout1( " " ); cout1( "未cV时的cV上面的行数=" ); cout1( cmd窗界i.未cV时的cV上面的行数 ); coutEnd行加一( cInfo有几行 );
    cout1( ", " ); cout1( "vs顶部工具栏.size=" ); cout1( cmd窗界i.vs顶部工具栏.size( ) );
    cout1( ", " ); cout1( "vi顶部工具栏颜色.size=" ); cout1( cmd窗界i.vi顶部工具栏颜色.size( ) );
    cout1( ", " ); cout1( "vs选项.size=" ); cout1( cmd窗界i.vs选项.size( ) );
    cout1( ", " ); cout1( "vi选项颜色.size=" ); cout1( cmd窗界i.vi选项颜色.size( ) ); coutEnd行加一( cInfo有几行 );
    cout1( " " ); cout1( "vs选项2.size=" ); cout1( cmd窗界i.vs选项2.size( ) );
    cout1( ", " ); cout1( "vi选项2颜色.size=" ); cout1( cmd窗界i.vi选项2颜色.size( ) );
    cout1( ", " ); cout1( "vs选项3.size=" ); cout1( cmd窗界i.vs选项3.size( ) );
    cout1( ", " ); cout1( "vi选项3颜色.size=" ); cout1( cmd窗界i.vi选项3颜色.size( ) ); coutEnd行加一( cInfo有几行 );
    cout1( " " ); cout1( "vs选项4.size=" ); cout1( cmd窗界i.vs选项4.size( ) );
    cout1( ", " ); cout1( "vi选项4颜色.size=" ); cout1( cmd窗界i.vi选项4颜色.size( ) );
    cout1( ", " ); cout1( "vs选项5.size=" ); cout1( cmd窗界i.vs选项5.size( ) );
    cout1( ", " ); cout1( "vi选项5颜色.size=" ); cout1( cmd窗界i.vi选项5颜色.size( ) ); coutEnd行加一( cInfo有几行 );
    cout1( " " ); cout1( "vs选项6.size=" ); cout1( cmd窗界i.vs选项6.size( ) );
    cout1( ", " ); cout1( "vi选项6颜色.size=" ); cout1( cmd窗界i.vi选项6颜色.size( ) );
    cout1( ", " ); cout1( "每行显示几个顶部工具栏选项=" ); cout1( cmd窗界i.每行显示几个顶部工具栏选项 ); coutEnd行加一( cInfo有几行 );
    cout1( ", " ); cout1( "每行显示几个选项2=" ); cout1( cmd窗界i.每行显示几个选项2 );
    cout1( ", " ); cout1( "每行显示几个选项3=" ); cout1( cmd窗界i.每行显示几个选项3 );
    cout1( ", " ); cout1( "每行显示几个选项4=" ); cout1( cmd窗界i.每行显示几个选项4 );
    cout1( ", " ); cout1( "每行显示几个选项5=" ); cout1( cmd窗界i.每行显示几个选项5 );
    cout1( ", " ); cout1( "每行显示几个选项6=" ); cout1( cmd窗界i.每行显示几个选项6 ); coutEnd行加一( cInfo有几行 );
    cout1( ", " ); cout1( "cInfo有几行=" ); cout1( cInfo有几行 );///coutEnd行加一( cInfo有几行 );
    coutEnd行加一( cInfo有几行 );
    cout1( "窗口info" ); cout1( "{" );
    cout1( " " ); cout1( ".exe的父path=" ); set颜色( cmd窗界i.默认注释高亮色 ); cout1( cmd窗界i.cmd窗i.窗i.exe的父path ); set颜色( cmd窗界i.默认注释色 );
    cout1( "\n " ); cout1( ".exe的path=" ); set颜色( cmd窗界i.默认注释高亮色 ); cout1( cmd窗界i.cmd窗i.窗i.exePath ); set颜色( cmd窗界i.默认注释色 );
    cout1( "," ); cout1( "标题栏高度像素=" ); cout1( cmd窗界i.cmd窗i.窗i.标题栏高度像素 );
    cout1( "," ); cout1( "字像素Y=" ); cout1( cmd窗界i.cmd窗i.窗i.字像素Y );
    cout1( "," ); cout1( "字像素X=" ); cout1( cmd窗界i.cmd窗i.窗i.字像素X );
    cout1( " " ); cout1( "}" ); cout1( " " ); coutEnd行加一( cInfo有几行 );
    ///cout1( "," );
    /**///c变量size
    cout1( "}" ); cout1( " " ); coutEnd行加一( cInfo有几行 );
    cout1( "变量" ); cout1( "{" ); cout1( " " );
    /*cmdIdkb界面_小组件.*/c光标2( cmd窗i.Ccmd ); /*cout1( ";" );*/coutEnd行加一( cInfo有几行 );
    cout1( "窗口" ); cout1( " { " ); ///cout1( "左上角" ); cout1( " " );
    idkb.例子_get窗口infoC窗口info( );
    cout1( "}" ); cout1( " " );
    cout1( "} " ); cout1( "}" ); coutEnd行加一( cInfo有几行 );
    retu cInfo有几行;
  };/*int*/
  void get光标位置AND清屏ANDcANDcInfoANDget末尾光标坐标ANDset光标坐标( cmd窗口界面不用文件vsInfo& cmd窗界i,/*输出*/COORD& Ccmd ){
    cmd窗界i.未cV时的cV上面的行数 = 0;
    get光标位置( cmd窗i.Ccmd );
    清屏( ); if( cmd窗界i.是否在cV上面c说明 ){ c说明_cmd窗口界面不用文件vs( cmd窗界i.默认注释色, cmd窗界i ); }/*if*/ c( cmd窗界i ); cInfo( cmd窗界i ); get光标位置( cmd窗i.Cc的末尾 );
    set光标坐标( cmd窗i.Ccmd );
  }/*void*/
  /**///▬杂项▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
  void c所有颜色( string s ){
    coutEnd;
    for( size_t i = 0; i < 258; i++ ){
      /*cmd1.*/set颜色( i ); cout1( i ); cout1( s );
    }/*for*/
    /*cmd1.*/set颜色( 7 );
    coutEnd;
  }/*void*/
   /**///▬例子▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
  void 例子_c能拖的进度条( ){
    cmd窗口info cmd窗口1;	float sdr亮度 = 0;
    getc能拖的进度条( cmd窗口1, 1, 0, 2, sdr亮度 );
  };
  /**///▬附加功能▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
  /**///>简写c
  void cS1斜杠s2( int 背景色, int 颜色1, int 颜色2, string s, string s2 ){
    set颜色( 颜色1 ); cout1( s ); set颜色( 背景色 ); cout1( "/" ); set颜色( 颜色2 ); cout1( s2 ); set颜色( 背景色 );
  }/*void*/
  void cS1斜杠s2( int 背景色, int 颜色1, string s, string s2 ){
    set颜色( 颜色1 ); cout1( s ); set颜色( 背景色 ); cout1( "/" ); set颜色( 颜色1 ); cout1( s2 ); set颜色( 背景色 );
  }/*void*/
  void cS1斜杠s2斜杠s3( int 背景色, int 颜色1, string s, string s2, string s3 ){
    set颜色( 颜色1 ); cout1( s ); set颜色( 背景色 ); cout1( "/" ); set颜色( 颜色1 ); cout1( s2 ); set颜色( 背景色 ); cout1( "/" ); set颜色( 颜色1 ); cout1( s3 ); set颜色( 背景色 );
  }/*void*/
  void ifI等于1用不同颜色cS( int 背景色, int 前景色, string s选项间隔, string s, int i ){
    cout1( s选项间隔 ); if( i ){ set颜色( 前景色 ); } cout1( s ); set颜色( 背景色 );
  }/*void*/
  void ifI等于i2用不同颜色cS( int 背景色, int 前景色, string s选项间隔, string s, int i, int i2 ){
    cout1( s选项间隔 ); if( i ==i2 ){ set颜色( 前景色 ); } cout1( s ); set颜色( 背景色 );
  }/*void*/;
  /**///>c注释
  /*set颜色-->get光标位置-->set光标位置*/
  void c注释前( /*!输入*/cmd窗口界面不用文件vsInfo& cmd窗界i, int 颜色 ){
    /*前*/set颜色( 颜色 ); get光标位置( cmd窗界i.cmd窗i.Ccmd );
    if( cmd窗界i.是否本次循环set光标位置过 ){/*第一句set末尾,第二句set上次*/
      set光标位置( cmd窗界i.cmd窗i.上次c到的Ccmd );
    } else{/*否`本次循环set光标位置过*/
      if( cmd窗界i.是否c注释set光标位置到末尾 ){ set光标位置( cmd窗界i.cmd窗i.Cc的末尾 ); }/*if*/
      if( cmd窗界i.是否c注释set光标位置到光标处 ){ }/*if*/
      cmd窗界i.cmd窗i.C1 = { 0,cmd窗界i.cmd窗i.Ccmd.Y }; if( cmd窗界i.是否c注释set光标位置到光标所在行的开头 ){ set光标位置( cmd窗界i.cmd窗i.C1 ); }/*if*/
      cmd窗界i.cmd窗i.C1 = { 0,cmd窗界i.cmd窗i.Ccmd.Y-1 }; if( cmd窗界i.是否c注释set光标位置到光标前一行的开头 ){ set光标位置( cmd窗界i.cmd窗i.C1 ); }/*if*/
      cmd窗界i.cmd窗i.C1 = { 0,cmd窗界i.cmd窗i.Ccmd.Y+1 }; if( cmd窗界i.是否c注释set光标位置到光标后一行的开头 ){ set光标位置( cmd窗界i.cmd窗i.C1 ); }/*if*/
    }/*else*/;
    cmd窗界i.是否本次循环set光标位置过 = 1;
  }/*void*/;
  /*set颜色-->get光标位置-->set光标位置*/
  void c注释后( /*!输入*/cmd窗口界面不用文件vsInfo& cmd窗界i ){
    /*后*/set颜色( cmd窗界i.默认背景色 ); get光标位置( cmd窗界i.cmd窗i.上次c到的Ccmd ); set光标位置( cmd窗界i.cmd窗i.Ccmd );
  }/*void*/;
};
#endif