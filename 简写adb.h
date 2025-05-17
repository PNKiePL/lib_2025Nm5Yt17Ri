#pragma once
#ifndef 简写adb_H 
#define 简写adb_H

using namespace std;
//extern int 按下;
/*
vs选项,vi选项颜色;
选择一项-->if (vs选项[][]=""){}
*/
#define 简写adb struct_简写adb
struct struct_简写adb :public 文件属性{/* //*:public cmd窗口界面不用文件vs*/
public:
  /*!ikde`抄的{*/
  //using
  前置cout qmviC;
  //前置计算 qmvi计算;
  类型转换 lzxy转换;
  //cmd cmd1;
  //文字读取 wfzi读取;
  文件读写 wfjm读写;
  时间 uijm;/*uijm*/
  窗口 idkb;
  检测按键是否按下 jmce按键是否按下;
  鼠标 uubc;
  //*用地址计算 ysdi址计算;
  数N分<int, 4> 数4分i;
  数N分<long, 4> 数4分l;
  按键 anjm;
  /**/;//记录`窗口信息
  HWND 窗口hwnd;
  HDC 窗口hdc;
  HDC create窗口hdc;
  HBITMAP create窗口map;
  BITMAPINFO bitmap信息;
  COORD 鼠标坐标;

  /**/;//>记录
  int i;
  /*文件结构:
  v2i:
  *    x0 x1 x2 x3 x4 x5 x6 x7 x8 x9 x0 x11 x12 x13 x14 x15 x16 x17 x18 x19 x20 x21 x22 x23 x24 x25 x26 x27 x28
  * y0
  * y1
  * y2
  */
  /*文件结构:
  v2i结构{
  列0 列1 列2 列3 列4 列5 列6 列7 列8 列9 列0 列11 列12 列13 列14 列15 列16 列17 列18 列19 列20 列21 列22 列23 列24 列25 列26 列27 列28
  行0
  行1
  行2
  }
  */
  /*文件结构:
  v2i:
  *    列零 列一 列2 列3 列4 列5 列6 列7 列8 列9 列0 列11 列12 列13 列14 列15 列16 列17 列18 列19 列20 列21 列22 列23 列24 列25 列26 列27 列28
  * 行零
  * 行一
  * 行二
  */
  新v2i v2i;
  //cout(v2i[行][列],"\n");
  /**/;//记录时间
  SYSTEMTIME 程序开始运行的时间;
  SYSTEMTIME 上次操作的时间, 现在的时间,/*备份_现在的时间,*/上次的_现在的时间;
  时间info 时间差, 上次的_时间差;

  /**/;//模拟人脑单线程`在想什么
  vector<int > vi前景色;
  vector<int > vi背景色;
  int 前景色数量, 背景色数量;

  /**/;//文件`写入
  新fs fs文件, fs日志;
  新s path, 日志path;

  struct struc{
    新vi vi;
    int i = 0;
    struc( ){
      vi.assign( 7, 0 );
    }/*()*/
  };
  /**/;//>设置
  /*不用改,不用看*/
  int 是否c指令 = 1/*是否c命令*/
    , 是否cPath = 0, 是否cS = 0, 是否cS输入 = 0, 是否cS1 = 0, 是否cS2 = 0, 是否cS3 = 0, 是否cS4 = 0,/*不用*/forVs来getpathTOvs_path接path是否cVs = 0;
  新i 技术;
  float 倍率;
  /*}!ikde`抄的*/
public:
  //classjisr;
  前置计算_不使用前置变量 qmvi计算_不使用前置变量;
  前置计算 qmvi计算;
  前置cout qmviCout;
  cmd cmd1;
  文字读取  wfzi读取;
  //*cmd窗口界面_小组件 cmdIdkb界面_小组件;
public:
  //>设置`cout

  //>设置`操作

