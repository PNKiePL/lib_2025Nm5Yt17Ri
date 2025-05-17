#pragma once
#ifndef 前置cout_H 
#define 前置cout_H

#include  <E:\lib\头文件 c++.h>
#include  <E:\lib\define.h>

class 前置cout{
public:
  void set字色( int cmd颜色 ){/*改变输出的颜色，比system("color x")快得多*/ SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), cmd颜色 );/*改文字颜色*/ }/*void*/;
  void cV中括i1中括i2等于i3( int i1, int i2, int i3, 新s s前, 新s s1, 新s s2 ){ }/*void*/;
  void cS1中括i2中括i3等于i4S5( /*!输入*/新s s1, int i2, int i3, int i4, 新s s5 ){ cout6( s1 + "[", i2, "][", i3, "]=", i4 ); }/*void*/;
  /*s前[i1][i2]=i3S后*/
  void c中括i1中括i2等于i3( /*!输入*/新s s前, 新i i1, int i2, int i3, 新s s后 ){ cout7( s前 + "[", i1, "][", i2, "]=", i3, s后 ); }/*void*/;
  void c中括i1中括i2等于i3( /*!输入*/新s s前, 新i i1, int i2, int i3, 新s 等于号, 新s s后 ){ cout7( s前 + "[", i1, "][", i2, "]" + 等于号, i3, s后 ); }/*void*/;/*2025年4月24日04:23:26*/
  /*s前s1=s等于号右s2S后*/
  void cS1等于( /*!输入*/新s s前, 新s s1, 新s s2, 新s s后, 新s s等于号右 ){ cout1( s前 ); cout2( s1 + "=" + s等于号右, s2 ); cout1( s后 ); }/*void*/;
  /*s前s1=s等于号右i2S后*/
  void cS1等于( /*!输入*/新s s前, 新s s1, 新i i2, 新s s后, 新s s等于号右 ){ cout1( s前 ); cout2( s1 + "=" + s等于号右, i2 ); cout1( s后 ); }/*void*/;
  void cS1等于S3等于( /*!输入*/新s s前, 新s s1, 新i i2, 新s s3, 新i i4, 新s s后, 新s s等于号右 ){ cout1( s前 ); cout2( s1 + "=" + s等于号右, i2 ); cout2( ", " + s3 + "=" + s等于号右, i4 ); cout1( s后 ); }/*void*/;/*2025年4月23日17:17:04*/
  /*变体*/
  void cS1等于i1( /*!输入*/新s s前, 新i i1, 新s s1, 新s s后, 新s s等于号右 ){ cout1( s前 ); cout2( s1 + "=" + s等于号右, i1 ); cout1( s后 ); }/*void*/;/*2025年4月23日23:49:25*/
  void cS1等于i1S2等于i2( /*!输入*/新s s前, 新i i1, 新i i2, 新s s1, 新s s2, 新s s后, 新s s等于号右 ){ cout1( s前 ); cout2( s1 + "=" + s等于号右, i1 ); cout2( ", " + s2 + "=" + s等于号右, i2 ); cout1( s后 ); }/*void*/;/*2025年4月23日17:17:04*/
  /*s.Y={},s.X={}*/
  void cCOORD( COORD& C, string s ){ coutsf( "{}.Y={},{}.X={}", s, C.Y, s, C.X ); }/*void*/;
  /*s"{ "Y={},X={}" }"*/
  void cCOORD2( COORD& C, string s ){ coutsf( "{}{}Y={},X={}{}", s, "{ ", C.Y, C.X, " }" ); }/*void*/;
  /**/;//c多个`一样的值
  void cS( 新s 输入, int 数量 ){
    for( size_t i = 0; i < 数量; i++ ){
      cout << 输入;
    }/*for*/;
  }/*void*/;
  void cs( 新s 输入, int 数量 ){ cS( 输入, 数量 ); }/*void*/;
  void cI( 新i 输入, int 数量 ){
    for( size_t i = 0; i < 数量; i++ ){
      cout << 输入;
    }/*for*/;
  }/*void*/;
  void ci( 新i 输入, int 数量 ){ cI( 输入, 数量 ); }/*void*/;
  /**/;//cVecSize
#define cVecSize cVSize
  /*没有`回车*/
  ///void cS等于vSize( 新s s, 新vi v ){ cout3( s,"=", v.size( ) );}/*void*/;
#define cS等于vSize( s, v ){ cout3( s,"=", v.size( ) );};
  void cVSize_其一( 新vi v ){ cS等于vSize( "一", v ) }/*void*/;
  void cVSize_其一( 新v2i v ){ cS等于vSize( "一", v ) if( v.size( ) > 0 ){ cS等于vSize( "二", v[0] ) }/*if*/; }/*void*/;
  void cVSize_其一( 新v3i v ){ cS等于vSize( "一", v ) if( v.size( ) > 0 ){ cS等于vSize( "二", v[0] ) if( v[0].size( ) > 0 ){ cS等于vSize( "三", v[0][0] ) }/*if*/; }/*if*/; }/*void*/;
  void cVSize_其一( 新v4i v ){ cS等于vSize( "一", v ) if( v.size( ) > 0 ){ cS等于vSize( "二", v[0] ) if( v[0].size( ) > 0 ){ cS等于vSize( "三", v[0][0] ) if( v[0][0].size( ) > 0 ){ cS等于vSize( "四", v[0][0][0] ) }/*if*/; }/*if*/; }/*if*/; }/*void*/;
  void cVSize_其一( 新v5i v ){ cS等于vSize( "一", v ) if( v.size( ) > 0 ){ cS等于vSize( "二", v[0] ) if( v[0].size( ) > 0 ){ cS等于vSize( "三", v[0][0] ) if( v[0][0].size( ) > 0 ){ cS等于vSize( "四", v[0][0][0] ) if( v[0][0][0].size( ) > 0 ){ cS等于vSize( "五", v[0][0][0][0] ) }/*if*/; }/*if*/; }/*if*/; }/*if*/; }/*void*/;
  /*s+{+内容+}+回车*/
  void cVSizeEndl_其一( 新s v名, 新vi v ){ cout2( v名, ".size={ " ); cVSize_其一( v );  cout1( " }" ); coutEndl; }/*void*/;
  void cVSizeEndl_其一( 新s v名, 新v2i v ){ cout2( v名, ".size={ " ); cVSize_其一( v );  cout1( " }" ); coutEndl; }/*void*/;
  void cVSizeEndl_其一( 新s v名, 新v3i v ){ cout2( v名, ".size={ " ); cVSize_其一( v );  cout1( " }" ); coutEndl; }/*void*/;
  void cVSizeEndl_其一( 新s v名, 新v4i v ){ cout2( v名, ".size={ " ); cVSize_其一( v );  cout1( " }" ); coutEndl; }/*void*/;
  void cVSizeEndl_其一( 新s v名, 新v5i v ){ cout2( v名, ".size={ " ); cVSize_其一( v );  cout1( " }" ); coutEndl; }/*void*/;
  ///void c中括vSize( 新vi v ){ cout3( "[", v.size( ), "]" ); }/*void*/;
