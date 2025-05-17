#pragma once
#ifndef 文件属性_H
#define 文件属性_H

#include<bitset>
#include<conio.h>
#include<cstdio>
#include <fstream>
#include<iostream>
#include<stdio.h>
#include <string>
#include<windows.h>
#include<E:/lib/文字读取.h>
#include<E:/lib/时间.h>

//文件读写-->cmd-->文件属性
class 文件属性 : public 文件读写/*, public cmd*/ /*, public 文字读取*/{
public/*class*/:
  前置计算 qmvi计算;
  前置计算_不使用前置变量 qmvi计算_不使用前置变量;
  //*文件读写 wfjm读写;
  类型转换 lzxy转换;
  数N分<int, 4> 数4分i;
  时间 uijm;
  文字读取 wfzi读取;
  cmd cmd1;
public/*struct*/:
public:
  SYSTEMTIME 现在的时间, 上1次_现在的时间, 上2次_现在的时间;
  int 是否结束;
  int append次数;
  新fst fst在运行, fst运行结束;
public:
  文件属性( ){ }/*()*/
  /**/;//▬path▬操作文字▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
  新i retS1的后缀名的点的下标_从右( 新s s1 ){ retu wfzi读取.retS1的某单字符的下标_从右( s1, "." ); }/*新i*/;
  新s retS删后缀( 新s s1 ){ 新s sRet; if( retS1的后缀名的点的下标_从右( s1 ) >= 0 ){/*是下标*/sRet = s1.substr( 0, retS1的后缀名的点的下标_从右( s1 )/*sub(0,点的前1位)*/ ); }/*if*/; retu sRet; }/*新s*/; 新s retPath删后缀( 新s p1 ){ 新s sRet; sRet = retS删后缀( p1 ); retu sRet; }/*新s*/;
  新s retS的后缀( 新s s1 ){ 新s sRet; if( retS1的后缀名的点的下标_从右( s1 ) >= 0 ){/*是下标*/sRet = s1.substr( retS1的后缀名的点的下标_从右( s1 ), s1.size( ) - retS1的后缀名的点的下标_从右( s1 )/*size-下标=字数; 下标=下标左边的字数, 如{ 0左边是0个字, 1左边是1个字 }*/ ); }/*if*/; retu sRet; }/*新s*/; 新s retPath的后缀( 新s p1 ){ 新s sRet; sRet = retS的后缀( p1 ); retu sRet; }/*新s*/;
#define retPath删右1部分 retPath删右1
#define retP删右1 retPath删右1
  新s retPath删右1( 新s p1 ){ 新s sRet; pathInfo pI删右1( p1 ); sRet = pI删右1.retS_vs去掉最后1部分( "/" ); retu sRet; }/*新s*/;
#define retPath删右几部分 retPath删右
#define retP删右 retPath删右
  新s retPath删右( 新s p1, int 几 ){ 新s sRet; pathInfo pI删右( p1 ); sRet = pI删右.retS_vs删右( 几 ); retu sRet; }/*新s*/;
#define retPath右1部分 retPath最后1部分
#define retPath右1 retPath最后1部分
#define retP右1 retPath最后1部分
  新s retPath最后1部分( 新s p1, int sR右_1是右不是斜杠 ){ 新s sRet; pathInfo pI右( p1 ); sRet = pI右.retS_vs最后1部分( "/" ); if( sR右_1是右不是斜杠 == 1 ){ wfzi读取.确保s1最后一位不是斜杠( sRet ); }/*if*/; retu sRet; }/*新s*/;
#define retPath右第几部分 retPath右第几
  新s retPath右第几( 新s p1, int 几 ){ 新s sRet; pathInfo pI右( p1 ); sRet = pI右.retS_vs右第几( 几 ); retu sRet; }/*新s*/;
#define retPath右几部分 retPath右
#define retPath右几 retPath右
  新s retPath右( 新s p1, int 几 ){ 新s sRet; pathInfo pI右( p1 ); sRet = pI右.retS_vs右几( 几 ); retu sRet; }/*新s*/;
#define retP内某后缀的文件p retPath内某后缀的文件p
#define rP内某后缀的文件p retPath内某后缀的文件p
  /*retPath子1层某后缀的文件p, retPath子1层的某后缀的文件p*/
  新s retPath内某后缀的文件p( 新s p1, 新s 后缀, int 找p范围_1是子1层_2是子2层 ){/*2025年4月21日05:05:54*/
    新s sRet = ""; 子path内文件属性info 子1I( p1 );
    /*for后缀*/
    for( size_t 一 = 0; 一 < 子1I.vs文件名.size( ); 一++ ){///cout2("retPath内某后缀的文件p: 子i.vs文件名[一]=",子i.vs文件名[一]);cout1(endl);
      if( 子1I.path是否是文件夹_vi类型__finddata_t( 一 ) != 1/*是文件*/ and retS的后缀( 子1I.vs文件名[一] ) == 后缀 ){/*?<obb/>会strOutOfRange*/
        sRet = 子1I.vs子path[一];
      }/*if*/;
      if( 找p范围_1是子1层_2是子2层 == 2 ){
        if( 子1I.path是否是文件夹_vi类型__finddata_t( 一 ) == 1/*是文件夹*/ ){/*?<obb/>会strOutOfRange*/
          子path内文件属性info 子2I( 子1I.vs子path[一] );
          for( size_t 一 = 0; 一 < 子2I.vs文件名.size( ); 一++ ){
            if( 子1I.path是否是文件夹_vi类型__finddata_t( 一 ) != 1/*是文件*/ and retS的后缀( 子1I.vs文件名[一] ) == 后缀 ){
              sRet = 子1I.vs子path[一];
            }/*if*/;
          }/*for*/;
        }/*if*/;
      }/*if*/;
    }/*for*/;
    COUT2( "retPath内某后缀的文件p(): sRet=", sRet ); COUT1( endl );
    retu sRet;
  }/*新s*/; 新s retPath内某后缀的文件p( 新s p1, 新s 后缀 ){ retu retPath内某后缀的文件p( p1, 后缀, 1 ); }/*新s*/;
  /**/;//▬指令or操作文件▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
  /*用\*/
  /*?不能删文件; 不能用/, 右边有没有/都可以*/
  void 删除文件夹( 新s p1, int _1是c将删除 ){
    新s 斜杠;
    if( _1是c将删除 == 1 ){
      cout1( "将删除< " );
      cout1( p1 );
      cout1( " >\n" );
    } else{
    }/*else*/;
    cmd1.rdSQPath( p1 );
  }/*void*/;
#define 例子_删除文件夹 封装的删除文件夹
  /*指令{ rdSQ+Path }*/
  void 封装的删除文件夹( 新s p1, int _1是c将删除 ){/*2025年4月9日14:18:13*/
    新s 斜杠 = "/", 右斜杠 = "\\"; 新s 真删除p = "";
    /*get { 用\的真删除p }*/{
      真删除p = p1;
      wfzi读取.get把s1的一位s2改成一位s3( "/", 右斜杠, 真删除p );
    }/*get { 用\的真删除p }*/;
    删除文件夹( 真删除p, _1是c将删除 );
  }/*void*/; void 例子_删除文件夹( 新s p1 ){ 例子_删除文件夹( p1, 0 ); }/*void*/;
  /*不能在<cmd.h>; 复制p,粘贴p=文件夹*/
  void 新建A复制文件夹T粘贴p(/*!输出*/新s 复制p, 新s 粘贴p ){
    新s 真复制p, 真粘贴p;
    真复制p = /*复制`子1层*/复制p; wfzi读取.确保s1最后一位不是斜杠( 真复制p ); wfzi读取.get把s1的一位s2改成一位s3( "/", "\\", 真复制p );
    真粘贴p = 粘贴p; wfzi读取.确保s1最后一位是斜杠( 真粘贴p ); wfzi读取.get把s1的一位s2改成一位s3( "/", "\\", 真粘贴p );
    封装的新建文件( 真粘贴p, "" );
    cmd1.xcopyKYE复制粘贴path( 真复制p, 真粘贴p );    ///xcopyE( 真复制p, 真粘贴p );
  }/*删除A新建A复制文件T<全英文p>*/;
  /*粘贴p=文件夹*/
  void 删除A新建A复制文件夹T粘贴p(/*!输出*/新s 复制p, 新s 粘贴p ){/*2025年4月27日03:37:22*/
    wfzi读取.确保s1最后一位是斜杠( 粘贴p );
    例子_删除文件夹( 粘贴p );
    新建A复制文件夹T粘贴p( 复制p,  粘贴p );
  }/*删除A新建A复制文件T<全英文p>*/;
  /**/;//▬get{,文件位置,文件属性,}▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
#define retP去掉右1部分 retP删右1部分
  /*?上面已经有这个函数*/
  新s retP删右1部分( 新s p1, 新s 斜杠 ){ 新s sR = ""; pathInfo pIP1删右1( p1 ); sR = pIP1删右1.retS_vs去掉最后1部分( 斜杠 ); retu sR; }/*新s*/; 新s retP删右1部分( 新s p1 ){ 新s sR = retP删右1部分( p1, "/" ); retu sR; }/*新s*/;
#define path是文件夹还是文件 是否path是文件夹
  /*path去掉最后一个部分-->getPath内文件属性( 上层 )-->for( vi类型 ){ 找vs文件名的行 }-->是否*/
  int 是否path是文件夹( /*!输入*/string p1/*sP1*/ /*!输出*/ ){/*2025年2月28日20:14:11*/
    函数前( 3, "是否path是文件夹" ); int iRetu = 0;
#define def函数后 函数后( 3,"是否path是文件夹" ); retu iRetu;
    string path去掉最后一个部分 = "";
    ;/*c*/{ c注释1ζ3 { c注空格 c注次加 cout1( "这行是: " ); cout1( "pathInfo" ); coutEnd; }/*if*/ }/*c*/
    pathInfo pIP去最后( p1 );
    pIP去最后.getSAppendVs去掉最后1部分( "\\", path去掉最后一个部分 );
    ;/*c*/{ c注释1ζ3 { c注空格 c注次加 cout1( "这行是: " ); cout1( "子path内文件属性info" ); coutEnd; }/*if*/ }/*c*/
    子path内文件属性info 子内i; //*子内i.是否c注释 = 2;
    ;/*c*/{ c注释1ζ3 { c注空格 c注次加 cout1( "这行是: " ); cout3( "getPath内文件属性(", path去掉最后一个部分, ",\\)" ); coutEnd; }/*if*/ }/*c*/
    子内i.getPath内文件属性( path去掉最后一个部分, "\\" );
    /* 找vs文件名的行-->是否vi类型[行]=1 */ /*?vecOut问题*/
    for( size_t 行 = 0; 行 < 子内i.vs文件名.size( ); 行++ ){
      ;/*c*/{ c注释1ζ3 { c注空格 c注次加 cout1( "这行是: " ); cout1( "是否s1首是s2" ); coutEnd; }/*if*/ }/*c*/
      if( wfzi读取.是否s1首是s2( 子内i.vs文件名[行], pIP去最后.vs每部分[pIP去最后.vs每部分.size( ) - 1] ,2) == 1 ){/*!是<文件名>首等于<p的右1>*/
        ;/*c*/{ c注释1ζ3 { c注空格 c注次加 cout1( "这行是: " ); cout1( "path是否是文件夹_vi类型__finddata_t" ); coutEnd; }/*if*/ }/*c*/
        if( 子内i.path是否是文件夹_vi类型__finddata_t( 行 ) == 1 ){/*!是文件夹*/
          ;/*c*/{ c注释1ζ3 { c注空格 c注次加 cout1( "是文件夹" ); coutEnd; }/*if*/ }/*c*/
          iRetu = 1; def函数后
        } else{/*!是文件*/
          ;/*c*/{ c注释1ζ3 { c注空格 c注次加 cout1( "是文件" ); coutEnd; }/*if*/ }/*c*/
          iRetu = 0; def函数后
        }/*else*/;
        break;
      }/*if*/;
    }/*for*/;
    def函数后;
  }/*int*/;
#define path是否存在 是否path存在
  /*path去掉最后一个部分-->getPath内文件属性( 上层 )-->for( vi类型 ){ 找vs文件名的行 }-->是否*/
  /*是否<path去掉最后一个部分>存在*/
  int 是否path存在( /*!输入*/string p1/*sP1*/ /*!输出*/ ){/*2025年2月28日20:14:11*/
    函数前( 3, "是否path存在" ); int iRetu = 0;
#define def函数后 函数后( 3,"是否path存在" ); retu iRetu;
    string path去掉最后一个部分 = "";
    ;/*c*/{ c注释1ζ3 { c注空格 c注次加 cout1( "这行是: " ); cout1( "pathInfo" ); coutEnd; }/*if*/ }/*c*/
    pathInfo pIP去最后( p1 );
    pIP去最后.getSAppendVs去掉最后1部分( "\\", path去掉最后一个部分 );
    ;/*c*/{ c注释1ζ3 { c注空格 c注次加 cout1( "这行是: " ); cout1( "子path内文件属性info" ); coutEnd; }/*if*/ }/*c*/
    子path内文件属性info 子内i; //*子内i.是否c注释 = 2;
    ;/*c*/{ c注释1ζ3 { c注空格 c注次加 cout1( "这行是: " ); cout3( "getPath内文件属性(", path去掉最后一个部分, ",\\)" ); coutEnd; }/*if*/ }/*c*/
    子内i.getPath内文件属性( path去掉最后一个部分, "\\" );
    /* 找vs文件名的行-->是否vi类型[行]=1 */ /*?vecOut问题*/
    for( size_t 行 = 0; 行 < 子内i.vs文件名.size( ); 行++ ){
      ;/*c*/{ c注释1ζ3 { c注空格 c注次加 cout1( "这行是: " ); cout1( "是否s1首是s2" ); coutEnd; }/*if*/ }/*c*/
      if( wfzi读取.是否s1首是s2( 子内i.vs文件名[行], pIP去最后.vs每部分[pIP去最后.vs每部分.size( ) - 1] ,2) == 1 ){/*!是<文件名>首等于<p的右1>*/
        ;/*c*/{ c注释1ζ3 { c注空格 c注次加 cout1( "这行是: " ); cout1( "path是否是文件夹_vi类型__finddata_t" ); coutEnd; }/*if*/ }/*c*/
        if( 子内i.path是否是文件夹_vi类型__finddata_t( 行 ) == 1 ){/*!是文件夹*/
          新s 文件名去斜杠 = wfzi读取.ret删掉s最后一位( 子内i.vs文件名[行] );
          if( 文件名去斜杠 == pIP去最后.vs每部分[pIP去最后.vs每部分.size( ) - 1] ){/*2个s相等*/
            ;/*c*/{ c注释1ζ3 { c注空格 c注次加 cout1( "是文件夹" ); coutEnd; }/*if*/ }/*c*/
            iRetu = 1; def函数后
          }/*if*/;
        } else{/*!是文件*/
          if( 子内i.vs文件名[行] == pIP去最后.vs每部分[pIP去最后.vs每部分.size( ) - 1] ){/*2个s相等*/
            ;/*c*/{ c注释1ζ3 { c注空格 c注次加 cout1( "是文件" ); coutEnd; }/*if*/ }/*c*/
            iRetu = 1; def函数后
          }/*if*/;
        }/*else*/;
        break;
      }/*if*/;
    }/*for*/;
    def函数后;
  }/*int*/;
  /**/;//▬改{,文件位置,文件属性,}▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
  void getPath文件属性TO自身exe文件夹的exe( ){
    /*把exe放在桌面*/
    cmd1.if本exe不在path2Z复制exePath到path2A重命名为新文件名( "\\", R"(E:\vs\getPathTO文件属性的exe 2025年1月13日\x64\Debug\getPathTO文件属性的exe 2025年1月13日.exe)", R"(C:\Users\PINKIE PIE\Desktop\)"
      , R"(读取输入文件AGetPath文件属性TO自身exe文件夹 2025年1月13日.exe)" );/*bung/\:*/
    cmd1.set窗口名( L"读取输入文件AGetPath文件属性TO自身exe文件夹 2025年1月13日" );
    auto/*!lam*/ lamGetPath文件属性TO自身exe文件夹 = [&]( /*!输入*/ /*!输出*/ )->void{
      //>读取文件TGet
      新fst fs; 新s s, 父path = "",/*写入*/_14cppPath = "";
      从头读取( fs, "getPathTO`wfjm`de`uuru.cxx" );
      fs >> s;
      if( wfzi读取.是否s1从第几位开始等于s2( s, 0, "path={" ) ){
        fs >> s;/*读取-->判断-->*/
        if( s != "}"/*直接是}*/ ){ 父path.append( s ); fs >> s; }/*if*/
        while( s != "}" ){/*这就够用了*/        父path.append( " " ); 父path.append( s ); append次数++; if( append次数 >= 140 ){ breakWhile; }/*if*/fs >> s;
        }/*while*/
      }/*if*/
      _14cppPath = qmvi计算.retExe的父path( "/" ) + "14.cpp";
      /*只运行一次*/
      子path内文件属性info 子i; /*已新建14.cpp文件*/getPathTO文件属性A写入Path内文件属性_中文等于大括号_去掉TimeAccess( 子i, 父path, "/", _14cppPath );
      //>写入1个1;
      fst运行结束 << "\n";
      fst运行结束 << 1;
      是否结束 = 1;
      };
    auto/*!lam*/ lam每1s写入1个0 = [&]( /*!输入*/ /*!输出*/ )->void{
      while( true ){
        if( 是否结束 ){
          breakWhile;
        }/*if*/
         //*sleep(400); //*long l现在的时间,l上1次的_现在的时间;uijm.get系统时间TO数字()
        uijm.get系统时间( 现在的时间 );
        //*if( or 现在的时间.wMilliseconds-上1次的_现在的时间 .wMilliseconds>=400){
        if( lzxy转换.TOtime_t( 现在的时间 ) - lzxy转换.TOtime_t( 上1次_现在的时间 ) >= 1 ){/*差1s*/
          fst在运行 << "\n";
          fst在运行 << 0;
          上1次_现在的时间 = 现在的时间;
        }/*if*/
      }/*while*/
      };
    thread t1( lamGetPath文件属性TO自身exe文件夹 );
    thread t2( lam每1s写入1个0 );
    t1.join( );
    t2.join( );
  }/*void*/
  /**/ //▬附加功能▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
};

//[a.open(b, ios::][a-z]{0,8}[);] 

#endif