  /**/;//>记录*/
  /*设备名*/
  新vs vs设备名 = { "811efd44"/*vXP6_2024年12月11日*/
    ,"3cff9f10"/*vXP6旧的*/
    ,"VSBAW4JJU4MFE6AA"
    ,"65364a3b"/*vX7P,vivoX7P,VivoX7P*/
    ,"CB512FWSW7"/*sXperiaXZ2P*/ };
  新s  vXP6_2 = "811efd44"/*vXP6_2024年12月11日*/
    , vXP6 = "3cff9f10"/*vXP6旧的*/
    , vX5PD = "VSBAW4JJU4MFE6AA"
    , VX7P = "65364a3b"/*vX7P,vivoX7P,VivoX7P*/
    , SXperiaXZ2P = "CB512FWSW7"/*sXperiaXZ2P*/
    ;
  /**/;//!运行时
  struct 运行时info{
    新s 设备名 = ""/*当前*/, 上一个设备名 = ""
      ;
  };

public:
  struct_简写adb( ){ }/*( )*/;
  struct_简写adb( int argc, char* argv[] ){
    ///*vivoXPlay6 2024年12月11日*/
    //811efd44
    ///*vivoX5PD 2024年12月7日*/
    //VSBAW4JJU4MFE6AA
    ///*vivoX7P*/
    //65364a3b
  }/*( )*/;
  //vs顶部 push 名称 时间
  void vs顶部工具栏pushB( 新vs& v ){
    v.push_back( "名称" );
    v.push_back( "修改日期" );
    v.push_back( "类型" );
    v.push_back( "大小" );
    retu;/*完*/
  }/*void*/;
  int 运行s对应的操作( 运行时info& 运行时, string& s, string& 运行了哪个class ){
    运行了哪个class = "简写adb";
    if( s == "cin path" ){/*父,根*/
      ///cin>>运行时.path;
      retu 1;/*完*/
    }/*if*/
    if( s == "cin设备名" ){/*父,根*/
      cin >> 运行时.设备名;
      retu 1;/*完*/
    }/*if*/
    if( s == "显示cpu使用情况" ){/*父,根*/
      //adb
      retu 1;/*完*/
    }/*if*/
    if( s == "显示指针位置" ){/*父,根*/
      retu 1;/*完*/
    }/*if*/

    retu 0;/*完*/
  }/*int*/
  void c一个元素_不超字数上限( 新vs& vs, 新vi vi, int 行 ){/*_不对齐*/
  }/*void*/;
  ;//▬c指令▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
  void c一行字( 新i 颜色, 新i 后的颜色, 新s s1 ){/*2025年3月19日12:36:35*/    cmd1.set颜色( 颜色 ); cout1( s1 );  cout1( "\n" ); cmd1.set颜色( 后的颜色 ); }/*void*/;
  void c一行金色字黑色背景( 新i 后的颜色, 新s s1 ){ c一行字( 6, 后的颜色, s1 ); }/*void*/; void c一行金色字黑色背景( 新s s1 ){ c一行字( 6, 7, s1 ); }/*void*/;
  void c一行红色字金色背景( 新i 后的颜色, 新s s1 ){ c一行字( 100, 后的颜色, s1 ); }/*void*/;  void c一行红色字金色背景( 新s s1 ){ c一行字( 100, 7, s1 ); }/*void*/;
  ;//▬运行指令▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
  void c一行红色字金色背景A运行指令( 新ccp ccp指令 ){ c一行红色字金色背景( ccp指令 ); system( ccp指令 ); }/*void*/;
  void c一行某色字某色背景A运行指令( 新ccp ccp指令 ){ c一行红色字金色背景( ccp指令 ); system( ccp指令 ); }/*void*/;
  ;//▬ccp拼接▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
  void getS1从第几位开始等于s2(/*输入*/新i i初始的s位, 新s s2,/*输出*/新s& s1, 新i& i结束的s位 ){/*getS变成adb杠s设备名*/
    int iS下标 = i初始的s位/*iCcp下标*/;
    ///cmd1.set颜色( 100 );coutsf( "getS从第几位开始等于s2{} 新i i初始的s位={},/*输出*/新s &s={},新s2 &s={},", "{",  i初始的s位, s,s2 );coutsf( " {}", "}" ); coutEnd;cmd1.set颜色( 7 ); 
    for( size_t 位/*s2的位*/ = 0; 位 < ((string)s2).size( ); 位++, iS下标++ ){
      s1[iS下标] = ((string)s2)[位];
    }/*for*/
    i结束的s位 = iS下标;
  }/*void*/;
  void getS1从第几位开始等于s2(/*输入*/新s s2,/*输出*/新s& s1, 新i& i初始和结束的s位 ){/*getS变成adb杠s设备名*/
    getS1从第几位开始等于s2( i初始和结束的s位, s2, s1, i初始和结束的s位 );
  }/*void*/;
#define getS_adb杠s设备名 getS等于adb杠s设备名
  /*getS从第几位等于adb杠s设备名(); 输出{ "adb -s 设备名 " }*/
  void getS等于adb杠s设备名(/*!输入*/int iS下标, 新s 设备名,/*!输出*/新s& s, int& iS下标_输出 ){/*getS变成adb杠s设备名,getS等于adb杠s设备名,getAdb杠s设备名*/
    getS1从第几位开始等于s2( iS下标, "adb ", s, iS下标_输出 );
    if( 设备名 != "" ){ getS1从第几位开始等于s2( iS下标, "-s ", s, iS下标_输出 ); getS1从第几位开始等于s2( iS下标_输出, 设备名, s, iS下标_输出 ); getS1从第几位开始等于s2( iS下标, " ", s, iS下标 ); }/*if*/;
  }/*void*/;
  /*输出s1={ <s2 -s 设备名 > or <s2 > }*/
  void getS1等于S2杠s设备名(/*!输入*/新s s2, 新s 设备名,/*!输出*/新s& s1, int& iS下标 ){
    if( s2 != "" ){ getS1从第几位开始等于s2( iS下标, s2, s1, iS下标 ); if( qmvi计算_不使用前置变量.retS的最后一位( s2 ) != ' ' ){/*不是空-->加空*/ getS1从第几位开始等于s2( iS下标, " ", s1, iS下标 ); }/*if*/; }/*if*/;
    if( 设备名 != "" ){ getS1从第几位开始等于s2( iS下标, "-s ", s1, iS下标 ); getS1从第几位开始等于s2( iS下标, 设备名, s1, iS下标 ); getS1从第几位开始等于s2( iS下标, " ", s1, iS下标 ); }/*if*/;
  }/*void*/;
  //-->
  /*输出s={ <adb -s 设备名 > or <adb > }*/
  void getS等于adb杠s设备名(/*!输入*/新s 设备名,/*!输出*/新s& s, int& iS下标 ){ getS1等于S2杠s设备名( "adb ", 设备名, s, iS下标 ); }/*void*/;
  /*输出{ <fastboot -s 设备名 > or <fastboot > }*/
  void getS等于fastboot杠s设备名(/*!输入*/新s 设备名,/*!输出*/新s& s, int& iS下标 ){ getS1等于S2杠s设备名( "fastboot ", 设备名, s, iS下标 ); }/*void*/;
  /*没用*/
  void getS和ccp等于adb杠s设备名(/*输入*/int& iS下标, 新s 设备名,/*输出*/新s& s, 新ccp& ccp ){/*getS变成adb杠s设备名,getS和ccp等于adb杠s设备名,getAdb杠s设备名,getS和ccp_adb杠s设备名*/
    getS等于adb杠s设备名( 设备名, s, iS下标 );
    /*删除`指令后面的字符*/s = s.substr( 0, iS下标 )/*保留前几个字*/; ///s=s.substr(iS下标)/*删去前几个字*/;
    ccp = s.c_str( );
  }/*void*/;
  //-->
#define getS_adb杠s设备名shell getS等于adb杠s设备名shell
  /*输出{ "adb -s 设备名 shell " }*/
  void getS等于adb杠s设备名shell( /*!输入*/新i i初始的s位, 新s 设备名, /*!输出*/新s& s指令, 新i& i结束的s位 ){ getS等于adb杠s设备名( i初始的s位, 设备名,/*输出*/s指令, i初始的s位 );    getS1从第几位开始等于s2( i结束的s位, "shell ",/*输出*/s指令, i结束的s位 ); }/*void*/;
  /*输出{ "adb -s 设备名 shell " }*/
  void getS等于adb杠s设备名shell( /*!输入*/新s 设备名, /*!输出*/新s& s指令, 新i& iS位 ){ getS等于adb杠s设备名( 设备名,/*输出*/s指令, iS位 );    getS1从第几位开始等于s2( iS位, "shell ",/*输出*/s指令, iS位 ); }/*void*/;
  /**/;//▬简写-用指令▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
  //>固定开头
#define 指令_s1接杠s设备名接s2接 指令_s1杠s设备名接s2接
#define 指令_s1杠s设备名s2接 指令_s1杠s设备名接s2接
  /*输出 { <s1 -s 设备名 s2 v[] >; }; getS等于adb杠s设备名()-->getS从第几位开始等于s2()-->for(){ getS从第几位开始等于s2(); }*/
  void 指令_s1杠s设备名接s2接( /*!输入*/新s s1, 新s 设备名, 新s s2, 新vs v1, 新vs v2/*!输出*/ ){
    int iS下标 = 0/*iCcp下标*/;
    /*结果*/新s s指令( 140, ' ' );    新ccp ccp指令;
    auto lamForVZ指令后接元素接空格 = [&]( 新vs& v )->void{
      for( size_t 行 = 0; 行 < v.size( ); 行++ ){
        getS1从第几位开始等于s2( iS下标, v[行],/*输出*/s指令, iS下标 );
        getS1从第几位开始等于s2( iS下标, " ",/*输出*/s指令, iS下标 );
      }/*for*/;
      }/*lam*/;
    getS1等于S2杠s设备名( s1, 设备名,/*输出*/s指令, iS下标 );
    if( s2 != "" ){
      getS1从第几位开始等于s2( iS下标, s2,/*输出*/s指令, iS下标 );
      if( s2[s2.size( ) - 1] != ' ' ){/*否s的右是空格*/getS1从第几位开始等于s2( iS下标, " ",/*输出*/s指令, iS下标 ); }/*if*/;
    }/*if*/;
    lamForVZ指令后接元素接空格( v1 );
    lamForVZ指令后接元素接空格( v2 );
    s指令 = s指令.substr( 0, iS下标 );
    ccp指令 = retSTOccp( s指令 );    c一行某色字某色背景A运行指令( ccp指令 );
  }/*void*/;
  //-->
#define 指令_adb杠s设备名接s接v 指令_adb杠s设备名接s1接
#define 指令_adb杠s设备名后接s后接v 指令_adb杠s设备名接s1接
#define 指令_adb杠s设备名后接s后接 指令_adb杠s设备名接s1接
#define 指令_adb杠s设备名后接s1后接v1 指令_adb杠s设备名接s1接
  /*输出 { <adb -s 设备名 s1 v[] >; }; getS等于adb杠s设备名()-->getS从第几位开始等于s2()-->for(){ getS从第几位开始等于s2(); }*/
  void 指令_adb杠s设备名接s1接( /*!输入*/新s 设备名, 新s s1, 新vs v1, 新vs v2/*!输出*/ ){ 指令_s1杠s设备名接s2接( "adb", 设备名, s1, v1, v2 ); }/*void*/;
  void 指令_adb杠s设备名接s1接( /*!输入*/新s 设备名, 新s s1, 新vs v1/*!输出*/ ){ 指令_adb杠s设备名接s1接( 设备名, s1, v1, {} ); }/*void*/; void 指令_adb杠s设备名接s1接( /*!输入*/新s 设备名, 新s s1/*!输出*/ ){ 指令_adb杠s设备名接s1接( 设备名, s1, {} ); }/*void*/;
  ;//-->
  void 指令_adb杠s设备名接s1接( /*!输入*/新vs v设备名, 新s s1, 新vs v1, 新vs v2/*!输出*/ ){ for( size_t 一 = 0; 一 < v设备名.size( ); 一++ ){ 指令_adb杠s设备名接s1接( v设备名[一], s1, v1, v2 ); }/*for*/; }/*void*/;/*2025年5月8日06:57:50*/
  void 指令_adb杠s设备名接s1接( /*!输入*/新vs v设备名, 新s s1, 新vs v1/*!输出*/ ){ 指令_adb杠s设备名接s1接( v设备名, s1, v1, {} ); }/*void*/; void 指令_adb杠s设备名接s1接( /*!输入*/新vs v设备名, 新s s1/*!输出*/ ){ 指令_adb杠s设备名接s1接( v设备名, s1, {} ); }/*void*/;
  //OR
  /*输出 { <fastboot -s 设备名 s1 v[] >; };*/
  void 指令_fastboot杠s设备名接s1接( /*!输入*/新s 设备名, 新s s1, 新vs v1, 新vs v2/*!输出*/ ){ 指令_s1杠s设备名s2接( "fastboot", 设备名, s1, v1, v2 ); }/*void*/;
  ;//-->
  void 指令_fastboot杠s设备名接s1接( /*!输入*/新vs v设备名, 新s s1, 新vs v1, 新vs v2/*!输出*/ ){ for( size_t 一 = 0; 一 < v设备名.size( ); 一++ ){ 指令_adb杠s设备名接s1接( v设备名[一], s1, v1, v2 ); }/*for*/; }/*void*/;/*2025年5月8日06:57:50*/
  //adb reboot +
  void 指令_adbReboot( 新s 设备名, 新vs v ){ 指令_adb杠s设备名接s1接( 设备名, "reboot", v, {} ); }/*void*/;
  //adb reboot bootloader
  void 指令_adbRebootBootloader( 新s 设备名 ){ 指令_adbReboot( 设备名, { "bootloader" } ); }/*void*/;

  void 指令_fastbootDevices( ){ 指令_fastboot杠s设备名接s1接( "", "devices", {  }, {} ); }/*void*/;
  //fastboot oem + v[]
  void 指令_fastbootOem( 新s 设备名, 新vs v ){ 指令_fastboot杠s设备名接s1接( 设备名, "oem", v, {} ); }/*void*/;
  //fastboot oem unlock
  void 指令_fastbootOemUnlock( 新s 设备名 ){ 指令_fastbootOem( 设备名, { "unlock" } ); }/*void*/;
  //fastboot oem nubia_unlock NUBIA_NX563J

  //fastboot flash + v[]
  void 指令_fastbootFlash( 新s 设备名, 新vs v ){ 指令_fastboot杠s设备名接s1接( 设备名, "flash", v, {} ); }/*void*/;
  //fastboot flash unlock
  void 指令_fastbootFlashUnlock( 新s 设备名 ){ 指令_fastbootOem( 设备名, { "unlock" } ); }/*void*/;
  //fastboot flashing + v[]
  void 指令_fastbootFlashing( 新s 设备名, 新vs v ){ 指令_fastboot杠s设备名接s1接( 设备名, "flashing", v, {} ); }/*void*/;
  //fastboot flashing unlock https://blog.csdn.net/qq_21051503/article/details/142473260
  void 指令_fastbootFlashingUnlock( 新s 设备名 ){ 指令_fastbootOem( 设备名, { "unlock" } ); }/*void*/;

  //fastboot boot
  void 指令_fastbootBoot( 新s 设备名, 新s path ){ 指令_fastboot杠s设备名接s1接( 设备名, "boot", { path }, {} ); }/*void*/;
  //fastboot recovery
  void 指令_fastbootRecovery( 新s 设备名, 新s path ){ 指令_fastboot杠s设备名接s1接( 设备名, "recovery", { path }, {} ); }/*void*/;
  //fastboot flash boot C:\Andr\twrp-3.2.1-0-enchilada.img

