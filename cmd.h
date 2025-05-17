#pragma once
#ifndef CMD_H 
#define CMD_H

//#include<E:\lib\预编译头文件 无其他.h>

#include  <E:\lib\define.h>
////#include<E:\lib\namespace\简写.h>
#include<E:\lib\头文件 c++.h>
//#include  <E:\lib\按键检测.h>
#include <E:\lib\文件读写.h>
#include  <E:\lib\窗口.h>
#include<E:\lib\类型转换.h>
///#include  <E:\lib\按键.h>
///#include  <E:\lib\鼠标.h>
//*
#include  <E:\lib\检测按键是否按下.h>

using namespace std;
//namespace cmd{
//}
//extern class 检测按键是否按下;
//extern int 按下;
#define struct_cmd cmd
#define structCmd cmd
/// class cmd :public 检测按键是否按下
struct cmd :public 检测按键是否按下, public 类型转换
  //*,public 窗口info ,public cmd窗口info
{
public:
  类型转换 vrh;
  前置计算_不使用前置变量 qmvi计算_不使用前置变量;
  前置计算 qmvi计算;
  //按键检测 按键检测1;
  /*cmd cmd1;*/
  窗口 idkb;
  时间 uijm;
  文件读写 wfjm读写;
  //文字读取 wfziduqu;
  /*?未知重写说明符*///*文件属性 wfjm属性;
public/*struct*/:
  ///
  /*!运行时*/
  窗口info idkbInfo;
  cmd窗口info cmd窗i;
public:
  const string 原行开始符 = "^";
  const string 原行结束符 = "&";
  string 行开始符 = "^";
  string 行结束符 = "&";
  string 行开始符跟0 = "^0";
  string 行开始符跟1 = "^1";
  string 行开始符跟2 = "^2";
  string 行开始符跟3 = "^3";
  string 行开始符跟4 = "^4";
  string 行开始符跟5 = "^5";
  string 行开始符跟6 = "^6";
  string 行开始符跟7 = "^7";
  string 行开始符跟8 = "^8";
  string 行开始符跟9 = "^9";
  struct 指令关键词{
    string cd = "cd", ren = "ren"
      , modeconcols = "mode con cols=", lines = " lines="
      , 指令 = ""
      ;
    string 行开始符 = "^";
    string 行结束符 = "&";
  };
  /**/;/*外观▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬*/

  /*设置*/
  /*记录*/
  COORD 之前的光标坐标;
  CONSOLE_SCREEN_BUFFER_INFO   记录CONSOLE_SCREEN_BUFFER_INFO;

  /*_CONSOLE_SCREEN_BUFFER_INFO*/
  _CONSOLE_SCREEN_BUFFER_INFO cmd屏幕缓冲区信息 {
  };
  /**/;//▬输出`设置▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
  ostringstream ostst;/*定向cout方向*/
  /*定向*/std::streambuf* pOldBuf;
public:
  /*static*/ const char* ccCr_lf = "\r\n";
public:
  cmd( ){
    ///cout7( "class"," ","<", "cmd",">","()" ,"开始" ); coutEnd;
    cout5( "class", " ", "cmd", "()", "开始" ); coutEnd;
  }/*(_)*/
  /**/;//>封装一层`胶水`AND▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
  void 禁止鼠标左键点ANDset字的大小( int 字的大小y ){
    禁止鼠标左键点( );
    set字的大小( 字的大小y );
  }/*void*/
  void set字的大小AND窗口尺寸( cmd窗口info& cmd窗口1 ){
    set字的大小( cmd窗口1.字的大小y );
    set窗口大小( cmd窗口1.窗口大小_字数y, cmd窗口1.窗口大小_字数x );
  }/*void*/
  /**/;//>▬Cmd属性▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
  /**/;//>getCmd属性
  /**/;//>setCmd属性
  void  例子_CONSOLE_SCREEN_BUFFER_INFO屏幕缓冲区信息( ){/*https://stackoverflow.com/questions/8578909/how-to-get-current-console-background-and-text-colors>*/
    HANDLE                      HANDLEconsole/*HandleConsole,HANDLEconsole*/;
    WORD                        WORDcmd属性/*WORDcurrentConsoleAttr,WORDc属*/;
    CONSOLE_SCREEN_BUFFER_INFO   CONSOLE_SCREEN_BUFFER_INFO屏幕缓冲区信息;
    ;
    //retrieve and save the current attributes
    HANDLEconsole = GetStdHandle( STD_OUTPUT_HANDLE );
    if( GetConsoleScreenBufferInfo( HANDLEconsole, &CONSOLE_SCREEN_BUFFER_INFO屏幕缓冲区信息 ) ){
      WORDcmd属性 = CONSOLE_SCREEN_BUFFER_INFO屏幕缓冲区信息.wAttributes;
    }/*if*/
     //change the attribute to what you like
    SetConsoleTextAttribute(
      HANDLEconsole,
      FOREGROUND_RED |
      FOREGROUND_GREEN );

    //set the ttribute to the original one
    SetConsoleTextAttribute(
      HANDLEconsole,
      WORDcmd属性 );
  }
  void get文字属性( ){ }
  void set文字属性( ){ }
  /*字可以,背景不可以*/ //todo 反动陈*/
  void set字的颜色( int 前, int 后 ){
    SetConsoleTextAttribute( retHstd输出( ), 前 | 后 );
  }/*void*/
   /*!下面2个没有用`的*/
  void forCXget最大CcmdX( short& 最大CcmdX ){/*get最大列坐标,get最大光标坐标的列,get最大CcmdX_forI加,forCcmdX加get最大CcmdX,get最大CcmdXForCcmdX加,get最大CcmdX_forCcmdX加,forGet最大CcmdX,forCget最大CcmdX,forCXget最大CcmdX*/
    //COORD
    //>寻找x上限,if( get<set ){ ret };
    for( short CX = 0; CX < 1400; CX++ ){
      set光标位置x( CX );
      get光标坐标( cmd窗i.上次c到的Ccmd1 );
      if( cmd窗i.上次c到的Ccmd1.X < CX ){
        最大CcmdX = cmd窗i.上次c到的Ccmd1.X;
        break;
      }/*if完*/
    }/*for完*/
  }
  short forCXret最大CcmdX( short& 最大CcmdX ){
    for( short CX = 0; CX < 1400; CX++ ){
      set光标位置x( CX );
      get光标坐标( cmd窗i.上次c到的Ccmd1 );
      if( cmd窗i.上次c到的Ccmd1.X < CX ){
        retu cmd窗i.上次c到的Ccmd1.X;
        break;
      }/*if完*/
    }/*for完*/
    retu cmd窗i.上次c到的Ccmd1.X;
  }
  void get最大CcmdX( short& 最大CcmdX ){/*get最大列坐标,get最大光标坐标的列*/
    //get字的大小
    ///get窗口大小
    set光标位置x( 140 );
    get光标坐标( cmd窗i.上次c到的Ccmd1 );
    if( cmd窗i.上次c到的Ccmd1.X < 140 ){
      最大CcmdX = cmd窗i.上次c到的Ccmd1.X;
      retu;
    }/*if完*/
  }
  short ret最大CcmdX( short& 最大CcmdX ){
    set光标位置x( 140 );
    get光标坐标( cmd窗i.上次c到的Ccmd1 );
    if( cmd窗i.上次c到的Ccmd1.X < 140 ){
      retu cmd窗i.上次c到的Ccmd1.X;
    }/*if完*/
    retu cmd窗i.上次c到的Ccmd1.X;
  }
  /*?cout后闪退`未处理的异常*/
  void get最大CcmdY( short& 最大CcmdY ){/*get最大列坐标,get最大光标坐标的列*/
    //COORD
    for( short i = 0; i < 140; i++ ){
      ///cout1( "get最大CcmdY\n" );/*然后才能*/
    }/*for完*/
    for( short i = 0; i < 140; i++ ){
      set光标位置y( i );
      get光标坐标( cmd窗i.上次c到的Ccmd1 );
      if( cmd窗i.上次c到的Ccmd1.Y < i ){
        最大CcmdY = cmd窗i.上次c到的Ccmd1.Y;
        break;
      }/*if完*/
    }/*for完*/
  }
  /*hwnd对了=可以*/
  void forCXget字像素X( 窗口info& 窗info ){   /*forCXget字像素X,forCxGet字像素X*/
    //get窗口像素宽度和最大列坐标--> 除以 = 字像素
    /*?有问题,不知道hwnd,怎么找到自身的窗口?*/
    /*?放while里=x对y不对; 最大CcmdY最大CcmdY*/
    idkb.get前台窗口info( 窗info );
    窗info.x窗口尺寸 = 窗info.tagRect.right - 窗info.tagRect.left;
    short 最大CcmdX = 0;
    forCXget最大CcmdX( 最大CcmdX );
    窗info.字像素X = 窗info.x窗口尺寸 / 最大CcmdX;
  }/*void*/
   //*
  void get字像素( cmd窗口info& cmd窗info, 窗口info& 窗info ){
    idkb.get前台窗口info( 窗info );
    /*todo 合并`cmd窗info.窗口大小_像素x*/
    窗info.x窗口尺寸 = 窗info.tagRect.right - 窗info.tagRect.left;
    窗info.y窗口尺寸 = 窗info.tagRect.bottom - 窗info.tagRect.top;
    short 最大CcmdX = cmd窗info.窗口大小_字数x, 最大CcmdY = cmd窗info.窗口大小_字数y;
    窗info.字像素X = 窗info.x窗口尺寸 / 最大CcmdX;
    窗info.字像素Y = 窗info.y窗口尺寸 / 最大CcmdY;
  }/*void*/
  void forCXget字像素( 窗口info& 窗info ){
    /*?有问题,不知道hwnd,怎么找到自身的窗口?*/
    /*?放while里=x对y不对; 最大CcmdY最大CcmdY*/
    idkb.get前台窗口info( 窗info );
    窗info.x窗口尺寸 = 窗info.tagRect.right - 窗info.tagRect.left;
    窗info.y窗口尺寸 = 窗info.tagRect.bottom - 窗info.tagRect.top;
    short 最大CcmdX = 0, 最大CcmdY = 0;
    forCXget最大CcmdX( 最大CcmdX );
    get最大CcmdY( 最大CcmdY );
    窗info.字像素X = 窗info.x窗口尺寸 / 最大CcmdX;
    窗info.字像素Y = 窗info.y窗口尺寸 / 最大CcmdY;
  }/*void*/;
  /**/;//▬设置`!外观▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
  void cmd外观设置( int 字大小, int  窗口y, int  窗口x ){
    set字的大小( 字大小 );
    set窗口大小( 窗口y, 窗口x );
  }/*void*/;
  void cd(/*新ccp ccp*/新s s ){
    新c c[141] = "cd ";
    for( size_t iS = 0, 列 = 7; iS < (s).size( ); iS++, 列++ ){
      c[列] = s[iS];
    }/*for*/
    system( c );
  }/*void*/;
  void set字的大小乘( int Y, int X ){ //<https://stackoverflow.com/questions/36590430/in-windows-does-setcurrentconsolefontex-change-consoles-font-size>
    HANDLE h控制台屏幕缓冲区 = CreateFileA( "CONOUT$", GENERIC_WRITE | GENERIC_READ,
      FILE_SHARE_WRITE, NULL, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, NULL );
    CONSOLE_FONT_INFOEX CONSOLE_字的信息 = { sizeof( CONSOLE_字的信息 ) };
    //用屏幕缓冲区的当前字体信息填充cfi
    GetCurrentConsoleFontEx( h控制台屏幕缓冲区, FALSE, &CONSOLE_字的信息 );
    //>变大
    CONSOLE_字的信息.dwFontSize.X *= X;
    CONSOLE_字的信息.dwFontSize.Y *= Y;
    //使用cfi设置屏幕缓冲区的新字
    SetCurrentConsoleFontEx( h控制台屏幕缓冲区, FALSE, &CONSOLE_字的信息 );
  }/*void*/;
  void set字的大小除以( int Y, int X ){ //<https://stackoverflow.com/questions/36590430/in-windows-does-setcurrentconsolefontex-change-consoles-font-size>
    HANDLE h控制台屏幕缓冲区 = CreateFileA( "CONOUT$", GENERIC_WRITE | GENERIC_READ,
      FILE_SHARE_WRITE, NULL, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, NULL );
    CONSOLE_FONT_INFOEX CONSOLE_字的信息 = { sizeof( CONSOLE_字的信息 ) };
    GetCurrentConsoleFontEx( h控制台屏幕缓冲区, FALSE, &CONSOLE_字的信息 );
    CONSOLE_字的信息.dwFontSize.X /= X;
    CONSOLE_字的信息.dwFontSize.Y /= Y;
    SetCurrentConsoleFontEx( h控制台屏幕缓冲区, FALSE, &CONSOLE_字的信息 );
  }/*void*/;
  void set字的大小( int Y, int X ){
    HANDLE h控制台屏幕缓冲区 = CreateFileA( "CONOUT$", GENERIC_WRITE | GENERIC_READ,
      FILE_SHARE_WRITE, NULL, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, NULL );
    CONSOLE_FONT_INFOEX CONSOLE_字的信息 = { sizeof( CONSOLE_字的信息 ) };
    //用屏幕缓冲区的当前字体信息填充cfi
    GetCurrentConsoleFontEx( h控制台屏幕缓冲区, FALSE, &CONSOLE_字的信息 );
    //>变大
    CONSOLE_字的信息.dwFontSize.X = X;
    CONSOLE_字的信息.dwFontSize.Y = Y;
    //使用cfi设置屏幕缓冲区的新字
    SetCurrentConsoleFontEx( h控制台屏幕缓冲区, FALSE, &CONSOLE_字的信息 );
  }/*void*/;
  void set字的大小乘( int 二合一 ){
    set字的大小乘( 二合一, 二合一 );
  }/*void*/;
  void set字的大小除以( int 二合一 ){
    set字的大小除以( 二合一, 二合一 );
  }/*void*/;
  void set字的大小( int 二合一 ){
    set字的大小( 二合一, 二合一 );
  }/*void*/;
  void 刷新( ){
    set字的大小( 0, 0 );
  }/*void*/;
  /**/;//>颜色▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
  /*16个数一组,最大255; 背景颜色+前景文字颜色: 0=黑+黑,2=黑贝绿字,7=黑+白,B=66=红+绿,176=背绿`文黑,177=绿+绿; */
  /*可以c(0+i)*/
  void set字色( int cmd颜色 ){/*改变输出的颜色，比system("color x")快得多*/ SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), cmd颜色 ); }/*void*/;
  int set颜色( int cmd颜色 ){
    set字色( cmd颜色 );
    return 0; //?
    ///背景色取值	颜色效果	前景色取值	颜色效果
    ///	0		黑色	 0 黑背景黑字	8		灰色
    ///	1		蓝色	 16	蓝背景黑字	9		淡蓝色 
    ///	2		绿色	 32				A		浅绿色 160开始,绿背景`黑字
    ///	3		浅蓝色 48=蓝色黑字	B		淡浅绿色 176
    ///	4		红色					C		淡白色 191
    ///	5		紫色					D		淡紫色
    ///	6		屎黄色				E		淡黄色
    ///	7		白色					F		亮白色
  }/*int*/;
  /*颜色判断; 这儿有`三种写法*/
  void 判断文字颜色ANDSet颜色(/*输入*/int 判定条件, int 颜色1, int 颜色2 ){
    if( 判定条件 == 0 ){
      set字色( 颜色1 );
    }/*if*/
    if( 判定条件 == 1 ){
      set字色( 颜色2 );
    }/*if*/
  }/*void*/;
  void 判断文字颜色ANDSet颜色(/*输入*/int 判定条件, 新vi 颜色 ){
    for( size_t i = 0; i < 颜色.size( ); i++ ){
      if( 判定条件 == i ){
        set字色( 颜色[i] );
      }/*if*/;
    }/*for*/
  }/*void*/;
  /*用`get文字属性( )`可以记录当前的颜色*/
  /**/;//>窗口▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
  /*可以3*32*/
  void set窗口大小( int 高, int 宽 ){
    //system("mode con cols=16 lines=4"); //8*4
    set窗口大小( vrh.TOs( 高 ), vrh.TOs( 宽 ) );
  }/*void*/
  void set窗口大小xy( int 宽, int 高 ){
    //system("mode con cols=16 lines=4"); //8*4
    set窗口大小( vrh.TOs( 高 ), vrh.TOs( 宽 ) );
  }/*void*/

   /*可以`6位数; s用来修改c*/
  void set窗口大小( 新s Y, 新s X ){
    char c命令[34] = "mode con cols=       lines=      ";
    for( size_t i = 0, 列 = 14; i < (X).size( ); i++, 列++ ){
      c命令[列] = X[i];
    }/*for*/
    for( size_t i = 0, 列 = 27; i < (Y).size( ); i++, 列++ ){
      c命令[列] = Y[i];
    }/*for*/
    system( c命令 );
  }/*void*/
   /*不行*/
  void set窗口名( LPCWSTR l窗口名 ){
    SetConsoleTitle( l窗口名 );
  }
  void set窗口名( const char* cc窗口名 ){//?乱码
    LPCWSTR L输入 = (LPCWSTR)cc窗口名;
    SetConsoleTitle( L输入 );
  }
  void set窗口名( const wchar_t cw窗口名 ){ //?访问错误
    LPCWSTR L输入 = (LPCWSTR)(const wchar_t)cw窗口名;
    SetConsoleTitle( L输入 );
  }
  /**/;//光标位置`坐标`cmd文字光标`下标`cout
  void get屏幕缓冲区信息( _CONSOLE_SCREEN_BUFFER_INFO& cmd屏幕缓冲区信息 ){
    /*PCONSOLE_SCREEN_BUFFER_INFO lpCmd屏幕缓冲区信息 = nullptr;*/
    GetConsoleScreenBufferInfo( retHstd输出( ), &cmd屏幕缓冲区信息 );
  }
  void get屏幕缓冲区信息( ){ get屏幕缓冲区信息( cmd屏幕缓冲区信息 ); }
  auto get光标位置( _CONSOLE_SCREEN_BUFFER_INFO& cmd屏幕缓冲区信息 ){
    get屏幕缓冲区信息( cmd屏幕缓冲区信息 );
  }
  /*=cmd屏幕缓冲区信息.dwCursorPosition.Y*/
  auto get光标位置( ){
    get屏幕缓冲区信息( cmd屏幕缓冲区信息 );
  }
  /*C = cmd屏幕缓冲区信息.dwCursorPosition*/
  void get光标位置( /*输出*/COORD& C ){ get屏幕缓冲区信息( cmd屏幕缓冲区信息 );    C = cmd屏幕缓冲区信息.dwCursorPosition;/*可以*/ /*///C.X = cmd屏幕缓冲区信息.dwCursorPosition.X; C.Y = cmd屏幕缓冲区信息.dwCursorPosition.Y;*/ }
  void get光标坐标( /*输出*/COORD& C ){ get光标位置( C ); }
  void getCcmd( /*输出*/COORD& C ){ get屏幕缓冲区信息( cmd屏幕缓冲区信息 );    C = cmd屏幕缓冲区信息.dwCursorPosition;/*可以*/ /*///C.X = cmd屏幕缓冲区信息.dwCursorPosition.X; C.Y = cmd屏幕缓冲区信息.dwCursorPosition.Y;*/ }
  /*?只会向下*/void set光标位置( COORD& C, SHORT Y, SHORT X ){ set光标位置yx( C, Y, X ); }/*void*/
  void set光标位置( SHORT Y, SHORT X ){ set光标位置yx( Y, X ); }/*void*/
  void set光标坐标(/*输入*/COORD& C ){ set光标位置( C/*.Y, C.X*/ ); }/*void*//*!可以*/
  void set光标坐标yx(/*输入*/COORD& C ){ set光标位置yx( C.Y, C.X ); }/*void*//*!可以*/
  /*?只会向下*/void set光标位置yx( COORD& C, SHORT Y, SHORT X ){ C = { X,		 Y };    SetConsoleCursorPosition( retHstd输出( ), C ); }
  void set光标位置yx( SHORT Y, SHORT X ){
    cmd窗i.Ccmd = {
      X,		 Y };
    SetConsoleCursorPosition( retHstd输出( )/*值	含义 https://learn.microsoft.com/zh-cn/windows/console/console-buffer-security-and-access-rights>
      GENERIC_READ (0x80000000L)		请求对控制台屏幕缓冲区的读取访问权限，使进程能够从缓冲区读取数据。
      GENERIC_WRITE (0x40000000L)	请求对控制台屏幕缓冲区的写权限，使进程能够将数据写入缓冲区。*/
      , cmd窗i.Ccmd );
  }
  void set光标位置( /*输入*/COORD& C ){ SetConsoleCursorPosition( retHstd输出( ), C ); }
  void setCcmd( /*输入*/COORD& C ){ SetConsoleCursorPosition( retHstd输出( ), C ); }
  void set光标位置xy( COORD& C, SHORT X, SHORT Y ){ set光标位置yx( C, X, Y ); }
  void set光标位置y( SHORT Y ){ cmd窗i.Ccmd.Y = Y; SetConsoleCursorPosition( retHstd输出( ), cmd窗i.Ccmd ); }
  void set光标位置y( /*输入*/COORD& C, SHORT Y ){ C.Y = Y; SetConsoleCursorPosition( retHstd输出( ), C ); }
  /*TODO 抛弃`Ccmd. 别用*/ void set光标位置x( SHORT X ){ cmd窗i.Ccmd.X = X;  SetConsoleCursorPosition( retHstd输出( ), cmd窗i.Ccmd ); }
  void set光标位置x( /*输入*/COORD& C, SHORT X ){ C.X = X; SetConsoleCursorPosition( retHstd输出( ), C ); }
  /**/;//▬输出`设置▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
  void 定向cout方向( ){
    pOldBuf = std::cout.rdbuf( ostst.rdbuf( ) );
  }
  void 取消定向cout方向( ){
    /*还原*/std::cout.rdbuf( pOldBuf );
  }
  void 定向后cout( ){
    cout << ostst.str( );
  }/*void*/
  /**/;//▬输入`限制`设置▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
  HWND rethwnd( ){/*2024年11月10日18:35:06*/
    retu  GetConsoleWindow( );
  }/*HWND*/
  void 屏蔽控制台最小按钮和关闭按钮( ){ /*<https://blog.csdn.net/weixin_40933560/article/details/122895394>*/
    HWND hwnd = GetConsoleWindow( );
    HMENU hmenu = GetSystemMenu( hwnd, false );
    /*屏蔽按钮*/RemoveMenu( hmenu, SC_CLOSE, MF_BYCOMMAND );
    LONG style = GetWindowLong( hwnd, GWL_STYLE );
    style &= ~(WS_MINIMIZEBOX);
    SetWindowLong( hwnd, GWL_STYLE, style );
    SetWindowPos( hwnd, HWND_TOP, 0, 0, 0, 0, SWP_NOMOVE | SWP_NOSIZE );
    ShowWindow( hwnd, SW_SHOWNORMAL );
    DestroyMenu( hmenu );
    ReleaseDC( hwnd, NULL );
  }/*void*/
   /**/
  void WaitEnter( HANDLE/*&*/ hStd输入 ){
    char c读取的缓冲区 = 0;
    DWORD read字节数;
    do{
      read字节数 = 0;
      ReadFile( hStd输入/*句柄*/, &c读取的缓冲区/*指向接收从文件或设备读取的数据的缓冲区的指针。|此缓冲区必须在读取操作期间保持有效。 在完成读取操作之前，调用方不得使用此缓冲区。*/, 1/*要读取的 最多字节数*/
        , &read字节数/*指针，该变量接收在使用同步 hFile 参数时读取的//%字节数。 ReadFile 在执行任何工作或错误检查之前将此值设置为零。|如果这是异步操作，请对此参数使用 NULL ，以避免潜在的错误结果。仅当 lpOverlapped 参数不为 NULL 时，此参数才能为 NULL。*/
        , NULL/*如果使用 FILE_FLAG_OVERLAPPED 打开 hFile 参数，则需要指向 OVERLAPPED 结构的指针，否则可为 NULL。|如果使用 FILE_FLAG_OVERLAPPED 打开 hFile，则 lpOverlapped 参数必须指向有效且唯一的 OVERLAPPED 结构，否则函数可能会错误地报告读取操作已完成。
        |对于支持字节偏移量的 hFile ，如果使用此参数，则必须指定从文件或设备开始读取的字节偏移量。 此偏移量是通过设置 OVERLAPPED 结构的 Offset和 OffsetHigh 成员指定的。 对于不支持字节偏移量的 hFile ， 将忽略 Offset和 OffsetHigh 。
        |有关lpOverlapped和 FILE_FLAG_OVERLAPPED的不同组合的详细信息，请参阅“备注”部分和 “同步和文件位置” 部分。*/ ); //<https://learn.microsoft.com/zh-cn/windows/win32/api/fileapi/nf-fileapi-readfile>
    } while( read字节数 && c读取的缓冲区 != '\n' ); //>不是换行-->读取
  }
  void WaitEnter( ){
    WaitEnter( retHstd输入( ) );
  }
  void 关闭快速编辑模式( ){
    SetConsoleMode( GetStdHandle( STD_INPUT_HANDLE/*-10*/ ), ENABLE_QUICK_EDIT_MODE/*128*/ ); //禁止鼠标点击 https://learn.microsoft.com/zh-cn/windows/console/setconsolemode> \ SetConsoleMode( _In_ HANDLE hConsoleHandle, _In_ DWORD  dwMode);
  }
  void 禁止鼠标左键点( ){/*https://blog.csdn.net/Think88666/article/details/122454956 */
    HANDLE hStdin = GetStdHandle( STD_INPUT_HANDLE );
    DWORD mode;
    GetConsoleMode( hStdin, &mode );
    mode &= ~ENABLE_QUICK_EDIT_MODE; //移除快速编辑模式
    mode &= ~ENABLE_INSERT_MODE; //移除插入模式
    mode &= ~ENABLE_MOUSE_INPUT;
    SetConsoleMode( hStdin, mode );
  }
  void 开启快速编辑模式( ){
    SetConsoleMode( GetStdHandle( STD_INPUT_HANDLE/*-10*/ ), ENABLE_QUICK_EDIT_MODE | ENABLE_EXTENDED_FLAGS ); //禁止鼠标点击
  }
