#pragma once
#ifndef 前置计算_不使用前置变量_H 
#define 前置计算_不使用前置变量_H

#include  <E:\lib\头文件 c++.h>
#include  <E:\lib\define.h>

class 前置计算_不使用前置变量{
public:
  ////前置cout qmviC;
public:
  /**/;//▬vector▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
  /**/;//assign
  void vAssign( 新vi& v, int 下标一, 新i i ){ v.assign( 下标一, i ); }/*void*/;
  void vAssign( 新vf& v, int 下标一, 新f f ){ v.assign( 下标一, f ); }/*void*/;
  void vAssign( 新vc& v, int 下标一, 新c c ){ v.assign( 下标一, c ); }/*void*/;
  void vAssign( 新vs& v, int 下标一, 新s s ){ v.assign( 下标一, s ); }/*void*/;
  void v2Assign( 新v2i& v, int 下标一, int 下标二, 新i i ){ v.assign( 下标一, 新vi( 下标二, i ) ); }/*void*/;
  void v2Assign( 新v2f& v, int 下标一, int 下标二, 新f f ){ v.assign( 下标一, 新vf( 下标二, f ) ); }/*void*/;
  void v2Assign( 新v2c& v, int 下标一, int 下标二, 新c c ){ v.assign( 下标一, 新vc( 下标二, c ) ); }/*void*/;
  void v2Assign( 新v2s& v, int 下标一, int 下标二, 新s s ){ v.assign( 下标一, 新vs( 下标二, s ) ); }/*void*/;
  /**/;//resize
  void vResize( 新vi& v, int 下标一 ){ v.resize( 下标一 ); }/*void*/;
  void vResize( 新vf& v, int 下标一 ){ v.resize( 下标一 ); }/*void*/;
  void vResize( 新vc& v, int 下标一 ){ v.resize( 下标一 ); }/*void*/;
  void vResize( 新vs& v, int 下标一 ){ v.resize( 下标一 ); }/*void*/;
  void vResize( 新vi& v, int 下标一, 新i i ){ v.resize( 下标一, i ); }/*void*/;
  void vResize( 新vf& v, int 下标一, 新f f ){ v.resize( 下标一, f ); }/*void*/;
  void vResize( 新vc& v, int 下标一, 新c c ){ v.resize( 下标一, c ); }/*void*/;
  void vResize( 新vs& v, int 下标一, 新s s ){ v.resize( 下标一, s ); }/*void*/;
  void v2Resize( 新v2i& v, int 下标一, int 下标二, 新i i ){ v.resize( 下标一, 新vi( 下标二, i ) ); }/*void*/;
  void v2Resize( 新v2f& v, int 下标一, int 下标二, 新f f ){ v.resize( 下标一, 新vf( 下标二, f ) ); }/*void*/;
  void v2Resize( 新v2c& v, int 下标一, int 下标二, 新c c ){ v.resize( 下标一, 新vc( 下标二, c ) ); }/*void*/;
  void v2Resize( 新v2s& v, int 下标一, int 下标二, 新s s ){ v.resize( 下标一, 新vs( 下标二, s ) ); }/*void*/;
  void vResize行加1( 新vi& v ){ v.resize( v.size( ) + 1 ); }/*void*/;
  void vResize行加1( 新vs& v ){ v.resize( v.size( ) + 1 ); }/*void*/;
  /**/;//c在<前置cout>里面
  void getV的元素数量( /*输入*/新vs  v, /*输出*/int& 元素数量 ){ 元素数量 = v.size( ); }/*void*/;  int retV的元素数量( /*输入*/新vs  v, /*输出*/int& 元素数量 ){ retu v.size( ); }/*void*/;
  void getV的元素数量( /*输入*/新vc  v, /*输出*/int& 元素数量 ){ 元素数量 = v.size( ); }/*void*/;  int retV的元素数量( /*输入*/新vc  v, /*输出*/int& 元素数量 ){ retu v.size( ); }/*void*/;
  void getV的元素数量( /*输入*/新vi  v, /*输出*/int& 元素数量 ){ 元素数量 = v.size( ); }/*void*/;  int retV的元素数量( /*输入*/新vi  v, /*输出*/int& 元素数量 ){ retu v.size( ); }/*void*/;
  void getV的元素数量( /*输入*/新vsh v, /*输出*/int& 元素数量 ){ 元素数量 = v.size( ); }/*void*/;  int retV的元素数量( /*输入*/新vsh v, /*输出*/int& 元素数量 ){ retu v.size( ); }/*void*/;
  void getV的元素数量( /*输入*/新vl  v, /*输出*/int& 元素数量 ){ 元素数量 = v.size( ); }/*void*/;  int retV的元素数量( /*输入*/新vl  v, /*输出*/int& 元素数量 ){ retu v.size( ); }/*void*/;
  void getV的元素数量( /*输入*/新vf  v, /*输出*/int& 元素数量 ){ 元素数量 = v.size( ); }/*void*/;  int retV的元素数量( /*输入*/新vf  v, /*输出*/int& 元素数量 ){ retu v.size( ); }/*void*/;
  /*forV2ZI加vSize, forV2ZI1加vSize, forV2_i加vSize, forV2_i1加vSize*/
#define defForV2_i1加vSize( i1 ) for( size_t 行 = 0; 行 < v2.size( ); 行++ ){ /*加`每行size*/i1 += v2[行].size( );}/*for*/;
  void getV的元素数量( /*输入*/新v2s  v2, /*输出*/int& 元素数量 ){ 元素数量 = 0; defForV2_i1加vSize( 元素数量 ); }/*void*/;
  void getV的元素数量( /*输入*/新v2c  v2, /*输出*/int& 元素数量 ){ 元素数量 = 0; defForV2_i1加vSize( 元素数量 ); }/*void*/;
  void getV的元素数量( /*输入*/新v2i  v2, /*输出*/int& 元素数量 ){ 元素数量 = 0; defForV2_i1加vSize( 元素数量 ); }/*void*/;
  void getV的元素数量( /*输入*/新v2sh v2, /*输出*/int& 元素数量 ){ 元素数量 = 0; defForV2_i1加vSize( 元素数量 ); }/*void*/;
  void getV的元素数量( /*输入*/新v2l  v2, /*输出*/int& 元素数量 ){ 元素数量 = 0; defForV2_i1加vSize( 元素数量 ); }/*void*/;
  void getV的元素数量( /*输入*/新v2f  v2, /*输出*/int& 元素数量 ){ 元素数量 = 0; defForV2_i1加vSize( 元素数量 ); }/*void*/;
  int retV的元素数量( /*输入*/新v2s  v2 ){ int 元素数量 = 0; defForV2_i1加vSize( 元素数量 ); retu 元素数量; }/*int*/;
  int retV的元素数量( /*输入*/新v2c  v2 ){ int 元素数量 = 0; defForV2_i1加vSize( 元素数量 ); retu 元素数量; }/*int*/;
  int retV的元素数量( /*输入*/新v2i  v2 ){ int 元素数量 = 0; defForV2_i1加vSize( 元素数量 ); retu 元素数量; }/*int*/;
  int retV的元素数量( /*输入*/新v2sh v2 ){ int 元素数量 = 0; defForV2_i1加vSize( 元素数量 ); retu 元素数量; }/*int*/;
  int retV的元素数量( /*输入*/新v2l  v2 ){ int 元素数量 = 0; defForV2_i1加vSize( 元素数量 ); retu 元素数量; }/*int*/;
  int retV的元素数量( /*输入*/新v2f  v2 ){ int 元素数量 = 0; defForV2_i1加vSize( 元素数量 ); retu 元素数量; }/*int*/;
#define defForV2_ifI1等于v行ZRet1( i1 ) for( size_t 行 = 0; 行 < v.size( ); 行++ ){ if( 元素 == v[行] ){ retu 1; }/*if*/; }/*for*/;
  int ret是否v中存在此元素( /*输入*/新vi  v, int 元素 ){ defForV2_ifI1等于v行ZRet1( 元素 ); retu 0; }/*int*/;
  int ret是否v中存在此元素( /*输入*/新vf  v, float 元素 ){ defForV2_ifI1等于v行ZRet1( 元素 ); retu 0; }/*int*/;
  int ret是否v中存在此元素( /*输入*/新vl  v, long 元素 ){ defForV2_ifI1等于v行ZRet1( 元素 ); retu 0; }/*int*/;
  int ret是否v中存在此元素( /*输入*/新vsh v, short 元素 ){ defForV2_ifI1等于v行ZRet1( 元素 ); retu 0; }/*int*/;
  int ret是否v中存在此元素( /*输入*/新vc  v, 新c 元素 ){ defForV2_ifI1等于v行ZRet1( 元素 ); retu 0; }/*int*/;
  int ret是否v中存在此元素( /*输入*/新vs  v, 新s 元素 ){ defForV2_ifI1等于v行ZRet1( 元素 ); retu 0; }/*int*/;//行小于
#define defV正元resize v元.resize( 最大元素, 0 );
  /*v是整数; v全是正数; 结构{ 行=元素; v[行]=数量; };*/
  void getV各元素数量( /*!输入*/新vi  v, 新i 最大元素,/*!输出*/新vi& v元 ){ defV正元resize; for( size_t 行 = 0; 行 < v.size( ); 行++ ){ v元[v[行]]++; }/*for*/; }/*void*/;
  void getV各元素数量( /*!输入*/新vl  v, 新i 最大元素,/*!输出*/新vi& v元 ){ defV正元resize; for( size_t 行 = 0; 行 < v.size( ); 行++ ){ v元[v[行]]++; }/*for*/; }/*void*/;
  void getV各元素数量( /*!输入*/新vsh v, 新i 最大元素,/*!输出*/新vi& v元 ){ defV正元resize; for( size_t 行 = 0; 行 < v.size( ); 行++ ){ v元[v[行]]++; }/*for*/; }/*void*/;
  void getV各元素数量( /*!输入*/新vc  v, 新i 最大元素,/*!输出*/新vi& v元 ){ defV正元resize; for( size_t 行 = 0; 行 < v.size( ); 行++ ){ v元[v[行]]++; }/*for*/; }/*void*/;
  void getV各元素数量( /*!输入*/新v2i  v, 新i 最大元素,/*!输出*/新vi& v元 ){ defV正元resize; for( size_t 行 = 0; 行 < v.size( ); 行++ ){ getV各元素数量( v[行], 最大元素, v元 ); }/*for*/; }/*void*/;
  void getV各元素数量( /*!输入*/新v2l  v, 新i 最大元素,/*!输出*/新vi& v元 ){ defV正元resize; for( size_t 行 = 0; 行 < v.size( ); 行++ ){ getV各元素数量( v[行], 最大元素, v元 ); }/*for*/; }/*void*/;
  void getV各元素数量( /*!输入*/新v2sh v, 新i 最大元素,/*!输出*/新vi& v元 ){ defV正元resize; for( size_t 行 = 0; 行 < v.size( ); 行++ ){ getV各元素数量( v[行], 最大元素, v元 ); }/*for*/; }/*void*/;
  void getV各元素数量( /*!输入*/新v2c  v, 新i 最大元素,/*!输出*/新vi& v元 ){ defV正元resize; for( size_t 行 = 0; 行 < v.size( ); 行++ ){ getV各元素数量( v[行], 最大元素, v元 ); }/*for*/; }/*void*/;
#define defV正元resizeAIf最小元素是负数ZV负元resize v正元.resize( 最大元素, 0 ); if( 最小元素 < 0 ){ v负元.resize( 最小元素 * (-1), 0 ); }/*if*/;
  /*v是整数; ifV有负数{ v正,v负; }; 结构{ 行=元素; v[行]=数量; }; */
  void getV各元素数量( /*!输入*/新vi  v, 新i 最大元素, 新i 最小元素,/*!输出*/新vi& v正元, 新vi& v负元 ){ defV正元resizeAIf最小元素是负数ZV负元resize; for( size_t 行 = 0; 行 < v.size( ); 行++ ){ if( v[行] < 0 ){/*是v[]是负数*/ v负元[v[行] * (-1)]++; } else{/*否v[]是负数*/v正元[v[行]]++; }/*else*/; }/*for*/; }/*void*/;
  void getV各元素数量( /*!输入*/新vl  v, 新i 最大元素, 新i 最小元素,/*!输出*/新vi& v正元, 新vi& v负元 ){ defV正元resizeAIf最小元素是负数ZV负元resize; for( size_t 行 = 0; 行 < v.size( ); 行++ ){ if( v[行] < 0 ){/*是v[]是负数*/ v负元[v[行] * (-1)]++; } else{/*否v[]是负数*/v正元[v[行]]++; }/*else*/; }/*for*/; }/*void*/;
  void getV各元素数量( /*!输入*/新vsh v, 新i 最大元素, 新i 最小元素,/*!输出*/新vi& v正元, 新vi& v负元 ){ defV正元resizeAIf最小元素是负数ZV负元resize; for( size_t 行 = 0; 行 < v.size( ); 行++ ){ if( v[行] < 0 ){/*是v[]是负数*/ v负元[v[行] * (-1)]++; } else{/*否v[]是负数*/v正元[v[行]]++; }/*else*/; }/*for*/; }/*void*/;
  void getV各元素数量( /*!输入*/新vc  v, 新i 最大元素, 新i 最小元素,/*!输出*/新vi& v正元, 新vi& v负元 ){ defV正元resizeAIf最小元素是负数ZV负元resize; for( size_t 行 = 0; 行 < v.size( ); 行++ ){ if( v[行] < 0 ){/*是v[]是负数*/ v负元[v[行] * (-1)]++; } else{/*否v[]是负数*/v正元[v[行]]++; }/*else*/; }/*for*/; }/*void*/;
  /*前置函数:getV各元素数量()*/
  /*if( i1>i2 ){ i2=i1; }*/
  void getV的最多元素( /*!输入*/新vi v元,/*!输出*/int& 最多的元素是, int& 最多元的数量 ){ for( size_t 行 = 0; 行 < v元.size( ); 行++ ){ if( v元[行] > 最多元的数量 ){ 最多的元素是 = 行, 最多元的数量 = v元[行]; }/*if*/; }/*for*/; }/*void*/;
  void getV的最多元素( /*!输入*/新vi v元,/*!输出*/int& 最多的元素是 ){ int 最多元的数量 = 0; getV的最多元素( v元,/*!输出*/最多的元素是, 最多元的数量 ); }/*void*/;
  int retV的最多元素( /*!输入*/新vi v元/*!输出*/ ){ int 最多的元素是 = 0, 最多元的数量 = 0; getV的最多元素( v元,/*!输出*/最多的元素是, 最多元的数量 ); retu 最多的元素是; }/*int*/;
  int getV某一下标最大的元( 新vi v入,/*输出*/新i& 某下标最大的元 ){
    int 是否有结果 = 0; if( v入.size( ) > 0 ){/*初始值*/ 是否有结果 = 1; 某下标最大的元 = v入[0]; }/*if*/;
    for( size_t 一 = 0; 一 < v入.size( ); 一++ ){ if( v入[一] > 某下标最大的元 ){ 某下标最大的元 = v入[一]; }/*if*/; }/*for*/; retu 是否有结果;
  }/*int*/;
  int getV某二下标最大的元( 新v2i v入, 新i 某二下标,/*输出*/新i& 某下标最大的元 ){/*2025年4月29日04:16:43*/
    int 是否有结果 = 0; if( v入.size( ) > 0 ){/*初始值*/ 是否有结果 = 1; 某下标最大的元 = v入[0][某二下标]; }/*if*/;
    for( size_t 一 = 0; 一 < v入.size( ); 一++ ){ if( v入[一][某二下标] > 某下标最大的元 ){ 某下标最大的元 = v入[一][某二下标]; }/*if*/; }/*for*/; retu 是否有结果;
  }/*int*/;
  int getV某三下标最大的元( 新v3i v入, 新i 某三下标,/*输出*/新i& 某下标最大的元 ){
    int 是否有结果 = 0; if( v入.size( ) > 0 ){ if( v入[0].size( ) > 0 ){/*初始值*/ 是否有结果 = 1; 某下标最大的元 = v入[0][0][某三下标]; }/*if*/; }/*if*/;
    for( size_t 一 = 0; 一 < v入.size( ); 一++ ){ for( size_t 二 = 0; 二 < v入.size( ); 二++ ){ if( v入[一][二][某三下标] > 某下标最大的元 ){ 某下标最大的元 = v入[一][二][某三下标]; }/*if*/; }/*for*/; }/*for*/; retu 是否有结果;
  }/*int*/;
  int getV某四下标最大的元( 新v4i v入, 新i 某四下标,/*输出*/新i& 某下标最大的元 ){
    int 是否有结果 = 0; if( v入.size( ) > 0 ){ if( v入[0].size( ) > 0 ){ if( v入[0][0].size( ) > 0 ){/*初始值*/ 是否有结果 = 1; 某下标最大的元 = v入[0][0][0][某四下标]; }/*if*/; }/*if*/; }/*if*/;
    for( size_t 一 = 0; 一 < v入.size( ); 一++ ){ for( size_t 二 = 0; 二 < v入.size( ); 二++ ){ for( size_t 三 = 0; 三 < v入.size( ); 三++ ){ if( v入[一][二][三][某四下标] > 某下标最大的元 ){ 某下标最大的元 = v入[一][二][三][某四下标]; }/*if*/; }/*for*/; }/*for*/; }/*for*/; retu 是否有结果;
  }/*int*/;
  //getV元素拼接TS
  void getV元素拼接(/*!输入*/新vs v,/*!输出*/新s& s1 ){ s1 = ""; for( size_t 行 = 0; 行 < v.size( ); 行++ ){ s1.append( v[行] ); }/*for*/; }/*void*/;
  /**/;//简写`STRING操作
  void s1AppendS2(/*输入*/新s s2,/*输出*/新s& s1 ){ s1.append( s1 ); }/*void*/;
  void s1AppendS2(/*输入*/新s s2, 新s s3,/*输出*/新s& s1 ){ s1.append( s2 ).append( s3 ); }/*void*/;
  void s1AppendS2(/*输入*/新s s2, 新s s3, 新s s4,/*输出*/新s& s1 ){ s1.append( s2 ).append( s3 ).append( s4 ); }/*void*/;
  void s1AppendS2(/*输入*/新vs v,/*输出*/新s& s1 ){ for( size_t 行 = 0; 行 < v.size( ); 行++ ){ s1.append( v[行] ); }/*for*/; }/*void*/;
  void s1AppendS2(/*输入*/新s s间隔, 新vs v,/*输出*/新s& s1 ){ for( size_t 行 = 0; 行 < v.size( ); 行++ ){ s1.append( s间隔 ).append( v[行] ); }/*for*/; }/*void*/;
  void s1AppendS2(/*输入*/新s s间隔, 新vs v, int for次数,/*输出*/新s& s1 ){ for( size_t 行 = 0; 行 < for次数; 行++ ){ s1.append( s间隔 ).append( v[行] ); }/*for*/; }/*void*/;
  void s1AppendS2(/*输入*/新vs v, int for次数,/*输出*/新s& s1 ){ for( size_t 行 = 0; 行 < for次数; 行++ ){ s1.append( v[行] ); }/*for*/; }/*void*/;
  void s复制到cp/*copyTOcp*/( string& s输入, int iS开头下标, int iS末尾下标,/*输出*/新cp cp ){ s输入.copy( cp, iS开头下标, iS末尾下标 - iS开头下标 + 1 ); }/*void*/
  void sCopyTOcp( string& s输入, int iS开头下标, int iS末尾下标,/*输出*/新cp cp ){ s复制到cp( s输入, iS开头下标, iS末尾下标, cp ); }/*void*/
  /**/;//get元素
  新i retV最后一个元素( 新vi v ){ if( v.size( ) > 0 ){ retu v[v.size( ) - 1]; } }/*新i*/;
  新l retV最后一个元素( 新vl v ){ if( v.size( ) > 0 ){ retu v[v.size( ) - 1]; } }/*新l*/;
  新sh retV最后一个元素( 新vSh v ){ if( v.size( ) > 0 ){ retu v[v.size( ) - 1]; } }/*新sh*/;
  新f retV最后一个元素( 新vf v ){ if( v.size( ) > 0 ){ retu v[v.size( ) - 1]; } }/*新f*/;
  新d retV最后一个元素( 新vd v ){ if( v.size( ) > 0 ){ retu v[v.size( ) - 1]; } }/*新d*/;
  新c retV最后一个元素( 新vc v ){ if( v.size( ) > 0 ){ retu v[v.size( ) - 1]; } }/*新c*/;
  新s retV最后一个元素( 新vs v ){ if( v.size( ) > 0 ){ retu v[v.size( ) - 1]; } }/*新s*/;
  /**/;//▬string▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
#define retS最后一位 retS的最后一位
  新c retS的最后一位( 新s s ){ if( s.size( ) > 0 ){ retu s[s.size( ) - 1]; } }/*新c*/;/*2025年5月8日07:09:46*/
  void getS1接几个s2( 新i 几个s2, 新s s2, 新s s1 ){ for( int 字数 = 0; 字数 < 几个s2; 字数++ ){ s1 += s2; }/*for*/; }/*void*/;
  string retS1接几个s2( 新s s1, 新i 几个s2, 新s s2 ){ getS1接几个s2( 几个s2, s2, s1 ); retu s1; }/*string*/;
  /**/;//▬数字(的/'s)属性`info▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
  int ret数字位数( int uu ){/*来自<template <typename 类型, int 数字N>class 数N分>*/
    int 位数 = 1;
    while( uu >= 10 ){ uu /= 10;      位数 += 1; }/*while*/;
    return 位数;
  }/*int*/;
  int 是否数字有小数( float 数 ){/*2025年4月7日02:18:17*/
    int 结果 = 0;    if( (数 - (int)数) > 0 ){ 结果 = 1; }/*if*/;        return 结果;
  }/*int*/; int 是否数字是整数( float 数 ){ int 结果 = 0;    if( 是否数字有小数( 数 ) == 0 ){ 结果 = 1; }/*if*/;    return 结果; }/*int*/;
  /**/;//▬0▬数字运算`杂项▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
  int 加( int& 数字, int 值 ){    retu 数字 + 值;  }/*int*/;
  int 减( int& 数字, int 值 ){    retu 数字 - 值;  }/*int*/;
  int 乘( int& 数字, int 值 ){    retu 数字* 值;  }/*int*/;
  int 除以( int& 数字, int 值 ){    retu 数字 / 值;  }/*int*/;
  vodi 等于( int& 数字, int 值 ){    数字 = 值;  }/*vodi*/;
  /*等于0或1*/
  void 互换01( int& 数字 ){
    /*函数外面不能写ret,所以用不了函薯*/
    if( 数字 == 1 ){
      数字 = 0; retu;
    }
    if( 数字 == 0 ){
      数字 = 1; retu;
    }
  }/*void*/
  void ifI等于0I等于1( int& i ){
    if( i == 0 ){
      i = 1;
    }/*if*/
  }/*void*/
  void ifI等于1I等于0( int& i ){
    if( i == 1 ){
      i = 0;
    }/*if*/
  }/*void*/
  void ifI小于0I等于0( int& i ){
    if( i < 0 ){
      i = 0;
    }/*if*/
  }/*void*/
  void ifI大于0I等于0( int& i ){/*2025年1月27日05:27:02*/ if( i > 0 ){ i = 0; }/*if*/ }/*void*/;
  /**/;//2个数字`比大小
  void ifI2大于i1I1等于i2( int& i1, int& i2 ){/*getif2大于1THEN1等于2,if2大于1THEN1等于2,if2大于1then1等于2,if2大于1则1等于2,ifI2大于i1THENi1等于i2,ifI2大于i1I1等于i2,*/
    if( i2 > i1 ){
      i1 = i2;
    }/*if*/
  }/*void*/
  /**/;//3个数字`比大小
  int ret三数挑最大( int 数1, int 数2, int 数3 ){
    //>数1数2数3挑最大的, if两次. 排序要if3次
    int 最大的;
    最大的 = 数1 > 数3 ? 数1 : 数3;
    最大的 = 最大的 > 数2 ? 最大的 : 数2;
    return 最大的;
  }
  vector<int> ret三数排序_大到小( int 数1, int 数2, int 数3 ){
    vector<int> 从大到小( 3, 0 );
    //>数1数2数3挑最大的, if两次. 排序要if3次
    if( 数1 > 数3 ){ //>数1>数3
      if( 数1 > 数2 ){//数1>数2 -> 数1大
        从大到小[0] = 数1;
        if( 数3 > 数2 ){
          从大到小[1] = 数3;
          从大到小[2] = 数2;
        } else{ //2>3
          从大到小[1] = 数2;
          从大到小[2] = 数3;
        }/*else*/
        return 从大到小;
      } else{// >数1 < 数2
        if( 数2 > 数3 ){ //>数2>数1>数3; 数2>数3
          从大到小[0] = 数2;
          从大到小[1] = 数1;
          从大到小[2] = 数3;
        } else{ //数2<数3 -> 数3>数2>数1; 
          从大到小[0] = 数3;
          从大到小[1] = 数2;
          从大到小[2] = 数1;
        }/*else*/
        return 从大到小;
      }/*else*/
    } else{ //>数3>数1
      if( 数3 > 数2 ){//>数3 > 数2; 3大
        从大到小[0] = 数3;
        if( 数2 > 数1 ){ //数3>数1;数2>数1;数2<数3
          从大到小[1] = 数2;
          从大到小[2] = 数1;
        } else{ //数3>数1;数2<数3;数1>2;
          从大到小[1] = 数1;
          从大到小[2] = 数2;
        }/*else*/
        return 从大到小;
      } else{//>数2>数3>数1
        从大到小[0] = 数2;
        从大到小[1] = 数3;
        从大到小[2] = 数1;
        return 从大到小;
      }/*else*/
    }/*else*/
  }/*vector<int>*/
  vector<int> ret三数排序_小到大( int 数1, int 数2, int 数3 ){
    vector<int> vi从小到大( 3, 0 );
    //>数1数2数3挑最大的, if两次. 排序要if3次
    if( 数1 > 数3 ){ //>数1>数3
      if( 数1 > 数2 ){//数1>数2 -> 数1大
        vi从小到大[2] = 数1;
        if( 数3 > 数2 ){
          vi从小到大[1] = 数3;
          vi从小到大[0] = 数2;
        } else{ //2>3
          vi从小到大[1] = 数2;
          vi从小到大[0] = 数3;
        }/*else*/
        return vi从小到大;
      } else{// >数1 < 数2
        if( 数2 > 数3 ){ //>数2>数1>数3; 数2>数3
          vi从小到大[2] = 数2;
          vi从小到大[1] = 数1;
          vi从小到大[0] = 数3;
        } else{ //数2<数3 -> 数3>数2>数1; 
          vi从小到大[2] = 数3;
          vi从小到大[1] = 数2;
          vi从小到大[0] = 数1;
        }/*else*/
        return vi从小到大;
      }/*else*/
    } else{ //>数3>数1
      if( 数3 > 数2 ){//>数3 > 数2; 3大
        vi从小到大[2] = 数3;
        if( 数2 > 数1 ){ //数3>数1;数2>数1;数2<数3
          vi从小到大[1] = 数2;
          vi从小到大[0] = 数1;
        } else{ //数3>数1;数2<数3;数1>2;
          vi从小到大[1] = 数1;
          vi从小到大[0] = 数2;
        }/*else*/
        return vi从小到大;
      } else{//>数2>数3>数1
        vi从小到大[2] = 数2;
        vi从小到大[1] = 数3;
        vi从小到大[0] = 数1;
        return vi从小到大;
      }/*else*/
    }/*else*/
  }/*vector<int>*/
  int ret数是否在两者间_213( int 数1, int 数2, int 数3 ){
    if( 数1 < 数2 ){
      if( 数1 > 数3 ){ //2>1>3
        return 1;
      }
    }
    return 0;
  }
  int ret数是否在两者间_213_大等于( int 数1, int 数2, int 数3 ){
    if( 数1 <= 数2 ){
      if( 数1 >= 数3 ){ // 213
        return 1;
      }
    }
    return 0;
  }
  int ret数是否在两者间_312_小于( int 数1, int 数2, int 数3 ){
    if( 数1 > 数2 ){
      if( 数1 < 数3 ){ //3>1>2
        return 1;
      }
    }
    return 0;
  }
  int ret数是否在两者间_312_小等于( int 数1, int 数2, int 数3 ){
    if( 数1 >= 数2 ){
      if( 数1 <= 数3 ){ //3>=1>=2
        return 1;
      }
    }
    return 0;
  }
  int ret数是否在两者间_大于( int 数1, int 数2, int 数3 ){
    ret数是否在两者间_213( 数1, 数2, 数3 );
  }
  int ret两数是否相同( int uu1, int uu2, int 差的最小值 ){
    //正数
    if( abs( uu1 - uu2 ) < 差的最小值 ){
      return 1; //相同
    }
    return 0; //不相同
  }
  void getv排序从小到大( 新vi vi ){/*正排序*/
    sort( vi.begin( ), vi.end( ) );
  }/*void*/
  void getv排序从大到小( 新vi vi ){/*逆排序*/
    sort( vi.rbegin( ), vi.rend( ) );
  }/*void*/
  /**/;//比值
  /*ret保留小数*/
  float ret计算比值( int uu, int uu2 ){
    ///if (uu == 0) {
    ///	return 0;
    ///}
    /*分子不能=零*/
    if( uu2 == 0 ){
      return 0;
    }
    return static_cast<float>(uu) / uu2;
  }
  int ret计算比值( int uu, int uu2, int 分子乘 ){
    if( uu2 == 0 ){
      return 0;
    }
    return (uu * 分子乘) / uu2;
  }
  float ret计算比值_大除以小( int uu, int uu2 ){
    if( uu2 == 0 ){
      return 0;
    }
    return uu > uu2 ? static_cast<float>(uu) / uu2 : static_cast<float>(uu2) / uu;
  }
  /*ret整数(*/
  int ret计算比值i( int uu, int uu2 ){
    if( uu2 == 0 ){
      return 0;
    }
    return uu / uu2;
  }
  int ret计算比值i_大除以小( int uu, int uu2 ){
    if( uu2 == 0 ){
      return 0;
    }
    return uu > uu2 ? uu / uu2 : uu2 / uu;
  }
  void get比值_值除以总和(/*输入*/新vi vi,/*输出*/新vf vf比值 ){
    int iVf比值的下标ζ输出 = 0, i总和 = 0;
    for( int i : vi ){/*总和=v的值`相加*/
      i总和 += i;
    }/*for*/
    for( int i : vi ){
      vf比值[iVf比值的下标ζ输出] = i / i总和;
    }/*for*/
  }/*void*/
  void get比值_值除以总和THENc(/*输入*/新vi vi,/*输出*/新vf vf比值 ){
    int iVf比值的下标ζ输出 = 0, i总和 = 0;
    for( int i : vi ){/*总和=v的值`相加*/
      i总和 += i;
    }/*for*/
    ///i总和/=10;
    for( int i : vi ){
      /*v[一]=f比值; 一++;*/
      vf比值[iVf比值的下标ζ输出] = i / (float)i总和; iVf比值的下标ζ输出++;
    }/*for*/iVf比值的下标ζ输出 = 0;
    /**/;//cout
    coutsf( "比值_值除以总和 v[0]={} \n", vf比值[0] );
    coutsf( "比值_值除以总和 v[2]={} \n", vf比值[2] );
    coutsf( "像素的总和={} \n", i总和 );
    coutsf( "比值_值除以总和{} \n", "{" );
    for( float f : vf比值 ){
      coutsf( "{}  ", f );
    }/*for*/
    coutsf( "\n" );
    coutsf( "{} \n", "}" );
  }/*void*/
  vodi getCOORD差(/*输入*/COORD& C1, COORD& C2,/*输出*/COORD& C差 ){
    C差.X = C1.X - C2.X;
    C差.Y = C1.Y - C2.Y;
  }/*vodi*/
  /**/;//▬窗口`exe`文件`自身属性▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
  HWND ret前台( ){
    retu GetForegroundWindow( );
  }/*HWND*/
  HWND ret窗口hwnd( LPCSTR lpClassName, LPCSTR lpWindowName ){
    retu  FindWindowA( lpClassName, lpWindowName );
  }/*HWND*/
  int ret是否聚焦( HWND h对比窗口 ){
    if( GetForegroundWindow( ) == h对比窗口 ){
      retu 1;
    }
  }/*int*/
  void get窗口tagRect(/*输入*/HWND 窗口hwnd,/*输出*/tagRECT& 窗口Rect ){
    LPRECT 窗口Rect_p = &窗口Rect;
    GetWindowRect( 窗口hwnd, 窗口Rect_p );
    窗口Rect_p = nullptr;
  }/*void*/
  void getclassName(/*输入*/HWND 窗口hwnd,/*输出*/LPTSTR& 窗口className ){
    GetClassName( 窗口hwnd, 窗口className, 1400 );
  }/*void*/
  void get窗口hwnd( LPCSTR lpClassName, LPCSTR lpWindowName, /*输出*/HWND& hwnd ){
    hwnd = FindWindowA( lpClassName, lpWindowName );
  }/*void*/
  /*ret{ \.exe }*/
  string retExePath( ){/*https://blog.csdn.net/qq_40544338/article/details/103853591 */
    char szFilePath[MAX_PATH + 1] = { 0 };
    GetModuleFileNameA( NULL, szFilePath, MAX_PATH );
    string path = szFilePath;
    return path;
  }/*string*/
  string retExePath_上左下右的斜杠( ){ return retExePath( ); }/*string*/
#define retExePath反斜杠 retExePath_上左下右的斜杠
  /*没用,相当于retExePath()*/
  string retExe父path( ){
    //*string path =retExePath();.c_str();
    char szFilePath[MAX_PATH + 1] = { 0 };
    GetModuleFileNameA( NULL, szFilePath, MAX_PATH );
    string path = szFilePath;
    /*?没有用*//*
    strrchr:函数功能：查找一个字符c在另一个字符串str中末次出现的位置（也就是从str的右侧开始查找字符c首次出现的位置），
    并返回这个位置的地址。如果未能找到指定字符，那么函数将返回NULL。
    使用这个地址返回从最后一个字符c到str末尾的字符串。
    */
    (strrchr( szFilePath, '\\' ))[0] = 0; // 删除文件名，只获得路径字串//
    return path;
  }/*string*/
  /**/;//▬附加功能▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬


};
#endif