  //adb kill-server
  void 指令_adbKillServer( ){ 指令_adb杠s设备名接s1接( "", "kill-server" ); }/*void*/;
  //adb start-server
  void 指令_adbStartServer( ){ 指令_adb杠s设备名接s1接( "", "start-server" ); }/*void*/;
  void 指令_重启adb服务( ){ 指令_adbKillServer( ); 指令_adbStartServer( ); }/*void*/;/*2025年4月27日04:57:52*/
  /**/;//>文件,pull,push▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
  //没用
  //adb shell rm
  void 指令_adbShellRm( 新s 设备名, 新s p1 ){ 指令_adb杠s设备名接s1接( 设备名, "shell rm", { p1 } ); }/*void*/;
  void 指令_rootA删除( 新s 设备名, 新s p1 ){ 指令_adbRoot( 设备名 ); 指令_adbRemount( 设备名 ); 指令_adbShellRm( 设备名, p1 ); }/*void*/;/*2025年4月27日08:13:10*/

  void 指令_adbShellSettings( /*!输入*/新s 设备名, 新vs v1, 新vs v2/*!输出*/ ){ 指令_adb杠s设备名接s1接( 设备名, " shell settings ", v1, v2 ); }/*void*/;
  void 指令_adbShellSettings( /*!输入*/新vs v设备名, 新vs v1, 新vs v2/*!输出*/ ){ 指令_adb杠s设备名接s1接( v设备名, " shell settings ", v1, v2 ); }/*void*/;
  //-->
  void 指令_adbShellSettingsList( /*!输入*/新s 设备名, 新vs v1/*!输出*/ ){ 指令_adbShellSettings( 设备名, { "list" }, v1 ); }/*void*/;           void 指令_adbShellSettingsList( /*!输入*/新vs v设备名, 新vs v1/*!输出*/ ){ 指令_adbShellSettings( v设备名, { "list" }, v1 ); }/*void*/;
  void 指令_adbShellSettingsGet( /*!输入*/新s 设备名, 新vs v1/*!输出*/ ){ 指令_adbShellSettings( 设备名, { "get" }, v1 ); }/*void*/;             void 指令_adbShellSettingsGet( /*!输入*/新vs v设备名, 新vs v1/*!输出*/ ){ 指令_adbShellSettings( v设备名, { "get" }, v1 ); }/*void*/;
  void 指令_adbShellSettingsPut( /*!输入*/新s 设备名, 新vs v1/*!输出*/ ){ 指令_adbShellSettings( 设备名, { "put" }, v1 ); }/*void*/;             void 指令_adbShellSettingsPut( /*!输入*/新vs v设备名, 新vs v1/*!输出*/ ){ 指令_adbShellSettings( v设备名, { "put" }, v1 ); }/*void*/;
  void 指令_adbShellSettingsDelete( /*!输入*/新s 设备名, 新vs v1/*!输出*/ ){ 指令_adbShellSettings( 设备名, { "delete" }, v1 ); }/*void*/;       void 指令_adbShellSettingsDelete( /*!输入*/新vs v设备名, 新vs v1/*!输出*/ ){ 指令_adbShellSettings( v设备名, { "delete" }, v1 ); }/*void*/;
  //-->
  void 指令_adbShellSettingsListSecure( /*!输入*/新s 设备名, 新vs v1/*!输出*/ ){ 指令_adbShellSettings( 设备名, { "list","secure" }, v1 ); }/*void*/;  void 指令_adbShellSettingsGetSecure( /*!输入*/新s 设备名, 新vs v1/*!输出*/ ){ 指令_adbShellSettings( 设备名, { "get","secure" }, v1 ); }/*void*/;  void 指令_adbShellSettingsGetSystem( /*!输入*/新s 设备名, 新vs v1/*!输出*/ ){ 指令_adbShellSettings( 设备名, { "get","system" }, v1 ); }/*void*/;  void 指令_adbShellSettingsPutSystem( /*!输入*/新s 设备名, 新vs v1/*!输出*/ ){ 指令_adbShellSettings( 设备名, { "put","system" }, v1 ); }/*void*/;  void 指令_adbShellSettingsPutGlobal( /*!输入*/新s 设备名, 新vs v1/*!输出*/ ){ 指令_adbShellSettings( 设备名, { "put","global" }, v1 ); }/*void*/;  void 指令_adbShellSettingsDeleteSystem( /*!输入*/新s 设备名, 新vs v1/*!输出*/ ){ 指令_adbShellSettings( 设备名, { "delete", "system" }, v1 ); }/*void*/;  void 指令_adbShellSettingsDeleteGlobal( /*!输入*/新s 设备名, 新vs v1/*!输出*/ ){ 指令_adbShellSettings( 设备名, { "delete","global" }, v1 ); }/*void*/;  void 指令_adbShellSettingsDeleteSecure( /*!输入*/新s 设备名, 新vs v1/*!输出*/ ){ 指令_adbShellSettings( 设备名, { "delete","secure" }, v1 ); }/*void*/;
  void 指令_adbShellSettingsListSecure( /*!输入*/新vs v设备名, 新vs v1/*!输出*/ ){ 指令_adbShellSettings( v设备名, { "list","secure" }, v1 ); }/*void*/;  void 指令_adbShellSettingsGetSecure( /*!输入*/新vs v设备名, 新vs v1/*!输出*/ ){ 指令_adbShellSettings( v设备名, { "get","secure" }, v1 ); }/*void*/;  void 指令_adbShellSettingsGetSystem( /*!输入*/新vs v设备名, 新vs v1/*!输出*/ ){ 指令_adbShellSettings( v设备名, { "get","system" }, v1 ); }/*void*/;  void 指令_adbShellSettingsPutSystem( /*!输入*/新vs v设备名, 新vs v1/*!输出*/ ){ 指令_adbShellSettings( v设备名, { "put","system" }, v1 ); }/*void*/;  void 指令_adbShellSettingsPutGlobal( /*!输入*/新vs v设备名, 新vs v1/*!输出*/ ){ 指令_adbShellSettings( v设备名, { "put","global" }, v1 ); }/*void*/;  void 指令_adbShellSettingsDeleteSystem( /*!输入*/新vs v设备名, 新vs v1/*!输出*/ ){ 指令_adbShellSettings( v设备名, { "delete", "system" }, v1 ); }/*void*/;  void 指令_adbShellSettingsDeleteGlobal( /*!输入*/新vs v设备名, 新vs v1/*!输出*/ ){ 指令_adbShellSettings( v设备名, { "delete","global" }, v1 ); }/*void*/;  void 指令_adbShellSettingsDeleteSecure( /*!输入*/新vs v设备名, 新vs v1/*!输出*/ ){ 指令_adbShellSettings( v设备名, { "delete","secure" }, v1 ); }/*void*/;
  void 指令_adbShellInput( /*!输入*/新s 设备名, 新vs v1, 新vs v2/*!输出*/ ){ 指令_adb杠s设备名接s1接( 设备名, " shell input ", v1, v2 ); }/*void*/;
  void 指令_adbShellInputText( /*!输入*/新s 设备名, 新vs v1/*!输出*/ ){ 指令_adbShellInput( 设备名, { "text" }, v1 ); }/*void*/;
  /**/;//▬简写getAdb指令▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
  void getS_( /*!输入*//*!输出*/ ){ }/*void*/;
  /**/;//▬简写,自动输入,在cmd输入adb指令▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
#define 指令_cdAadb 指令_cd
  //cd cdP
  void 指令_cd( 新s cdP, int cd后_1是指令adb ){ 指令_s1杠s设备名接s2接( "cd", "", cdP, {}, {} ); /*第二个指令*/if( cd后_1是指令adb == 1 ){ 指令_s1杠s设备名接s2接( "adb", "", "", {}, {} ); }/*if*/; }/*void*/;/*2025年3月18日12:42:24*/
  //▬c信息,包名▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
#define 指令_查看将要启动或退出app的包名 指令_adbShellAmMonitor
  /*adb shell am monitor*/
  void 指令_adbShellAmMonitor( 新s 设备名 ){指令_adb杠s设备名接s1接( 设备名, "shell am monitor", {  } );}/*void*/;
#define 指令_查看安装的第三方app的包名 指令_adbShellPmListPackages杠3
  /*adb shell pm list packages -3*/
  void 指令_adbShellPmListPackages杠3( 新s 设备名 ){指令_adb杠s设备名接s1接( 设备名, "shell pm list packages -3", {  } );}/*void*/;
#define 指令_adbShellDumpsysWindowWindows竖findstrMfocusedapp 指令_查看当前界面的app的包名 
  /*可用, 很慢; adb shell dumpsys window windows | findstr mFocusedApp; */
  void 指令_查看当前界面的app的包名( 新s 设备名 ){指令_adb杠s设备名接s1接( 设备名, "shell dumpsys window windows | findstr mFocusedApp", {  } );}/*void*/;
  /*adb shell dumpsys activity top | find "ACTIVITY"*/
  void 指令_查看启动的app的包名( 新s 设备名 ){指令_adb杠s设备名接s1接( 设备名, R"(shell dumpsys activity top | find "ACTIVITY")", {  } );}/*void*/;
  /*adb shell dumpsys activity activities | findstr "Run"*/
  void 指令_查看所有启动的应用的包名( 新s 设备名 ){指令_adb杠s设备名接s1接( 设备名, R"(shell adb shell dumpsys activity activities | findstr "Run")", {  } );}/*void*/;
  /*adb shell dumpsys window w |findstr \/ |findstr name =*/
  void 指令_不懂_查看当前启动应用的包名( 新s 设备名, 新s name ){指令_adb杠s设备名接s1接( 设备名, R"(shell adb shell dumpsys window w |findstr \/ |findstr name = )", {  } );}/*void*/;
  /*aapt dump badging D:\test\xxx.apk( APK的全名 )*/
  void 指令_不懂_通过应用查看包名( 新s 设备名, 新s apkP ){指令_adb杠s设备名接s1接( 设备名, R"(shell aapt dump badging)", {  } );}/*void*/;
  void 指令_例子( 新s 设备名 ){
    int iS下标 = 0/*iCcp下标*/;
    新s /*结果*/s指令( 140, ' ' );    新ccp ccp指令;
    getS等于adb杠s设备名shell( 设备名,/*输出*/s指令, iS下标 );
    getS1从第几位开始等于s2( R"()",/*输出*/s指令, iS下标 );
    s指令 = s指令.substr( 0, iS下标 ); ccp指令 = retSTOccp( s指令 );
    c一行某色字某色背景A运行指令( ccp指令 );
  }/*void*/;
  void adbDevices( ){ c一行某色字某色背景A运行指令( "adb devices" ); }/*void*/;
  void 指令_scrcpy( ){ c一行某色字某色背景A运行指令( "scrcpy" ); }/*void*/;