#define 否禁止鼠标左键点 开启快速编辑模式
  void 不禁止鼠标左键点( ){
    开启快速编辑模式( );
  }/*void*/;
  /**/;//▬c指令▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
  void c一行字( 新i 颜色, 新i 后的颜色, 新s s1 ){/*2025年3月19日12:36:35*/    set颜色( 颜色 );  cout1( s1 );  cout1( "\n" ); set颜色( 后的颜色 ); }/*void*/;
  void c一行金色字黑色背景( 新i 后的颜色, 新s s1 ){ c一行字( 6, 后的颜色, s1 ); }/*void*/; void c一行金色字黑色背景( 新s s1 ){ c一行字( 6, 7, s1 ); }/*void*/;
  void c一行红色字金色背景( 新i 后的颜色, 新s s1 ){ c一行字( 100, 后的颜色, s1 ); }/*void*/;  void c一行红色字金色背景( 新s s1 ){ c一行字( 100, 7, s1 ); }/*void*/;
  /**/;//▬ccp拼接▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
  void getS从第几位开始等于s2(/*输入*/新i i初始的s位, 新s s2,/*输出*/新s& s, 新i& i结束的s位 ){/*getS变成adb杠s设备名*/
    int iS下标 = i初始的s位/*iCcp下标*/;
    for( size_t 位/*s2的位*/ = 0; 位 < ((string)s2).size( ); 位++, iS下标++ ){
      s[iS下标] = ((string)s2)[位];
    }/*for*/
    i结束的s位 = iS下标;
  }/*void*/;
  void getS从第几位开始等于s2(/*输入*/新s s2,/*输出*/新s& s1, 新i& i初始和结束的s位 ){/*getS变成adb杠s设备名*/
    getS从第几位开始等于s2( i初始和结束的s位, s2, s1, i初始和结束的s位 );
  }/*void*/;
  /**/;//▬指令▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
  ;//打开
  /// /*win*/{}/*win*/;
  void 打开资源管理器选项( ){ system( "control folders" ); }/*void*/;
  ;//nvidia-smi