#define c中括vSize( v ){ cout3( "[", v.size( ), "]" ); };
  void cVSize( 新vi v ){ c中括vSize( v ) }/*void*/;
  void cVSize( 新v2i v ){ c中括vSize( v ) if( v.size( ) > 0 ){ c中括vSize( v[0] ) }/*if*/; }/*void*/;
  void cVSize( 新v3i v ){ c中括vSize( v ) if( v.size( ) > 0 ){ c中括vSize( v[0] ) if( v[0].size( ) > 0 ){ c中括vSize( v[0][0] ) }/*if*/; }/*if*/; }/*void*/;
  void cVSize( 新v4i v ){ c中括vSize( v ) if( v.size( ) > 0 ){ c中括vSize( v[0] ) if( v[0].size( ) > 0 ){ c中括vSize( v[0][0] ) if( v[0][0].size( ) > 0 ){ c中括vSize( v[0][0][0] ) }/*if*/; }/*if*/; }/*if*/; }/*void*/;
  void cVSize( 新v5i v ){ c中括vSize( v ) if( v.size( ) > 0 ){ c中括vSize( v[0] ) if( v[0].size( ) > 0 ){ c中括vSize( v[0][0] ) if( v[0][0].size( ) > 0 ){ c中括vSize( v[0][0][0] ) if( v[0][0][0].size( ) > 0 ){ c中括vSize( v[0][0][0][0] ) }/*if*/; }/*if*/; }/*if*/; }/*if*/; }/*void*/;
  void cVSize( 新vl v ){ c中括vSize( v ) }/*void*/;
  void cVSize( 新v2l v ){ c中括vSize( v ) if( v.size( ) > 0 ){ c中括vSize( v[0] ) }/*if*/; }/*void*/;
  void cVSize( 新v3l v ){ c中括vSize( v ) if( v.size( ) > 0 ){ c中括vSize( v[0] ) if( v[0].size( ) > 0 ){ c中括vSize( v[0][0] ) }/*if*/; }/*if*/; }/*void*/;
  void cVSize( 新v4l v ){ c中括vSize( v ) if( v.size( ) > 0 ){ c中括vSize( v[0] ) if( v[0].size( ) > 0 ){ c中括vSize( v[0][0] ) if( v[0][0].size( ) > 0 ){ c中括vSize( v[0][0][0] ) }/*if*/; }/*if*/; }/*if*/; }/*void*/;
  void cVSize( 新v5l v ){ c中括vSize( v ) if( v.size( ) > 0 ){ c中括vSize( v[0] ) if( v[0].size( ) > 0 ){ c中括vSize( v[0][0] ) if( v[0][0].size( ) > 0 ){ c中括vSize( v[0][0][0] ) if( v[0][0][0].size( ) > 0 ){ c中括vSize( v[0][0][0][0] ) }/*if*/; }/*if*/; }/*if*/; }/*if*/; }/*void*/;
  void cVSize( 新vf v ){ c中括vSize( v ) }/*void*/;
  void cVSize( 新v2f v ){ c中括vSize( v ) if( v.size( ) > 0 ){ c中括vSize( v[0] ) }/*if*/; }/*void*/;
  void cVSize( 新v3f v ){ c中括vSize( v ) if( v.size( ) > 0 ){ c中括vSize( v[0] ) if( v[0].size( ) > 0 ){ c中括vSize( v[0][0] ) }/*if*/; }/*if*/; }/*void*/;
  void cVSize( 新v4f v ){ c中括vSize( v ) if( v.size( ) > 0 ){ c中括vSize( v[0] ) if( v[0].size( ) > 0 ){ c中括vSize( v[0][0] ) if( v[0][0].size( ) > 0 ){ c中括vSize( v[0][0][0] ) }/*if*/; }/*if*/; }/*if*/; }/*void*/;
  void cVSize( 新v5f v ){ c中括vSize( v ) if( v.size( ) > 0 ){ c中括vSize( v[0] ) if( v[0].size( ) > 0 ){ c中括vSize( v[0][0] ) if( v[0][0].size( ) > 0 ){ c中括vSize( v[0][0][0] ) if( v[0][0][0].size( ) > 0 ){ c中括vSize( v[0][0][0][0] ) }/*if*/; }/*if*/; }/*if*/; }/*if*/; }/*void*/;
  void cVSize( 新vd v ){ c中括vSize( v ) }/*void*/;
  void cVSize( 新v2d v ){ c中括vSize( v ) if( v.size( ) > 0 ){ c中括vSize( v[0] ) }/*if*/; }/*void*/;
  void cVSize( 新v3d v ){ c中括vSize( v ) if( v.size( ) > 0 ){ c中括vSize( v[0] ) if( v[0].size( ) > 0 ){ c中括vSize( v[0][0] ) }/*if*/; }/*if*/; }/*void*/;
  void cVSize( 新v4d v ){ c中括vSize( v ) if( v.size( ) > 0 ){ c中括vSize( v[0] ) if( v[0].size( ) > 0 ){ c中括vSize( v[0][0] ) if( v[0][0].size( ) > 0 ){ c中括vSize( v[0][0][0] ) }/*if*/; }/*if*/; }/*if*/; }/*void*/;
  void cVSize( 新v5d v ){ c中括vSize( v ) if( v.size( ) > 0 ){ c中括vSize( v[0] ) if( v[0].size( ) > 0 ){ c中括vSize( v[0][0] ) if( v[0][0].size( ) > 0 ){ c中括vSize( v[0][0][0] ) if( v[0][0][0].size( ) > 0 ){ c中括vSize( v[0][0][0][0] ) }/*if*/; }/*if*/; }/*if*/; }/*if*/; }/*void*/;
  void cVSize( 新vs v ){ c中括vSize( v ) }/*void*/;
  void cVSize( 新v2s v ){ c中括vSize( v ) if( v.size( ) > 0 ){ c中括vSize( v[0] ) }/*if*/; }/*void*/;
  void cVSize( 新v3s v ){ c中括vSize( v ) if( v.size( ) > 0 ){ c中括vSize( v[0] ) if( v[0].size( ) > 0 ){ c中括vSize( v[0][0] ) }/*if*/; }/*if*/; }/*void*/;
  void cVSize( 新v4s v ){ c中括vSize( v ) if( v.size( ) > 0 ){ c中括vSize( v[0] ) if( v[0].size( ) > 0 ){ c中括vSize( v[0][0] ) if( v[0][0].size( ) > 0 ){ c中括vSize( v[0][0][0] ) }/*if*/; }/*if*/; }/*if*/; }/*void*/;
  void cVSize( 新v5s v ){ c中括vSize( v ) if( v.size( ) > 0 ){ c中括vSize( v[0] ) if( v[0].size( ) > 0 ){ c中括vSize( v[0][0] ) if( v[0][0].size( ) > 0 ){ c中括vSize( v[0][0][0] ) if( v[0][0][0].size( ) > 0 ){ c中括vSize( v[0][0][0][0] ) }/*if*/; }/*if*/; }/*if*/; }/*if*/; }/*void*/;
  void cVSizeEndl( 新s v名, 新vi v ){ cout2( v名, ".size=" );  cVSize( v ); coutEndl; }/*void*/;    void cVSize( 新s v名, 新vi v ){ cout2( v名, ".size=" );  cVSize( v ); coutEndl; }/*void*/;
  void cVSizeEndl( 新s v名, 新v2i v ){ cout2( v名, ".size=" );  cVSize( v ); coutEndl; }/*void*/;   void cVSize( 新s v名, 新v2i v ){ cout2( v名, ".size=" );  cVSize( v ); coutEndl; }/*void*/;
  void cVSizeEndl( 新s v名, 新v3i v ){ cout2( v名, ".size=" );  cVSize( v ); coutEndl; }/*void*/;   void cVSize( 新s v名, 新v3i v ){ cout2( v名, ".size=" );  cVSize( v ); coutEndl; }/*void*/;
  void cVSizeEndl( 新s v名, 新v4i v ){ cout2( v名, ".size=" );  cVSize( v ); coutEndl; }/*void*/;   void cVSize( 新s v名, 新v4i v ){ cout2( v名, ".size=" );  cVSize( v ); coutEndl; }/*void*/;
  void cVSizeEndl( 新s v名, 新v5i v ){ cout2( v名, ".size=" );  cVSize( v ); coutEndl; }/*void*/;   void cVSize( 新s v名, 新v5i v ){ cout2( v名, ".size=" );  cVSize( v ); coutEndl; }/*void*/;
  void cVSizeEndl( 新s v名, 新vl v ){ cout2( v名, ".size=" );  cVSize( v ); coutEndl; }/*void*/;    void cVSize( 新s v名, 新vl v ){ cout2( v名, ".size=" );  cVSize( v ); coutEndl; }/*void*/;
  void cVSizeEndl( 新s v名, 新v2l v ){ cout2( v名, ".size=" );  cVSize( v ); coutEndl; }/*void*/;   void cVSize( 新s v名, 新v2l v ){ cout2( v名, ".size=" );  cVSize( v ); coutEndl; }/*void*/;
  void cVSizeEndl( 新s v名, 新v3l v ){ cout2( v名, ".size=" );  cVSize( v ); coutEndl; }/*void*/;   void cVSize( 新s v名, 新v3l v ){ cout2( v名, ".size=" );  cVSize( v ); coutEndl; }/*void*/;
  void cVSizeEndl( 新s v名, 新v4l v ){ cout2( v名, ".size=" );  cVSize( v ); coutEndl; }/*void*/;   void cVSize( 新s v名, 新v4l v ){ cout2( v名, ".size=" );  cVSize( v ); coutEndl; }/*void*/;
  void cVSizeEndl( 新s v名, 新v5l v ){ cout2( v名, ".size=" );  cVSize( v ); coutEndl; }/*void*/;   void cVSize( 新s v名, 新v5l v ){ cout2( v名, ".size=" );  cVSize( v ); coutEndl; }/*void*/;
  void cVSizeEndl( 新s v名, 新vf v ){ cout2( v名, ".size=" );  cVSize( v ); coutEndl; }/*void*/;    void cVSize( 新s v名, 新vf v ){ cout2( v名, ".size=" );  cVSize( v ); coutEndl; }/*void*/;
  void cVSizeEndl( 新s v名, 新v2f v ){ cout2( v名, ".size=" );  cVSize( v ); coutEndl; }/*void*/;   void cVSize( 新s v名, 新v2f v ){ cout2( v名, ".size=" );  cVSize( v ); coutEndl; }/*void*/;
  void cVSizeEndl( 新s v名, 新v3f v ){ cout2( v名, ".size=" );  cVSize( v ); coutEndl; }/*void*/;   void cVSize( 新s v名, 新v3f v ){ cout2( v名, ".size=" );  cVSize( v ); coutEndl; }/*void*/;
  void cVSizeEndl( 新s v名, 新v4f v ){ cout2( v名, ".size=" );  cVSize( v ); coutEndl; }/*void*/;   void cVSize( 新s v名, 新v4f v ){ cout2( v名, ".size=" );  cVSize( v ); coutEndl; }/*void*/;
  void cVSizeEndl( 新s v名, 新v5f v ){ cout2( v名, ".size=" );  cVSize( v ); coutEndl; }/*void*/;   void cVSize( 新s v名, 新v5f v ){ cout2( v名, ".size=" );  cVSize( v ); coutEndl; }/*void*/;
  void cVSizeEndl( 新s v名, 新vs v ){ cout2( v名, ".size=" );  cVSize( v ); coutEndl; }/*void*/;    void cVSize( 新s v名, 新vs v ){ cout2( v名, ".size=" );  cVSize( v ); coutEndl; }/*void*/;
  void cVSizeEndl( 新s v名, 新v2s v ){ cout2( v名, ".size=" );  cVSize( v ); coutEndl; }/*void*/;   void cVSize( 新s v名, 新v2s v ){ cout2( v名, ".size=" );  cVSize( v ); coutEndl; }/*void*/;
  void cVSizeEndl( 新s v名, 新v3s v ){ cout2( v名, ".size=" );  cVSize( v ); coutEndl; }/*void*/;   void cVSize( 新s v名, 新v3s v ){ cout2( v名, ".size=" );  cVSize( v ); coutEndl; }/*void*/;
  void cVSizeEndl( 新s v名, 新v4s v ){ cout2( v名, ".size=" );  cVSize( v ); coutEndl; }/*void*/;   void cVSize( 新s v名, 新v4s v ){ cout2( v名, ".size=" );  cVSize( v ); coutEndl; }/*void*/;
  void cVSizeEndl( 新s v名, 新v5s v ){ cout2( v名, ".size=" );  cVSize( v ); coutEndl; }/*void*/;   void cVSize( 新s v名, 新v5s v ){ cout2( v名, ".size=" );  cVSize( v ); coutEndl; }/*void*/;
  /**/;//cVec