  //▬触屏▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
  void 点一次( int x, int y ){/*adb -s 1117d6f9 shell input tap x y*/
    ////system( lzxy转换.TOccp(R"( adb -s 1117d6f9 shell input tap )"+lzxy转换.TOs(x)+lzxy转换.TOs(y) )  );
    string sX, sY; sX = lzxy转换.TOs( x ), sY = lzxy转换.TOs( y );
    char c命令[43] = "adb -s 1117d6f9 shell input tap          ";/*两个数字,这是10个空格,32+10*/
    for( size_t i = 0, 列 = 34; i < (sX).size( ); i++, 列++ ){
      c命令[列] = sX[i];
    }/*for*/
    for( size_t i = 0, 列 = 39; i < (sY).size( ); i++, 列++ ){
      c命令[列] = sY[i];
    }/*for*/
    system( c命令 );
  }
  void 点一次( string sX, string sY ){/*adb -s 1117d6f9 shell input tap x y*/
    char c命令[43] = "adb -s 1117d6f9 shell input tap          ";/*两个数字,这是10个空格,32+10*/
    for( size_t i = 0, 列 = 34; i < (sX).size( ); i++, 列++ ){
      c命令[列] = sX[i];
    }/*for*/
    for( size_t i = 0, 列 = 39; i < (sY).size( ); i++, 列++ ){
      c命令[列] = sY[i];
    }/*for*/
    system( c命令 );
  }
  void 点二次( int x, int y, float iSleep ){/*adb -s 1117d6f9 shell "input tap x y; sleep iSleep; input tap x y;"*/
    ////system( lzxy转换.TOccp(R"( adb -s 1117d6f9 shell "input tap )"+lzxy转换.TOs(x)+lzxy转换.TOs(y)+ R"(; sleep )"+lzxy转换.TOs(iSleep)+ R"(; input tap )"+lzxy转换.TOs(x)+lzxy转换.TOs(y)+R"(;")"));
    string sX, sY, sSleep; sX = lzxy转换.TOs( x ), sY = lzxy转换.TOs( y ) /*,sSleep=lzxy转换.TOs(iSleep)*/;
    /*不能 ccp命令, ccp=R"()"*/
    ////char c命令[43] = "adb -s 1117d6f9 shell "+ '"'+"input tap          ";/*两个数字,这是10个空格,32+10*/
    char c命令[82] = "adb -s 1117d6f9 shell 'input tap           ; sleep       ; input tap           ;'";/*两个数字,这是10个空格,32+10*/
    c命令[23] = '"'; c命令[81] = '"';
    for( size_t i = 0, 列 = 35; i < (sX).size( ); i++, 列++ ){
      c命令[列] = sX[i];
    }/*for*/
    for( size_t i = 0, 列 = 40; i < (sY).size( ); i++, 列++ ){
      c命令[列] = sY[i];
    }/*for*/
    for( size_t i = 0, 列 = 71; i < (sX).size( ); i++, 列++ ){
      c命令[列] = sX[i];
    }/*for*/
    for( size_t i = 0, 列 = 53; i < (sSleep).size( ); i++, 列++ ){
      c命令[列] = sSleep[i];
    }/*for*/
    for( size_t i = 0, 列 = 76; i < (sY).size( ); i++, 列++ ){
      c命令[列] = sY[i];
    }/*for*/
    system( c命令 );
  }
  void 循环点一次( int x, int y, int 循环的sleep ){
    while( 1 ){
      点一次( x, y );
      sleep( 循环的sleep );
    }
  }
  void 循环点一次( string sX, string sY, int 循环的sleep ){
    while( 1 ){
      点一次( sX, sY );
      sleep( 循环的sleep );
    }
  }
  void 循环点二次( int x, int y, float 点的sleep, int 循环的sleep ){
    while( 1 ){
      点二次( x, y, 点的sleep );
      sleep( 循环的sleep );
    }
  }
  void adbShellCd( ){
    // adb shell "cd /data/data/
  }
  void 自动设置( ){

  }
  void adbShellPut( ){

  }
  void getc接(/*输入输出*/新c c[229],/*输入*/新i& iC下标, 新s& s ){/*getc后接,getc接,getc接s*/
    for( size_t i = 0 /*,列 =iC下标*/; i < (s).size( ); i++, iC下标++ ){
      c[iC下标] = s[i];
    }/*for*/
  }/*void*/;
  //▬安装/卸载▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
  /*//adb -s 8d7e755c install "H:\`备份`安卓手机\vivo V3 MA\FunOS2.5.1 1.18.3 安卓5.1\用户apk\Nova Launcher 6.0.apk"
  /adb:开头是零，结尾的空格就是三./
  [0]adb -s [7]                                                                       [78]install [86]"[87]                                                                                                                                            [227]" [229]         1
  */
  void 指令_adbInstall( 新vs v设备名, 新s 杠参数, 新s sApkPath ){
    wfzi读取.get把s1的s2改成s3( "/", "\\", sApkPath );
    新vs v杠参数APath = {};
    if( 杠参数 != "" ){ v杠参数APath.push_back( 杠参数 ); }/*if*/;
    if( sApkPath != "" ){ v杠参数APath.push_back( R"(")" + sApkPath + R"(")" ); }/*if*/;
    指令_adb杠s设备名接s1接( v设备名, "install", v杠参数APath, {} );
  }/*void*/;
  void 指令_adbInstall( 新vs v设备名, 新s sApkPath ){ 指令_adbInstall( v设备名, "", sApkPath ); }/*void*/;
  //-->
  void 指令_adbInstall( 新s s设备名, 新s 杠参数, 新s sApkPath ){ 指令_adbInstall( { s设备名 }, 杠参数, sApkPath ); }/*void*/;
  void 指令_adbInstall( 新s s设备名, 新s sApkPath ){ 指令_adbInstall( s设备名, "", sApkPath ); }/*void*/;