#define nvidia杠smi空杠lgc nvidiaSmi修改核心频率
  void nvidiaSmi修改核心频率( 新s s频率 ){
    int iS下标 = 0/*iCcp下标*/;
    /*结果*/新s s指令( 140, ' ' );    新ccp ccp指令;
    getS从第几位开始等于s2( "nvidia-smi -lgc ",/*输出*/s指令, iS下标 );
    getS从第几位开始等于s2( s频率,/*输出*/s指令, iS下标 );
    s指令 = s指令.substr( 0, iS下标 );
    ccp指令 = retSTOccp( s指令 ); c一行红色字金色背景( ccp指令 ); system( ccp指令 );
  }/*void*/;
  void nvidiaSmiHelp( ){ system( "nvidia-smi --help" ); }/*void*/;
  void nvidiaSmi显示核心频率( ){ system( "nvidia-smi -q -d SUPPORTED_CLOCKS" ); }/*void*/;
  /**/;//▬指令,简写,模版,基础▬不能直接用▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
  void systemS1S2双引s3双引双引s4双引( /*输入*/新s s1, 新s s2, 新s s3, 新s s4/*输出*/ ){
    int iS下标 = 0/*iCcp下标*/;
    新s s指令; s指令.assign( 2800, NULL ); 新ccp ccp指令;
    getS从第几位开始等于s2( iS下标, s1, s指令, iS下标 );
    getS从第几位开始等于s2( iS下标, " ", s指令, iS下标 );
    if( s2 != "" ){/*s1有内容*/
      getS从第几位开始等于s2( iS下标, s2, s指令, iS下标 );
      getS从第几位开始等于s2( iS下标, " ", s指令, iS下标 );
    }/*if*/;
    if( s3 != "" ){/*s1有内容*/
      getS从第几位开始等于s2( iS下标, R"(")", s指令, iS下标 );
      getS从第几位开始等于s2( iS下标, s3, s指令, iS下标 );
      getS从第几位开始等于s2( iS下标, R"(")", s指令, iS下标 );
      getS从第几位开始等于s2( iS下标, " ", s指令, iS下标 );
    }/*if*/;
    if( s4 != "" ){/*s1有内容*/
      getS从第几位开始等于s2( iS下标, R"(")", s指令, iS下标 );
      getS从第几位开始等于s2( iS下标, s4, s指令, iS下标 );
      getS从第几位开始等于s2( iS下标, R"(")", s指令, iS下标 );
    }/*if*/;
    s指令 = s指令.substr( 0, iS下标 );
    ccp指令 = retSTOccp( s指令 );
    cout1( "指令={ " ); set颜色( 6 ); cout1( ccp指令 ); set颜色( 7 ); cout1( " };" ); coutEnd;
    system( ccp指令 );
  }/*void*/;
  void systemS1S2双引s3双引( /*输入*/新s s1, 新s s2, 新s s3/*输出*/ ){ systemS1S2双引s3双引双引s4双引( s1, s2, "", s3 ); }/*void*/;
  void systemS1双引s2双引双引s3双引( /*输入*/新s s1, 新s s2, 新s s3/*输出*/ ){ systemS1S2双引s3双引双引s4双引( s1, "", s2, s3 ); }/*void*/;
  void systemS1双引s2双引( /*输入*/新s s1, 新s s2/*输出*/ ){ systemS1S2双引s3双引双引s4双引( s1, "", "", s2 ); }/*void*/;
  void cdPath( /*输入*/新s path /*输出*/ ){ systemS1双引s2双引( "cd", path ); }/*void*/;
  //重命名,文件,文件夹
  void renameSPath1Path2( /*输入*/新s s1, 新s path1, string path2 /*输出*/ ){ systemS1S2双引s3双引双引s4双引( "rename", s1, path1, path2 ); }/*void*/;
  void renSPath1Path2( /*输入*/新s s1, 新s path1, string path2 /*输出*/ ){ systemS1S2双引s3双引双引s4双引( "ren", s1, path1, path2 ); }/*void*/;