#define cVec cV
  /*没有间隔, c(v[])*/
  void cV( 新vi& v ){ for( size_t 一 = 0; 一 < v.size( ); 一++ ){ coutsf( "{}", v[一] ); }/*for*/; }/*void*/;
  void cV( 新vf& v ){ for( size_t 一 = 0; 一 < v.size( ); 一++ ){ coutsf( "{}", v[一] ); }/*for*/; }/*void*/;
  void cV( 新vc& v ){ for( size_t 一 = 0; 一 < v.size( ); 一++ ){ coutsf( "{}", v[一] ); }/*for*/; }/*void*/;
  void cV( 新vs& v ){ for( size_t 一 = 0; 一 < v.size( ); 一++ ){ coutsf( "{}", v[一] ); }/*for*/; }/*void*/;
  /*自定义间隔, c(s,v[])*/
  void cV( 新s s元素前, 新vi& v ){ for( size_t 一 = 0; 一 < v.size( ); 一++ ){ coutsf( "{}{}", s元素前, v[一] ); }/*for*/; }/*void*/;
  void cV( 新s s元素前, 新vf& v ){ for( size_t 一 = 0; 一 < v.size( ); 一++ ){ coutsf( "{}{}", s元素前, v[一] ); }/*for*/; }/*void*/;
  void cV( 新s s元素前, 新vc& v ){ for( size_t 一 = 0; 一 < v.size( ); 一++ ){ coutsf( "{}{}", s元素前, v[一] ); }/*for*/; }/*void*/;
  void cV( 新s s元素前, 新vs& v ){ for( size_t 一 = 0; 一 < v.size( ); 一++ ){ coutsf( "{}{}", s元素前, v[一] ); }/*for*/; }/*void*/;
  /*有间隔, sV名={ c( s间隔, v[] ) }*/
  void cV( 新s s元素前, 新vi& v,新s v名 ){ cout2(v名,"={ ");for( size_t 一 = 0; 一 < v.size( ); 一++ ){ coutsf( "{}{}", s元素前, v[一] ); }/*for*/;cout1( " }");}/*void*/;
  void cV( 新s s元素前, 新vf& v,新s v名 ){ cout2(v名,"={ ");for( size_t 一 = 0; 一 < v.size( ); 一++ ){ coutsf( "{}{}", s元素前, v[一] ); }/*for*/;cout1( " }");}/*void*/;
  void cV( 新s s元素前, 新vc& v,新s v名 ){ cout2(v名,"={ ");for( size_t 一 = 0; 一 < v.size( ); 一++ ){ coutsf( "{}{}", s元素前, v[一] ); }/*for*/;cout1( " }");}/*void*/;
  void cV( 新s s元素前, 新vs& v,新s v名 ){ cout2(v名,"={ ");for( size_t 一 = 0; 一 < v.size( ); 一++ ){ coutsf( "{}{}", s元素前, v[一] ); }/*for*/;cout1( " }");}/*void*/;
  /*没有间隔, for{ c(v[]) }*//*for次数`不检测*/
  void cV( int for次数, 新vi& v ){ for( size_t 一 = 0; 一 < for次数; 一++ ){ coutsf( "{}", v[一] ); }/*for*/; coutsf( "\n" ); }/*void*/;
  void cV( int for次数, 新vf& v ){ for( size_t 一 = 0; 一 < for次数; 一++ ){ coutsf( "{}", v[一] ); }/*for*/; coutsf( "\n" ); }/*void*/;
  void cV( int for次数, 新vc& v ){ for( size_t 一 = 0; 一 < for次数; 一++ ){ coutsf( "{}", v[一] ); }/*for*/; coutsf( "\n" ); }/*void*/;
  void cV( int for次数, 新vs& v ){ for( size_t 一 = 0; 一 < for次数; 一++ ){ coutsf( "{}", v[一] ); }/*for*/; coutsf( "\n" ); }/*void*/;
  /*自定义间隔, for{ c(s,v[]) }*/
  void cV( int for次数, 新s s元素前, 新vi& v ){ for( size_t 一 = 0; 一 < for次数; 一++ ){ coutsf( "{}{}", s元素前, v[一] ); }/*for*/; coutsf( "\n" ); }/*void*/;
  void cV( int for次数, 新s s元素前, 新vf& v ){ for( size_t 一 = 0; 一 < for次数; 一++ ){ coutsf( "{}{}", s元素前, v[一] ); }/*for*/; coutsf( "\n" ); }/*void*/;
  void cV( int for次数, 新s s元素前, 新vc& v ){ for( size_t 一 = 0; 一 < for次数; 一++ ){ coutsf( "{}{}", s元素前, v[一] ); }/*for*/; coutsf( "\n" ); }/*void*/;
  void cV( int for次数, 新s s元素前, 新vs& v ){ for( size_t 一 = 0; 一 < for次数; 一++ ){ coutsf( "{}{}", s元素前, v[一] ); }/*for*/; coutsf( "\n" ); }/*void*/;
  /*没有间隔, for{ c(v[]) }*//*for次数`有检测*/
  void cV_检测size( int for次数, 新vi& v ){ if( for次数 <= v.size( ) ){ for( size_t 行 = 0; 行 < for次数; 行++ ){ coutsf( "{}", v[行] ); }/*for*/; coutsf( "\n" ); }/*if*/; }/*void*/;
  /*没有间隔, c( 下标=v[下标] )*/
  void cV_元素前加下标( 新vi& v ){ for( size_t 行 = 0; 行 < v.size( ); 行++ ){ coutsf( "{}={}", 行, v[行] ); }/*for*/; }/*void*/;
  void cV_元素前加下标( 新vf& v ){ for( size_t 行 = 0; 行 < v.size( ); 行++ ){ coutsf( "{}={}", 行, v[行] ); }/*for*/; }/*void*/;
  void cV_元素前加下标( 新vc& v ){ for( size_t 行 = 0; 行 < v.size( ); 行++ ){ coutsf( "{}={}", 行, v[行] ); }/*for*/; }/*void*/;
  void cV_元素前加下标( 新vs& v ){ for( size_t 行 = 0; 行 < v.size( ); 行++ ){ coutsf( "{}={}", 行, v[行] ); }/*for*/; }/*void*/;
  /*cV_元素前加下标_下标前加间隔; c( s,下标=v[下标] ); cV_元素前加下标前加间隔; */
  void cV_元素前加下标( 新s s元素前, 新vi& v ){ for( size_t 行 = 0; 行 < v.size( ); 行++ ){ coutsf( "{}{}={}", s元素前, 行, v[行] ); }/*for*/; }/*void*/;
  void cV_元素前加下标( 新s s元素前, 新vf& v ){ for( size_t 行 = 0; 行 < v.size( ); 行++ ){ coutsf( "{}{}={}", s元素前, 行, v[行] ); }/*for*/; }/*void*/;
  void cV_元素前加下标( 新s s元素前, 新vc& v ){ for( size_t 行 = 0; 行 < v.size( ); 行++ ){ coutsf( "{}{}={}", s元素前, 行, v[行] ); }/*for*/; }/*void*/;
  void cV_元素前加下标( 新s s元素前, 新vs& v ){ for( size_t 行 = 0; 行 < v.size( ); 行++ ){ coutsf( "{}{}={}", s元素前, 行, v[行] ); }/*for*/; }/*void*/;
  /*没有间隔, c(v[])*/
  void cVEndl( 新vi& v ){ cV( v ); coutsf( "\n" ); }/*void*/;
  void cVEndl( 新vf& v ){ cV( v ); coutsf( "\n" ); }/*void*/;
  void cVEndl( 新vc& v ){ cV( v ); coutsf( "\n" ); }/*void*/;
  void cVEndl( 新vs& v ){ cV( v ); coutsf( "\n" ); }/*void*/;
  /*自定义间隔, c(s,v[]) \n */
  void cVEndl( 新s s元素前, 新vi& v ){ cV( s元素前, v ); coutsf( "\n" ); }/*void*/;
  void cVEndl( 新s s元素前, 新vf& v ){ cV( s元素前, v ); coutsf( "\n" ); }/*void*/;
  void cVEndl( 新s s元素前, 新vc& v ){ cV( s元素前, v ); coutsf( "\n" ); }/*void*/;
  void cVEndl( 新s s元素前, 新vs& v ){ cV( s元素前, v ); coutsf( "\n" ); }/*void*/;
  /**/;//cVec2
  /*后面有coutsf("\n");*/
  void cV2( 新v2i v ){ for( size_t 一 = 0; 一 < v.size( ); 一++ ){ for( size_t 二 = 0; 二 < v[一].size( ); 二++ ){ coutsf( "{}", v[一][二] ); }/*for*/; coutsf( "\n" ); }/*for*/; }/*void*/;
  void cV2( 新v2f v ){ for( size_t 一 = 0; 一 < v.size( ); 一++ ){ for( size_t 二 = 0; 二 < v[一].size( ); 二++ ){ coutsf( "{}", v[一][二] ); }/*for*/; coutsf( "\n" ); }/*for*/; }/*void*/;
  void cV2( 新v2c v ){ for( size_t 一 = 0; 一 < v.size( ); 一++ ){ for( size_t 二 = 0; 二 < v[一].size( ); 二++ ){ coutsf( "{}", v[一][二] ); }/*for*/; coutsf( "\n" ); }/*for*/; }/*void*/;
  void cV2( 新v2s v ){ for( size_t 一 = 0; 一 < v.size( ); 一++ ){ for( size_t 二 = 0; 二 < v[一].size( ); 二++ ){ coutsf( "{}", v[一][二] ); }/*for*/; coutsf( "\n" ); }/*for*/; }/*void*/;
  void cV2( 新s s元素前, 新v2i v ){ for( size_t 一 = 0; 一 < v.size( ); 一++ ){ for( size_t 二 = 0; 二 < v[一].size( ); 二++ ){ cout2( s元素前, v[一][二] ); }/*for*/; coutsf( "\n" ); }/*for*/; }/*void*/;
  void cV2( 新s s元素前, 新v2f v ){ for( size_t 一 = 0; 一 < v.size( ); 一++ ){ for( size_t 二 = 0; 二 < v[一].size( ); 二++ ){ cout2( s元素前, v[一][二] ); }/*for*/; coutsf( "\n" ); }/*for*/; }/*void*/;
  void cV2( 新s s元素前, 新v2c v ){ for( size_t 一 = 0; 一 < v.size( ); 一++ ){ for( size_t 二 = 0; 二 < v[一].size( ); 二++ ){ cout2( s元素前, v[一][二] ); }/*for*/; coutsf( "\n" ); }/*for*/; }/*void*/;
  void cV2( 新s s元素前, 新v2s v ){ for( size_t 一 = 0; 一 < v.size( ); 一++ ){ for( size_t 二 = 0; 二 < v[一].size( ); 二++ ){ cout2( s元素前, v[一][二] ); }/*for*/; coutsf( "\n" ); }/*for*/; }/*void*/;
  void cV2_c行数( 新s s行数后, 新s s元素前, 新v2i v ){ for( size_t 一 = 0; 一 < v.size( ); 一++ ){ cout2( 一, s行数后 ); for( size_t 二 = 0; 二 < v[一].size( ); 二++ ){ cout2( s元素前, v[一][二] ); }/*for*/; coutsf( "\n" ); }/*for*/; }/*void*/;
  void cV2_c行数( 新s s行数后, 新s s元素前, 新v2f v ){ for( size_t 一 = 0; 一 < v.size( ); 一++ ){ cout2( 一, s行数后 ); for( size_t 二 = 0; 二 < v[一].size( ); 二++ ){ cout2( s元素前, v[一][二] ); }/*for*/; coutsf( "\n" ); }/*for*/; }/*void*/;
  void cV2_c行数( 新s s行数后, 新s s元素前, 新v2c v ){ for( size_t 一 = 0; 一 < v.size( ); 一++ ){ cout2( 一, s行数后 ); for( size_t 二 = 0; 二 < v[一].size( ); 二++ ){ cout2( s元素前, v[一][二] ); }/*for*/; coutsf( "\n" ); }/*for*/; }/*void*/;
  void cV2_c行数( 新s s行数后, 新s s元素前, 新v2s v ){ for( size_t 一 = 0; 一 < v.size( ); 一++ ){ cout2( 一, s行数后 ); for( size_t 二 = 0; 二 < v[一].size( ); 二++ ){ cout2( s元素前, v[一][二] ); }/*for*/; coutsf( "\n" ); }/*for*/; }/*void*/;