  /*没用*/
  void 指令_adbS杠参数包名( 新s 设备名, 新s s1, 新s 杠参数, 新s 包名 ){ 新vs v杠参数A包名 = {};    if( 杠参数 != "" ){ v杠参数A包名.push_back( 杠参数 ); }/*if*/;    if( 包名 != "" ){ v杠参数A包名.push_back( 包名 ); }/*if*/;    指令_adb杠s设备名接s1接( 设备名, s1, v杠参数A包名, {} ); }/*void*/;
  /*adb uninstall 杠参数 包名; execute 'adb shell cmd package uninstall -k'.*/
  void 指令_adbUninstall( 新s 设备名, 新s 杠参数, 新s 包名 ){ 指令_adb杠s设备名接s1接( 设备名, "uninstall", { 杠参数,包名 } ); }/*void*/;/*2025年3月18日15:06:24*/
  /*?/system/bin/sh: uninstall: not found*/
  void 指令_adbShellUninstall( 新s 设备名, 新s 杠参数, 新s 包名 ){ 指令_adb杠s设备名接s1接( 设备名, "shell uninstall", { 杠参数,包名 } ); }/*void*/;/*2025年3月18日14:59:48*/
  //指令_卸载apk: 可以
  //adb -s shell cmd package uninstal
  void 指令_adbShellCmdPackageUninstall( 新s 设备名, 新s 杠参数, 新s 包名 ){ 指令_adb杠s设备名接s1接( 设备名, "shell cmd package uninstall", { 杠参数,包名 } ); }/*void*/;/*2025年4月10日02:51:51*/
  //adbShellPmUninstall 能卸载360 https://zhuanlan.zhihu.com/p/105421784
  //adbShell pm uninstall -k --user 0 com.qihoo360.mobilesafe
  void 指令_adbShellPmUninstall( 新s 设备名, 新s 杠参数, 新s 包名 ){ 指令_adb杠s设备名接s1接( 设备名, "shell pm uninstall", { 杠参数,包名 } ); }/*void*/;
  /*这两个`和上面的(adbInstall)一样,只是返回了一个东西,所以我决定改成一行!*/
  //* void adbInstallANDget命令(新s s设备名, 新s sApkPath ,新c c命令[229]){/*getadbInstall */}
  //* 新c adbInstallANDret命令(新s s设备名, 新s sApkPath ){/*retadbInstallANDret命令*/}/*新c*/
  /*文件夹结构`简单,12=文件夹`文件=第一层只有文件夹`第二层只有文件*/
  void c文件夹内apk_12( 新s sPath ){
    新vs vsApk; wfjm读写.getpathTOvs_path接path( sPath, vsApk );
    /*c( 文件夹`1层 )*/qmviC.cV( "\n", vsApk );
    是否cPath = 1;
    /*c( 文件夹`2层 )*/forVs来getpathTOvs_path接path( vsApk );
  }/*void*/;
  void 自动adbInstall文件夹内apk( 新s s设备名, 新s sPath ){
    /*两次`getApkPath*/
    新vs vsApk; wfjm读写.getpathTOvs_path接path( sPath, vsApk );
    新vs vsApkPath2;/*子目录,子Path*/
    getforVs来getpathTOvs_path接path( vsApk, vsApkPath2 );
    for( size_t 行 = 0; 行 < vsApkPath2.size( ); 行++ ){
      指令_adbInstall( s设备名, vsApkPath2[行] );//replace("/","\\")
    }/*for*/
  }/*void*/;
  /**/;//后接
  void cAdbVersion( 新i p字色, 新i 字色 ){
    auto lamCPathA用指令adbVersion = [&]( 新s path, 新ccp ccp指令 ){
      cmd1.set颜色( p字色 );
      cout2( path, "\n" );
      /*?_chdir(lzxy转换.TOccp(s))没用*/
      _chdir( ccp指令 );
      cmd1.set颜色( 字色 );
      system( "adb version" );
      };
    /*    adb version
    Android Debug Bridge version 1.0.41
    Version 33.0.1-8253317
    Installed as D:\Tools\adb\platform-tools\adb.exe*/
    lamCPathA用指令adbVersion( "D:\Tools\adb\platform-tools", "D:\\Tools\\adb\\platform-tools" );
    lamCPathA用指令adbVersion( "C:\vivo\Vivo_unlock-A7.0-VY51", "C:\\vivo\\Vivo_unlock-A7.0-VY51" );
    lamCPathA用指令adbVersion( "C:\vivo\vivo5.1高通系统一键解锁BL`解BL及刷twrp", "C:\\vivo\\vivo5.1高通系统一键解锁BL`解BL及刷twrp" );
    lamCPathA用指令adbVersion( "C:\vivo\vivo_fastboot_for_windows", "C:\\vivo\\vivo_fastboot_for_windows" );
    lamCPathA用指令adbVersion( "C:\vivo\BLUnlocker_v1", "C:\\vivo\\BLUnlocker_v1" );
    lamCPathA用指令adbVersion( "C:\vivo\QDLoader_HS_USB_Driver", "C:\\vivo\\QDLoader_HS_USB_Driver" );
  }/*void*/; void cAdbVersion( ){ cAdbVersion( 177, 7 );/*177=绿背蓝字,7=黑背白字*/ }/*void*/;
  void 指令_adbShellWm( 新s s设备名, 新s s1, 新s s2 ){ 指令_adb杠s设备名接s1接( s设备名, "shell wm", { s1,s2 } ); }/*void*/;/*2025年4月16日23:00:02*/
  void 指令_adbShellWm( 新vs v设备名, 新s s1, 新s s2 ){ 指令_adb杠s设备名接s1接( v设备名, "shell wm", { s1,s2 } ); }/*void*/;/*2025年5月8日08:53:52*/
  void 指令_adbShellWmSize( 新s s设备名, 新s s1 ){ 指令_adbShellWm( s设备名, "size", s1 ); }/*void*/;
  void 指令_adbShellWmSize( 新vs v设备名, 新s s1 ){ 指令_adbShellWm( v设备名, "size", s1 ); }/*void*/;
  void 指令_adbShellWmDensity( 新s s设备名, 新s sDensity ){ 指令_adbShellWm( s设备名, "density", sDensity ); }/*void*/;
  void 指令_adbShellWmDensity( 新vs v设备名, 新s sDensity ){ 指令_adbShellWm( v设备名, "density", sDensity ); }/*void*/;
  /*四个数字分别表示距离左、上、右、下边缘的留白像素，以上命令表示将屏幕底部 100px留白; adb shell wm overscan reset #恢复显示区域; https://www.cnblogs.com/wutou/p/17930583.html */
  void 指令_adbShellWmOverscan( 新s s设备名, 新s s1 ){ 指令_adbShellWm( s设备名, "overscan", s1 ); }/*void*/;
  void 指令_adbShellWmOverscan( 新vs v设备名, 新s s1 ){ 指令_adbShellWm( v设备名, "overscan", s1 ); }/*void*/;
  //adb backup
  void getS_指令adbBackup_从第几位开始等于Backup和之后的s( 新s 杠参数, 新s 包名, 新s 输出p,/*!输出*/ 新s& s指令, 新i& iS下标 ){/*2025年3月26日12:39:35*/
    getS1从第几位开始等于s2( iS下标, R"(backup )", s指令, iS下标 );
    if( 杠参数 != "" ){
      getS1从第几位开始等于s2( iS下标, R"(")", s指令, iS下标 );
      getS1从第几位开始等于s2( iS下标, 杠参数, s指令, iS下标 );
      getS1从第几位开始等于s2( iS下标, R"(")", s指令, iS下标 );
      getS1从第几位开始等于s2( iS下标, " ", s指令, iS下标 );
    }/*if*/;
    if( 输出p != "" ){
      getS1从第几位开始等于s2( iS下标, "-", s指令, iS下标 );
      getS1从第几位开始等于s2( iS下标, "f", s指令, iS下标 );
      getS1从第几位开始等于s2( iS下标, " ", s指令, iS下标 );
      getS1从第几位开始等于s2( iS下标, 输出p, s指令, iS下标 );
      getS1从第几位开始等于s2( iS下标, " ", s指令, iS下标 );
    }/*if*/;
    if( 包名 != "" ){
      getS1从第几位开始等于s2( iS下标, 包名, s指令, iS下标 );
    }/*if*/;
  }/*void*/;
  /*指令{ adb backup "-参数" -f path 包名 }*/;/**指令{ adb -s 设备名 shell backup -包名 用\的输出p }*/
  void 指令_adbBackup( 新i _1是adbB_2是adbShellB, 新s 设备名, 新s 杠参数, 新s 包名, 新s 输出p_不含文件名 ){/*2025年3月18日12:05:18*/
    /*后是\*/{
      wfzi读取.确保s1最后一位是斜杠( 输出p_不含文件名 );
      wfzi读取.get把s1的s2改成s3( "/", "\\", 输出p_不含文件名 );
      wfjm读写.封装的新建文件( 输出p_不含文件名, "", "\\" );
    }/*后是\*/;
    新s 文件名 = 包名 + ".adbB"; 新s 真输出p = 输出p_不含文件名 + 文件名;
    int iS下标 = 0/*iCcp下标*/;
    /*结果*/新s s指令( 1400, ' ' );    新ccp ccp指令;
    /*!编辑指令*/{
      if( _1是adbB_2是adbShellB == 1 ){ getS等于adb杠s设备名(/**/ 设备名,/*输出*/s指令, iS下标 ); } else{ if( _1是adbB_2是adbShellB == 2 ){ getS等于adb杠s设备名shell(/**/ 设备名,/*输出*/s指令, iS下标 ); }/*if*/; }/*else*/;
      getS_指令adbBackup_从第几位开始等于Backup和之后的s( 杠参数, 包名, 真输出p, s指令, iS下标 );
    }/*编辑指令*/;
    s指令 = s指令.substr( 0, iS下标 );
    ccp指令 = retSTOccp( s指令 ); c一行某色字某色背景A运行指令( ccp指令 );
  }/*void*/; void adbBackup( 新s 设备名, 新s 杠参数, 新s 包名, 新s 输出p_不含文件名 ){ adbBackup( 1, 设备名, 杠参数, 包名, 输出p_不含文件名 ); }/*void*/; void adbBackup( 新s 设备名, 新s 包名, 新s 输出p_不含文件名 ){ adbBackup( 设备名, "", 包名, 输出p_不含文件名 ); }/*void*/; void 指令_adbShellBackup( 新s 设备名, 新s 杠参数, 新s 包名, 新s 输出p_不含文件名 ){ adbBackup( 2, 设备名, 杠参数, 包名, 输出p_不含文件名 ); }/*void*/;
  //adb restore 输入path
  void adbRestore( 新s 设备名, 新s 输入p ){/*2025年3月27日04:10:49*/
    /*后不是/A/改成\*/{
      wfzi读取.确保s1最后一位不是斜杠( 输入p );
      wfzi读取.get把s1的s2改成s3( "/", "\\", 输入p );
    }/*后不是/A/改成\*/;
    int iS下标 = 0/*iCcp下标*/;
    /*结果*/新s s指令( 1400, ' ' );    新ccp ccp指令;
    getS等于adb杠s设备名(/**/ 设备名,/*输出*/s指令, iS下标 );
    getS1从第几位开始等于s2( iS下标, R"(restore )", s指令, iS下标 );
    if( 输入p != "" ){
      getS1从第几位开始等于s2( iS下标, 输入p, s指令, iS下标 );
      getS1从第几位开始等于s2( iS下标, " ", s指令, iS下标 );
    }/*if*/;
    s指令 = s指令.substr( 0, iS下标 );
    ccp指令 = retSTOccp( s指令 ); c一行某色字某色背景A运行指令( ccp指令 );
  }/*void*/;
  //adb shell am start 包名/启动activity
  void 指令_adbShellAmStart( 新s 设备名, 新s 包名, 新s 启动activity ){/*2025年4月5日19:19:14*/
    /*后不是/A/改成\*/{
      wfzi读取.确保s1最后一位不是斜杠( 包名 );
      wfzi读取.get把s1的s2改成s3( "/", "\\", 包名 );
    }/*后不是/A/改成\*/;
    int iS下标 = 0/*iCcp下标*/;
    /*结果*/新s s指令( 1400, ' ' );    新ccp ccp指令;
    getS等于adb杠s设备名(/**/ 设备名,/*输出*/s指令, iS下标 );
    getS1从第几位开始等于s2( iS下标, R"(shell )", s指令, iS下标 );
    getS1从第几位开始等于s2( iS下标, R"(am start )", s指令, iS下标 );
    if( 包名 != "" ){ getS1从第几位开始等于s2( iS下标, 包名, s指令, iS下标 ); getS1从第几位开始等于s2( iS下标, " ", s指令, iS下标 ); }/*if*/;
    if( 启动activity != "" ){ getS1从第几位开始等于s2( iS下标, "/", s指令, iS下标 ); getS1从第几位开始等于s2( iS下标, 启动activity, s指令, iS下标 ); }/*if*/;
    s指令 = s指令.substr( 0, iS下标 );
    ccp指令 = retSTOccp( s指令 ); c一行某色字某色背景A运行指令( ccp指令 );
  }/*void*/;

