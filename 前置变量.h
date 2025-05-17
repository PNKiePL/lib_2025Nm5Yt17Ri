#pragma once
#ifndef 前置变量_H
#define 前置变量_H
#include  <E:\lib\头文件 c++.h>
#include<E:\lib\define.h>
#include <E:\lib\外部变量.h>
#include<E:\lib\前置cout.h>
#include  <E:\lib\前置计算_不使用前置变量.h>
#include  <E:\lib\移出代码,节省字数\前置变量_移.h>
//using namespace wode;
/**///!▬记录{ 时间`窗口`音调`string`截图}▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
#define struct_c注释info c注释info
struct c注释info :public struct_c注释info的变量{ }/*c注释info*/;
struct fstreamInfo :
  public struct_fstreamInfo的变量{
  fstreamInfo( ){ }
  fstreamInfo( string path ){
    fst.open( path.c_str( ) );
    if( fst.fail( ) ){/*文件不存在*/
    }/*if*/
  }
  int fstOpenS( string path ){
    fst.open( path.c_str( ) );
    if( fst.fail( ) ){/*文件不存在*/
      retu 0;
    }/*if*/
    retu 1;
  }/*int*/
  void fstClose( ){ fst.close( ); }/*void*/
  void 简写close( ){ fstClose( ); }/*void*/
  /**///简写▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
  /*没用*/void 简写getline( fstreamInfo& fI ){
    getline( fI.fst, fI.s读取一行 );
  }/*void*/
  void 简写getline( string& s ){ getline( fst, s ); }/*void*/
  void 简写getline( ){ getline( fst, s读取一行 ); }/*void*/
  void 简写读取( ){ fst>>s读取; }/*void*/
  void 简写写入( string& s ){ fst<<s; }/*void*/
  /**///▬在<class文字读取>前面,写不了,得写在<class文字读取>▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬

  /**///▬附加功能▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
  int ret行数( string path ){
    ifstream 读取文件; int 行数 = 0; string tmp; 读取文件.open( path.c_str( ) );//ios::in 表示以只读的方式读取文件
    /*文件打开失败:返回0*/if( 读取文件.fail( ) ){ return 0; } /*文件存在*/else{
      while( getline( 读取文件, tmp, '\n' ) ){ 行数++; }/*while*/
      读取文件.close( );
      return 行数;
    }/*else*/;
  }/*int*/;
  int ret行数( fstream& fst ){/*?不对,c1099>1074了*/
    int 行数 = 0;
    string tmp;
    /*文件打开失败:返回0*/if( fst.fail( ) ){ return 0; } /*文件存在*/else{
      while( getline( fst, tmp, '\n' ) ){ 行数++; }/*while*/
      return 行数;
    }/*else*/;
  }/*int*/;
  int 循环getlineAc( string path ){
    ifstream 读取文件; int 行数 = 0; string tmp; 读取文件.open( path.c_str( ) );//ios::in 表示以只读的方式读取文件
    /*文件打开失败:返回0*/if( 读取文件.fail( ) ){ return 0; } /*文件存在*/else{
      while( getline( 读取文件, tmp, '\n' ) ){
        行数++;
        cout2( tmp, "\n" );
      }/*while*/;
      读取文件.close( );
      return 行数;
    }/*else*/;
  }/*int*/;
  /**///例子▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
  void 例子_s读取进s(/*!输入*/string path, 新s& s1,/*!输出*/新s& s临时读, 新s& s2 ){
    /*s1>>s2不行*/
    fst临时写.open( path.c_str( ) );
    fst临时写<<s1;
    /*读取到s2完: for( s2的字数; s2的字数<s1的字数; s2的字数+=s读取的字数 )*/
    for( size_t s2字数 = 0; s2字数 < s1.size( ); s2字数 += s临时读.size( ) ){
      fst临时写>>s临时读;
      if( s临时读=="填空" ){/*当...时*/
        /*在<s临时读>前加<s>*/
        s2.append( "加什么" );
        s2.append( s临时读 );
        //*s2<<s临时读;
        continue;
      }/*if*/
      s2.append( s临时读 );
      continu;
    }/*for*/
  }/*void*/
};
struct 文字读取info :public struct_文字读取info的变量{
  fstreamInfo fI;
};
struct cpp函数info :public struct_cpp函数info的变量{/*cpp函数info,cxx函数info*/

};
struct 自动打字info :public struct_自动打字info的变量{

};
/**///▬时间▬▬▬▬▬▬▬▬▬▬▬▬▬▬
struct 时间info :public struct_时间info的变量{
  时间info( ){
    vi值.assign( 7, 0 );
  }/*时间info()*/;
};/*时间info*/
/**///▬记录`窗口▬▬▬▬▬▬▬▬▬▬
struct 窗口info :public struct_窗口info的变量{/*窗口信息*/
  窗口info( ){
    字像素X = 8;
    字像素Y = 20;
  }/*()*/;
};
/*不使用*/
struct 窗口可操作范围 :public struct_窗口可操作范围的变量{ }/*窗口可操作范围*/;
/*用这种的*/
struct cmd窗口info
  //*:public 窗口info
  :public struct_cmd窗口info的变量{/*窗口尺寸info*/
public/*class*/:
  前置计算_不使用前置变量 qmvi计算_不使用前置变量;
public/*struct*/:
  窗口info 窗i/*idkbInfo*/;
  窗口可操作范围 可操作范围;
public:
  /*输入{ 窗口hwnd,rect }*/
  void 可操作范围初始化( ){
    qmvi计算_不使用前置变量.get窗口tagRect( qmvi计算_不使用前置变量.ret前台( ), 窗i.tagRect );
    /*get( cmd窗口info.窗口大小_像素 )*/
    窗口大小_像素y = 窗i.tagRect.bottom - 窗i.tagRect.top;
    窗口大小_像素x = 窗i.tagRect.right - 窗i.tagRect.left;
    /*get( cmd窗口info.可操作范围.4点 )*/
    可操作范围.上_像素 = 窗i.tagRect.top + 窗口大小_像素y * 可操作范围.f上_百分比;
    可操作范围.下_像素 = 窗i.tagRect.top + 窗口大小_像素y * 可操作范围.f下_百分比;
    可操作范围.左_像素 = 窗i.tagRect.left + 窗口大小_像素x * 可操作范围.f左_百分比;
    可操作范围.右_像素 = 窗i.tagRect.left + 窗口大小_像素x * 可操作范围.f右_百分比;
    /*get( cmd窗口info.可操作范围 )*/
    可操作范围.y = 可操作范围.下_像素 - 可操作范围.上_像素;
    可操作范围.x = 可操作范围.右_像素 - 可操作范围.左_像素;
  }/*void*/;
  //自检
  void 检查A调整( ){
    if( 窗口大小_字数y<4 ){
      窗口大小_字数y = 4;
    }/*if*/;
    if( 窗口大小_字数x<8 ){
      窗口大小_字数x = 8;
    }/*if*/;
  }/*void*/;
}/*cmd窗口info*/;
struct 复制path1内某类文件TOPath2_单exeInfo{
  int 是否粘贴到同一个文件夹 = 0
    , 是否if子path是文件夹 = 1/*是否if子path是文件夹,不进入第2层子层*/
    ;
  //*int*是否复制深层子文件夹=&是否if子path是文件夹;
  //*#define 是否复制深层子文件夹 是否if子path是文件夹
};
/**///>cmd界面,cmd窗口界面不用文件vs.h; 分成两部分{ 继承;调用; };
struct cmd窗口界面不用文件vsInfo
  //*:public cmd窗口info
{
public/*class*/:
public/*struct*/:
  //*窗口info idkbInfo;
  cmd窗口info cmd窗i/*cmd窗info*/;
  /*?未知重写说明符*///*cmd窗口界面不用文件vs的变量 cmd窗界变量;
  struct_c注释info c注释i;
  记录上次的操作info 上次的运行s对应的操作info;
  struct_下标info 当前选择的项_v的下标/*c{ if是这个下标{if是光标停留{}if是运行中{}if是已运行过{}}*/
    , 上次选择的项_v的下标
    ;
public:
  /*!运行前*/
  新vs vs顶部工具栏; 新vi vi顶部工具栏颜色;
  新vs vs选项; 新vi vi选项颜色;
  ///新vs vs选项1; 新vi vi选项1颜色;
  新vs vs选项2; 新vi vi选项2颜色;
  新vs vs选项3; 新vi vi选项3颜色;
  新vs vs选项4; 新vi vi选项4颜色;
  新vs vs选项5; 新vi vi选项5颜色;
  新vs vs选项6; 新vi vi选项6颜色;
  新vi /*cV行后换行,在定义了<每行显示几个选项>时=没用*/viCVs的行后换行
    /*cV行后换行的`行下标*/, viC顶部工具栏的行后换行
    , viC选项的行后换行
    ;
  int 是否已输入vs = 0, 是否已输入vs顶部工具栏 = 0, 是否已输入vs选项 = 0;
  int 是否c顶部工具栏 = 1, 是否c选项 = 1
    ///,是否c选项1=0
    , 是否c选项2 = 1
    , 是否c选项3 = 1
    , 是否c选项4 = 1
    , 是否c选项5 = 1
    , 是否c选项6 = 1
    , 每行显示几个顶部工具栏选项 = 14
    , 每行显示几个选项 = 2
    ///,每行显示几个选项1=2
    , 每行显示几个选项2 = 2
    , 每行显示几个选项3 = 2
    , 每行显示几个选项4 = 2
    , 每行显示几个选项5 = 2
    , 每行显示几个选项6 = 2
    , 是否对齐顶部工具栏 = 0
    , 是否对齐选项 = 0
    , 是否对齐选项2 = 0
    , 是否对齐选项3 = 0
    , 是否对齐选项4 = 0
    , 是否对齐选项5 = 0
    , 是否对齐选项6 = 0
    ;
  /*todo 把变量`写在里面吧*/
  /**//*设置*/
  /*设置`限制输入*/
  struct 光标限制{
    int 开关 = 0
      /*x,y  x1,y
      x,y1 x1,y1*/
      , x, x1, y, y1;
  };
  string /*在`运行C对应的s对应的操作{ 简写运行s对应的操作后 }*/
    上一次操作对应的s
    , 上一次操作对应的vec
    ;
  //>设置`逻辑`cout
  int sleep数值 = 5
    , 是否补齐到上限的字显示默认背景色 = 0
    /*换行条件只有: if个数满-->cANDcEndl, ifv行完AND个数没满-->c,*/
    , 是否选项光标下标X超过每行显示几个选项时换行 = 1, 是否c选项v行完AND选项光标下标X不超过每行显示几个选项时换行 = 0
    , 是否有某个vs选项是对齐的 = 1,/*对齐几个字符,每个几个字*/选项对齐的字数上限 = 14
    /*如果不`对齐*/, 是否选项有字数上限 = 1, 选项的字数上限 = 140
    /*c的默认外观*/
    , 是否在cV上面c说明 = 1, 展开顶部工具栏 = 0/*折叠顶栏*/
    , 是否选中背景时改变背景色 = 1
    /*按键`C*/
    , 是否按下后清屏 = 0, 是否鼠标悬停时setCcmd = 1, 是否鼠标悬停时setCcmd有时间间隔 = 0
    /*判定面积*/
    , 是否判定面积包含s选项间隔 = 0/*没用*/, 是否判定if光标X大于等于vSize = 0/*是否判定if光标在选项右边*/
    /*//>c注释/函数内的c提示 TOstruct*/
    , 是否本次循环set光标位置过 = 0
    , 是否c注释set光标位置到末尾 = 1
    , 是否c注释set光标位置到光标处 = 0
    , 是否c注释set光标位置到光标所在行的开头 = 0
    , 是否c注释set光标位置到光标后一行的开头 = 0
    , 是否c注释set光标位置到光标前一行的开头 = 0
    /*//>默认颜色*/
    , 默认背景色 = 7/*黑白*/, 默认前景色 = 176/*绿黑*/
    /*todo 我是不会做这个了*/
    , 是否有选项在运行前THEN修改c的颜色 = 1, 默认运行前背景色 = 100, 默认运行前前景色 = 100
    , 是否有选项在运行时THEN修改c的颜色 = 1, 默认运行时背景色 = 100, 默认运行时前景色 = 100
    /*就用这两个*/, 默认运行前高亮色 = 176, 默认运行时高亮色 = 176
    , 默认注释色 = 2, 默认注释高亮色 = 100
    ;
  string  s选项间隔 = " "/* = "_";*/;
  //>设置`逻辑`操作
  /**///操作逻辑
  int  是否if键盘输入 = 1, 是否if鼠标输入 = 1, 是否if方向键输入 = 1, 是否if左键输入 = 1
    , 是否方向键弹起时输入 = 1, 是否方向键按下时输入 = 0
    , 是否单击运行选项 = 0, 是否双击运行选项 = 0
    /**///运行逻辑
    , 是否whileCout = 0
    , 是否关闭列表，退出循环 = 0
    , 是否允许退出循环 = 0, 是否运行选项后退出循环 = 0
    , 是否多线程运行按键检测 = 0
    , 是否if按下get字像素 = 1, 是否if按下forCXget字像素X = 0, 是否if按下ifHwnd改变否键盘鼠标输入 = 1
    , 是否打开新窗口运行cmd指令 = 1
    /**///>记录
    //记录`c
    ,/*并非运行时*/未cV时的cV上面的行数/*cV上面的行数_此时未cV*/ = 0/*从1*/
    //记录`操作
    , 是否已按过按键 = 0, 是否已使用选项 = 0, 是否已展开过顶栏
    ;
  /*!运行时*/
  ///COORD 
  int /*换行和这个绑定,if=i{cEnd}*/运行时_当前这一行已经显示了几个元素
    //*,运行时_cV上面的行数 = 0/*从1*/
    , 运行时_光标在v顶部工具栏内 = 0
    , 运行时_光标在v选项内 = 0
    , 运行时_光标在v选项2内 = 0
    , 运行时_光标在v选项3内 = 0
    , 运行时_光标在v选项4内 = 0
    , 运行时_光标在v选项5内 = 0
    , 运行时_光标在v选项6内 = 0
    ;
  cmd窗口界面不用文件vsInfo( ){ cout5( "struct", " ", "cmd窗口界面不用文件vsInfo", "()", "开始" ); coutEnd; }/*();是外部变量, (){}可以;*/
  void 清空vs( ){
    vi顶部工具栏颜色.assign( 0, 0 ); vs顶部工具栏.assign( 0, "100" );
    vi选项颜色.assign( 0, 0 ); vs选项.assign( 0, "100" );
    vi选项2颜色.assign( 0, 0 ); vs选项2.assign( 0, "100" );
    vi选项3颜色.assign( 0, 0 ); vs选项3.assign( 0, "100" );
    vi选项4颜色.assign( 0, 0 ); vs选项4.assign( 0, "100" );
    vi选项5颜色.assign( 0, 0 ); vs选项5.assign( 0, "100" );
    vi选项6颜色.assign( 0, 0 ); vs选项6.assign( 0, "100" );
  };/*void*/
  void set标记光标在哪个v内( int& 在哪个v内 ){/*set标记Ccmd在哪个vs内*/
    运行时_光标在v顶部工具栏内 = 0
      , 运行时_光标在v选项内 = 0
      , 运行时_光标在v选项2内 = 0
      , 运行时_光标在v选项3内 = 0
      , 运行时_光标在v选项4内 = 0
      , 运行时_光标在v选项5内 = 0
      , 运行时_光标在v选项6内 = 0
      , 在哪个v内 = 1;
  };/*void*/
};
/*!继承的;,todo 运行时*/
struct cmd窗口界面不用文件vs的变量{ };
//?pch.h中调用会报错( 已经在.obj中调用 )
///cmd窗口界面不用文件vsInfo cmdIdkb界面不用文件info;
/*文件结构:
//>v2i线属性:
*               x0 x1 x2 x3  x4   x5               x6   x7 x8 x9 x0 x11 x12 x13 x14 x15 x16 x17 x18 x19 x20 x21 x22 x23 x24 x25 x26 x27 x28
* y0 线两端的坐标(y1 x1 y2 x2) 线长 方向(横0竖1斜\2/3) 颜色
* y1
* y2
//>v2i点对应线: //在坐标上填`线的属性的y序号
*    x0              x1 x2 x3 x4 x5 x6
* y0 v2i线属性[][]的y y  y  y
* y1 y				  y
* y2 y               y
v3i线属性:开销太大了`空的位置太多了
v2i图片的点是否已识别线:
//>v2i单通道图颜色属性:
//yx是第1第2个通道,y是颜色,x是成员;
*    x0  x1          x2 x3 x4 x5 x6 x7 x8 x9 x0 x11 x12 x13 x14 x15 x16 x17 x18 x19 x20 x21 x22 x23 x24 x25 x26 x27 x28
* y0 数量 起始像素坐标
* y1 数量
* y2 数量
//>v5i4通道图颜色属性:
//v的4个通道,通道对应rgb透明度; yx是第四第5个通道,y是颜色,x是成员;
*    x0  x1 x2 x3 x4 x5 x6 x7 x8 x9 x0 x11 x12 x13 x14 x15 x16 x17 x18 x19 x20 x21 x22 x23 x24 x25 x26 x27 x28
* y0
* y1
* y2
//>v2i每种颜色的像素数量:
//v的1个通道,通道对应灰度值; 第2个通道是`成员;
*    x0
* y0 像素数量
* y1 像素数量
//vi每种颜色的像素数量:
* y0 像素数量
* y1 像素数量
//>v5i每种颜色的像素的数量:
//v的4个通道,通道对应rgb透明度; 第四第五个通道是`颜色and成员;
*     五0     五1 五2 五3 五4 五5 五6 五7 五8 五9 五0 五11 五12 五13
* 四0 像素数量 测试
* 四1 像素数量
* 四2 像素数量
*/
#define struct_灰度图片裁剪 灰度图片裁剪info
struct 灰度图片裁剪info{
#define 像素数y y边像素
#define 像素数x x边像素
  int /*是整数*/y边像素/*=&v2i灰度图片除50.size()*/, x边像素/*=&v2i灰度图片除50[0].size()*/; float y边像素除, x边像素除;/*LONG*/int 总像素数量;
  int 颜色数; int 颜色的除;
  新v2i /*Mat`图片*/v2i图片
    ,/*颜色属性*/v2i颜色属性
    ,/*每种颜色的像素数量*/v2i颜色的像素数量; 新v2f v2f颜色的像素数量除以总像素数量; /*感觉比v2i方便,但为什么是5通道*/新v5i v5i颜色的像素数量;
  /*输入{ y, x, 颜色数 }*/
  void 灰度图片裁剪info初始化( /*!输入*/ ){
    v2i图片.assign( y边像素, 新vi( x边像素, 0 ) );
    v2i颜色属性.assign( 颜色数, 新vi( 140, 0 ) );
    v2i颜色的像素数量.assign( 颜色数, 新vi( 2, 0 ) );
    v2f颜色的像素数量除以总像素数量.assign( 颜色数, 新vf( 2, 0 ) );
  }/*void*/;
  void 灰度图片裁剪info初始化( /*!输入*/int y1, int x1, int 颜色数1 ){
    y边像素 = y1, x边像素 = x1; 颜色数 = 颜色数1;
    灰度图片裁剪info初始化( );
  }/*void*/;
}/*灰度图片裁剪info*/;
#define struct_灰度图片内 灰度图片内info
struct 灰度图片内info{
  /*LONG*/int 总像素数量;
  int y边像素, x边像素;
  int 颜色数; int 颜色的除;
  新v2i /*Mat`图片*/v2i图片
    ,/*颜色属性*/v2i颜色属性
    ,/*每种颜色的像素数量*/v2i颜色的像素数量; 新v2f v2f颜色的像素数量除以总像素数量; /*感觉比v2i方便,但为什么是5通道*/新v5i v5i颜色的像素数量;
  int 裁剪方式_1是不裁_2是裁4_3是裁9_4是裁16_5是裁25 = 1;
  灰度图片裁剪info 第1裁剪i, 第2裁剪i, 第3裁剪i, 第4裁剪i, 第5裁剪i, 第6裁剪i, 第7裁剪i, 第8裁剪i, 第9裁剪i, 第10裁剪i, 第11裁剪i, 第12裁剪i, 第13裁剪i, 第14裁剪i, 第15裁剪i, 第16裁剪i, 第17裁剪i, 第18裁剪i, 第19裁剪i, 第20裁剪i, 第21裁剪i, 第22裁剪i, 第23裁剪i, 第24裁剪i, 第25裁剪i, 第26裁剪i;
  灰度图片内info( ){ };
  void 灰度图片内info初始化( /*!输入*/int y边像素, int x边像素 ){
    int 裁剪图均_y边像素_商, 裁剪图均_y边像素_余
      , 裁剪图均_x边像素_商, 裁剪图均_x边像素_余
      ;
    auto lam计算裁剪图均边像素 = [&]( int 除数 )->void{
      裁剪图均_y边像素_商 = y边像素/除数; 裁剪图均_y边像素_余 = y边像素%除数;
      裁剪图均_x边像素_商 = x边像素/除数; 裁剪图均_x边像素_余 = x边像素%除数;
      };/*lam*/
    if( 裁剪方式_1是不裁_2是裁4_3是裁9_4是裁16_5是裁25==2 ){
      lam计算裁剪图均边像素( 2 );
      第1裁剪i.灰度图片裁剪info初始化( 裁剪图均_y边像素_商,裁剪图均_x边像素_商,颜色数 );
      第2裁剪i.灰度图片裁剪info初始化( 裁剪图均_y边像素_商,裁剪图均_x边像素_商+裁剪图均_x边像素_余,颜色数 );/*第1行第2列*/
      第3裁剪i.灰度图片裁剪info初始化( 裁剪图均_y边像素_商+裁剪图均_y边像素_余,裁剪图均_x边像素_商,颜色数 );/*第2行*/
      第4裁剪i.灰度图片裁剪info初始化( 裁剪图均_y边像素_商+裁剪图均_y边像素_余,裁剪图均_x边像素_商+裁剪图均_x边像素_余,颜色数 );/*第2行第2列*/
    } else if( 裁剪方式_1是不裁_2是裁4_3是裁9_4是裁16_5是裁25==3 ){
      lam计算裁剪图均边像素( 3 );
      第1裁剪i.灰度图片裁剪info初始化( 裁剪图均_y边像素_商,裁剪图均_x边像素_商,颜色数 );
      第2裁剪i.灰度图片裁剪info初始化( 裁剪图均_y边像素_商,裁剪图均_x边像素_商,颜色数 );
      第3裁剪i.灰度图片裁剪info初始化( 裁剪图均_y边像素_商,裁剪图均_x边像素_商+裁剪图均_x边像素_余,颜色数 );/*第1行第3列*/
      第4裁剪i.灰度图片裁剪info初始化( 裁剪图均_y边像素_商,裁剪图均_x边像素_商,颜色数 );/*第2行*/
      第5裁剪i.灰度图片裁剪info初始化( 裁剪图均_y边像素_商,裁剪图均_x边像素_商,颜色数 );
      第6裁剪i.灰度图片裁剪info初始化( 裁剪图均_y边像素_商,裁剪图均_x边像素_商+裁剪图均_x边像素_余,颜色数 );/*第2行第3列*/
      第7裁剪i.灰度图片裁剪info初始化( 裁剪图均_y边像素_商+裁剪图均_y边像素_余,裁剪图均_x边像素_商,颜色数 );/*第3行第1列*/
      第8裁剪i.灰度图片裁剪info初始化( 裁剪图均_y边像素_商+裁剪图均_y边像素_余,裁剪图均_x边像素_商,颜色数 );/*第3行第2列*/
      第9裁剪i.灰度图片裁剪info初始化( 裁剪图均_y边像素_商+裁剪图均_y边像素_余,裁剪图均_x边像素_商+裁剪图均_x边像素_余,颜色数 );/*第3行第3列*/
    } else if( 裁剪方式_1是不裁_2是裁4_3是裁9_4是裁16_5是裁25==4 ){
      lam计算裁剪图均边像素( 4 );
      第1裁剪i.灰度图片裁剪info初始化( 裁剪图均_y边像素_商,裁剪图均_x边像素_商,颜色数 );
      第2裁剪i.灰度图片裁剪info初始化( 裁剪图均_y边像素_商,裁剪图均_x边像素_商,颜色数 );
      第3裁剪i.灰度图片裁剪info初始化( 裁剪图均_y边像素_商,裁剪图均_x边像素_商,颜色数 );
      第4裁剪i.灰度图片裁剪info初始化( 裁剪图均_y边像素_商,裁剪图均_x边像素_商+裁剪图均_x边像素_余,颜色数 );/*第1行第4列*/
      第5裁剪i.灰度图片裁剪info初始化( 裁剪图均_y边像素_商,裁剪图均_x边像素_商,颜色数 );
      第6裁剪i.灰度图片裁剪info初始化( 裁剪图均_y边像素_商,裁剪图均_x边像素_商,颜色数 );
      第7裁剪i.灰度图片裁剪info初始化( 裁剪图均_y边像素_商,裁剪图均_x边像素_商,颜色数 );
      第8裁剪i.灰度图片裁剪info初始化( 裁剪图均_y边像素_商,裁剪图均_x边像素_商+裁剪图均_x边像素_余,颜色数 );/*第2行第4列*/
      第9裁剪i.灰度图片裁剪info初始化( 裁剪图均_y边像素_商,裁剪图均_x边像素_商,颜色数 );
      第10裁剪i.灰度图片裁剪info初始化( 裁剪图均_y边像素_商,裁剪图均_x边像素_商,颜色数 );
      第11裁剪i.灰度图片裁剪info初始化( 裁剪图均_y边像素_商,裁剪图均_x边像素_商,颜色数 );
      第12裁剪i.灰度图片裁剪info初始化( 裁剪图均_y边像素_商,裁剪图均_x边像素_商+裁剪图均_x边像素_余,颜色数 );/*第3行第4列*/
      第13裁剪i.灰度图片裁剪info初始化( 裁剪图均_y边像素_商+裁剪图均_y边像素_余,裁剪图均_x边像素_商,颜色数 );
      第14裁剪i.灰度图片裁剪info初始化( 裁剪图均_y边像素_商+裁剪图均_y边像素_余,裁剪图均_x边像素_商,颜色数 );
      第15裁剪i.灰度图片裁剪info初始化( 裁剪图均_y边像素_商+裁剪图均_y边像素_余,裁剪图均_x边像素_商,颜色数 );
      第16裁剪i.灰度图片裁剪info初始化( 裁剪图均_y边像素_商+裁剪图均_y边像素_余,裁剪图均_x边像素_商+裁剪图均_x边像素_余,颜色数 );/*第4行第4列*/
    } else if( 裁剪方式_1是不裁_2是裁4_3是裁9_4是裁16_5是裁25==5 ){
      lam计算裁剪图均边像素( 5 );
      第1裁剪i.灰度图片裁剪info初始化( 裁剪图均_y边像素_商,裁剪图均_x边像素_商,颜色数 );
      第2裁剪i.灰度图片裁剪info初始化( 裁剪图均_y边像素_商,裁剪图均_x边像素_商,颜色数 );
      第3裁剪i.灰度图片裁剪info初始化( 裁剪图均_y边像素_商,裁剪图均_x边像素_商,颜色数 );
      第4裁剪i.灰度图片裁剪info初始化( 裁剪图均_y边像素_商,裁剪图均_x边像素_商,颜色数 );
      第5裁剪i.灰度图片裁剪info初始化( 裁剪图均_y边像素_商,裁剪图均_x边像素_商+裁剪图均_x边像素_余,颜色数 );/*第1行第5列*/
      第6裁剪i.灰度图片裁剪info初始化( 裁剪图均_y边像素_商,裁剪图均_x边像素_商,颜色数 );
      第7裁剪i.灰度图片裁剪info初始化( 裁剪图均_y边像素_商,裁剪图均_x边像素_商,颜色数 );
      第8裁剪i.灰度图片裁剪info初始化( 裁剪图均_y边像素_商,裁剪图均_x边像素_商,颜色数 );
      第9裁剪i.灰度图片裁剪info初始化( 裁剪图均_y边像素_商,裁剪图均_x边像素_商,颜色数 );
      第10裁剪i.灰度图片裁剪info初始化( 裁剪图均_y边像素_商,裁剪图均_x边像素_商+裁剪图均_x边像素_余,颜色数 );/*第2行第5列*/
      第11裁剪i.灰度图片裁剪info初始化( 裁剪图均_y边像素_商,裁剪图均_x边像素_商,颜色数 );
      第12裁剪i.灰度图片裁剪info初始化( 裁剪图均_y边像素_商,裁剪图均_x边像素_商,颜色数 );
      第13裁剪i.灰度图片裁剪info初始化( 裁剪图均_y边像素_商,裁剪图均_x边像素_商,颜色数 );
      第14裁剪i.灰度图片裁剪info初始化( 裁剪图均_y边像素_商,裁剪图均_x边像素_商,颜色数 );
      第15裁剪i.灰度图片裁剪info初始化( 裁剪图均_y边像素_商,裁剪图均_x边像素_商+裁剪图均_x边像素_余,颜色数 );/*第3行第5列*/
      第16裁剪i.灰度图片裁剪info初始化( 裁剪图均_y边像素_商,裁剪图均_x边像素_商,颜色数 );
      第17裁剪i.灰度图片裁剪info初始化( 裁剪图均_y边像素_商,裁剪图均_x边像素_商,颜色数 );
      第18裁剪i.灰度图片裁剪info初始化( 裁剪图均_y边像素_商,裁剪图均_x边像素_商,颜色数 );
      第19裁剪i.灰度图片裁剪info初始化( 裁剪图均_y边像素_商,裁剪图均_x边像素_商,颜色数 );
      第20裁剪i.灰度图片裁剪info初始化( 裁剪图均_y边像素_商,裁剪图均_x边像素_商+裁剪图均_x边像素_余,颜色数 );/*第4行第5列*/
      第21裁剪i.灰度图片裁剪info初始化( 裁剪图均_y边像素_商,裁剪图均_x边像素_商,颜色数 );
      第22裁剪i.灰度图片裁剪info初始化( 裁剪图均_y边像素_商,裁剪图均_x边像素_商,颜色数 );
      第23裁剪i.灰度图片裁剪info初始化( 裁剪图均_y边像素_商,裁剪图均_x边像素_商,颜色数 );
      第24裁剪i.灰度图片裁剪info初始化( 裁剪图均_y边像素_商,裁剪图均_x边像素_商,颜色数 );
      第25裁剪i.灰度图片裁剪info初始化( 裁剪图均_y边像素_商+裁剪图均_y边像素_余,裁剪图均_x边像素_商+裁剪图均_x边像素_余,颜色数 );/*第5行第5列*/
      }/*else if*/;
  }/*void*/;
  /*?不需要写了*/
  void v2图片TV2裁剪( /*!输入*/int y边像素, int x边像素 ){
}/*void*/;
}/*灰度图片内info*/;
/*1个图 { 灰度版; 4通道版; }*/
#define 图片info struct_图片
struct 图片info{
public:
  前置cout qmviCout;
public:
  /*M的*/int 输入_M的y边像素, 输入_M的x边像素;
  /*转换/压缩/设置*/int 输入_y下个点加几个像素, 输入_x下个点加几个像素;
  int y边像素, x边像素; /*LONG*/int 总像素数量; 
  int 颜色数; int 颜色的除;
  /*MatTO:, 图片的属性`直接记录`复制*/
  //int i线的数;
  灰度图片内info 灰度图片i, 灰度图片除5i, 灰度图片除15i, 灰度图片除50i
    , _4通道图片i, _4通道图片除5i, _4通道图片除15i, _4通道图片除50i;
  int /*如 0<1, 0是背景色, 1是前景色*/区分前景色背景色的下标的分界线 = 0, 小于分界线是背景色 = 0;
  /*todo 区分`单通道和`颜色总数*/
  新v3i v3i线属性;
  int i线的数;
  /*标记`步骤*/
  新v2i /*对于这个点, 是否已进行`识别线操作*/v2i该点是否已识别线
    ;
  ///auto v2i灰度图片assign(/*输入*/Mat& m,/*输出*/新v2i& v2i){}
  图片info( ){ }/*()*/; 
  /*?初始化输入Mat-->不能输入Mat*/
  /*switch( 除数 ){ v2i.assign }, v2i不同*/
  void switchV2i灰度图片除几的assign( /*输入*/int y边像素, int x边像素, int 颜色的除1 ){
    灰度图片i.v2i图片.assign( y边像素, 新vi( x边像素, 0 ) );		
    /*?应该弃用<多个v>吗*/
    switch( 颜色的除1 ){
    default:break;
    case(50):灰度图片除50i.v2i图片.assign( y边像素, 新vi( x边像素, 0 ) );			break;
    case(1):灰度图片i.v2i图片.assign( y边像素, 新vi( x边像素, 0 ) );			break;
    case(5):灰度图片除5i.v2i图片.assign( y边像素, 新vi( x边像素, 0 ) );			break;
    case(15):灰度图片除15i.v2i图片.assign( y边像素, 新vi( x边像素, 0 ) );			break;
    }/*switch*/;
  }/*void*/;
  /*M.size-->{ y边像素; 图片.灰度图片除50i.v2i图片.size() }*/
  void 图片info初始化(/*!输入*/int M的y边像素, int M的x边像素, int y下个点加几个像素, int x下个点加几个像素, int 颜色的除1 /*!输出*/ ){
    coutsf( "图片info初始化{ }\n" );
    /*M的*/ 输入_M的y边像素 = M的y边像素, 输入_M的x边像素 = M的x边像素; /*转换/压缩/设置*/ 输入_y下个点加几个像素 = y下个点加几个像素, 输入_x下个点加几个像素 = x下个点加几个像素;
    /*Co=m--> v.size=m--> Co=v.size*/
    /*y边像素= M.rows/y下个点加几个像素; x边像素= M.cols/x下个点加几个像素*/
    /*边长*/y边像素 = M的y边像素/y下个点加几个像素; x边像素 = M的x边像素/x下个点加几个像素; /*面积*/总像素数量 = y边像素*x边像素; ///y边像素 = 灰度图片除50i.v2i图片.size( ); x边像素 = 灰度图片除50i.v2i图片[0].size( );
    颜色的除=颜色的除1;
    switchV2i灰度图片除几的assign( /*输入*/y边像素, x边像素, 颜色的除1 );
    /*等同于`v2i图片`的尺寸*/
    灰度图片除50i.v2i颜色的像素数量.assign( 6, 新vi( 1, 0 ) );
    灰度图片除50i.v2f颜色的像素数量除以总像素数量.assign( 6, 新vf( 1, 1.5555555555) );
    v2i该点是否已识别线.assign( y边像素, 新vi( x边像素, 0 ) );
    ///图片.v5i.assign(图片.y边像素, 新vi(图片.x边像素, 0));
    qmviCout.cVecSize( "v2i灰度图片除50", 灰度图片除50i.v2i图片 );
    qmviCout.cVecSize( "v2i该点是否已识别线", v2i该点是否已识别线 );
  }/*void*/;
};
/**///▬记录`记忆▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
    /*用不了COORD,累能用*/ ////COORD 坐标;