#define copyS复制粘贴path copyS双引path1双引双引path2双引
  //copy{ 只复制子1层, 不复制文件夹 }
  void copyS双引path1双引双引path2双引( /*输入*/新s s, 新s path1, 新s path2/*输出*/ ){ systemS1S2双引s3双引双引s4双引( "copy", s, path1, path2 ); }/*void*/;
  void xcopyS复制粘贴path( /*输入*/新s s, 新s 复制path, 新s 粘贴path/*输出*/ ){ systemS1S2双引s3双引双引s4双引( "xcopy", s, 复制path, 粘贴path ); }/*void*/;
  void taskkillS1S2( /*输入*/新s s1, 新s s2/*输出*/ ){ systemS1S2双引s3双引( "taskkill", s1, s2 ); }/*void*/;
  //删除,文件
  void eraseSPath( /*输入*/新s s1, 新s path/*输出*/ ){ systemS1S2双引s3双引( "erase", s1, path ); }/*void*/;
#define 指令_del delSPath
  /*用\; 用/的例{ del用/{ 系统找不到指定的路径。 }; del \q用/{ 找不到 E:\q 系统找不到指定的路径。 } }*/
  void delSPath( /*输入*/新s s1, 新s path/*输出*/ ){ wfzi读取. get把s1的s2改成s3("/", "\\",path); systemS1S2双引s3双引( "del", s1, path ); }/*void*/;
  //删除,文件夹
  void rdS1Path( /*输入*/新s s1, 新s path/*输出*/ ){ systemS1S2双引s3双引( "rd", s1, path ); }/*void*/;
  void 指令_start( /*输入*/新s s1/*输出*/ ){ systemS1S2双引s3双引( "start", s1, "" ); }/*void*/;
  /**/;//▬指令,简写2▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
  文字读取  wfzi读取;// *文件读写 wfjm读写;
  //重命名,文件,文件夹; 名: path1TPath2;
  void 指令_rename( /*输入*/新s 输入p, string 输出p /*输出*/ ){ renameSPath1Path2( "", 输入p, 输出p ); }/*void*/;/*rename重命名path1变path2,rename重命名path1TOpath2,rename重命名path1TOPath2,rename重命名path1TPath2*/
  //copy,不复制子层