  //>scrcpy
  void scrcpy杠sCB512FWSW7( ){
    cmd1.set颜色( 177 );/*绿背蓝字*/
    cmd1.cd( "C:\scrcpy-win64-v3.0.2" );
    system( "cd C:\scrcpy-win64-v3.0.2" );
    coutsf( "{}{}", "scrcpy ", "{ \n" );/*测试`这种写法; 可以*/
    system( "scrcpy " );
    coutsf( "{}", "} \n" );
    coutsf( "{}{}", "scrcpy -s CB512FWSW7", "{ \n" );
    cmd1.set颜色( 07 );/*黑背白字*/
    system( "scrcpy -s CB512FWSW7" );/*到这步就卡了,所以改颜色要`放在前面*/
    coutsf( "{}", "} \n" );
  }/*void*/;;
  void scrcpy杠s( 新s s ){//>ccp优先级大于s
  }/*void*/;
  void scrcpy杠s( 新ccp ccp ){/*已经不可读了,但是不用管它*/
    char c命令[140]/*实际字符数`减一*/ = "scrcpy -s";
    strcat_s( c命令, " " );/*测试`一个字符能不能行？*/
    cmd1.cd( "C:\scrcpy-win64-v3.0.2" );
    system( "cd C:\scrcpy-win64-v3.0.2" );
    cmd1.set颜色( 177 );/*绿背蓝字*/coutsf( "{}{}", "scrcpy ", "{ \n" );/*测试`这种写法; 可以*/
    system( "scrcpy " );
    coutsf( "{}", "} \n" ); cmd1.set颜色( 07 );/*黑背白字*/
    cmd1.set颜色( 177 );/*绿背蓝字*/coutsf( "{}{}", "scrcpy -s CB512FWSW7", "{ \n" );
    strcat_s( c命令, ccp );
    system( c命令 );
    coutsf( "{}", "} \n" ); cmd1.set颜色( 07 );/*黑背白字*/
  }/*void*/;
  void scrcpy杠s_只改大括号这一行的颜色( 新ccp ccp ){
    char c命令[140]/*实际字符数`减一*/ = "scrcpy -s";
    strcat_s( c命令, " " );
    cmd1.cd( "C:\scrcpy-win64-v3.0.2" );
    system( "cd C:\scrcpy-win64-v3.0.2" );
    cmd1.set颜色( 177 );/*绿背蓝字*/coutsf( "{}{}", "scrcpy ", "{ \n" ); cmd1.set颜色( 07 );/*黑背白字*/
    system( "scrcpy " );
    cmd1.set颜色( 177 );/*绿背蓝字*/coutsf( "{}", "} \n" ); cmd1.set颜色( 07 );/*黑背白字*/
    cmd1.set颜色( 177 );/*绿背蓝字*/coutsf( "{}{}", "scrcpy -s CB512FWSW7", "{ \n" ); cmd1.set颜色( 07 );/*黑背白字*/
    strcat_s( c命令, ccp );
    system( c命令 );
    cmd1.set颜色( 177 );/*绿背蓝字*/coutsf( "{}", "} \n" ); cmd1.set颜色( 07 );/*黑背白字*/
  }/*void*/;
  void 指令_scrcpy杠s( 新s 设备名 ){
    int iS下标 = 0/*iCcp下标*/; 新s s指令( 1400, ' ' );    新ccp ccp指令;
    getS1从第几位开始等于s2( iS下标, "scrcpy -s ", s指令, iS下标 );
    if( 设备名 != "" ){ getS1从第几位开始等于s2( iS下标, 设备名, s指令, iS下标 ); getS1从第几位开始等于s2( iS下标, " ", s指令, iS下标 ); }/*if*/;
    s指令 = s指令.substr( 0, iS下标 );
    ccp指令 = retSTOccp( s指令 ); c一行某色字某色背景A运行指令( ccp指令 );
  }/*void*/;
  //>Pull
#define 指令ζadb杠s设备名s1s2s3_s2s3改斜杠A后非斜杠 指令_adb杠s设备名s1s2s3_s2s3改斜杠A后非斜杠
#define 指令ζadb杠s设备名S1S2S3_S2S3改斜杠A后非斜杠 指令_adb杠s设备名s1s2s3_s2s3改斜杠A后非斜杠
#define 指令_adb杠s设备名S1S2S3_S2S3改斜杠A后非斜杠 指令_adb杠s设备名s1s2s3_s2s3改斜杠A后非斜杠
  void 指令_adb杠s设备名s1s2s3_s2s3改斜杠A后非斜杠( 新s 设备名, 新s s1, 新s s2, 新s s3, int _1是s2左斜杠s3右斜杠_2是s2右斜杠s3左斜杠_3是都左_4是都右 ){
    /*改成/A后非/*/{
      wfzi读取.确保s1最后一位不是斜杠( s2 ); wfzi读取.确保s1最后一位不是斜杠( s3 );
      if( _1是s2左斜杠s3右斜杠_2是s2右斜杠s3左斜杠_3是都左_4是都右 == 1 ){ wfzi读取.get把s1的s2改成s3( "\\", "/", s2 ); wfzi读取.get把s1的s2改成s3( "/", "\\", s3 ); } else if( _1是s2左斜杠s3右斜杠_2是s2右斜杠s3左斜杠_3是都左_4是都右 == 2 ){ wfzi读取.get把s1的s2改成s3( "/", "\\", s2 ); wfzi读取.get把s1的s2改成s3( "\\", "/", s3 ); } else if( _1是s2左斜杠s3右斜杠_2是s2右斜杠s3左斜杠_3是都左_4是都右 == 3 ){
        wfzi读取.get把s1的s2改成s3( "\\", "/", s2 ); wfzi读取.get把s1的s2改成s3( "\\", "/", s3 );
      } else if( _1是s2左斜杠s3右斜杠_2是s2右斜杠s3左斜杠_3是都左_4是都右 == 4 ){ wfzi读取.get把s1的s2改成s3( "/", "\\", s2 ); wfzi读取.get把s1的s2改成s3( "/", "\\", s3 ); }/*else if*/;
    }/*改成/A后非/*/;
    int iS下标 = 0/*iCcp下标*/; 新s s指令( 1400, ' ' );    新ccp ccp指令;
    getS等于adb杠s设备名(/*输入*/设备名,/*输出*/s指令, iS下标 );
    if( s1 != "" ){ getS1从第几位开始等于s2( iS下标, s1, s指令, iS下标 ); getS1从第几位开始等于s2( iS下标, " ", s指令, iS下标 ); }/*if*/;
    if( s2 != "" ){ getS1从第几位开始等于s2( iS下标, s2, s指令, iS下标 ); getS1从第几位开始等于s2( iS下标, " ", s指令, iS下标 ); }/*if*/;
    if( s3 != "" ){ getS1从第几位开始等于s2( iS下标, s3, s指令, iS下标 ); }/*if*/;
    s指令 = s指令.substr( 0, iS下标 );
    ccp指令 = retSTOccp( s指令 ); c一行某色字某色背景A运行指令( ccp指令 );
    retu; cout2( "标记", "\n" );
  }/*void*/;
  /*手机-->本地; https://blog.csdn.net/beautyxiang/article/details/81067233 */
  void adbPull( 新s 设备名, 新s 手机p, 新s 本地p_文件夹 ){ wfjm读写.封装的新建文件( 本地p_文件夹, "", "/"/*?手机p=string subscript out of range*/ );    指令_adb杠s设备名s1s2s3_s2s3改斜杠A后非斜杠( 设备名, "pull", 手机p, 本地p_文件夹, 1 ); }/*void*/;
  /*本地-->手机; adbPush是p1放到p2里面{ A/B-->C 结果的现象是{ C/B }; A-->C 结果的现象是{ C/A }; }, 所以{ 要把子层文件夹名加在左p右, 使用{ A/B/子层-->C }; */
  /*?和上面一样: adbPush不是2个p同级{ 把<文件夹的子1层>放到<文件夹里> or 把<文件夹>放到<右1的文件夹的父1层> }, 是把<右1的文件夹>放到<文件夹里>, 所以把<复制p>改成<复制p的子1层>{ 如{ da/包名-->da 得 da/包名; da-->da 得 da/da; }; }*/
  void adbPush( 新s 设备名, 新s 本地p_文件夹, 新s 手机p ){ wfjm读写.封装的新建文件( 本地p_文件夹, "", "/" );    指令_adb杠s设备名s1s2s3_s2s3改斜杠A后非斜杠( 设备名, "push", 本地p_文件夹, 手机p, 2 ); }/*void*/;
  void 指令_adb杠s设备名s1s2_s2改斜杠A后非斜杠( 新s 设备名, 新s s1, 新s s2, int _1是s2左斜杠_2是s2右斜杠 ){
    /*改成/A后非/*/{
      wfzi读取.确保s1最后一位不是斜杠( s2 );
      if( _1是s2左斜杠_2是s2右斜杠 == 1 ){ wfzi读取.get把s1的s2改成s3( "\\", "/", s2 ); ; } else if( _1是s2左斜杠_2是s2右斜杠 == 2 ){ wfzi读取.get把s1的s2改成s3( "/", "\\", s2 ); }/*else if*/;
    }/*改成/A后非/*/;
    int iS下标 = 0/*iCcp下标*/; 新s s指令( 1400, ' ' );    新ccp ccp指令;
    getS等于adb杠s设备名(/*输入*/设备名,/*输出*/s指令, iS下标 );
    if( s1 != "" ){ getS1从第几位开始等于s2( iS下标, s1, s指令, iS下标 ); getS1从第几位开始等于s2( iS下标, " ", s指令, iS下标 ); }/*if*/;
    if( s2 != "" ){ getS1从第几位开始等于s2( iS下标, s2, s指令, iS下标 ); }/*if*/;
    s指令 = s指令.substr( 0, iS下标 );
    ccp指令 = retSTOccp( s指令 ); c一行某色字某色背景A运行指令( ccp指令 );
    retu; cout2( "标记", "\n" );
  }/*void*/;
  //?是否是写错了?
  //adb remount; 指令_删除; 需要root; /*Not running as root. Try "adb root" first.*/
  void 指令_adbRemount( 新s 设备名, 新s 手机p ){ 指令_adb杠s设备名s1s2_s2改斜杠A后非斜杠( 设备名, "remount", 手机p, 1 ); }/*void*/;
  /*路径是拼接的, 备份\机型\时间\, 是名字里有空格=指令根本就没运行{ todo 要在手机上修改文件名 }*/
  void 简写备份录音( 新ccp ccp设备名, 新ccp ccp备份根文件夹/*ccp本地首文件夹,ccp本地备份文件夹,ccp本地时间文件夹,ccp本地机型文件夹,ccp本地备份根文件夹*/ ){
    /*todo 路径中间有" \*/
    cout1( "简写备份录音{}" ); coutEnd;
    ///adbPull(ccp设备名,"/sdcard/",ccp备份根文件夹);
    新c c备份Path[140] = "";/*H:\`备份`安卓手机*/
    /*在末尾添加\*/
    strcpy_s( c备份Path, ccp备份根文件夹 );/*复制一份,之后就修改这一个`不修改原本的ccp*/
    if( wfzi读取.ifS最后一位是( c备份Path, '\\' ) == 0 ){/*没有斜杠\就`添加斜杠\*//*?ccp可以用来`输入s,有没有可能`两个电脑上编译环境不一样`那边可以成功？*/ ///
      strcat_s( c备份Path, "\\" );/*adb自己不会加,是我看错了*/
    }/*if*/
    cout1( "strcat_s(c备份Path,ccp设备名);" ); coutEnd;
    strcat_s( c备份Path, ccp设备名 ); strcat_s( c备份Path, "\\" );
    cout1( "strcat_s(c备份Path,uijm.ret系统时间ccp年月日没有冒号_年到秒(\"\\\"));" ); coutEnd;
    strcat_s( c备份Path, uijm.ret系统时间ccp年月日没有冒号_年到秒( ""/*\\*/ ) ); strcat_s( c备份Path, "\\" );/*到这里`完整路径,备份\机型\时间\*/
    wfjm读写.if没有就新建( c备份Path );
    cout1( "指的path=" ); cout1( c备份Path ); coutEnd; /// /*在这时候`手动新建文件夹*/ sleep14000;
    adbPull( ccp设备名, "/sdcard/EasyVoiceRecorder/", c备份Path );
    adbPull( ccp设备名, "/sdcard/录音/", c备份Path );
  }/*void*/;
  void 简写备份截图( 新ccp ccp设备名, 新ccp ccp备份根文件夹 ){
    ///adbPull(ccp设备名,"/sdcard/",ccp备份根文件夹);
    adbPull( ccp设备名, "/sdcard/Picture", ccp备份根文件夹 );
    adbPull( ccp设备名, "/sdcard/EasyVoiceRecorder", ccp备份根文件夹 );
  }/*void*/;
  /**/;//>adbShellSettings
  /*👍adb shell settings高级指令设置系统属性所有的指令汇总+注释_adb shell settings put-CSDN博客 https://blog.csdn.net/zh6526157/article/details/134440688 */;
  void 指令_查看系统设置( /*!输入*/新s 设备名/*!输出*/ ){ 指令_adb杠s设备名接s1接( 设备名, " shell settings list system ", {} ); }/*void*/;
  //安全设置（secure）
  void 查看所有安全设置( /*!输入*/新s 设备名/*!输出*/ ){ 指令_adbShellSettingsListSecure( 设备名, {  } ); }/*void*/;
  //>修改硬件设置
  ;//adb shell settings put system screen_brightness 200
  void 指令_修改屏幕亮度( /*!输入*/新s 设备名, 新s 亮度值/*!输出*/ ){ 指令_adbShellSettingsPut( 设备名, { "system","screen_brightness",亮度值 } ); }/*void*/;
  //adb shell settings put system haptic_feedback_enabled 1
  void 是开启触觉反馈（振动反馈）( /*!输入*/新s 设备名/*!输出*/ ){ 指令_adbShellSettingsPutSystem( 设备名, { "haptic_feedback_enabled", "1" } ); }/*void*/;
  void 否开启触觉反馈（振动反馈）( /*!输入*/新s 设备名/*!输出*/ ){ 指令_adbShellSettingsPutSystem( 设备名, { "haptic_feedback_enabled", "0" } ); }/*void*/;
  //adb shell settings put system notification_light_pulse 1
  void get是否开启通知光( /*!输入*/新s 设备名/*!输出*/ ){ 指令_adbShellSettingsGetSystem( 设备名, { "notification_light_pulse" } ); }/*void*/;
  ;//adb shell settings put system screen_off_timeout 60000
  void 指令_修改关闭屏幕的倒计时( /*!输入*/新s 设备名, 新s 数/*!输出*/ ){ 指令_adbShellSettingsPut( 设备名, { "system","screen_off_timeout", 数 } ); }/*void*/;
  void 指令_修改关闭屏幕的倒计时_秒( /*!输入*/新s 设备名, 新f 秒数/*!输出*/ ){ 指令_adbShellSettingsPut( 设备名, { "system","screen_off_timeout", lzxy转换.TS( 秒数 * 1000 ) } ); }/*void*/;
  //>修改外观设置
  void 是开启通知光( /*!输入*/新s 设备名/*!输出*/ ){ 指令_adbShellSettingsPutSystem( 设备名, { "notification_light_pulse", "1" } ); }/*void*/;
  void 否开启通知光( /*!输入*/新s 设备名/*!输出*/ ){ 指令_adbShellSettingsPutSystem( 设备名, { "notification_light_pulse", "0" } ); }/*void*/;
  //WiFi睡眠策略; 设置WiFi在屏幕关闭时的行为：
  ;//adb shell settings put global wifi_sleep_policy 2
  void 是WiFi在屏幕关闭时始终保持连接( /*!输入*/新s 设备名/*!输出*/ ){ 指令_adbShellSettingsPutGlobal( 设备名, { "wifi_sleep_policy", "2" } ); }/*void*/;
  ;//adb shell settings put system font_scale 1.15
  void 指令_修改文字大小( /*!输入*/新s 设备名, 新s 字体放大比例/*!输出*/ ){ 指令_adbShellSettingsPutSystem( 设备名, { "font_scale", 字体放大比例 } ); }/*void*/;
  void 指令_修改文字大小( /*!输入*/新vs v设备名, 新s 字体放大比例/*!输出*/ ){ 指令_adbShellSettingsPutSystem( v设备名, { "font_scale", 字体放大比例 } ); }/*void*/;
  ;//adb shell settings put system accelerometer_rotation 1
  void 指令_自动旋转屏幕( /*!输入*/新s 设备名, 新i _0C_1是_2否/*!输出*/ ){ 指令_0GetV_1PutVpushb1_2PutVpushb0( 设备名, { "system","accelerometer_rotation" }, _0C_1是_2否 ); }/*void*/;
  //>默认行为
  ;//adb shell settings put secure default_input_method "com.android.inputmethod.latin/.LatinIME"
  void 指令_设置默认输入法( /*!输入*/新s 设备名, 新s 包名/*!输出*/ ){ 指令_adbShellSettingsPut( 设备名, { "secure","default_input_method", 包名 } ); }/*void*/;
  //>设置软件里的设置
  ;//adb root
  void 指令_adbRoot( 新s 设备名 ){ 指令_adb杠s设备名接s1接( 设备名, "root", {}, {} ); }/*void*/;
  //adb remount
  void 指令_adbRemount( 新s 设备名 ){ 指令_adb杠s设备名接s1接( 设备名, "remount", {}, {} ); }/*void*/;
  //adb shell date "2023-01-11 18:00:00"
  void 指令_adbShelldate( 新s 设备名, 新s date ){/*2025年4月23日13:50:24*/指令_adb杠s设备名接s1接( 设备名, "shell date", { "\"",date,"\"" }, {} ); }/*void*/;
  void 指令_修改时间( 新s 设备名, 新s date ){ 指令_adbRoot( 设备名 ); 指令_adbRemount( 设备名 ); 指令_adbShelldate( 设备名, date ); }/*void*/;
  ;//adb shell settings put global development_settings_enabled 1
  void 指令_开启开发者选项( /*!输入*/新s 设备名, 新i _0C_1是_2否/*!输出*/ ){ 指令_0GetV_1PutVpushb1_2PutVpushb0( 设备名, { "global","development_settings_enabled" }, _0C_1是_2否 ); }/*void*/;
  //>adbShellSettingsPutSystem
  void 指令_0GetV_1PutVpushb1_2PutVpushb0( /*!输入*/新s 设备名, 新vs v, int _0C_1是_2否/*!输出*/ ){/*2025年4月21日15:10:30*/
    if( _0C_1是_2否 == 0 ){//adb shell settings get
      指令_adbShellSettingsGet( 设备名, v );
    } else if( _0C_1是_2否 == 1 ){//adb shell settings put
      v.push_back( "1" );
      指令_adbShellSettingsPut( 设备名, v );
    } else if( _0C_1是_2否 == 2 ){//adb shell settings put
      v.push_back( "0" );
      指令_adbShellSettingsPut( 设备名, v );
    }/*else if*/;
  }/*void*/;
  void 指令_显示触摸位置( /*!输入*/新s 设备名, int _0C_1是_2否/*!输出*/ ){ 指令_0GetV_1PutVpushb1_2PutVpushb0( 设备名, { "system","show_touches" }, _0C_1是_2否 ); }/*void*/;/*2025年4月21日15:12:29*/
  void 指令_显示指针坐标( /*!输入*/新s 设备名, int _0C_1是_2否/*!输出*/ ){ 指令_0GetV_1PutVpushb1_2PutVpushb0( 设备名, { "system","pointer_location" }, _0C_1是_2否 ); }/*void*/;/*2025年4月21日15:12:29*/
  ;//adb shell settings put global window_animation_scale 0
  void 指令_修改窗口动画缩放( /*!输入*/新s 设备名, 新s 数/*!输出*/ ){ 指令_adbShellSettingsPut( 设备名, { "global window_animation_scale",数 } ); }/*void*/;/*2025年4月22日15:03:15*/
  ;//adb shell settings put global transition_animation_scale 0
  void 指令_修改过渡动画缩放( /*!输入*/新s 设备名, 新s 数/*!输出*/ ){ 指令_adbShellSettingsPut( 设备名, { "global transition_animation_scale",数 } ); }/*void*/;
  ;//adb shell settings put global animator_duration_scale 0
  void 指令_修改动画持续时间缩放( /*!输入*/新s 设备名, 新s 数/*!输出*/ ){ 指令_adbShellSettingsPut( 设备名, { "global animator_duration_scale",数 } ); }/*void*/;
  void 指令_允许安装来自非官方市场的应用( /*!输入*/新s 设备名, int _0C_1是_2否/*!输出*/ ){ 指令_0GetV_1PutVpushb1_2PutVpushb0( 设备名, { "global install_non_market_apps" }, _0C_1是_2否 ); }/*void*/;
  /*https://blog.51cto.com/u_16175494/12104308 */
  void 旋转方向_是竖屏( /*!输入*/新s 设备名/*!输出*/ ){ 指令_adbShellSettingsPutSystem( 设备名, { "user_rotation", "0" } ); }/*void*/;
  void 旋转方向_是横屏( /*!输入*/新s 设备名/*!输出*/ ){ 指令_adbShellSettingsPutSystem( 设备名, { "user_rotation", "1" } ); }/*void*/;
  void 旋转方向_是反向竖屏( /*!输入*/新s 设备名/*!输出*/ ){ 指令_adbShellSettingsPutSystem( 设备名, { "user_rotation", "2" } ); }/*void*/;
  void 旋转方向_是反向横屏( /*!输入*/新s 设备名/*!输出*/ ){ 指令_adbShellSettingsPutSystem( 设备名, { "user_rotation", "3" } ); }/*void*/;
  //adb shell settings put system accelerometer_rotation 
  void 旋转方向_是自动旋转( /*!输入*/新s 设备名/*!输出*/ ){ 指令_adbShellSettingsPutSystem( 设备名, { "accelerometer_rotation", "1" } ); }/*void*/;
#define 指令_adbShellSettingsPutSystemFont_scale 指令_set字体大小
  //adb -s 3d651a4c shell settings put system font_scale 1
  void 指令_set字体大小( /*!输入*/新s 设备名, 新s s字体大小 /*!输出*/ ){ 指令_adbShellSettingsPutSystem( 设备名, { "font_scale", s字体大小 } ); }/*void*/;
  ;//adb shell settings put secure display_density_forced 440
  void 指令_set显示密度（DPI）( /*!输入*/新s 设备名, 新s 数 /*!输出*/ ){ 指令_adbShellSettingsPut( 设备名, { "secure display_density_forced", 数 } ); }/*void*/;
  void 指令_set语言( /*!输入*/新s 设备名, 新s 值 /*!输出*/ ){ 指令_adbShellSettingsPut( 设备名, { "system user_locale", 值 } ); }/*void*/;
  void 指令_set语言为简体中文( /*!输入*/新s 设备名 /*!输出*/ ){ 指令_adbShellSettingsPut( 设备名, { "system user_locale", "zh_CN" } ); }/*void*/;/*2025年4月22日15:37:33*/