#define struct_电脑基本记忆 电脑基本记忆info
struct 电脑基本记忆info{/*应该存到文件里吧*/
  string 窗口名称 = "1";
  /*
  //>v3s窗口属性:
  //二=0:
  //一=窗口名称;
  一[0][0]=窗口名称1, 一[0][1]=窗口名称2;
  //二>1:
  //二=屏幕序号; 三0=上下左右,三1=宽度;
  一[1][0]=屏幕1, 一[2][0]=屏幕2,一[3][0]=屏幕3;
  */
  新v3s v3s窗口属性;
  新v2s v2s窗口属性;
  新s 任务栏位置 = "z"/*上下左右=uxzy*/;
  新i 任务栏宽度 = 141, 任务栏长度 = 2160
    , 屏幕数量 = 3;
  电脑基本记忆info( ){
    /*todo assign*/
    /*v3s窗口属性*/{
      /*屏幕尺寸`屏幕一=主屏幕*/
      v3s窗口属性[0][0][0] = "屏幕";/*窗口名*/
      v3s窗口属性[0][0][1] = "显示器";/*窗口名*/
      v3s窗口属性[0][1][0] = "2160";/*第一个屏幕, 屏幕一的y*/
      v3s窗口属性[0][1][1] = "3840";/*屏幕一x*/
      v3s窗口属性[0][2][0] = "1280";/*屏幕2的y*/
      v3s窗口属性[0][2][1] = "810";/*屏幕2x*/
      v3s窗口属性[0][3][0] = "1024";/*屏幕3的y*/
      v3s窗口属性[0][3][1] = "769";/*屏幕3x*/
      /*任务栏*/
      v3s窗口属性[1][0][0] = "任务栏";/*窗口名*/
      v3s窗口属性[1][1][0] = "z";/*第一个任务栏, 屏幕一的任务栏在左边*/
      v3s窗口属性[1][1][1] = "141";/*屏幕一的任务栏宽度*/
      v3s窗口属性[1][1][2] = v3s窗口属性[0][1][0];/*左:屏幕一的y*/
    }/*v3s窗口属性*/;
    /*v2s窗口属性*/{
    }/*v2s窗口属性*/;
  }/*( )*/;
}/*电脑基本记忆info*/;
/**/;//▬beep`音调▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
enum enum_beep音调{/*q前缀为低音，1后缀为高音，s前缀为半音阶*/
  音调qdo = 262
  , 音调qre = 294
  , 音调qmi = 330
  , 音调qfa = 349
  , 音调qso = 392
  , 音调qla = 440
  , 音调qsi = 494
  , 音调do = 523
  , 音调re = 578
  , 音调mi = 659
  , 音调fa = 698
  , 音调so = 784
  , 音调la = 880
  , 音调si = 988
  , 音调do1 = 1046
  , 音调re1 = 1175
  , 音调mi1 = 1318
  , 音调fa1 = 1480
  , 音调so1 = 1568
  , 音调la1 = 1760
  , 音调si1 = 1976
  , 音调sqdo = 277
  , 音调sqre = 311
  , 音调sqfa = 370
  , 音调sqso = 415
  , 音调sqla = 466
  , 音调sdo = 554
  , 音调sre = 622
  , 音调sfa = 740
  , 音调sso = 831
  , 音调sla = 932
  , 音调sdo1 = 1046
  , 音调sre1 = 1245
  , 音调sfa1 = 1480
  , 音调sso1 = 1661
  , 音调sla1 = 1865
};
struct 声音信息{
  新vi vi音调, vi拍长;
  int 音符数量 = 14;
  声音信息( ){
    v的assign( );
  }/*()*/;
  void v的assign( ){
    vi音调.assign( 音符数量, 0 );
    vi拍长.assign( 音符数量, 0 );
  }/*void*/;
};
//string
/* vs中,每一个文件名是一行. 如{ s`(1:/1/1) 读取成 (1换行1换行1) }*/
#define struct_pathInfo pathInfo
struct pathInfo : public pathInfo的变量{
public/*class*/:
public/*struct*/:
  ///struct_c注释info c注释i;
public:
  /**//*!运行前*/
  /**//*!运行时*/