#define cV2_结构是每行有y和x_在坐标系的一个象限 cV2_每行有y和x_在坐标系的一个象限
  /*读取v2-->涂点; */
  /*输入{ yC坐标系的单位长度, xC坐标系的单位长度 };*/
  void cV2_每行有y和x_在坐标系的一个象限( 新s s元素前的间隔, 新v2i v, int 每行的第几位是y, int 每行的第几位是x, int c第几象限, int v入一size除, int v入二size除, 新s sC坐标系的单位字, int 字色, int 字亮色 ){
    cV2_在坐标系的一个象限( s元素前的间隔, v, 1, 每行的第几位是y, 每行的第几位是x, c第几象限, v入一size除, v入二size除, sC坐标系的单位字, 字色, 字亮色 );
  }/*void*/;
  /*输入{ c坐标系的单位长度 };*/
  void cV2_每行有y和x_在坐标系的一个象限( 新s s元素前的间隔, 新v2i v, int 每行的第几位是y, int 每行的第几位是x, int c第几象限, int c坐标系的单位长度, 新s sC坐标系的单位字, int 字色, int 字亮色 ){
    cV2_在坐标系的一个象限( s元素前的间隔, v, 1, 每行的第几位是y, 每行的第几位是x, c第几象限, c坐标系的单位长度, c坐标系的单位长度, sC坐标系的单位字, 字色, 字亮色 );
  }/*void*/;
  struct struct_cV2_在坐标系的一个象限函数的可选输入{ int 每行的第几位是y, 每行的第几位是x; }/*struct*/;
  struct_cV2_在坐标系的一个象限函数的可选输入 c坐可i;
  /*完整输入; v2坐标系的assign{ 输入,输入 };*/
  /*!点对点: =特定点*/
  void cV2_在坐标系的一个象限( 新s s元素前的间隔, 新v2i v入, int 结构是_1是每行有y和x_2是v的下标是y和x, struct_cV2_在坐标系的一个象限函数的可选输入 c坐可i, int c第几象限, int v出size, int v出一size, int yC坐标系的单位长度, int xC坐标系的单位长度, 新s sC坐标系的单位字, int 字色, int 字亮色 ){/*2025年4月28日12:52:32*/
    ;/*c*/{/*c*/cout2( "cV2_在坐标系的一个象限(): 结构是_1是每行有y和x_2是v的下标是y和x=", 结构是_1是每行有y和x_2是v的下标是y和x ); cout1( "\n" ); }/*c*/;
    ;/*c*/{/*c*/cout3( "v入.size=[", v入.size( ), "]" ); if( v入.size( ) > 0 ){ cout3( "[", v入[0].size( ), "]" ); }/*if*/; cout1( endl ); }/*c*/; sleep1400;
    /*!3个方法{ 是下标数有除余-->size+1; 是元数有除余-->size+1; 直接+1算了; }*/
    //是下标数有除余-->size+1: 元数T下标要-1, 让v出size>=v入size, 如{ 元数:{ 20/2=10, 10*2=20; 20/10=2, 2*10=20; },{ 21/2=10, 11*2=22; 21/10=2, 3*10=30; } 下标:{ 21/2=10, 11*2=22; 21/10=2, 3*10=30; },{ (20-1)/2=9, 10*2=20; (20-1)/10=1, 2*10=20; } }, 就是{ 是元数有除余, size+1 }; 2025年4月28日13:48:09看日记
    //是元数有除余-->size+1: 1/2=0,1*2=2,1>2,1-2<2; 2/2=1,2*2=4,2>4,2-4=2; 20/2=10,11*2=22,20>22,20-22<10; 21/2=10%1,11*2=22,21>22; 直接除余不就行; 还是看不懂;
    v出size++; v出一size++;
    /**新vi vY={}, vX={};*/新v2i v2坐标系( v出size, 新vi( v出一size, 字色 ) );;/*c*/{/*c*/cout3( "v2坐标系.size=[", v2坐标系.size( ), "]" ); if( v2坐标系.size( ) > 0 ){ cout3( "[", v2坐标系[0].size( ), "]" ); }/*if*/; cout1( endl ); }/*c*/;
    /*!修改<坐标系的点>的颜色: v2[y][x]=字色*/{
      int yζ出 = 0, xζ出 = 0;
      /*v出[yζ出][xζ出]=输入的色*/
      auto lamIf象限Zv2坐标系某元等于字亮色 = [&]( int 字亮色 )->void{
        if( c第几象限 == 1 ){
          ;/*c*/{/*c*/cout3( "这行是: 第1象限-->v2坐标系[yζ出][xζ出]=", 字亮色, "; " ); cout1( "-->" ); }/*c*/;
          v2坐标系[yζ出][xζ出] = 字亮色;;/*c*/{/*c*/cout6( "v2坐标系[", yζ出, "][", xζ出, "]=", 字亮色 ); cout1( endl ); }/*c*/;
        } else if( c第几象限 == 2 ){/*y正x负*/
          v2坐标系[yζ出][-xζ出] = 字亮色;
        } else if( c第几象限 == 3 ){
          v2坐标系[-yζ出][-xζ出] = 字亮色;
        } else if( c第几象限 == 4 ){/*y负x正*/
          v2坐标系[-yζ出][xζ出] = 字亮色;
        }/*else if*/;
        }/*lam*/;
      /*y=y/长度,x=x/长度;*/
      if( 结构是_1是每行有y和x_2是v的下标是y和x == 1 ){/*y=v[][0]/长度,x=v[][1]/长度;*/
        for( size_t 一v = 0; 一v < v入.size( ); 一v += yC坐标系的单位长度 ){
          yζ出 = v入[一v][c坐可i.每行的第几位是y] / yC坐标系的单位长度, xζ出 = v入[一v][c坐可i.每行的第几位是x] / xC坐标系的单位长度;///;/*c*/{/*c*/cout4( "cV2_在坐标系的一个象限: y=", y, ",x=", x );  coutEnd; }/*c*/; ///sleep10;
          lamIf象限Zv2坐标系某元等于字亮色( 字亮色 );
        }/*for*/;///;/*c*/{/*c*/cout1( "cV2_在坐标系的一个象限: c<v2坐标系>: " );  coutEnd; }/*c*/; cV2( " ", v2坐标系 ); sleep14000;
      } else if( 结构是_1是每行有y和x_2是v的下标是y和x == 2 ){/*y=一v/长度,x=二v/长度;*/
        /*每方`取左上点*/
        for( size_t 一v = 0; 一v < v入.size( )/*- 4*/; 一v += (yC坐标系的单位长度/*- 1*/) ){
          //?某些行size()多了1
          if( 一v <= v入.size( ) ){
            for( size_t 二v = 0; 二v < v入[一v].size( )/*- 1*/; 二v += (xC坐标系的单位长度) ){
              if( 二v <= v入[一v].size( ) ){                ///;/*c*/{/*c*/cout1( "cV2_在坐标系的一个象限: " ); cout2( "v2.size=", v入.size( ) ); cout2( ", v2[行].size=", v入[一v].size( ) ); cout4( ", 一v=", 一v, ",二v=", 二v ); cout2( ", 这元素=", v入[一v][二v] ); cout1( "-->" ); }/*c*/;
                yζ出 = 一v / yC坐标系的单位长度, xζ出 = (二v / xC坐标系的单位长度);///;/*c*/{/*c*/cout4( "y=", yζ出, ",x=", xζ出 ); coutEnd; }/*c*/;
                lamIf象限Zv2坐标系某元等于字亮色( v入[一v][二v] );
              }/*if*/;
            }/*for*/;
          }/*if*/;
        }/*for*/;
      }/*else if*/;
    }/*修改<坐标系的点>的颜色: v2[y][x]=字色*/;
    /*!c坐标系*/{
      ;/*c*/{/*c*/cout1( "cV2_在坐标系的一个象限: cV2_在坐标系的一个象限" );  cout1( endl ); }/*c*/;
      for( size_t 一 = 0; 一 < v2坐标系.size( ); 一++ ){ for( size_t 二 = 0; 二 < v2坐标系[一].size( ); 二++ ){ cout1( s元素前的间隔 ); set字色( v2坐标系[一][二] ); cout1( sC坐标系的单位字 ); }/*for*/; coutsf( "\n" ); }/*for*/;
    }/*c坐标系*/;
    set字色( 7 );
  }/*void*/;
  /*两个方法: 结构是_1是每行有y和x: 输入{ 一 }
  结构是_2是v的下标是y和x: 输入{ 一,二 }
  */
  /*v2坐标系的assign{ v入/c单 }={ v出size=v入size/c单 }; v2坐标系的size等于v的size除以 = yC坐标系的单位长度; v2坐标系的每行的size等于v每行的size除以 = xC坐标系的单位长度*/
  void cV2_在坐标系的一个象限( 新s s元素前的间隔, 新v2i v入, int 结构是_1是每行有y和x_2是v的下标是y和x, int 每行的第几位是y, int 每行的第几位是x, int c第几象限, int yC坐标系的单位长度, int xC坐标系的单位长度, 新s sC坐标系的单位字, int 字色, int 字亮色 ){/*2025年4月19日18:32:43*/
    auto lamGetV某二下标最大的元 = [&]( 新v2i v入, 新i 某二下标,/*输出*/新i& 某下标最大的元 )->int{/*2025年4月29日14:08:03*/
      int 是否有结果 = 0; if( v入.size( ) > 0 ){/*初始值*/ 是否有结果 = 1; 某下标最大的元 = v入[0][某二下标]; }/*if*/;
      for( size_t 一 = 0; 一 < v入.size( ); 一++ ){ if( v入[一][某二下标] > 某下标最大的元 ){ 某下标最大的元 = v入[一][某二下标]; }/*if*/; }/*for*/; retu 是否有结果;
      }/*lam*/;
    c坐可i.每行的第几位是y = 每行的第几位是y, c坐可i.每行的第几位是x = 每行的第几位是x;
    //todo 负数; 是否v[一].size( ) > 0; 
    if( v入.size( ) > 0 ){/*!是有v[0]*/
      //>v入的yx范围/c单=v出的yx范围; 确定<v入的yx范围>:
      新i yV入的坐标系范围 = 0, xV入的坐标系范围 = 0;
      if( 结构是_1是每行有y和x_2是v的下标是y和x == 1 ){
        /*找最大的yx=get某二下标最大的元()/get某列最大的元()*/
        lamGetV某二下标最大的元( v入, 0, yV入的坐标系范围 );
        lamGetV某二下标最大的元( v入, 1, xV入的坐标系范围 );
      }/*if*/;
      if( 结构是_1是每行有y和x_2是v的下标是y和x == 2 ){
        yV入的坐标系范围 = v入.size( );
        xV入的坐标系范围 = v入[0].size( );
      }/*if*/;
      cV2_在坐标系的一个象限( s元素前的间隔, v入, 结构是_1是每行有y和x_2是v的下标是y和x, c坐可i, c第几象限, yV入的坐标系范围 / yC坐标系的单位长度, xV入的坐标系范围 / xC坐标系的单位长度, yC坐标系的单位长度, xC坐标系的单位长度, sC坐标系的单位字, 字色, 字亮色 );
    }/*if*/;
  }/*void*/;
  /**/;//cVec的一个元素`IFCS
  /*没有s*/
  void cV的一个元素(/*输入*/新vi v, int 下标一 ){ coutsf( "{}", v[下标一] ); }/*void*/;
  void cV的一个元素(/*输入*/新vf v, int 下标一 ){ coutsf( "{}", v[下标一] ); }/*void*/;
  void cV的一个元素(/*输入*/新vc v, int 下标一 ){ coutsf( "{}", v[下标一] ); }/*void*/;
  void cV的一个元素(/*输入*/新vs v, int 下标一 ){ coutsf( "{}", v[下标一] ); }/*void*/;
  /*自定义s*/
  void cV的一个元素(/*输入*/新s s, 新vi v, int 下标一 ){ coutsf( "{}{}", s, v[下标一] ); }/*void*/;
  void cV的一个元素(/*输入*/新s s, 新vf v, int 下标一 ){ coutsf( "{}{}", s, v[下标一] ); }/*void*/;
  void cV的一个元素(/*输入*/新s s, 新vc v, int 下标一 ){ coutsf( "{}{}", s, v[下标一] ); }/*void*/;
  void cV的一个元素(/*输入*/新s s, 新vs v, int 下标一 ){ coutsf( "{}{}", s, v[下标一] ); }/*void*/;
  /**/;//cVec2的一个元素`IFCS
  /*没有s*/
  void cV2的一个元素(/*输入*/新v2i v, int 下标一, int 下标二 ){ coutsf( "{}", v[下标一][下标二] ); }/*void*/;
  void cV2的一个元素(/*输入*/新v2f v, int 下标一, int 下标二 ){ coutsf( "{}", v[下标一][下标二] ); }/*void*/;
  void cV2的一个元素(/*输入*/新v2c v, int 下标一, int 下标二 ){ coutsf( "{}", v[下标一][下标二] ); }/*void*/;
  void cV2的一个元素(/*输入*/新v2s v, int 下标一, int 下标二 ){ coutsf( "{}", v[下标一][下标二] ); }/*void*/;
  /*有s**自定义s*/
  void cV2的一个元素(/*输入*/新s s, 新v2i v, int 下标一, int 下标二 ){ coutsf( "{}{}", s, v[下标一][下标二] ); }/*void*/;
  void cV2的一个元素(/*输入*/新s s, 新v2f v, int 下标一, int 下标二 ){ coutsf( "{}{}", s, v[下标一][下标二] ); }/*void*/;
  void cV2的一个元素(/*输入*/新s s, 新v2c v, int 下标一, int 下标二 ){ coutsf( "{}{}", s, v[下标一][下标二] ); }/*void*/;
  void cV2的一个元素(/*输入*/新s s, 新v2s v, int 下标一, int 下标二 ){ coutsf( "{}{}", s, v[下标一][下标二] ); }/*void*/;
  /**/;//▬附加功能▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬

};
#endif