  //>adbShellSettingsPutGlobal
  /*使用ADB指令永久隐藏状态栏和虚拟按键 https://blog.csdn.net/qq_33462950/article/details/108547111 */
  void 是隐藏状态栏( /*!输入*/新s 设备名 /*!输出*/ ){ 指令_adbShellSettingsPutGlobal( 设备名, { "policy_control", "immersive.status=*" } ); }/*void*/;
  void 是隐藏虚拟键( /*!输入*/新s 设备名 /*!输出*/ ){ 指令_adbShellSettingsPutGlobal( 设备名, { "policy_control", "immersive.navigation=*" } ); }/*void*/;
  void 是隐藏虚拟键和状态栏( /*!输入*/新s 设备名 /*!输出*/ ){ 指令_adbShellSettingsPutGlobal( 设备名, { "policy_control", "immersive.full=*" } ); }/*void*/;
  void 否隐藏虚拟键和状态栏( /*!输入*/新s 设备名 /*!输出*/ ){ 指令_adbShellSettingsPutGlobal( 设备名, { "policy_control", "null" } ); }/*void*/;
  /*adb shell settings高级指令设置系统属性所有的指令汇总+注释 https://blog.csdn.net/zh6526157/article/details/134440688 */
  void 指令_设置NTP服务器地址( /*!输入*/新s 设备名, 新s s2 /*!输出*/ ){ 指令_adbShellSettingsPutGlobal( 设备名, { "ntp_server", s2 } ); }/*void*/;
  void 指令_设置NTP服务器为亚洲地区的服务器( /*!输入*/新s 设备名, 新s s字体大小 /*!输出*/ ){ 指令_设置NTP服务器地址( 设备名, "asia.pool.ntp.org" ); }/*void*/;
  //>开发者选项
  void 是显示触摸位置( /*!输入*/新s 设备名/*!输出*/ ){ 指令_显示触摸位置( 设备名, 1 ); }/*void*/;  void 否显示触摸位置( /*!输入*/新s 设备名 /*!输出*/ ){ 指令_显示触摸位置( 设备名, 2 ); }/*void*/;
  void 是显示指针坐标( /*!输入*/新s 设备名/*!输出*/ ){ 指令_显示指针坐标( 设备名, 1 ); }/*void*/;  void 否显示指针坐标( /*!输入*/新s 设备名 /*!输出*/ ){ 指令_显示指针坐标( 设备名, 2 ); }/*void*/;
  /**/;//▬附加功能▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
  /*?弃用*/
  void 是否cS和cCcp( int 是否1, int 是否2, 新s s, 新ccp c ){/*ifCs和cc*/
    if( 是否1 ){
      coutsf( "{}\n", s );
    }/*if*/
    if( 是否2 ){
      coutsf( "{}\n", c );
    }/*if*/
  }/*void*/;
  /*?弃用*/
  void 是否cS和cCcp( int 是否1, 新s s, int 是否2, 新ccp c ){/*ifCs和cc*/
    if( 是否1 ){
      coutsf( "{}\n", s );
    }/*if*/
    if( 是否2 ){
      coutsf( "{}\n", c );
    }/*if*/
  }/*void*/;
  /*?弃用*/
  void 是否cPath和c指令( 新s path, 新ccp ccp指令 ){ 是否cS和cCcp( 是否cPath, 是否c指令, path, ccp指令 ); }/*void*/;
  /*?弃用*/
  void 用i判断是否c指令( 新ccp ccp指令 ){ 是否cS和cCcp( 是否cPath, 是否c指令, "", ccp指令 ); }/*void*/;
  /*输入{ vs[] }; 输出{ vs2 }*/
  void forVs来getpathTOvs_path接path( 新vs& vs/*,新vs &vs2*/ ){
    新vs vs2;
    for( size_t i = 0; i < vs.size( ); i++ ){
      wfjm读写.getpathTOvs_path接path( vs[i], vs2 );
    }/*for*/;
    if( 是否cPath ){
      /*是append,所以只在最后c1次*/qmviC.cV( "\n", vs2 );
    }
  }
  void forVs来getpathTOvs_path接pathANDcVs( 新vs& vs/*,新vs &vs2*/ ){ }/*void*/;
  void getforVs来getpathTOvs_path接path( /*输入*/新vs& vs,/*输出*/新vs& vs2 ){
    for( size_t i = 0; i < vs.size( ); i++ ){
      wfjm读写.getpathTOvs_path接path( vs[i], vs2 );
    }/*for*/;
  }/*void*/;
  //▬拖文件到exe▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
  /*代码文件命名为arg.c, 编译链接生成可执行文件arg.exe. 将文件或者文件夹拖到arg.exe上面，就会显示文件或者文件夹的完整路径。
  int main(int argc, char *argv[]){*/
  int 拖文件到exeZPrintfPath/*CCxx拖文件到程序读取该文件的路径*/( int argc, char* argv[] ){/*https://blog.csdn.net/qq_44041312/article/details/126550886 */
    printf( "File or Folder name: %s\n", argv[1] );
    system( "PAUSE" );
    return 0;
  }/*int*/;
  char* 拖文件到exeZRetPath( int argc, char* argv[] ){ retu argv[1]; }/*char**/;
  /**/;//▬例子▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
  void 例子( ){ }/*void*/;
  /**/;//▬测试▬▬▬▬▬▬▬▬▬▬▬▬▬▬/*▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬*▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬*▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
  auto z试_新cpTO新ccp( ){/*a试_新cpTO新ccp*/
    新cp cp;
    //*未初始化*/*cp='1234';
    ///coutsf("cp={};*cp={}",cp,*cp);
    ///新ccp ccp="1234";
  }
  auto z试_sizeOfCcp( ){/*a试_*/
    新ccp ccp = "1234";
    coutsf( "sizeOfCcp=\n{}; \nsizeOf*Ccp=\n{}; \n", /*这是内存大小*/sizeof( ccp ), sizeof( *ccp ) );/*八和一*/
  }

  /**/;//>

  /**/;//▬附加功能▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬



}/*struct*/;



#endif