  /*初始化{ */
  pathInfo( string s/*,int v的行, int v的列*/ ){ 初始化AGetVs每部分AC注释( s ); }/*pathInfo()*/;
  pathInfo( int 是否c, string s/*,int v的行, int v的列*/ ){
    是否c注释 = 是否c;
    初始化AGetVs每部分AC注释( s );
  }/*pathInfo()*/;
  pathInfo( int 是否c注释1, int c注释次数上限1, string s1/*,int v的行, int v的列*/ ){
    是否c注释 = 是否c注释1; c注释次数上限 = c注释次数上限1;
    初始化AGetVs每部分AC注释( s1 );
  }/*pathInfo()*/;
  pathInfo( string 斜杠, string s/*,int v的行, int v的列*/ ){
    新斜杠 = 斜杠;
    初始化AGetVs每部分AC注释( s );
  }/*pathInfo()*/;
  pathInfo( int 是否c, string 斜杠, string s/*,int v的行, int v的列*/ ){
    是否c注释 = 是否c;
    新斜杠 = 斜杠;
    初始化AGetVs每部分AC注释( s );
  }/*pathInfo()*/;
  pathInfo( int 是否c注释1, int c注释次数上限1, string 斜杠, string s1/*,int v的行, int v的列*/ ){
    是否c注释 = 是否c注释1; c注释次数上限 = c注释次数上限1;
    新斜杠 = 斜杠;
    初始化AGetVs每部分AC注释( s1 );
  }/*pathInfo()*/;
  void 初始化AGetVs每部分AC注释( string s/*,int v的行, int v的列*/ ){/*初始化ASTVs每部分c注释*/
    /*算出/搜索出`是19.6MB*/
    v的默认尺寸.一 =/*行*/0;
    /*输入*/{
      /*初始path*/
      s输入的path = s;
      /*s输入的path= 去掉`s首的特殊符号*/{
        ///if( 是否s1开头是斜杠斜杠问号斜杠( s ) ==1 ){
        ///  s输入的path = s.substr( 4, s.size( ) );
        ///} else{/**/}/*else*/;
        if( 是否c1是斜杠冒号星号问号双引号尖括号竖号( s[0] )==1 ){/*第一个字是不允许的字*/
          for( size_t 位 = 0; 位 < s输入的path.size( ); 位++ ){
            if( 是否c1是斜杠冒号星号问号双引号尖括号竖号( s[位] )==1 ){/*是不允许的字*/ break; } else{/*否不允许的字-->s=s*/ s输入的path = s.substr( 位, s.size( )-位 ); }/*else*/;
          }/*for*/;
        } else{/*第一个字否不允许的字*/ }/*else*/;
      }/*s输入的path= 去掉`s首的特殊符号*/;
    }/*输入*/;
    if( 是否c注释>0 and 计数_c注释次数< c注释次数上限 ){ 计数_c注释次数++; cout2( "s输入的path=", s输入的path, " }\n" ); coutEnd; }/*if*/
    初始化( );
    ///cVSize();
    if( 是否c注释>0 and 计数_c注释次数< c注释次数上限 ){ 计数_c注释次数++; cout1( "从s的每个字符getVs每部分();", "{ ", " }\n" ); coutEnd; }/*if*/
    从s的每个字符getVs每部分( ); /*?放左边函数里边没有用*/行数 = v的下标.一;
    if( 是否c注释>0 and 计数_c注释次数< c注释次数上限 ){ 计数_c注释次数++; cout1( "删除v的多余元素( );", "{ ", " }\n" ); coutEnd; }/*if*/
    /*在结束时*/删除v的多余元素( );/*todo 直接改成pushback*/
    if( 是否c注释>0 and 计数_c注释次数< c注释次数上限 ){ 计数_c注释次数++; cout1( "初始化AGetVs每部分AC注释( )完;" ); coutEnd; }/*if*/
  }/*pathInfo()*/;
  /* }初始化*/;
  /*输出{ iS开头下标, }*/
  void 封装_s的下标ζ前结算进vsζ后continue(/*输入*/int& iS末尾下标, int& iS开头下标/*is末尾下标=0,is开头下标=0*/, int 斜杠点size /*!输出*/ ){/*c*/{ if( 是否c注释>0 and 计数_c注释次数< c注释次数上限 ){ 计数_c注释次数++; cout1( ";封装_s的下标ζ前结算进vsζ后continue(){ " ); }/*if*/ }/*c*/
  /**//**/;//结算`(vs[]=这一部分s)
  /**/vi每部分的标记.push_back( 1 )/*文件夹*/;/*fs和fS,is和iS*/
  /**//*复制s*/
  /**/vs每部分.push_back( s输入的path.substr( iS开头下标, iS末尾下标+1-iS开头下标 ) );/*可以*/;/*c*/{ if( 是否c注释>0 and 计数_c注释次数< c注释次数上限 ){ 计数_c注释次数++; cout3( ",vsPushb了=( ", s输入的path.substr( iS开头下标, iS末尾下标+1-iS开头下标 ), " )" ); }/*if*/ }/*c*/
  /**/v的下标.一++;/*那加一了，要是后面是空怎么办？*//*c*/{ if( 是否c注释>0 and 计数_c注释次数< c注释次数上限 ){ 计数_c注释次数++; cout1( " }" ); cout1( "\n" ); }/*if*/ }/*c*/
  }/*void*/;
  /*todo 简单的:{ 空格先替换成一些符号(比如\), /替换成空格--> s读取(>>)成好几个s--> 加上/,换回空格 }*/
  /*读取每个字符{ if是分隔符{ 标记 } if前一个字符是分隔符{ s=新的s } s=s; }*/
  /*!for`s的每个字符{ if是分隔符{ 标记 } if前一个字符是分隔符{ v一++,v[一]=s[] } v[一]=s[],v二++; }*/
  /*有两种情况{,要么是内容，要么是间隔 } */
  void 从s的每个字符getVs每部分( ){
    vs斜杠.assign( 1, "" );
    /*if这位是斜杠{ 匹配之后连着的斜杠,直到某位不是斜杠 };*/
    /* if(这一位是不是某个字){ 是{ 位数+1 }; 不是{ 完 }; }; */
#define 当前斜杠 vs斜杠[v的下标.一]
#define 当前斜杠的位数 vs斜杠[v的下标.一].size()
#define 当前下标的斜杠点size 当前斜杠的位数
#define 当前下标的s的c s输入的path[s的下标]
#define 当前下标右1位的s的c s输入的path[s的下标+1]
#define 当前下标右1的s的c s输入的path[s的下标+1]
#define 当前下标左1的s的c s输入的path[s的下标-1]
#define 最左下标的s的c s输入的path[0]
#define 最右下标的s的c s输入的path[s输入的path.size()-1]
    /*lam*/auto lamRetC在s的斜杠中的位置A改值的初始化 = [&]( )->void{
      vs斜杠.push_back( "" );
      }/*lam*/;
    /*lam*/auto lam值调整 = [&]( int& iS末尾下标, int& iS开头下标 )->void{
      qmvi计算_不使用前置变量.ifI小于0I等于0( iS末尾下标 );
      qmvi计算_不使用前置变量.ifI小于0I等于0( iS开头下标 );
      }/*lam*/;
    //>retu{ 0=这个c不是// 1=最左/ 2=中间/ 3=最右/ 没有4=s完 }; 
    /**///if最左-->初始化-->{...}-->( if中间--> )if最右
    auto /*lam*/lamRetC在s的斜杠中的位置A改值_1左2中3右4S完 = [&]( int& iS末尾下标, int& iS开头下标 )->int{;/*c*/{ if( 是否c注释>2 and 计数_c注释次数< c注释次数上限 ){ 计数_c注释次数++; cout1( "lamRetC在s的斜杠中的位置A改值_1左2中3右4S完(){ " ); coutEnd; }/*if*/ }/*c*/
    /**/int i结果 = 0, 是否最左 = 0, 是否最右 = 0;
    /**/if( 当前下标的s的c== '/' or 当前下标的s的c == '\\' ){/*可能是`三种情况*/;/*c*/{ if( 是否c注释>1 and 计数_c注释次数< c注释次数上限 ){ 计数_c注释次数++; cout2( "--> 这个c是斜杠,下标=", s的下标 ); }/*if*/ }/*c*/
    /*  */if( 当前下标左1的s的c!= '/' and 当前下标左1的s的c != '\\' ){/*!c在( 间隔最左/ 斜杠最左 )*/
      /*    */lamRetC在s的斜杠中的位置A改值的初始化( ); iS末尾下标 = s的下标-1;
      /*    */当前斜杠.append( lzxy转换.一位charTOs( 当前下标的s的c ) ); ;/*c*/{ if( 是否c注释>1 and 计数_c注释次数< c注释次数上限 ){ 计数_c注释次数++; cout2( ",当前斜杠的位数=", 当前斜杠的位数 ); coutEnd; }/*if*/ }/*c*/
      /*    */i结果 = 1; 是否最左 = 1;
    }/*if*/;
    /*  */if( 当前下标右1的s的c!= '/' and 当前下标右1的s的c != '\\' ){/*!c在( 间隔最右/ 斜杠最右 )*/
      /*    */if( 是否最左 == 1 ){/*!c在(( 间隔最左/ 斜杠最左 ) and ( 间隔最右/ 斜杠最右 ))*/
      }/*if*/;
      /*    *//*开头=末尾加斜杠=当前下标加一*/                                                            //? if(s的下标!=s输入的path.size()-1){
      /*?*///*
      /*    *//*?逻辑上是, 下一个`iS开头下标 = s的下标+1; 所以这句要放在后面,奇怪的是( 改了这个东西之后，我想不起来 )*/;/*c*/{ if( 是否c注释>1 and 计数_c注释次数< c注释次数上限 ){ 计数_c注释次数++; cout2( ",iS开头下标=", iS开头下标 ); }/*if*/ }/*c*/
      /*    */当前斜杠.append( lzxy转换.一位charTOs( 当前下标的s的c ) ); ;/*c*/{ if( 是否c注释>1 and 计数_c注释次数< c注释次数上限 ){ 计数_c注释次数++; cout2( ",当前斜杠的位数=", 当前斜杠的位数 ); }/*if*/ }/*c*/
      /*    */i结果 = 3; 是否最右 = 1;
    }/*if*/;
    /*  */if( (是否最左 != 1)and(是否最右 != 1) ){
      /*    *//*?中间`是排除左右之后剩的*/
      /*    *//*!c在( 间隔中间/ 斜杠中间 )*/
      /*    */当前斜杠.append( lzxy转换.一位charTOs( 当前下标的s的c ) ); ;/*c*/{ if( 是否c注释>1 and 计数_c注释次数< c注释次数上限 ){ 计数_c注释次数++; cout2( ",当前斜杠的位数=", 当前斜杠的位数 ); }/*if*/ }/*c*/
      /*    */i结果 = 2;
    }/*if*/; ;/*c*/{ if( 是否c注释>2 and 计数_c注释次数< c注释次数上限 ){ 计数_c注释次数++; cout1( ",这个c不是斜杠;" ); }/*if*/ }/*c*/
    /*  */lam值调整( iS末尾下标, iS开头下标 );
    /*  */retu i结果;
    }/*if*/;
    //>ifS完{ iS末尾下标 = s的下标; }
    /**/retu 0;
      }/*lam*/;
#define lamRetuC在s的斜杠中的位置A改值_1左2中3右 lamRetC在s的斜杠中的位置A改值_1左2中3右
    /*for每个字符{
    是否c=分隔符{
    是-->是否右边的c!=分隔符{
    是-->记录( (上一个s)s末尾下标,vs[]=s(,),(下一个s)s开头下标, ); vs[新行]=s;
    }/if/
    否-->vs斜杠[].字数++;
    }/if/
    }/for/ 用s[]判断\后面有没有字;
    下标`用不到了.
    ///////////////////////
    /*for每个字符{
    ifC=分隔符{
    是-->if右边的c!=分隔符{
    是-->记录( (上一个s)s末尾下标,vs[]=s(,),(下一个s)s开头下标, ); vs[新行]=s;
    }/if/
    否-->vs斜杠[].字数++;
    }/if/
    }/for/ 用s[]判断\后面有没有字;
    ///////////////////////
    /*for每个字符{
    if( c=分隔符 ){
    是-->if( 右边的c!=分隔符 ){
    是-->记录( (上一个s)s末尾下标,vs[]=s(,),(下一个s)s开头下标, ); vs[新行]=s;
    }/if/
    否-->vs斜杠[].字数++;
    }/if/
    }/for/ 用s[]判断\后面有没有字;
    ///////////////////////
    s开头下标=0;
    for每个字符{
    if是分隔符{ s末尾下标=-1,vs[行]=s(,),s开头下标=+1; vs[新行]=s; }
    }/for/
    if(s[下标-1] == '/' or '\\')*/
    /*for到(斜杠前面),就是(最后一个斜杠后面的内容是不处理的)*/
    int 返回 = 0;
    for(/*s*/ s的下标 = 0; s的下标 < s输入的path.size( ); s的下标++ ){
      返回 = lamRetC在s的斜杠中的位置A改值_1左2中3右4S完( iS末尾下标, iS开头下标 ); ;/*c*/{ if( 是否c注释>1 and 计数_c注释次数< c注释次数上限 ){ 计数_c注释次数++; cout2( ",返回=", 返回 ); }/*if*/ }/*c*/
      if( 返回 >=3 ){
        /*复制出\前的s,到vs[]*/封装_s的下标ζ前结算进vsζ后continue( iS末尾下标, iS开头下标, 当前斜杠的位数 );
        /*!在substr后面*//**?这句放在上面lam里没有用,变量在lam后面*/iS开头下标 = s的下标+1;;/*c*/{ if( 是否c注释>1 and 计数_c注释次数< c注释次数上限 ){ 计数_c注释次数++; cout4( ",iS末尾下标=", iS末尾下标, ",iS开头下标=", iS开头下标 ); }/*if*/ }/*c*/
      }/*if*/;/*c*/{ if( 是否c注释>2 and 计数_c注释次数< c注释次数上限 ){ 计数_c注释次数++; cout1( " }" ); coutEnd; }/*if*/ }/*c*/
    }/*for`s*//*?for后 两种情况*/ /*for之后 s的下标会`加1*/;/*c*/{ if( 是否c注释>0 and 计数_c注释次数< c注释次数上限 ){ 计数_c注释次数++; cout1( "for完\n" ); }/*if*/ }/*c*/
    //>ifS完{ iS末尾下标 = s的下标; }
    iS末尾下标 = s的下标-1;
    if( iS开头下标==iS末尾下标 ){/*没有 内容没push*/
      retu;
    }/*if*/;
    if( iS开头下标>iS末尾下标 ){/*不可能*/;/*c*/{ if( 是否c注释>14 and 计数_c注释次数< c注释次数上限 ){ 计数_c注释次数++; cout1( "\niS开头下标>iS末尾下标--> 不可能不可能不可能不可能不可能不可能不可能不可能不可能不可能\n" ); }/*if*/ }/*c*/
    retu;
    }/*if*/;
    if( iS开头下标<iS末尾下标 ){/*有 内容没push*/
      封装_s的下标ζ前结算进vsζ后continue( iS末尾下标, iS开头下标, 当前斜杠的位数 );
      retu;
    }/*if*/;
    行数 = v的下标.一;
  }/*void*/
#define getVs每部分FROMs的每个字符 从s的每个字符getVs每部分
#define getVs每部分FS的每个字符 从s的每个字符getVs每部分
#define getVs每部分FromS的每个字符 从s的每个字符getVs每部分
#define getVs每部分从s的每个字符 从s的每个字符getVs每部分
#define 把s的每个字符读取到vs每部分 从s的每个字符getVs每部分
  /*2025年1月27日04:18:24,旧版*/
  void 把s的每个字符读取到vs每部分_只考虑到斜杠是一位_if斜杠乱填就斜杠之间get空元素( ){
    /*for每个字符{
    if是分隔符{ 记录( (上一个s)s末尾下标,vs[]=s(,),(下一个s)s开头下标, ); vs[新行]=s;  }
    }/for/ 用s[]判断\后面有没有字;
    下标`用不到了.
    ///////////////////////
    s开头下标=0;
    for每个字符{
    if是分隔符{ s末尾下标=-1,vs[行]=s(,),s开头下标=+1; vs[新行]=s; }
    }/for/
    if(s[下标-1] == '/' or '\\')*/
    int iS末尾下标 = 0, iS开头下标 = 0/*is末尾下标=0,is开头下标=0*/;
    ///cout1( "s输入的path.size=" );cout1( s输入的path.size( ) );cout1( ", ");  ///coutEnd;
    ///coutsf( "s输入的path={}\n", s输入的path );
    for( s的下标 = 0; s的下标 < s输入的path.size( ); s的下标++ ){
      if( s输入的path[s的下标] == '/' or s输入的path[s的下标] == '\\' ){
        原来的斜杠[0] = s输入的path[s的下标];
        ///coutsf("\\的下标是{}\n", s的下标);
        ///coutsf("从上一个开头`到下标的`一部分s={}\n", s输入的path.substr(iS开头下标, s的下标-iS开头下标));
        ///coutsf("从上一个开头`到末尾的`一部分s={}\n", s输入的path.substr(iS开头下标, s输入的path.size()-iS开头下标));
        /*复制出\前的s,到vs[]*/
        封装_s的下标ζ前结算进vsζ后continue( iS末尾下标, iS开头下标, 1 );
        ///coutsf("从上一个开头的`一部分s={}\n", s输入的path.substr(iS开头下标, s的下标-iS开头下标));
        /// /*结尾可能有{ 文件or文件夹 }嘛*/ /*for有终止条件的{ 如果s完了就没有下一次了 }*/
      }/*if*/
    }/*for`s*/
     ///coutsf("for完\n");
     /*?for后 两种情况*/ /*for之后 s的下标会`加1*/
    if( s输入的path[s的下标-1] == '/' or s输入的path[s的下标-1] == '\\' ){/*if \后 没有内容*/
      ///coutsf( "pathInfo::把s的每个字符读取到vs每部分{ \\后 没有内容 }\n" );
      /// /*把不该改的`恢复*/iS开头下标=s的下标-1;
      vi每部分的标记.push_back( 0 )/*无*/;
    } else{/*if \后面有`名称*/
      ///coutsf( "pathInfo::把s的每个字符读取到vs每部分{ \\后 有内容 }\n" );
      vi每部分的标记.push_back( 2 )/*文件*/;
      iS末尾下标 = s的下标-1;
      vs每部分.push_back( /*文件名*/s输入的path.substr( iS开头下标, iS末尾下标-iS开头下标+1 ) );
      v的下标.一++;
    }/*else*/;
    行数 = v的下标.一;
  }/*void*/

