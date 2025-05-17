#pragma once
#ifndef 前置计算_H 
#define 前置计算_H

#include  <E:\lib\头文件 c++.h>
#include  <E:\lib\define.h>
#include  <E:\lib\前置变量.h>

#define struct_前置计算 前置计算
/*class*/
struct 前置计算{
public/*class*/:
  前置计算_不使用前置变量 qmvi计算_不使用前置变量;
public:
  /**/;//▬简写`新建▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
  /*?这些别用, 用<前置计算不需要前置变量>里面的函数*//*vi*/
  void viAssign( 新vi& v, struct_下标info 下标inf, 新i i ){
    v.assign( 下标inf.一, i );
  }/*void*/
  void v2iAssign( 新v2i& v, struct_下标info 下标inf, 新i i ){
    v.assign( 下标inf.一, 新vi( 下标inf.二, i ) );
  }/*void*/
   /*vf*/
  void vfAssign( 新vf& v, struct_下标info 下标inf, 新f f ){
    v.assign( 下标inf.一, f );
  }/*void*/
  void v2fAssign( 新v2f& v, struct_下标info 下标inf, 新f f ){
    v.assign( 下标inf.一, 新vf( 下标inf.二, f ) );
  }/*void*/
   /*vc*/
  void vcAssign( 新vc& v, struct_下标info 下标inf, 新c c ){
    v.assign( 下标inf.一, c );
  }/*void*/
  void v2cAssign( 新v2c& v, struct_下标info 下标inf, 新c c ){
    v.assign( 下标inf.一, 新vc( 下标inf.二, c ) );
  }/*void*/
   /*vs*/
  void vsAssign( 新vs& v, struct_下标info 下标inf, 新s s ){
    v.assign( 下标inf.一, s );
  }/*void*/
  void v2sAssign( 新v2s& v, struct_下标info 下标inf, 新s s ){
    v.assign( 下标inf.一, 新vs( 下标inf.二, s ) );
  }/*void*/
  /**/;//▬v的格式转换,位置迁移▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
  void getv2i每行的0TOvi(/*输入*/新v2i& v2i,/*输出*/新vi& vi ){/*getV2i每行的0TOvi*/
    struct_下标info vi的行info;
    /*?这个=vec out*/
    /*两种一样*/
    for( 新vi a : v2i ){
      vi[vi的行info.一] = a[0]; vi的行info.一++;
    }/*for*/vi的行info.一 = 0;
    ///for( vi的行info.一 = 0; vi的行info.一<v2i.size(); vi的行info.一++ ){
    ///	vi[vi的行info.一] =v2i[vi的行info.一][0] ;vi的行info.一++;
    ///}
  }/*void*/
  /**/;//▬窗口`exe`文件`自身属性▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
  /*ret{ /.exe }*/
  string retExePath_上右下左的斜杠( ){ string 初始path = qmvi计算_不使用前置变量.retExePath( ); struct_pathInfo pI( 初始path ); string 改的path = ""; pI.getSAppendVs每部分( "/", 改的path ); return 改的path; }/*string*/
  string get把s的斜杠改成斜杠( ){ string 初始path = qmvi计算_不使用前置变量.retExePath( ); struct_pathInfo pI( 初始path ); string 改的path = ""; pI.getSAppendVs每部分( "/", 改的path ); return 改的path; }/*string*/
#define retExePath斜杠 retExePath_上右下左的斜杠
  string retExe的父path( 新s 斜杠 ){
    string exePath = qmvi计算_不使用前置变量.retExePath( )///.c_str();
      , exePath的斜杠 = "\\", path = "";
    /*?原来没运行. 所以应该把同名的另一个删掉的*/
    struct_pathInfo pI( exePath );/// /*清屏*/system( "cls");cout3("pI.vs每部分.size=",pI.vs每部分.size(),"\n");pI.cVs每部分(斜杠);coutEnd;
    pI.getSAppendVs每部分( 斜杠, pI.vs每部分.size( )-1, path );
    return path;
  }/*string*/
  /**/;//▬前置计算.h▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
  /**/;//&
  /*等于0或1*/
  void 互换01( int& 数字 ){
    if( 数字 == 1 ){
      数字 = 0; retu;
    }
    if( 数字 == 0 ){
      数字 = 1; retu;
    }
  }
  int 加( int& 数字, int 值 ){
    retu 数字 + 值;
  }
  int 减( int& 数字, int 值 ){
    retu 数字 - 值;
  }
  int 乘( int& 数字, int 值 ){
    retu 数字* 值;
  }
  int 除以( int& 数字, int 值 ){
    retu 数字 / 值;
  }
  vodi 等于( int& 数字, int 值 ){
    数字 = 值;
  }
  vodi getCOORD差(/*输入*/COORD C1, COORD C2,/*输出*/COORD C差 ){
    C差.X = C1.X -C2.X;
    C差.Y = C1.Y -C2.Y;
  }
  vodi getCOORD差(/*输入*/COORD& C1, COORD& C2,/*输出*/COORD& C差 ){
    C差.X = C1.X -C2.X;
    C差.Y = C1.Y -C2.Y;
  }
  /**/;//retu
  int ret互换01( int 数字 ){
    if( 数字 == 1 ){
      数字 = 0; retu 数字;
    }
    if( 数字 == 0 ){
      数字 = 1; retu 数字;
    }
  }
  /**/;//▬对比▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
#define ifI小于iZI等于i ifI小于ZI等于
#define ifI3小于i1ZI等于i2 ifI小于ZI等于
#define ifI1小于i2ZI等于i3 ifI小于ZI等于
#define if数字小于i1Z数字等于i2 ifI小于ZI等于
#define if数字小于Z数字等于 ifI小于ZI等于
#define if数字小于数2Z数字等于数3 ifI小于ZI等于
  ;//例子: ifI小于ZI等于(1,1)={ ifI小于1ZI等于1 }={ ifI<1ZI=1 }
  int ifI小于ZI等于( int i小于i, int i等于i,/*!输出*/int& 数字 ){
    int iRetu = 0;
#define def函数后 retu iRetu;
    if( 数字 < i小于i ){
      数字 = i等于i;
      iRetu = 1; def函数后
    }/*if*/;
    def函数后
  }/*int*/;
  ;//例子: ifI小于ZI等于(0,1)={ ifI<=0ZI=1 }
  int ifI小等于ZI等于( int i小等于i, int i等于i,/*!输出*/int& 数字 ){
    int iRetu = 0;
#define def函数后 retu iRetu;
    if( 数字 < i小等于i ){
      数字 = i等于i;
      iRetu = 1; def函数后
    }/*if*/;
    def函数后
  }/*int*/;
};
#endif