#define copy复制文件_不包含子层 copyKY复制粘贴path
#define copy复制文件 copyKY复制粘贴path
  /*copy /k/y=命令语法不正确。*/;//*
  void copyKY复制粘贴path( /*输入*/新s 复制path, 新s 粘贴path/*输出*/ ){ copyS复制粘贴path( "/k/y", 复制path, 粘贴path ); }/*void*/
  //xcopy,只能用\,反斜杠; 大概不是:path2( /后面不能有东西,否则提示你( 是f文件还是d文件夹 ) );
  /*不复制子目录*/
  void xcopyKY复制粘贴path( /*输入*/新s 复制path, 新s 粘贴path/*输出*/ ){ xcopyS复制粘贴path( "/k/y", 复制path, 粘贴path ); }/*void*/
  /*复制子目录*/
#define xcopy复制文件夹_包含子目录 xcopyKYE复制粘贴path
#define xcopyKYE复制粘贴 xcopyKYE复制粘贴path
#define xcopyKYE复制粘贴path1TPath2 xcopyKYE复制粘贴path
  //>/k 保留只读; /e 复制空文件夹;
  /*xcopy{ 复制p右不能斜杠, 粘贴p右都可 }; 指令{ xcopy /k/y/e "\文件名" "\文件夹\" }; 末尾是\=无效路径,末尾是`文件名=访问遭到拒绝; 复制文件夹=访问遭到拒绝*/
  void xcopyKYE复制粘贴path( /*输入*/新s 复制path, 新s 粘贴path/*输出*/ ){ xcopyS复制粘贴path( "/k/y/e", 复制path, 粘贴path ); }/*void*/;
  void xcopyE( /*输入*/新s 复制path, 新s 粘贴path/*输出*/ ){ xcopyS复制粘贴path( "/e", 复制path, 粘贴path ); }/*void*/;
  //删除,del
  void delPath( /*输入*/新s path/*输出*/ ){ delSPath( "", path ); }/*void*/