   /*from 前置计算_不使用前置变量的 sAppendVs*/
   ////void getsAppendVs(/*输入输出*/新s& s, /*输入*/新s s间隔, 新vs& v ){

  void 例子_函数顺序( ){
    初始化( );
    把s的每个字符读取到vs每部分( ); ///删除v的多余元素();
    cVs每部分( );/*就这个`能用, 其他的todo*/
  }/*void*/
}/*pathInfo*/;
/**///▬OpenCV,截图▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
#define 一种颜色info struct_一种颜色
struct struct_一种颜色 :public struct_一种颜色的变量{ }/*struct_一种颜色*/;
#define 一点颜色info struct_一点颜色
struct struct_一点颜色 :public struct_一点颜色的变量{ }二维的点/*struct_一点颜色*/;
struct struct_二维坐标 :public struct_二维坐标的变量{ }/*struct_二维坐标*/;
/**///▬资源管理器▬▬▬▬▬▬▬▬▬
struct struct_文件info :public struct_文件info的变量{ }/*struct_文件info*/;
#define struct_子path内文件属性info 子path内文件属性info
struct 子path内文件属性info :public struct_子path内文件属性info的变量{
  子path内文件属性info( ){ 函数前( 3, "struct path内文件属性info" ); 全部变量的初始输入( ); }/*()*/;
  子path内文件属性info( 新s p1 ){ 全部变量的初始输入( ); getPath内文件属性(p1); }/*(新s)*/;
#define 使用filesystem的directoryIteratorGetPath内文件属性 getPath内文件属性
#define 使用filesystem的directoryIterator来getPath内文件属性 getPath内文件属性
  void getPath内文件属性( /*!输入*/string s输入path, 新s s斜杠/*在末尾*/ /*!输出*/ ){    使用_finddata_t来getPath内文件属性_从2025年2月6日版( s输入path, s斜杠 );  }/*void getPath内文件属性*/;
  void getPath内文件属性( /*!输入*/string s输入path /*!输出*/ ){    使用_finddata_t来getPath内文件属性_从2025年2月6日版( s输入path, "/" );  }/*void*/;
  /**///▬旧版,弃用▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
#define 使用_finddata_tGetPath内文件属性 使用_finddata_t来getPath内文件属性
#define getPath内文件属性_使用_finddata_t 使用_finddata_t来getPath内文件属性
#define getPath内文件属性__finddata_t 使用_finddata_t来getPath内文件属性
  /*?name.size()必须<260*//*<char* name>字数限制260,会BuToSma,应该在另一个exe中运行*/
  void 使用_finddata_t来getPath内文件属性_从2025年2月6日版( /*!输入*/string s输入path, 新s s斜杠/*在末尾*/ /*!输出*/ ){/*2025年2月6日版*/
    函数前( 3, "使用_finddata_t来getPath内文件属性" );
#define lam函数后 函数后( 3, "使用_finddata_t来getPath内文件属性" ); retu;
    变量初始化( );
    /*确保s1最后是斜杠*/if(/*最后不是斜杠*/s输入path[s输入path.size( )-1]!=s斜杠[0] ){ s输入path += s斜杠[0]; }/*if*/
    /**///开始
    intptr_t   /*句柄*/hFile = 0;
    struct _finddata_t /*一条path*/一个文件的属性;
    string s要pushb的 = "";/*只是初始化,没有意义*/
    ///int p内文i的v的行=0;
    /*_findfirst(通惠符,info)*/
    ///cout1("hFile = _findfirst{ ");
    hFile = _findfirst( s要pushb的.assign( s输入path ).append( "/*" ).c_str( ), &一个文件的属性 );
    ///cout1(" }, 完成"); cout1("\n");/*可以*/
    /*?空*///*hFile = _findfirst( s要pushb的.c_str( ), &一个文件的属性 );
    if( hFile != -1 ){
      int 子path下标 = 0/*子path数-1*/;
      int 返回值;
      int i结果;
      string s后缀 = "";
      do{
        /*没有=vecOutOf*/
        vi是否下标是文件夹.resize( 子path下标+1, 0 );/*不+1( 子path下标+1 )=vecOutOf*/
        vi是否下标是文件.resize( 子path下标+1, 0 );
        vi是否下标是隐藏文件.resize( 子path下标+1, 0 );
        ///vi是否下标是其余文件.resize(子path下标,0);
        /*if 不是`这两种情况*/
        /*todo 区分是文件还是文件夹,也就是加不加斜杠*/
        if( strcmp(/**/一个文件的属性.name, "." ) != 0 && strcmp( 一个文件的属性.name, ".." ) != 0 ){
          /*!输出{ sGet }*/{
            /*清空*/s要pushb的.assign( "" );/*在s初始path后面`加上path*//*todo 其实能一次全部进一个s的,只要去掉这一句就行. 为什么?*/
            vi类型.push_back( 一个文件的属性.attrib );
            vi大小.push_back( 一个文件的属性.size );
            /*时间*/{
              /*int时间*/vi修改时间.push_back( 一个文件的属性.time_write );
              vi创建时间.push_back( 一个文件的属性.time_create );
              viTimeAccess.push_back( 一个文件的属性.time_access );
              /*timet*/vtt修改时间.push_back( 一个文件的属性.time_write );
              vtt创建时间.push_back( 一个文件的属性.time_create );
              vttTimeAccess.push_back( 一个文件的属性.time_access );
            }/*时间*/;
            ///cout1( "s要pushb的.append\n" );
            //>文件名= s要pushb的
            s要pushb的.append( 一个文件的属性.name );
            ///cout1( "一个文件的属性.attrib\n" );
            ///cout3( "s要pushb的=" ,s要pushb的 ,"\n" );
            if( 用_finddata_t来判断path是否是文件夹__finddata_t( 一个文件的属性 )==1 ){/*!是文件夹*/
              本层总文件夹数量_不含子层++;
              vs后缀.push_back( "" );/*默认=文件夹=无后缀*/
              s要pushb的.append( s斜杠 ); 文件夹数量++; vi是否下标是文件夹[子path下标] = 1;
            }/*if*/else{/*!是文件*/
              本层总文件数量_不含子层++;
              if( 一个文件的属性.attrib==32/*文件*/ ){ 文件数量++; vi是否下标是文件[子path下标] = 1; }/*if*/
              if( 一个文件的属性.attrib==38/*文件*/ ){ 隐藏文件数量++; vi是否下标是隐藏文件[子path下标] = 1; }/*if*/
              /*?导致: 一直c空格A不结束*///*
              get文件名的后缀( s要pushb的, s后缀 );;/*c*/{ c注释1ζ3 { c注空格 c注次加 /*c*/cout2( "s后缀=" ,s后缀 ); cout1( "\n" ); }/*if*/ }/*c*/
              vs后缀.push_back( s后缀 );
              本层总文件大小_不含子层 += 一个文件的属性.size;
              ///本层总文件大小_含子层 = 本层总文件大小_不含子层+子内i.本层总文件大小_含子层
            }/*else*/
             ///cout1( "<vs文件名>将要push_back{ " ); cout1( s要pushb的 );cout1( " }" ); cout1( "\n" );
            vs文件名.push_back( s要pushb的 );
            ///cout1( " }, 完成" ); cout1( "\n" );
            ///cout1( "<vs子path>将要push_back{ " ); cout1( s输入path+s要pushb的 );cout1( " }" ); cout1( "\n" );
            vs子path.push_back( s输入path+s要pushb的 );
            if( 一个文件的属性.time_write==一个文件的属性.time_create ){ vi是否修改时间等于创建时间.push_back( 1 ); } else{ vi是否修改时间等于创建时间.push_back( 0 ); }/*else*/
            if( 一个文件的属性.time_write==一个文件的属性.time_access ){ vi是否修改时间等于TimeAccess.push_back( 1 ); } else{ vi是否修改时间等于TimeAccess.push_back( 0 ); }/*else*/
            vi运行时_是否操作了这个下标的子path.assign( vs文件名.size( ), 0 );
          }/*s输入+sGet*/
        }/*if*/
        子path下标++;
        //*cout1( "strlen(一个文件的属性.name)=" );        cout1( strlen( 一个文件的属性.name ) ); cout1( ", " );
        /*?读了就buffer吧*/
        返回值 = _findnext( hFile, &一个文件的属性 );
      } while( 返回值== 0/*成功*/ );
      /*查找文件`结束了*/
      _findclose( hFile );
    }/*if*/
     /**///已完
    是否有数据 = 1;
    lam函数后( 3, "使用_finddata_t来getPath内文件属性" );
  }/*void*/;
#define 使用filesystemGetPath内文件属性 使用filesystem来getPath内文件属性
#define getPath内文件属性_使用filesystem 使用filesystem来getPath内文件属性
#define getPath内文件属性_filesystem 使用filesystem来getPath内文件属性
  /*?不存在的盘符`如A:=光标在filesystem*/
  /*?不能前+"\\\\?\\"开启长path*/
  void 使用filesystem来getPath内文件属性( /*!输入*/string s输入path, 新s s斜杠/*在末尾*/ /*!输出*/ ){
    函数前( 3, "使用filesystem来getPath内文件属性" );
    变量初始化( );
    /*<文字读取>有<替换斜杠A保证s后是斜杠>*/ /*确保s1最后是斜杠*/if(/*最后不是斜杠*/s输入path[s输入path.size( )-1]!=s斜杠[0] ){ s输入path += s斜杠[0]; }/*if*/

    /**///开始
        ///string 文件名, 大小, 后缀; filesystem::file_time_type  修改时间;
    string path = s输入path;
    string s要pushb的文件名 = "";
    int 子path下标 = 0/*子path数-1*/;
    /*!for*/
    //*
    for( const auto& 一个文件的属性 : filesystem::directory_iterator( s输入path ) ){
      // auto& 一个文件的属性=filesystem::directory_iterator( s输入path );
      //*for(  auto& 一个文件的属性 : filesystem::directory_iterator( s输入path ) ){
      /*没有=vecOutOf*/
      vi是否下标是文件夹.resize( 子path下标+1, 0 );/*不+1( 子path下标+1 )=vecOutOf*/
      vi是否下标是文件.resize( 子path下标+1, 0 );
      vi是否下标是隐藏文件.resize( 子path下标+1, 0 );
      /*!输出{ sGet }*/{
        ;/*c*/{ c注释1ζ3 { c注次加; /*c*/cout1( "新" ); cout1( "\n" ); }/*if*/ }/*c*/
        ;/*c*/{ c注释1ζ3 { c注次加; /*c*/cout1( "s要pushb的文件名.assign" ); coutEnd; }/*if*/ }/*c*/
        /*清空*/s要pushb的文件名.assign( "" );/*在s初始path后面`加上path*//*todo 其实能一次全部进一个s的,只要去掉这一句就行. 为什么?*/
        /*?*////这里没有<vi类型>了; 否把ta弃用,=<vs后缀>;
        vi大小.push_back( 一个文件的属性.file_size( ) );
        /*int时间*///*vi修改时间.push_back( (int)(一个文件的属性.last_write_time( )));
        /*timet*/vtt修改时间.push_back( lzxy转换.TOtime_t( (filesystem::file_time_type)一个文件的属性.last_write_time( ) ) );
        /*timet*///*vtt修改时间.push_back( lzxy转换.TOtime_t( 一个文件的属性 ) );
        /*原`子path:用来{ 旧斜杠 改成 新斜杠 }*/
#define 原ζ子path 一个文件的属性.path().string()
        /*2025年2月6日09:28:20`*//*?龙族幻想.kmp/ 的后面 报错了*/
        ;/*c*/{ c注释1ζ3 { c注次加; /*c*/cout1( "is_regular_file()={ " ); cout1( 一个文件的属性.is_regular_file( ) ); cout1( " }" ); cout1( "\n" ); }/*if*/ }/*c*/
        ;/*c*/{ c注释1ζ3 { c注次加; /*c*/cout1( "path={ " ); cout1( 一个文件的属性.path( ) ); cout1( " }" ); cout1( "\n" ); }/*if*/ }/*c*/
        ;/*c*/{ c注释1ζ3 { c注次加; /*c*/cout1( "path.string()={ " ); cout1( 一个文件的属性.path( ).string( ) ); cout1( " }" ); cout1( "\n" ); }/*if*/ }/*c*/
        //get 文件名
        ;/*c*/{ c注释1ζ0 { c注次加; /*c*/cout1( "原ζ子path={ " ); cout1( 原ζ子path ); cout1( " }" ); cout1( "\n" ); }/*if*/ }/*c*/
        struct_pathInfo pI( 原ζ子path ); string 新ζ子path = pI.retPath( s斜杠 ); ;/*c*/{ c注释1( 0 ){ c注次加; /*c*/cout1( "新ζ子path={ " ); cout1( 新ζ子path ); cout1( " }" ); cout1( "\n" ); }/*if*/ }/*c*/
        string 文件名 = pI.ret最后一部分AC( s斜杠 );
        vs子path.push_back( 新ζ子path/**operator const std::filesystem::path&*/ );
        s要pushb的文件名.append( 文件名 );
        string s后缀 = ""; int i结果;
        //*if( !一个文件的属性.is_regular_file() ){/*!是文件*/
        //*if( 一个文件的属性.is_directory() ){/*!是文件夹*/
        /*排除法*///*if( /*新path最后是斜杠=是文件夹*/新ζ子path[新ζ子path.size()-1]==s斜杠[0] ){/*!是文件夹*/
        ;/*c*/{ c注释1ζ0 { c注次加; /*c*/cout1( "文件名={ " ); cout1( 文件名 ); cout1( " }" ); cout1( "\n" ); }/*if*/ }/*c*/
        ;/*c*/{ c注释1ζ3 { c注次加; /*c*/cout1( "is_directory()={ " ); cout1( 一个文件的属性.is_directory( ) ); cout1( " }" ); /*第二个*/cout1( ", " ); cout1( "is_regular_file()={ " ); cout1( 一个文件的属性.is_regular_file( ) ); cout1( " }" ); /*第三个*/cout1( ", " ); cout1( "file_size()={ " ); cout1( 一个文件的属性.file_size( ) ); cout1( " }" ); cout1( "\n" ); }/*if*/ }/*c*/
        if( ((一个文件的属性.is_directory( )==1) and(一个文件的属性.is_regular_file( )==0/*非目录`非设备文件等的普通`文件*/))
          and (一个文件的属性.file_size( )==0) ){/*!是文件夹*/
          ;/*c*/{ c注释1( 1 ){ c注次加; /*c*/cout1( "-->是文件夹" );  coutEnd; }/*if*/ }/*c*/
          文件夹数量++; vi是否下标是文件夹[子path下标] = 1;
          vs后缀.push_back( "" )/*无后缀*/;
          vi类型.push_back( 1 );
        }/*if*/else{/*!不是文件夹*/
          ;/*c*/{ c注释1( 1 ){ c注次加; /*c*/cout1( "-->否是文件夹" );  coutEnd; }/*if*/ }/*c*/
          if( ((一个文件的属性.is_directory( )==0) and(一个文件的属性.is_regular_file( )==1)) and (一个文件的属性.file_size( )>0) ){/*!是文件*/
            ;/*c*/{ c注释1( 1 ){ c注次加; /*c*/cout1( "这句是{ " ); cout1( "文件数量++; vi是否下标是文件[子path下标] = 1;" ); cout1( " }" );   coutEnd; }/*if*/ }/*c*/
            文件数量++; vi是否下标是文件[子path下标] = 1;
            //*if( 一个文件的属性.is_regular_file( )/*文件*/ ){ 隐藏文件数量++; vi是否下标是隐藏文件[子path下标] = 1; }/*if*/
            ;/*c*/{ c注释1( 1 ){ c注次加; /*c*/cout1( "这句是{ " ); cout1( "本层总文件大小_不含子层 += 一个文件的属性.file_size( );" ); cout1( " }" );   coutEnd; }/*if*/ }/*c*/
            本层总文件大小_不含子层 += 一个文件的属性.file_size( );
            ;/*c*/{ c注释1( 1 ){ c注次加; /*c*/cout1( "这句是{ " ); cout1( "get文件名的后缀( 文件名, s后缀 ); vs后缀.push_back( s后缀 )/*文件的后缀*/;" ); cout1( " }" );   coutEnd; }/*if*/ }/*c*/
            i结果 = get文件名的后缀( 文件名, s后缀 );
            ;/*c*/{ c注释1( 1 ){ c注次加; /*c*/cout1( "i结果={ " ); cout1( i结果 ); cout1( " }" );   coutEnd; }/*if*/ }/*c*/
            vs后缀.push_back( s后缀 )/*文件的后缀*/; //*if( i结果==1 ){  }/*if*/;
            vi类型.push_back( 2 );
          } else{/*!第3种情况*/
            ;/*c*/{ c注释1( 1 ){ c注次加; /*c*/cout1( "-->否是文件夹 and 第3种情况" );  coutEnd; }/*if*/ }/*c*/
            vs后缀.push_back( "" );
            vi类型.push_back( 3 );
          }/*else*/;
        }/*else*/;
        ;/*c*/{ c注释1( 0 ){ c注次加; /*c*/cout1( "<vs文件名>将要push_back{ " ); cout1( s要pushb的文件名 ); cout1( " }" ); cout1( "\n" ); }/*if*/ }/*c*/
        vs文件名.push_back( s要pushb的文件名 );
        ///cout1( " }, 完成" ); cout1( "\n" );
        ///cout1( "<vs子path>将要push_back{ " ); cout1( s输入path+s要pushb的文件名 );cout1( " }" ); cout1( "\n" );
        vi运行时_是否操作了这个下标的子path.assign( vs文件名.size( ), 0 );
      }/*s输入+sGet*/
      子path下标++;
    }/*for*/;
    /**///已完
    是否有数据 = 1;
    函数后( 3, "使用filesystem来getPath内文件属性" );
  }/*void getPath内文件属性*/;
  /**/;//▬bug版▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
  void 使用_finddata_t来getPath内文件属性_2025年2月24日版_一直c空格A不结束( /*!输入*/string s输入path, 新s s斜杠/*在末尾*/ /*!输出*/ ){/*2025年2月24日版*/
    函数前( 3, "使用_finddata_t来getPath内文件属性" );
    变量初始化( );
    /*确保s1最后是斜杠*/if(/*最后不是斜杠*/s输入path[s输入path.size( )-1]!=s斜杠[0] ){ s输入path += s斜杠[0]; }/*if*/
    /**///开始
    intptr_t   /*句柄*/hFile = 0;
    struct _finddata_t /*一条path*/一个文件的属性;
    string s要pushb的 = "";/*只是初始化,没有意义*/
    ///int p内文i的v的行=0;
    /*_findfirst(通惠符,info)*/
    ///cout1("hFile = _findfirst{ ");
    hFile = _findfirst( s要pushb的.assign( s输入path ).append( "/*" ).c_str( ), &一个文件的属性 );
    ///cout1(" }, 完成"); cout1("\n");/*可以*/
    /*?空*///*hFile = _findfirst( s要pushb的.c_str( ), &一个文件的属性 );
    if( hFile != -1 ){
      int 子path下标 = 0/*子path数-1*/;
      int 返回值;
      do{
        vi是否下标是文件夹.resize( 子path下标+1, 0 );
        vi是否下标是文件.resize( 子path下标+1, 0 );
        vi是否下标是隐藏文件.resize( 子path下标+1, 0 );
        ///vi是否下标是其余文件.resize(子path下标,0);
        /*if 不是`这两种情况*/
        /*todo 区分是文件还是文件夹,也就是加不加斜杠*/
        if( strcmp(/**/一个文件的属性.name, "." ) != 0 && strcmp( 一个文件的属性.name, ".." ) != 0 ){
          /*!输出{ sGet }*/{
            /*清空*/s要pushb的.assign( "" );/*在s初始path后面`加上path*//*todo 其实能一次全部进一个s的,只要去掉这一句就行. 为什么?*/
            vi类型.push_back( 一个文件的属性.attrib );
            vi大小.push_back( 一个文件的属性.size );
            /*int时间*/vi修改时间.push_back( 一个文件的属性.time_write );
            vi创建时间.push_back( 一个文件的属性.time_create );
            viTimeAccess.push_back( 一个文件的属性.time_access );
            /*timet*/vtt修改时间.push_back( 一个文件的属性.time_write );
            vtt创建时间.push_back( 一个文件的属性.time_create );
            vttTimeAccess.push_back( 一个文件的属性.time_access );
            s要pushb的.append( 一个文件的属性.name );
            ///cout1( "一个文件的属性.attrib\n" ); cout3( "s要pushb的=" ,s要pushb的 ,"\n" );
            ;/*c*/{ c注释1ζ3 { c注空格 c注次加 /*c*/cout1( "是否是文件夹" ); cout1( "\n" ); }/*if*/ }/*c*/
            int 是否是文件夹; 是否是文件夹 = /*?outOfRa*//**path是否是文件夹_vi类型__finddata_t( 子path下标 ); */
              用_finddata_t来判断path是否是文件夹__finddata_t( 一个文件的属性 );;/*c*/{ c注释1ζ3 { c注空格 c注次加 /*c*/cout2( "是否是文件夹=",是否是文件夹 ); cout1( "\n" ); }/*if*/ }/*c*/
            if( 是否是文件夹==1 ){/*!是文件夹*/
              s要pushb的.append( s斜杠 ); 文件夹数量++; vi是否下标是文件夹[子path下标] = 1;
              vs后缀.push_back( "" );
            } else{/*!是文件*/
              if( 一个文件的属性.attrib==32/*文件*/ ){ 文件数量++; vi是否下标是文件[子path下标] = 1; }/*if*/
              if( 一个文件的属性.attrib==38/*文件*/ ){ 隐藏文件数量++; vi是否下标是隐藏文件[子path下标] = 1; }/*if*/
              string 文件名; 文件名 = s要pushb的;
              string s后缀 = "";
              int i结果; /*?没好; c完不结束,一直c空格`w`一直c空格A不结束*///*i结果 = get文件名的后缀( 文件名, s后缀 );
              ;/*c*/{ c注释1ζ3 { c注空格 c注次加 /*c*/cout2( "s后缀=" ,s后缀 ); cout1( "\n" ); }/*if*/ }/*c*/
              vs后缀.push_back( s后缀 );
              本层总文件大小_不含子层 += 一个文件的属性.size;
            }/*else*/
            ///sleep100;
            ///cout1( "<vs文件名>将要push_back{ " ); cout1( s要pushb的 );cout1( " }" ); cout1( "\n" );
            vs文件名.push_back( s要pushb的 );
            ///cout1( " }, 完成" ); cout1( "\n" );
            ///cout1( "<vs子path>将要push_back{ " ); cout1( s输入path+s要pushb的 );cout1( " }" ); cout1( "\n" );
            vs子path.push_back( s输入path+s要pushb的 );
            if( 一个文件的属性.time_write==一个文件的属性.time_create ){ vi是否修改时间等于创建时间.push_back( 1 ); } else{ vi是否修改时间等于创建时间.push_back( 0 ); }/*else*/
            ///if( 一个文件的属性.time_write==一个文件的属性.time_access ){ vi是否修改时间等于TimeAccess.push_back( 1 ); } else{ vi是否修改时间等于TimeAccess.push_back( 0 ); }/*else*/
            vi运行时_是否操作了这个下标的子path.assign( vs文件名.size( ), 0 );
          }/*s输入+sGet*/
          子path下标++;/*只记录有效信息=放在if里面*/
          ;/*c*/{ c注释1ζ3 { c注空格 c注次加 /*c*/cout2( "子path下标=",子path下标 ); cout1( "\n" ); }/*if*/ }/*c*/
        }/*if*/
        //*cout1( "strlen(一个文件的属性.name)=" );        cout1( strlen( 一个文件的属性.name ) ); cout1( ", " );
        /*?读了就buffer吧*/
        返回值 = _findnext( hFile, &一个文件的属性 );
        ;/*c*/{ c注释1ζ3 { c注空格 c注次加 /*c*/cout2( "返回值=",返回值 ); cout1( "\n" ); }/*if*/; }/*c*/;
      } while( 返回值== 0/*成功*/ );
      /*查找文件`结束了*/
      ;/*c*/{ c注释1ζ3 { c注空格 c注次加 /*c*/cout1( "while完",子path下标 ); cout1( "\n" ); }/*if*/; }/*c*/;
      ///sleep1000;
      _findclose( hFile );
    }/*if*/
    /**///已完
    是否有数据 = 1;
    函数后( 3, "使用_finddata_t来getPath内文件属性" );
  }/*void*/;

}/*子path内文件属性info*/;
#undef 原ζ子path 一个文件的属性.path().string()
#define struct_path内文件属性info path内文件属性info
struct path内文件属性info :public path内文件属性info的变量{
public/*struct*/:
public:
  /**///!运行时
  /**///记录
  新i i哈哈
    ;
  /*上面就是`第1层子i*/
  子path内文件属性info /*没用,输入需要有*/第0层子i;
  子path内文件属性info 第1层子i;
  子path内文件属性info 第2层子i;
  子path内文件属性info 第3层子i;
  子path内文件属性info 第4层子i;
  子path内文件属性info 第5层子i;
  子path内文件属性info 第6层子i;
  子path内文件属性info 第7层子i;
  子path内文件属性info 第8层子i;
  子path内文件属性info 第9层子i;
  子path内文件属性info 第10层子i;
  子path内文件属性info 第11层子i;
  子path内文件属性info 第12层子i;
  子path内文件属性info 第13层子i;
  子path内文件属性info 第14层子i;
  子path内文件属性info 第15层子i;
  子path内文件属性info 第16层子i;
  子path内文件属性info 第17层子i;
  子path内文件属性info 第18层子i;
  子path内文件属性info 第19层子i;
  子path内文件属性info 第20层子i;
  子path内文件属性info 第21层子i;
  子path内文件属性info 第22层子i;
  子path内文件属性info 第23层子i;
  子path内文件属性info 第24层子i;
  子path内文件属性info 第25层子i;
  子path内文件属性info 第26层子i;
  子path内文件属性info 第27层子i;
  子path内文件属性info 第28层子i;
  子path内文件属性info 第29层子i;
  子path内文件属性info 第30层子i;
  子path内文件属性info 第31层子i;
  子path内文件属性info 第32层子i;
  子path内文件属性info 第33层子i;
  子path内文件属性info 第34层子i;
  子path内文件属性info 第35层子i;
  子path内文件属性info 第36层子i;
  子path内文件属性info 第37层子i;
  子path内文件属性info 第38层子i;
  子path内文件属性info 第39层子i;
  子path内文件属性info 第40层子i;
  子path内文件属性info 第41层子i;
  子path内文件属性info 第42层子i;
  子path内文件属性info 第43层子i;
  子path内文件属性info 第44层子i;
  子path内文件属性info 第45层子i;
  子path内文件属性info 第46层子i;
  子path内文件属性info 第47层子i;
  子path内文件属性info 第48层子i;
  子path内文件属性info 第49层子i;
  子path内文件属性info 第50层子i;
  子path内文件属性info 第51层子i;
  子path内文件属性info 第52层子i;
  子path内文件属性info 第53层子i;
  子path内文件属性info 第54层子i;
  子path内文件属性info 第55层子i;
  子path内文件属性info 第56层子i;
public:

  path内文件属性info( ){ cout5( "struct", " ", "path内文件属性info", "()", "开始" ); coutEnd; 变量初始化( ); };
  path内文件属性info( string path ){ };
  void 子path内文件属性i等于path内文件属性i(/*!输入*//*!输出*/子path内文件属性info& 子pa内文属i ){
    子pa内文属i.path = path内文件属性info::path;
    子pa内文属i.vs子path = path内文件属性info::vs子path;
    子pa内文属i.vs文件名 = path内文件属性info::vs文件名;
    子pa内文属i.vi大小 = path内文件属性info::vi大小;
    子pa内文属i.vi类型 = path内文件属性info::vi类型;
    子pa内文属i.vi创建时间 = path内文件属性info::vi创建时间;
    子pa内文属i.vi修改时间 = path内文件属性info::vi修改时间;
    子pa内文属i.viTimeAccess = path内文件属性info::viTimeAccess;
    子pa内文属i.vi是否修改时间等于创建时间 = path内文件属性info::vi是否修改时间等于创建时间;
    子pa内文属i.vi是否修改时间等于TimeAccess = path内文件属性info::vi是否修改时间等于TimeAccess;
    子pa内文属i.vtt创建时间 = path内文件属性info::vtt创建时间;
    子pa内文属i.vtt修改时间 = path内文件属性info::vtt修改时间;
    子pa内文属i.vttTimeAccess = path内文件属性info::vttTimeAccess;
    ///子pa内文属i.   s间隔 =path内文件属性info::   s间隔 ;
    ///子pa内文属i.   s斜杠 =path内文件属性info::   s斜杠 ;
    子pa内文属i.文件夹数量 = path内文件属性info::文件夹数量;
    子pa内文属i.文件数量 = path内文件属性info::文件数量;
    子pa内文属i.隐藏文件数量 = path内文件属性info::隐藏文件数量;
    子pa内文属i.其余文件数量 = path内文件属性info::其余文件数量;
    子pa内文属i.vi创建时间 = path内文件属性info::vi创建时间;
  }/*void*/;
  void path内文件属性i等于子path内文件属性i(/*!输入*//*!输出*/子path内文件属性info& 子pa内文属i ){
    path内文件属性info::path = 子pa内文属i.path;
    path内文件属性info::vs子path = 子pa内文属i.vs子path;
    path内文件属性info::vs文件名 = 子pa内文属i.vs文件名;
    path内文件属性info::vi大小 = 子pa内文属i.vi大小;
    path内文件属性info::vi类型 = 子pa内文属i.vi类型;
    path内文件属性info::vi创建时间 = 子pa内文属i.vi创建时间;
    path内文件属性info::vi修改时间 = 子pa内文属i.vi修改时间;
    path内文件属性info::viTimeAccess = 子pa内文属i.viTimeAccess;
    path内文件属性info::vi是否修改时间等于创建时间 = 子pa内文属i.vi是否修改时间等于创建时间;
    path内文件属性info::vi是否修改时间等于TimeAccess = 子pa内文属i.vi是否修改时间等于TimeAccess;
    path内文件属性info::vtt创建时间 = 子pa内文属i.vtt创建时间;
    path内文件属性info::vtt修改时间 = 子pa内文属i.vtt修改时间;
    path内文件属性info::vttTimeAccess = 子pa内文属i.vttTimeAccess;
    ///path内文件属性info::   s间隔= 子pa内文属i.   s间隔 ;
    ///path内文件属性info::   s斜杠= 子pa内文属i.   s斜杠 ;
    path内文件属性info::文件夹数量 = 子pa内文属i.文件夹数量;
    path内文件属性info::文件数量 = 子pa内文属i.文件数量;
    path内文件属性info::隐藏文件数量 = 子pa内文属i.隐藏文件数量;
    path内文件属性info::其余文件数量 = 子pa内文属i.其余文件数量;
    path内文件属性info::vi创建时间 = 子pa内文属i.vi创建时间;
  }/*void*/;
  void 第1层子path内文件属性i等于path内文件属性info自身(/*!输入*//*!输出*/ ){
    子path内文件属性i等于path内文件属性i( 第1层子i );
  }/*void*/;
  /**///转换
  void getI类型TOs类型(/*!输入*/int i,/*!输出*/string& s ){
    switch( i ){
    default: s = "其余文件"; break;
    case(0):break;
    case(1):break;
    case(2):break;
    case(16):s = "文件夹"; break;
    case(32):s = "文档"; break;
    case(38):s = "隐藏文档"; break;
    }/*switch*/
  }/*void*/;
  void getPath内文件属性( /*!输入*/string path, 新s 斜杠/*在末尾*/ /*!输出*/ ){
    第0层子i.getPath内文件属性( path, 斜杠 );
    path内文件属性i等于子path内文件属性i( 第0层子i );
  }/*void*/;
}/*struct*/;
//历史记录info
struct 访问path的历史记录info :public 访问path的历史记录info的变量{


}/*访问path的历史记录info*/;
//>用来初始化<class 资源管理器>
struct 资源管理器info :public 资源管理器info的变量{
public/*struct*/:
  path内文件属性info p内文属i;
public:

}/*资源管理器info*/;

#endif