#define 删除path 指令_安静地删除
#define 删除文件 指令_安静地删除
  //?不删子文件夹
  void 指令_安静地删除( /*输入*/新s path/*输出*/ ){ delSPath( "/q", path ); }/*void*/;
  //删除,rd
  /*?不能用/, 右边有没有/都可以*/
  void rdSQPath( /*输入*/新s path/*输出*/ ){ rdS1Path( "/s/q", path ); }/*void*/
  //dir
  void dir( /*输入*//*输出*/ ){ systemS1双引s2双引( "dir", "" ); }/*void*/
  //taskkill
  void taskkillFImS( /*输入*/新s s/*输出*/ ){ taskkillS1S2( "/f/im", s ); }/*void*/
  /**/;//▬指令,简写3▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
  void 复制path1到path2( string path1, string path2 ){ xcopyKYE复制粘贴path( path1, path2 );/*可以*/ };/*void*/
  void 复制exe到path2( string exePath, string path2 ){
    if( /*最后3位=exe*/wfzi读取.ifS1最后是s2( exePath, "exe" ) ){
      /*c*////coutEnd; cout1( "ifS1最后是s2`是\n" );
      xcopyKYE复制粘贴path( exePath, path2 );/*可以*////sleep1400;
    }/*if*/;
  };/*void*/;
  /*?系统找不到指定的文件; 指令_cdARename()不能用*/
  /*cd{ /\都行,右可/; }*/
  void 指令_cdARename( /*!输入*/string cdP, string 旧文件名, string 新文件名 ){/*2025年4月22日03:02:36*/
    ///wfzi读取.get把s1的一位s2改成一位s3(  "/","\\",path )/*统一斜杠=\\*/;
    ///wfzi读取.确保s1最后一位是斜杠( 旧文件名 ); wfzi读取.确保s1最后一位是斜杠( 新文件名 );
    /// /*c*/cout1( "cd " ); cout1( path ); cout1( "\n" );
    /*c*/cout1( 旧文件名 ); cout1( "---重命名-->" ); cout1( 新文件名 ); cout1( "\n" );
    //*rename重命名path1TPath2( path2+文件名, path3 );
    cdPath( cdP );
    //*rename重命名path1TPath2( 文件名, 新文件名 );
    指令_rename( 旧文件名, 新文件名 ); ///sleep1400;
  }/*void*/;
  /*输入{ path1/exePath是文件,path2是文件夹 }; 复制后的exe重命名*/
  void 复制exe到path2A重命名为新文件名( /*!输入*/string 斜杠, string exePath, string path2, string 新文件名 ){
    if( /*最后3位=exe*/wfzi读取.ifS1最后是s2( exePath, "exe" ) ){
      xcopyKYE复制粘贴path( exePath, path2 );/*可以*////sleep1400;
      //if( path2是文件夹 ){
      /*get文件名*/struct_pathInfo pI( exePath ); string 文件名 = qmvi计算_不使用前置变量.retV最后一个元素( pI.vs每部分 );
      if( /*最后1位=斜杠*/wfzi读取.ifS1最后是s2( path2, 斜杠 ) ){
        /*c*/coutEnd; cout1( "path2最后1位=斜杠" ); cout1( "\n" );
      }/*if*/
      if( /*最后1位=斜杠*/wfzi读取.ifS1最后是s2( path2, 斜杠 ) != 1 ){
        /*c*/coutEnd; cout1( "path2最后1位不=斜杠" ); cout1( "\n" );
        wfzi读取.确保s1最后一位是s2( path2, 斜杠 );
      }/*if*/;
      /*!cdARename*/{ 指令_cdARename( path2, 文件名, 新文件名 ); }/*cdARename*/;
    }/*if*/;
  };/*void*/
  /*if本exe不在path2{ 复制exePath到path2 }A重命名为新文件名*/
  void if本exe不在path2Z复制exePath到path2A重命名为新文件名( /*!输入*/string 斜杠, string exePath, string path2, string 新文件名 ){
    cout1( "if本exe不在path2Z复制exePath到path2A重命名为新文件名()开始", "{ ", " }\n" ); coutEnd;
    string 本exePath = qmvi计算.retExe的父path( 斜杠 );
    int i结果; i结果 = wfzi读取.是否s1从第几位开始等于s2( 本exePath, 0, path2 );
    if( i结果 > 0 ){
      /*c*/cout1( "if本exe不在path2Z复制exe到path2A重命名为新文件名{ " ); cout1( "i结果=" ); cout1( i结果 ); cout1( " }" ); cout1( "\n" ); coutEnd;
      /*get文件名*/struct_pathInfo pI( exePath ); string 文件名 = qmvi计算_不使用前置变量.retV最后一个元素( pI.vs每部分 );
      /*!cdARename*/{ 指令_cdARename( path2, 文件名, 新文件名 ); }/*cdARename*/;
      ///sleep1000;
      retu;
    }/*if*/;
    if( /*最后3位=exe*/wfzi读取.ifS1最后是s2( exePath, "exe" ) ){
      xcopyKYE复制粘贴path( exePath, path2 );/*可以*////sleep1400;
      //if( path2是文件夹 ){
      /*get文件名*/struct_pathInfo pI( exePath ); string 文件名 = qmvi计算_不使用前置变量.retV最后一个元素( pI.vs每部分 );
      if( /*最后1位=斜杠*/wfzi读取.ifS1最后是s2( path2, 斜杠 ) ){
        /*c*/coutEnd; cout1( "path2最后1位=斜杠" ); cout1( "\n" );
      }/*if*/
      if( /*最后1位=斜杠*/wfzi读取.ifS1最后是s2( path2, 斜杠 ) != 1 ){
        /*c*/coutEnd; cout1( "path2最后1位不=斜杠" ); cout1( "\n" );
        wfzi读取.确保s1最后一位是s2( path2, 斜杠 );
      }/*if*/
      /*!cdARename*/{ 指令_cdARename( path2, 文件名, 新文件名 ); }/*cdARename*/;
      ///sleep1000;
    }/*if*/
    cout1( "if本exe不在path2Z复制exePath到path2A重命名为新文件名()结束", "{ ", " }\n" ); coutEnd;
  };/*void*/
  void if本exe不在path2Z复制exePath到path2A重命名为新文件名( /*!输入*/string 初始粘贴到path, string 新文件名 ){ if本exe不在path2Z复制exePath到path2A重命名为新文件名( "\\", qmvi计算_不使用前置变量.retExePath( ), 初始粘贴到path, 新文件名 ); };/*void*/
  //下面的没试*
  void 复制path1的某类文件到path2( string 斜杠, string 后缀名, string path1, string path2 ){/*get文件名*/子path内文件属性info 子pI/*子Pi*/; 子pI.getPath内文件属性( path1, 斜杠 ); for( size_t 行 = 0; 行 < 子pI.vs文件名.size( ); 行++ ){ if( /*最后3位=exe*/wfzi读取.ifS1最后是s2( 子pI.vs文件名[行], 后缀名 ) ){ xcopyKYE复制粘贴path( 子pI.vs子path[行], path2 ); }/*if*/ }/*for*/ };/*void*/
  /*retu{ r1=达到数量,r2=复制的文件不够; };**/
  int 复制path1的某类文件到path2( string 斜杠, string 后缀名, int 要操作的最大文件数量, string path1, string path2 ){
    新i 操作文件数 = 0; 新i 是否复制了文件 = 0;/*get文件名*/子path内文件属性info 子pI/*子Pi*/; 子pI.getPath内文件属性( path1, 斜杠 ); for( size_t 行 = 0; 行 < 子pI.vs文件名.size( ); 行++ ){
      if( /*最后3位=exe*/wfzi读取.ifS1最后是s2( 子pI.vs文件名[行], 后缀名 ) ){ xcopyKYE复制粘贴path( 子pI.vs子path[行], path2 ); 是否复制了文件 = 1, 操作文件数++; if( 操作文件数 >= 要操作的最大文件数量 ){ retu 1; }/*if*/ }/*if*/
    }/*for*/if( 是否复制了文件 ){ retu 1; } else{ retu 0; }/*else*/
  };/*int*/
  int 复制path1的某类文件到path2( string 斜杠, string 后缀名, string path1, string path2,/*!输出*/新i& 操作文件数 ){
    新i 是否复制了文件 = 0;/*get文件名*/子path内文件属性info 子pI/*子Pi*/; 子pI.getPath内文件属性( path1, 斜杠 ); for( size_t 行 = 0; 行 < 子pI.vs文件名.size( ); 行++ ){
      if( /*最后3位=exe*/wfzi读取.ifS1最后是s2( 子pI.vs文件名[行], 后缀名 ) ){ xcopyKYE复制粘贴path( 子pI.vs子path[行], path2 ); 是否复制了文件 = 1, 操作文件数++;/*if*/ }/*if*/
    }/*for*/if( 是否复制了文件 ){ retu 1; } else{ retu 0; }/*else*/
  };/*int*/
  void 复制path1的一个某类文件到path2A重命名为path3( string 斜杠, string 后缀名, string path1, string path2, string path3 ){
    /*get文件名*/子path内文件属性info 子pI/*子Pi*/; 子pI.getPath内文件属性( path1, 斜杠 );
    for( size_t 行 = 0; 行 < 子pI.vs文件名.size( ); 行++ ){
      if( /*最后3位=exe*/wfzi读取.ifS1最后是s2( 子pI.vs文件名[行], 后缀名 ) ){
        xcopyKYE复制粘贴path( 子pI.vs子path[行], path2 ); wfzi读取.确保s1最后一位是s2( path2, 斜杠 ); 指令_rename( path2 + 子pI.vs文件名[行], path3 );
      }/*if*/;
    }/*for*/;
  };/*void*/
  void 复制path1的exe到path2( string 斜杠, string path1, string path2 ){ 复制path1的某类文件到path2( 斜杠, "exe", path1, path2 ); };/*void*/
  void 复制path1的一个exe到path2A重命名为path3( string 斜杠, string path1, string path2, string path3 ){ 复制path1的一个某类文件到path2A重命名为path3( 斜杠, "exe", path1, path2, path3 ); };/*void*/;
  /**/;//▬指令,简写4▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
  void 指令_重启资源管理器( ){ taskkillFImS( "explorer" ); 指令_start( "explorer" ); };/*void*/;
  /**/;//▬功能,简写▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
  void 指令( const char* 指令 ){ system( 指令 ); }
  void 指令( string 指令 ){ system( vrh.TCcp( 指令 ) ); }
  void 清屏( ){ system( "cls" ); }
  auto 取消同步( ){
    ios::sync_with_stdio( false ); //取消同步 \ 这个函数是一个“是否兼容stdio”的开关，C++为了兼容C，保证程序在使用了std::printf和std::cout的时候不发生混乱，将输出流绑到了一起 \ https://blog.csdn.net/u014665013/article/details/70521300 
    cin.tie( 0 );
    cout.tie( 0 );
  }
  void 退出( ){
    HANDLE h控制台屏幕缓冲区 = CreateFileA( "CONOUT$", GENERIC_WRITE | GENERIC_READ,
      FILE_SHARE_WRITE, NULL, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, NULL );
    CloseHandle( h控制台屏幕缓冲区 );
  }
  HANDLE retHstd输出( ){ return GetStdHandle( STD_OUTPUT_HANDLE/*-11*/ ); }
  HANDLE retHstd输入( ){ return GetStdHandle( STD_INPUT_HANDLE/*-10*/ ); }
  /*需要`管理员权限*/
  void 新建文件夹_md( 新s path ){ vrh.TOccp( ".md " + path ); }
  void 新建文件夹_mkdir( 新s path ){ vrh.TOccp( "sudo mkdir " + path ); }
  void cou( int uu ){/*R"(s)"*/
    cout1( uu );
  }
  void runas打开path( string 用户组, string path ){
    string 指令头 = "explorer.exe ";
    string 指令 = 指令头 + '"' + path/*.c_str()*/ + '"';
    system( 指令.c_str( ) );
  }
  void 管理员打开path( string path ){
    string 指令头 = R"(runas /trustlevel:0x40000 )";
    string 指令 = 指令头 + R"(")" + path + R"(")";;
    ///string 指令头 = "runas /trustlevel:0x40000 ";
    ///string 指令 = 指令头 +  '"' + path +  '"';;
    system( 指令.c_str( ) );
  }
  void 管理员权限_打开path( string path ){
    管理员打开path( path );
  }
  void 打开path_管理员权限( string path ){
    管理员打开path( path );
  }
  /*?必须用\,不能/*/
  void explorer点exe加path( string path ){ //<https://blog.csdn.net/springontime/article/details/19967243>
    string 指令头 = "explorer.exe ";
    string 指令 = 指令头 + '"' + path/*.c_str()*/ + '"';
    system( 指令.c_str( ) );
  }
  void 打开path( string path ){
    explorer点exe加path( path );
  }
  /*start "" "path"*/
  void 用start打开path( string path ){
    string 指令头 = R"(start "" )";
    string 指令 = 指令头 + '"' + path/*.c_str()*/ + '"';
    system( 指令.c_str( ) );
  }/*void*/
  void start封装( string path ){
    string 指令头 = R"(start "" )";
    string 指令 = 指令头 + '"' + path/*.c_str()*/ + '"';
    system( 指令.c_str( ) );
  }
  void start封装( string 内容1, string 内容2 ){
    string 指令头 = R"(start "" )";
    string 指令 = 指令头 + '"' + 内容1/*.c_str()*/ + '"' + " " + '"' + 内容2/*.c_str()*/ + '"';
    system( 指令.c_str( ) );
  }
  /**/;//▬缓冲区,简写▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
  void 写入( HANDLE hStd输出, char& c写入内容, int 写入的字节数 ){
    DWORD num_written字节数;
    WriteFile( hStd输出, &c写入内容, 写入的字节数/*要写入文件或设备的字节数*/, &num_written字节数/*指向变量的指针，该变量接收使用同步 hFile 参数时写入的字节数。|WriteFile 在执行任何工作或错误检查之前将此值设置为零。 如果这是异步操作，请对此参数使用 NULL ，以避免潜在的错误结果。*/
      , NULL/*如果使用 FILE_FLAG_OVERLAPPED 打开 hFile 参数，则需要指向 OVERLAPPED 结构的指针，否则此参数可以为 NULL。|对于支持字节偏移量的 hFile ，如果使用此参数，则必须指定开始写入文件或设备的字节偏移量。 此偏移量是通过设置 OVERLAPPED 结构的 Offset和 OffsetHigh 成员指定的。 对于不支持字节偏移量的 hFile ， 将忽略 Offset和 OffsetHigh 。
      |若要写入文件末尾，请将 OVERLAPPED 结构的 Offset和 OffsetHigh 成员指定为0xFFFFFFFF。 这在功能上等效于之前调用 CreateFile 函数以使用FILE_APPEND_DATA访问打开 hFile。
      |有关 lpOverlapped和 FILE_FLAG_OVERLAPPED的不同组合的详细信息，请参阅“备注”部分和 “同步和文件位置” 部分。*/ ); /*<https://learn.microsoft.com/zh-cn/windows/win32/api/fileapi/nf-fileapi-writefile>*/
  }
  void 写入( char& c写入内容, int 写入的字节数 ){
    //读取(GetStdHandle(STD_INPUT_HANDLE), c读取的缓冲区, 读取的字节数);
    写入( GetStdHandle( STD_OUTPUT_HANDLE ), c写入内容, 写入的字节数 );
  }/*char*/
  void 循环ReadFile( HANDLE hStd输入, char& c读取的缓冲区, int 读取的字节数 ){
    DWORD read字节数;
    do{
      read字节数 = 0;
      ReadFile( hStd输入/*句柄*/, &c读取的缓冲区/*指向接收从文件或设备读取的数据的缓冲区的指针。|此缓冲区必须在读取操作期间保持有效。 在完成读取操作之前，调用方不得使用此缓冲区。*/
        , 读取的字节数/*要读取的 最多字节数*/
        , &read字节数/*指针，该变量接收在使用同步 hFile 参数时读取的//%字节数。 ReadFile 在执行任何工作或错误检查之前将此值设置为零。|如果这是异步操作，请对此参数使用 NULL ，以避免潜在的错误结果。仅当 lpOverlapped 参数不为 NULL 时，此参数才能为 NULL。*/
        , NULL/*如果使用 FILE_FLAG_OVERLAPPED 打开 hFile 参数，则需要指向 OVERLAPPED 结构的指针，否则可为 NULL。|如果使用 FILE_FLAG_OVERLAPPED 打开 hFile，则 lpOverlapped 参数必须指向有效且唯一的 OVERLAPPED 结构，否则函数可能会错误地报告读取操作已完成。
        |对于支持字节偏移量的 hFile ，如果使用此参数，则必须指定从文件或设备开始读取的字节偏移量。 此偏移量是通过设置 OVERLAPPED 结构的 Offset和 OffsetHigh 成员指定的。 对于不支持字节偏移量的 hFile ， 将忽略 Offset和 OffsetHigh 。
        |有关lpOverlapped和 FILE_FLAG_OVERLAPPED的不同组合的详细信息，请参阅“备注”部分和 “同步和文件位置” 部分。*/ ); //<https://learn.microsoft.com/zh-cn/windows/win32/api/fileapi/nf-fileapi-readfile>
    } while(/*读到了内容*/read字节数 && c读取的缓冲区 != '\n' ); //>不是换行-->读取
  }
  void 读取( HANDLE hStd输入, char& c读取的缓冲区, int 读取的字节数 ){
    DWORD read字节数; read字节数 = 0;
    ReadFile( hStd输入, &c读取的缓冲区, 读取的字节数, &read字节数, NULL );
  }
  //?不起作用
  /*等待输入and替换*/
  char 输入and替换( int 读取的字节数 ){
    DWORD read字节数;
    char c读取的缓冲区 = 0;
    读取( GetStdHandle( STD_INPUT_HANDLE ), c读取的缓冲区, 读取的字节数 );
    retu c读取的缓冲区;
  }/*char*/
  void ReadConsoleOutputCharacter简写( int Y, int 字数, TCHAR 读取到 ){

    { }/*读取进来*/; COORD 坐标; DWORD NumberOfCharsRead; LPDWORD lpNumberOfCharsRead = &NumberOfCharsRead; 坐标.Y = Y, 坐标.X = 0;
    ReadConsoleOutputCharacter( GetStdHandle( STD_OUTPUT_HANDLE ), &读取到, 字数, 坐标, lpNumberOfCharsRead ); /*https://learn.microsoft.com/zh-cn/windows/console/readconsoleoutputcharacter*/
  }
  TCHAR  ret读取( int Y, int 字数 ){
    TCHAR  读取的缓冲区 = 0;
    ReadConsoleOutputCharacter简写( Y, 字数, 读取的缓冲区 );
    retu 读取的缓冲区;
  }/*TCHAR */
  void 读console( ){
    //ReadConsole /*从控制台输入缓冲区读取字符输入，并将其从缓冲区删除。https://learn.microsoft.com/zh-cn/windows/console/readconsole>*/
  }
  /**/;/**/;//▬界面`控制光标▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
  /*往右下角`变大*/
  int /*长按*/本次按下是否生效 = 0;
  //新vi /*长按*/本次按下是否生效;
  void 按下键控制cmd光标( int 键码, short 下移, short 右移, COORD& C ){
    ///之前和现在相等( 键码 ); //-->重新检测`现在的
    if( 现在[键码] == 1 ){ //if按下
      get光标位置( C ); C = { C.X + 右移,C.Y + 下移 };//?容易搞反 C={ C.Y + 下移, C.X + 右移};
      set光标坐标( C );
      /*?为什么这儿会出问题？*///*set光标位置(C,C.Y + 下移, C.X + 右移 );
                     /*看看有没有用*//*?sleep1000只是闪一下,sleep10000没反应*///清屏();sleep10000;  cout1("set了光标位置");coutEnd;sleep1000;
      ///if(/*长按*/之前[键码] == 1 ){
      ///}/*if*/
    } else{
      /*!写错位置了*/
    }/*else*/
  }/*void*/
  void 弹起键控制cmd光标( int 键码, short 下移, short 右移, COORD& C ){
    ///之前和现在相等( 键码 ); //-->重新检测`现在的
    if( 现在[键码] == 0 and 之前[键码] == 1 ){ //if弹起
      get光标位置( C ); C = { C.X + 右移,C.Y + 下移 };
      set光标坐标( C );
    }/*if*/
  }/*void*/
   /*todo*/
  void 按下键控制cmd光标2( int 键码, short 下移, short 右移, COORD& C ){
    /*todo*////之前和现在相等( 键码 ); //-->重新检测`现在的
    if( 现在[键码] == 1 ){
      get光标位置( C ); C = { C.X + 右移,C.Y + 下移 };
      set光标坐标( C );
      /*看看有没有用*//*?sleep1000只是闪一下,sleep10000没反应*///清屏();sleep10000;  cout1("set了光标位置");coutEnd;sleep1000;
      if(/*是否生效*/之前[键码] == 1 ){
        set光标位置( C, C.Y + 下移, C.X + 右移 );
      }/*if*/
      本次按下是否生效 = 1;
    }/*if*/
    if( 之前[键码] == 1 ){/*长按*/
      if(/*是否生效,坐标是否变化,if 现在=之前*/ C.Y == 之前的光标坐标.Y ){

      }/*if*/
    }/*if*/
  }/*void*/
  void 弹起键控制cmd光标2( int 键码, short 下移, short 右移, COORD& C ){
    /*todo*////之前和现在相等( 键码 ); //-->重新检测`现在的
    if( 之前[键码] == 1 and 现在[键码] == 0 ){/*弹起*/
      get光标位置( C ); C = { C.X + 右移,C.Y + 下移 };
      set光标坐标( C );
      /*看看有没有用*//*?sleep1000只是闪一下,sleep10000没反应*///清屏();sleep10000;  cout1("set了光标位置");coutEnd;sleep1000;
      if(/*是否生效*/之前[键码] == 1 ){
        set光标位置( C, C.Y + 下移, C.X + 右移 );
      }/*if*/
      本次按下是否生效 = 1;
    }/*if*/
    if( 之前[键码] == 1 ){/*长按*/
      if(/*是否生效,坐标是否变化,if 现在=之前*/ C.Y == 之前的光标坐标.Y ){

      }/*if*/
    }/*if*/
  }/*void*/
  void if4个方向键按下移动cmd光标( short 下移, short 右移, COORD& C ){
    按下键控制cmd光标( VK_UP, -下移, 0, C );/*键按下控制cmd光标*/
    按下键控制cmd光标( VK_DOWN, 下移, 0, C );
    按下键控制cmd光标( VK_LEFT, 0, -右移, C );
    按下键控制cmd光标( VK_RIGHT, 0, 右移, C );
  }/*void*/
  void if4个方向键弹起移动cmd光标( short 下移, short 右移, COORD& C ){
    弹起键控制cmd光标( VK_UP, -下移, 0, C );
    弹起键控制cmd光标( VK_DOWN, 下移, 0, C );
    弹起键控制cmd光标( VK_LEFT, 0, -右移, C );
    弹起键控制cmd光标( VK_RIGHT, 0, 右移, C );
  }/*void*/
  void ifESDF键按下移动cmd光标( short 下移, short 右移, COORD& C ){
    按下键控制cmd光标( 'E', -下移, 0, C );/*键按下控制cmd光标*/
    按下键控制cmd光标( 'D', 下移, 0, C );
    按下键控制cmd光标( 'S', 0, -右移, C );
    按下键控制cmd光标( 'F', 0, 右移, C );
  }/*void*/
  void ifESDF键弹起移动cmd光标( short 下移, short 右移, COORD& C ){
    弹起键控制cmd光标( 'E', 下移, 0, C );
    弹起键控制cmd光标( 'D', 下移, 0, C );
    弹起键控制cmd光标( 'S', 0, -右移, C );
    弹起键控制cmd光标( 'F', 0, 右移, C );
  }/*void*/
  void 方向键控制cmd光标( short 下移, short 右移, COORD& C ){ }/*void*/
  /*默认*/void if4个方向键弹起移动cmd光标( COORD& C ){ if4个方向键弹起移动cmd光标( 2, 1, C ); }/*void*/
  /**/;//▬界面`小组件▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
  void cout光标yx( COORD COORD1 ){
    cout << std::format( "光标 Y={},X={}\n", COORD1.Y, COORD1.X );
  }
  void cout光标yx( ){
    get光标位置( ); cout << std::format( "光标 Y={},X={}\n", cmd屏幕缓冲区信息.dwCursorPosition.Y, cmd屏幕缓冲区信息.dwCursorPosition.X );
  }
  void cout光标xy( ){
    get光标位置( ); cout << std::format( "光标 Y={},X={}\n", cmd屏幕缓冲区信息.dwCursorPosition.X, cmd屏幕缓冲区信息.dwCursorPosition.Y );
  }
  /**/;//▬杂项▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
  void 使用powershell( ){ //https://stackoverflow.com/questions/55037943/how-should-c-execute-the-powershell-command>
    ofstream ofs指令;
    ofs指令.open( "test.ps1" );
    /**/
    string newArg = "-auto";
    string strPpowershell指令;
    strPpowershell指令 = "$task = Get-ScheduledTask \"Test\"\n";
    strPpowershell指令 += "$items = @{}\n";
    strPpowershell指令 += "if ($task.Actions.Execute -ne $null) {$items.Add('Execute', \"$($task.Actions.Execute)\")} \n";
    strPpowershell指令 += "$items.Add('Argument', \"$($task.Actions.Arguments) " + newArg + "\") \n"; // 'Argument' not a typo
    strPpowershell指令 += "if ($task.Actions.WorkingDirectory -ne $null) {$items.Add('WorkingDirectory',\"$($task.Actions.WorkingDirectory)\")} \n";
    strPpowershell指令 += "$action = New-ScheduledTaskAction @items\n";
    strPpowershell指令 += "$task.Actions = $action\n";
    strPpowershell指令 += "Set-ScheduledTask -InputObject $task\n";
    ofs指令 << strPpowershell指令 << endl;
    ofs指令.close( );

    system( "powershell -ExecutionPolicy Bypass -F test.ps1" );

    remove( "test.ps1" );
  }
  /**/;//▬我不知道▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
  auto 改字体( ){
    _COORD COORDp; COORDp.X = 20; COORDp.Y = 10;
    _CONSOLE_FONT_INFOEX CONSOLE_FONT_INFOEX; //<https://learn.microsoft.com/zh-cn/windows/console/console-font-infoex>
    _CONSOLE_FONT_INFOEX* CONSOLE_FONT_INFOEXp = &CONSOLE_FONT_INFOEX;
    CONSOLE_FONT_INFOEXp->cbSize = 1400; //此结构的大小 字节
    CONSOLE_FONT_INFOEXp->nFont = 14; //系统控制台字体表中字体的索引
    CONSOLE_FONT_INFOEXp->dwFontSize = COORDp; //COORD <https://learn.microsoft.com/zh-cn/windows/console/coord-str>结构，包含字体中每个字符的宽度和高度（以逻辑单元为单位）。 X 成员包含宽度，而 Y 成员包含高度。
    CONSOLE_FONT_INFOEXp->FontFamily = 14; //字体间距和系列
    CONSOLE_FONT_INFOEXp->FontWeight = 400; //粗细范围为 100 到 1000，按 100 的倍数表示。 例如，正常粗细为 400，而 700 为粗体
    CONSOLE_FONT_INFOEXp->FaceName[LF_FACESIZE] = 14; //字样的名称（如 Courier 或 Arial）。
    SetCurrentConsoleFontEx(
      GetStdHandle( -10 )
      , FALSE
      , CONSOLE_FONT_INFOEXp
    ); //<https://learn.microsoft.com/zh-cn/windows/console/setcurrentconsolefontex>
  }
  /**/;//▬简写c▬简写cout▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
  /**/;//>c注释`旧版
  /**/;//▬附加功能▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬

};




#endif