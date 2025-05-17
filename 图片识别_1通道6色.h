#pragma once
#ifndef _1通道6色图片_H
#define _1通道6色图片_H

#include  <E:\lib\前置变量.h>
#include  <E:\lib\图片属性.h>
#include  <E:\lib\头文件 c++.h>
#include  <E:\lib\头文件 opcv.h>

#include  <E:\lib\图片识别.h>

////using namespace wode;
#define 图片识别_1通道6色 struct_图片识别_1通道6色
struct struct_图片识别_1通道6色/*!256/50=6色*/{
public:
  前置cout 前置c;/*前置cout1*/
  cmd cmd1;
  直线方程 ViXmFhIg;
  窗口 idkb;
  /*OpenCV*/
  截图 jxtu;
  图片识别 TuPmUiBx;
public:
  /**/;//>记录
  /**/;//定量
  /*弃用*/
  COORD CoM尺寸ζ入, /*CoMat尺寸,Co图片尺寸*/CoM尺寸ζ出 /**/; COORD 检测的范围 = { 0,0 }; COORD CoV的尺寸;
  /**/;//变量
  /*v2i图片`的坐标*/COORD 输出图片的坐标;
  int r, g, b;
  float f记录;
  /*图片转换成这个, v2i记录图片所有信息, 每个点`就有那个点*/
  新v2i v2iMatUchar除10, v2iMatUchar除50;
  图片info 单通道6色图片/*0~5是六种颜色*/;
  /**/;//设置
  int 大于是浅色 = 180, 小于是深色 = 76/*那中间是正常颜色*/;
public:
  图片识别_1通道6色( ){ }/*()*/
  ~图片识别_1通道6色( ){ }/*~()*/
  /**/;//▬简写▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
  void getMat1TMatUcharTV2( /*!输入*/Mat& M1, int 色除,/*!输出*/新v2i& v2灰 ){
    Mat M灰;
    /*转换>`单通道图片*/cv::cvtColor( M1, M灰, cv::COLOR_BGR2GRAY );
    getMatUcharTV2除( M灰, 1, 1, 色除, v2灰 );
    getV2TMatUchar除( v2灰, 1, 1, 色除, 1, M灰 );
  }/*void*/;
#define defV2灰 单通道6色图片.灰度图片除50i.v2i图片
  void getMat1TMatUcharTV2TMat2( /*!输入*/Mat& M1, int 色除,/*!输出*/Mat& M2 ){
    getMat1TMatUcharTV2( M1, 色除, defV2灰 );
    getV2TMatUchar除( defV2灰, 1, 1, 色除, 1, M2 );
  }/*void*/;
  /**/;//▬转换`V2i单通道灰度图▬▬▬▬▬▬▬▬▬▬
  /* forYForX_getMatTOV2i_MatUchar除i; forYForXZGetMatTOV2i_MatUchar除i; getForYForX_MatTOV2i_MatUchar除i; getMatTV_forYForX_MatUchar除i; getMatUchar除iTV_forYForX; forYForX_getMatUchar除iTV; forYForXZGetMatUchar除iTV; forYForX_getMatUchar除iTV2; forYForX_getMatUcharTV2除i; forYForX_getMatUcharTV2_除i; */
  void forYForX_getMatUcharTV2除(/*!输入*/Mat& M1, /*forY*/int y序ζ入_小于, int y序ζ出_小于, int y下个点加几个像素, /*forX*/int x序ζ入_小于, int x序ζ出_小于, int x下个点加几个像素, int 色除,/*!输出*/新v2i& v灰 ){
    /*for( y){ for( x){ V2i[y][x]= m.at<uchar>(Point(x, y))/色除; } }*/
    for( size_t y序ζ入 = 0, y序ζ出 = 0; y序ζ入 < y序ζ入_小于 and y序ζ出 < y序ζ出_小于; y序ζ入 += y下个点加几个像素, y序ζ出 += 1 ){/*行*/
      for( size_t x序ζ入 = 0, x序ζ出 = 0; x序ζ入 < x序ζ入_小于 and x序ζ出 < x序ζ出_小于; x序ζ入 += x下个点加几个像素, x序ζ出 += 1 ){/*列*/ ///cout11("MatTOV2i","v2i[",y序ζ出,"][",x序ζ出,"]=Mat(",y序ζ入, ",",x序ζ入,");", "\n");
        v灰[y序ζ出][x序ζ出] = M1.at<uchar>( Point( x序ζ入, y序ζ入 ) ) / 色除;
      }/*for*/;
    }/*for*/;
  }/*void*/;
  //>Mat-->图片i.v2i
  /*Mat-->v2i; 不用<图片i>*/
  void getMatUcharTV2除(/*输入*/Mat& M1, int y下个点加几个像素, int x下个点加几个像素, int 色除,/*输出*/新v2i& v灰 ){
    v灰.assign( M1.rows / y下个点加几个像素, 新vi( M1.cols / x下个点加几个像素, 0 ) );
    CoM尺寸ζ入.Y = M1.rows; CoM尺寸ζ入.X = M1.cols;
    CoM尺寸ζ出.Y = M1.rows / y下个点加几个像素; CoM尺寸ζ出.X = M1.cols / x下个点加几个像素;
    forYForX_getMatUcharTV2除(/*!输入*/M1,/*forY*/CoM尺寸ζ入.Y, CoM尺寸ζ出.Y, y下个点加几个像素,/*forX*/CoM尺寸ζ入.X, CoM尺寸ζ出.X, x下个点加几个像素, 色除,/*!输出*/v灰 );
  }/*void*/;
#define getMatTOV2i_MatUchar除iAND图片info初始化 图片info初始化AGetMatUcharTOV2除
#define getMatTOV2i_MatUchar除iA图片info初始化 图片info初始化AGetMatUcharTOV2除
#define get图片info初始化AMatTOV2i_MatUchar除 图片info初始化AGetMatUcharTOV2除
#define 图片info初始化AGetMatTOV2i_MatUchar除 图片info初始化AGetMatUcharTOV2除
  /*Mat-->图片i.v2i;*/
  void 图片info初始化AGetMatUcharTOV2除(/*!输入*/Mat& M1, int y下个点加几个像素, int x下个点加几个像素, int i值的除数,/*!输出*/图片info& 图片i ){
    //图片i.y边像素 = m.rows/y下个点加几个像素; 图片i.x边像素 = m.cols/x下个点加几个像素;
    图片i.图片info初始化( M1.rows, M1.cols, y下个点加几个像素, x下个点加几个像素, i值的除数 );
    forYForX_getMatUcharTV2除(/*!输入*/M1,/*forY*/ 图片i.输入_M的y边像素, 图片i.y边像素, y下个点加几个像素,/*forX*/图片i.输入_M的x边像素, 图片i.x边像素, x下个点加几个像素, 图片i.颜色的除,/*!输出*/图片i.灰度图片i.v2i图片 );
  }/*void*/;
#define 图片i初始化AGetMatUchar除50TV2 图片i初始化AGetMatUcharTV2_除50 
#define 图片i初始化AGetMatUchar乘50TV2 图片i初始化AGetMatUcharTV2_除50 
  /*Mat-->图片i.灰度图片除50i.v2i图片; */
  void 图片i初始化AGetMatUcharTV2_除50(/*!输入*/Mat& M1, int y下个点加几个像素, int x下个点加几个像素,/*!输出*/图片info& 图片i ){ 图片info初始化AGetMatUcharTOV2除( M1, y下个点加几个像素, x下个点加几个像素, 50,/*输出*/图片i ); }/*void*/;
  /*v+不确定,M+1*/
  /*v2i-->M灰图`Mat<uchar>. M尺寸放大缩小功能{ yx下个点加几个像素<1=M放大, 应该没意义. <1=( M缩小,v会跳过 ); };*/
  void getV2TMatUchar除(/*输入*/新v2i& v2i, int y下个点加几个像素, int x下个点加几个像素, int i颜色乘_vTM, int _1是v为准_2是M为准,/*输出*/Mat& M1 ){/*2025年4月6日04:26:42*/
    if( _1是v为准_2是M为准 == 1 ){
      /*长和宽设定成v2i/间隔的-->v2i把数据*?填到里面*/
      M1 = Mat( v2i.size( ) / (y下个点加几个像素), v2i[0].size( ) / (x下个点加几个像素), CV_8UC1 );/*不是间隔, 不能/(i+1)*/
    } else if( _1是v为准_2是M为准 == 2 ){
      y下个点加几个像素 = v2i.size( ) / M1.rows; x下个点加几个像素 = v2i[0].size( ) / M1.cols;
    }/*else if*/;
    CoM尺寸ζ出.Y = M1.rows; CoM尺寸ζ出.X = M1.cols;
    /*for( y){ for( x){ m.at<uchar>(Point(x, y))=V2i[y][x]*i颜色乘_vTM; } }*/
    for( size_t y序ζ入 = 0, y序ζ出 = 0; y序ζ入 < v2i.size( ) && y序ζ出 < CoM尺寸ζ出.Y; y序ζ入 += y下个点加几个像素, y序ζ出 += 1 ){/*行*/
      for( size_t x序ζ入 = 0, x序ζ出 = 0; x序ζ入 < v2i[0].size( ) && x序ζ出 < CoM尺寸ζ出.X; x序ζ入 += x下个点加几个像素, x序ζ出 += 1 ){/*列*/
        M1.at<uchar>( Point( x序ζ出, y序ζ出 ) ) = v2i[y序ζ入][x序ζ入] * i颜色乘_vTM;
      }/*for*/;
    }/*for*/;
  }/*void*/;
/*弃用的def*/#define getV2iTMat_左为准_MatUchar除50 getV2iTMat_v为准_MatUchar除50
#define getV2iTMat_右为准_MatUchar除50 getV2iTMat_M为准_MatUchar除50
  /*图片i.灰度图片除50i.v2i图片-->Mat; */
  /*v的y/(y下个点加几个像素+1)==M的y*/
  void getV2TMatUchar除50(/*输入*/图片info& 图片, int y下个点加几个像素, int x下个点加几个像素, int _1是v为准_2是M为准,/*输出*/Mat& M1 ){ getV2TMatUchar除( 图片.灰度图片除50i.v2i图片, y下个点加几个像素, x下个点加几个像素, 50, x下个点加几个像素, M1 ); }/*void*/;
  /*1个灰度值-->Mat; v的一些坐标-->Mat*/
  auto get1个灰度值TOMat_MatUchar除(/*输入*/新v2i& v2i, int iV2i的灰度值/*v2i[灰度值][0]*/, int i值的除数, int y下个点加几个像素, int x下个点加几个像素,/*输出*/Mat& m ){
    /*长和宽设定成v2i的-->v2i把数据*i值的除数`填到m里面*/
    m = Mat( v2i.size( ), v2i[0].size( ), 0, CV_8UC1 );
    CoM尺寸ζ出.Y = m.rows; CoM尺寸ζ出.X = m.cols;
    /*for v的xy, m的尺寸要>v的*/
    /*for( y){ for( x){ if(m.at颜色=灰度值)m.at<uchar>(Point(x, y))=V2i[y][x]*i值的除数; } }*/
    for( size_t y序ζ入 = 0, y序ζ出 = 0; y序ζ入 < v2i.size( ); y序ζ入/*v*/ += y下个点加几个像素, y序ζ出/*m*/ += 1 ){/*行*/
      for( size_t x序ζ入 = 0, x序ζ出 = 0; x序ζ入 < v2i[0].size( ); x序ζ入 += x下个点加几个像素, x序ζ出 += 1 ){/*列*/
        if( v2i[y序ζ入][x序ζ入]/*v图片`颜色是否是*/ == iV2i的灰度值 ){
          m.at<uchar>( Point( x序ζ出, y序ζ出 ) ) = v2i[y序ζ入][x序ζ入] * i值的除数;
        }/*if*/;
      }/*for*/;
    }/*for*/;
  }/*auto*/;
  auto get1个灰度值TOMat_MatUchar除50(/*输入*/图片info& 图片, int iV2i的灰度值, int i值的除数,/*输出*/Mat& m ){
    /*长和宽设定成v2i的-->v2i把数据*i值的除数`填到m里面*/
    ///get1个灰度值TOMat_MatUchar除(图片.灰度图片除50i.v2i图片,1,1,5,50,m);
    get1个灰度值TOMat_MatUchar除( 图片.灰度图片除50i.v2i图片, iV2i的灰度值, 50, 1, 1, m );
  }/*auto*/
  auto get多个灰度值TOMat_MatUchar除(/*输入*/新v2i& v2i, 新vi vi灰度值/*v2i[1`2`3]*/, int i值的除数, int y下个点加几个像素, int x下个点加几个像素,/*输出*/Mat& m ){
    /*长和宽设定成v2i的-->v2i把数据*i值的除数`填到m里面*/
    m = Mat( v2i.size( ), v2i[0].size( ), 0, CV_8UC1 );
    CoM尺寸ζ出.Y = m.rows; CoM尺寸ζ出.X = m.cols;
    /*for v的xy, m的尺寸要>v的*/
    /*for( y){ for( x){ if(m.at颜色=灰度值)m.at<uchar>(Point(x, y))=V2i[y][x]*i值的除数; } }*/
    for( size_t y序ζ入 = 0, y序ζ出 = 0; y序ζ入 < v2i.size( ); y序ζ入/*v*/ += y下个点加几个像素, y序ζ出/*m*/ += 1 ){/*行*/
      for( size_t x序ζ入 = 0, x序ζ出 = 0; x序ζ入 < v2i[0].size( ); x序ζ入 += x下个点加几个像素, x序ζ出 += 1 ){/*列*/
        for( auto val : vi灰度值 ){
          if( v2i[y序ζ入][x序ζ入]/*v图片`颜色是否是*/ == val ){
            m.at<uchar>( Point( x序ζ出, y序ζ出 ) ) = v2i[y序ζ入][x序ζ入] * i值的除数;
          }/*if*/;
        }/*for*/;
      }/*for*/;
    }/*for*/;
  }/*auto*/;
  /**/;//>图片识别
#define 是否像素的上下左右有一样颜色 ret像素的上下左右有几个一样颜色的像素
  /*灰度图; ret{ 和中心点的`颜色一样的像素数量 }*/
  auto ret像素的上下左右有几个一样颜色的像素(/*!输入*/新v2i& v2i, struct_f坐标 fCo当前, int y下个点加几个像素, int x下个点加几个像素/*输出*/ ){/*2025年4月11日22:59:34*/
    int y加 = y下个点加几个像素, x加 = x下个点加几个像素;
    int 当前点的颜色 = v2i[fCo当前.Y][fCo当前.X];
    int 和中心点的颜色一样的像素数量 = 0;
    if( 当前点的颜色 == v2i[fCo当前.Y - y加][fCo当前.X] ){/*上*/和中心点的颜色一样的像素数量++; } else if( 当前点的颜色 == v2i[fCo当前.Y][fCo当前.X + x加] ){/*右*/和中心点的颜色一样的像素数量++;
    } else if( 当前点的颜色 == v2i[fCo当前.Y + y加][fCo当前.X] ){/*下*/和中心点的颜色一样的像素数量++; } else if( 当前点的颜色 == v2i[fCo当前.Y][fCo当前.X - x加] ){/*左*/和中心点的颜色一样的像素数量++; }/*else if*/;
    retu 和中心点的颜色一样的像素数量;
  }/*auto*/;
  auto ret像素的周围有几个一样颜色的像素(/*!输入*/新v2i& v2i, struct_f坐标 fCo当前, int y下个点加几个像素, int x下个点加几个像素/*输出*/ ){
    int y加 = y下个点加几个像素, x加 = x下个点加几个像素;
    int 当前点的颜色 = v2i[fCo当前.Y][fCo当前.X];
    int 和中心点的颜色一样的像素数量 = 0;
    if( 当前点的颜色 == v2i[fCo当前.Y - y加][fCo当前.X] ){/*上*/和中心点的颜色一样的像素数量++; } else if( 当前点的颜色 == v2i[fCo当前.Y - y加][fCo当前.X + x加] ){/*右上*/和中心点的颜色一样的像素数量++; } else if( 当前点的颜色 == v2i[fCo当前.Y][fCo当前.X + x加] ){/*右*/和中心点的颜色一样的像素数量++;
    } else if( 当前点的颜色 == v2i[fCo当前.Y + y加][fCo当前.X + 1] ){/*右下*/和中心点的颜色一样的像素数量++; } else if( 当前点的颜色 == v2i[fCo当前.Y + y加][fCo当前.X] ){/*下*/和中心点的颜色一样的像素数量++; } else if( 当前点的颜色 == v2i[fCo当前.Y + 1][fCo当前.X - x加] ){/*左下*/和中心点的颜色一样的像素数量++;
    } else if( 当前点的颜色 == v2i[fCo当前.Y][fCo当前.X - 1] ){/*左*/和中心点的颜色一样的像素数量++; } else if( 当前点的颜色 == v2i[fCo当前.Y - 1][fCo当前.X - x加] ){/*左上*/和中心点的颜色一样的像素数量++; }/*else if*/;
    retu 和中心点的颜色一样的像素数量;
  }/*auto*/;
  auto get像素的上下左右的一样颜色的像素(/*!输入*/新v2i& v2i, struct_f坐标 fCo当前, int y下个点加几个像素, int x下个点加几个像素,/*!输出*/新vi& vY坐标_同色, 新vi& vX坐标_同色 ){/*2025年4月11日22:59:34*/
    /*!变量的初始化*/{ vY坐标_同色 = {}; vX坐标_同色 = {}; }/*变量的初始化*/;
    int y加 = y下个点加几个像素, x加 = x下个点加几个像素;
    int 当前点的颜色 = v2i[fCo当前.Y][fCo当前.X];
    int 和中心点的颜色一样的像素数量 = 0;
    if( 当前点的颜色 == v2i[fCo当前.Y - y加][fCo当前.X] ){/*上*/vY坐标_同色.pushb( fCo当前.Y - y加 ); } else if( 当前点的颜色 == v2i[fCo当前.Y][fCo当前.X + x加] ){/*右*/和中心点的颜色一样的像素数量++;
    } else if( 当前点的颜色 == v2i[fCo当前.Y + y加][fCo当前.X] ){/*下*/和中心点的颜色一样的像素数量++; } else if( 当前点的颜色 == v2i[fCo当前.Y][fCo当前.X - x加] ){/*左*/和中心点的颜色一样的像素数量++; }/*else if*/;
    retu 和中心点的颜色一样的像素数量;
  }/*auto*/;
  auto get像素的周围的一样颜色的像素(/*!输入*/新v2i& v2i, struct_f坐标 fCo当前, int y下个点加几个像素, int x下个点加几个像素,/*!输出*/新vi& vY坐标_同色, 新vi& vX坐标_同色 ){
    int y加 = y下个点加几个像素, x加 = x下个点加几个像素;
    int 当前点的颜色 = v2i[fCo当前.Y][fCo当前.X];
    int 和中心点的颜色一样的像素数量 = 0;
    if( 当前点的颜色 == v2i[fCo当前.Y - y加][fCo当前.X] ){/*上*/和中心点的颜色一样的像素数量++; } else if( 当前点的颜色 == v2i[fCo当前.Y - y加][fCo当前.X + x加] ){/*右上*/和中心点的颜色一样的像素数量++; } else if( 当前点的颜色 == v2i[fCo当前.Y][fCo当前.X + x加] ){/*右*/和中心点的颜色一样的像素数量++;
    } else if( 当前点的颜色 == v2i[fCo当前.Y + y加][fCo当前.X + 1] ){/*右下*/和中心点的颜色一样的像素数量++; } else if( 当前点的颜色 == v2i[fCo当前.Y + y加][fCo当前.X] ){/*下*/和中心点的颜色一样的像素数量++; } else if( 当前点的颜色 == v2i[fCo当前.Y + 1][fCo当前.X - x加] ){/*左下*/和中心点的颜色一样的像素数量++;
    } else if( 当前点的颜色 == v2i[fCo当前.Y][fCo当前.X - 1] ){/*左*/和中心点的颜色一样的像素数量++; } else if( 当前点的颜色 == v2i[fCo当前.Y - 1][fCo当前.X - x加] ){/*左上*/和中心点的颜色一样的像素数量++; }/*else if*/;
    retu 和中心点的颜色一样的像素数量;
  }/*auto*/;
  /**/;//>补充`图片info
  auto 在v2i中是否找到此灰度值_v的每一行坐标就是灰度值(/*输入*/新v2i& v2i, int& i灰度值 ){
    下标info /*跨度是1*/下标ζ入;
    for( 下标ζ入.一 = 0; 下标ζ入.一 < v2i.size( ); 下标ζ入.一 += 1 ){/*行*/
      ///for( 下标ζ入.二 = 0; 下标ζ入.二<v2i[0].size(); 下标ζ入.二 += 1 ){/*列*/
      if( i灰度值 == v2i[下标ζ入.一][0] ){
        retu 1;
      }/*if*/
       ///}/*for*/
    }/*for*/
    retu 0;
  }/*auto*/
  auto get每种颜色的像素数量( /*输入输出*/图片info& 图片, /*输入*/int y下个点加几个像素, int x下个点加几个像素 ){
    /*coord; for{ for{}} */
    COORD /*跨度可变*/CoV2i图ζ入, /*跨度是1*/CoV2i像素数量ζ入;
    int i灰度值 = 0;
    /*if 步进是一,就不需要两套坐标*/
    for( CoV2i图ζ入.Y = 0, CoV2i像素数量ζ入.Y = 0; CoV2i图ζ入.Y < CoM尺寸ζ入.Y; CoV2i图ζ入.Y += y下个点加几个像素, CoV2i像素数量ζ入.Y += 1 ){/*行*/
      for( CoV2i图ζ入.X, CoV2i像素数量ζ入.X = 0, CoV2i图ζ入.X = 0; CoV2i图ζ入.X < CoM尺寸ζ入.X; CoV2i图ζ入.X += x下个点加几个像素, CoV2i像素数量ζ入.X += 1 ){/*列*/
        /*当前颜色*/i灰度值 = 图片.灰度图片除50i.v2i图片[CoV2i图ζ入.Y][CoV2i图ζ入.X];
        /*统计颜色数量*/图片.灰度图片除50i.v2i颜色的像素数量[i灰度值][0]++;
        /// /*if v2i[灰度值][0]`像素数量*/if(图片.v2i单通道图颜色属性除50[i灰度值][0]==0/*第一次遇到这个颜色*/ ){}/*if*/
        /*和右边对比*/if( 图片.灰度图片除50i.v2i图片[CoV2i图ζ入.Y][CoV2i图ζ入.X] == 图片.灰度图片除50i.v2i图片[CoV2i图ζ入.Y][CoV2i图ζ入.X += x下个点加几个像素] ){
          /*这是一条线*/
        }/*if*/
      }/*for*/
    }/*for*/
    c每种颜色的像素数量( 图片 );
  }/*auto*/
  void c每种颜色的像素数量( /*输入*/图片info& 图片 ){
    下标info /*跨度是1*/下标ζ入;
    for( 下标ζ入.一 = 0; 下标ζ入.一 < 图片.灰度图片除50i.v2i颜色的像素数量.size( ); 下标ζ入.一 += 1 ){/*行*/
      coutsf( "灰度值{}有{}个\n", 下标ζ入.一, 图片.灰度图片除50i.v2i颜色的像素数量[下标ζ入.一][0] );
    }/*for*/;
  }/*void*/;
  /*get比值*/
 //TODO V V2
  void getVf每种颜色的像素数量除以总像素数量色(/*输入*/图片info& 图片i ){
    for( size_t y1 = 0; y1 < 图片i.灰度图片除50i.v2f颜色的像素数量除以总像素数量.size( ); y1++ ){
      图片i.灰度图片除50i.v2f颜色的像素数量除以总像素数量[y1][1] = 图片i.灰度图片除50i.v2i颜色的像素数量[y1][1] / 图片i.总像素数量;
    }/*for*/
  }/*void*/;
  /*1通道Mat, get好几个灰度值*/
  float get判断前景色背景色(/*输入*/图片info& 图片i,/*输出*/新vi vi前景色, 新vi vi背景色 ){
    /*if 比值<10*/
    float 比值;
    for( size_t y1 = 0; y1 < 图片i.灰度图片除50i.v2f颜色的像素数量除以总像素数量.size( ); y1++ ){
      比值 = 图片i.灰度图片除50i.v2f颜色的像素数量除以总像素数量[y1][1];/*size=颜色数量,[][0]=颜色*/
      if( 比值 > 0.9 ){/*这是背景色,其他的全是前景色*/
        vi背景色[y1] = y1;
        for( size_t y2 = 0; y2 < 图片i.灰度图片除50i.v2i颜色的像素数量.size( ); y2++ ){
          if( y2 == y1 ){
            continu;
          }/*if*/
          vi前景色[y2] = y2;/*除50`颜色=下标*/
        }/*for*/
        retu 0.1;/*分界线*/
      } else{/*比值<=0.1*/
        vi前景色[y1] = y1;
        vi背景色[y1] = y1;
      }/*else*/
    }/*for*/
    retu 0;/*没有符合条件(<0.1)的数*/
  }/*float*/
  /**/;//>get图片所有线
  // /*只用了.X, 没用.Y*/
  auto get向右查找同一颜色( /*输入*/图片info& 图片i, COORD Co当前点 ){
    COORD Co起始点 = Co当前点, Co刚才点 = Co当前点;
    while( true ){
      /*对比颜色-->读取坐标*/ /*读取坐标-->对比颜色*/
      if( get右边的点的坐标( Co当前点, CoM尺寸ζ入 ) == 1/*右边有点*/ ){
        if( /*左右两点颜色一样*/图片i.灰度图片除50i.v2i图片[Co刚才点.Y][Co刚才点.X] == 图片i.灰度图片除50i.v2i图片[Co当前点.Y][Co当前点.X] ){
          Co刚才点 = Co当前点;
          continue;
        }/*if*/
      }/*if*/
       /*结束while*/
      if( Co刚才点.X == Co起始点.X ){/*没匹配到*/
        retu;
      }/*if*/
      if( Co刚才点.X > Co起始点.X ){/*X=线的右端*/
        ////*线的右端的坐标*/图片i.v3i线属性[图片][] = Co刚才点.X
        retu;
        /*坐标`标记为已读取*/
        for( size_t i = Co起始点.X; i < Co刚才点.X; i++ ){
          /*Co刚才点 一定是`有结果的*/
          图片i.v2i该点是否已识别线[Co刚才点.Y][Co刚才点.X] = 1;
        }/*for*/
      }/*if*/;
    }/*while*/;
  }/*auto*/;
  auto /*get整理图片所有颜色`get记录图片形状*/get图片所有线(/*输入输出*/图片info& 图片, /*输入*/int y下个点加几个像素, int x下个点加几个像素 ){
    /*遍历m的像素{ 读取颜色-->(if新的颜色-->记录颜色)-->if右边的颜色一样-->找线的右端-->途经像素标记为已识别};*/
    /*为什么需要两个坐标? v2i图片所有颜色 转换成`v2i线的属性*/
    COORD CoV2i图ζ入, CoV2i线ζ出
      , CoV2i单通道图颜色属性ζ入;
    int i灰度值 = 0;
    /*if 步进是一,就不需要两套坐标*/
    for( CoV2i图ζ入.Y = 0, CoV2i线ζ出.Y = 0; CoV2i图ζ入.Y < CoM尺寸ζ入.Y && CoV2i线ζ出.Y < CoM尺寸ζ出.Y; CoV2i图ζ入.Y += y下个点加几个像素, CoV2i线ζ出.Y += 1 ){/*行*/
      for( CoV2i图ζ入.X = 0, CoV2i线ζ出.X = 0; CoV2i图ζ入.X < CoM尺寸ζ入.X && CoV2i线ζ出.X < CoM尺寸ζ出.X; CoV2i图ζ入.X += x下个点加几个像素, CoV2i线ζ出.X += 1 ){/*列*/
        /*当前颜色*/i灰度值 = 图片.灰度图片除50i.v2i图片[CoV2i图ζ入.Y][CoV2i图ζ入.X];
        /*统计颜色数量*/图片.灰度图片除50i.v2i颜色属性[i灰度值][0]++;
        /// /*if v2i[灰度值][0]`像素数量*/if(图片.v2i单通道图颜色属性除50[i灰度值][0]==0/*第一次遇到这个颜色*/ ){}/*if*/
        /*和右边对比*/if( 图片.灰度图片除50i.v2i图片[CoV2i图ζ入.Y][CoV2i图ζ入.X] == 图片.灰度图片除50i.v2i图片[CoV2i图ζ入.Y][CoV2i图ζ入.X += x下个点加几个像素] ){
          /*这是一条线*/
        }/*if*/;
      }/*for*/;
    }/*for*/;
  }/*auto*/;
  auto get图片所有线(/*输入*/Mat& m, COORD Co起始点,/*输出*/新v2i& v2i ){

  }/*auto*/;
  auto get图片所有线(/*输入输出*/图片info& 图片/*输入*/ /*输出*/ ){
    COORD Co图片范围;
    //Co图片范围.Y=
  }/*auto*/;
  auto get任务栏所有线_2024年9月29日230211(/*输入输出*/图片info& 图片/*输入*/ /*输出*/ ){
    COORD Co图片范围;
    Co图片范围.Y = 2160, Co图片范围.X = 141;
    /*for(范围){v2i灰度图的前景色`看思维导图嘛}*/
    for( size_t 行序 = 0; 行序 < Co图片范围.Y; 行序++ ){
      for( size_t 列序 = 0; 列序 < Co图片范围.X; 列序++ ){
        //图片.灰度图片除50i.v2i图片();
      }/*for*/;
    }/*for*/;
  }/*auto*/;
  auto get任务栏所有线_2024年10月15日193901(/*输入输出*/图片info& 图片/*输入*/ /*输出*/ ){
    窗口info 任务栏1; get任务栏hwnd( 任务栏1 );
    COORD Co图片范围;
    Co图片范围.Y = 任务栏1.y窗口尺寸, Co图片范围.X = 任务栏1.x窗口尺寸;
    下标info 像素下标;
    for( 像素下标.一/*y*/ = 0; 像素下标.一 < Co图片范围.Y; 像素下标.一++ ){
      for( 像素下标.二/*x*/ = 0; 像素下标.二 < Co图片范围.X; 像素下标.二++ ){
        单通道6色图片.灰度图片除50i.v2i图片[像素下标.一][像素下标.二];
      }/*for*/;
    }/*for*/;
  }/*auto*/;
  /**/;//测试`图片识别
  auto 根据坐标c线属性( ){

  }/*auto*/
   /**/ //▬附加功能▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬ ▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
        /*单通道<uchar>*/
  auto c一个通道的值_uchar( Mat& m, int y, int x ){
    f记录 = m.at<uchar>( Point( x, y ) );
    /*rgb-->int-->s*/ //m的颜色, 数字又转换为颜色,变成名称
    coutsf2( "第{}行`第{}列=", y, x );
    couta1( "{ " );
    couta2( f记录, " }\n" );
  }/*template auto*/
  auto c对角线的一个通道的值_uchar(/*输入*/Mat& m, int x下个点是加几个像素 ){
    /*输入`记录图片信息*/
    CoM尺寸ζ入.Y = m.rows; CoM尺寸ζ入.X = m.cols;
    size_t y = 0;/*行*/
    for( size_t x = 0; x < CoM尺寸ζ入.X; x += x下个点是加几个像素 ){
      y = x;
      if( y < CoM尺寸ζ入.Y ){
        c一个通道的值_uchar( m, y, x );
      }/*if*/
    }/*for*/
  }/*template auto*/
  auto c所有点的一个通道的值_uchar(/*输入*/Mat& m, int y下个点是加几个像素, int x下个点是加几个像素 ){
    CoM尺寸ζ入.Y = m.rows; CoM尺寸ζ入.X = m.cols;
    for( size_t y = 0; y < CoM尺寸ζ入.Y; y += y下个点是加几个像素 ){/*行*/
      for( size_t x = 0; x < CoM尺寸ζ入.X; x += x下个点是加几个像素 ){
        c一个通道的值_uchar( m, y, x );
      }/*for*/
    }/*for*/
  }/*auto*/
   /*多通道<vec4b>*/
  template<typename at类型>
  auto c第0通道( Mat& m, int y, int x ){
    f记录 = m.at<at类型>( Point( x, y ) )[0];
    /*rgb-->int-->s*/ //m的颜色, 数字又转换为颜色,变成名称
    coutsf2( "第{}行`第{}列=", y, x );
    couta1( "{ " );
    couta2( f记录, " }\n" );
  }/*template auto*/
  template<typename at类型>
  auto c第1通道( Mat& m, int y, int x ){
    f记录 = m.at<at类型>( Point( x, y ) )[1];
    /*rgb-->int-->s*/ //m的颜色, 数字又转换为颜色,变成名称
    coutsf2( "第{}行`第{}列=", y, x );
    couta1( "{ " );
    couta2( f记录, " }\n" );
  }/*template auto*/
  template<typename at类型>
  auto c第2通道( Mat& m, int y, int x ){
    f记录 = m.at<at类型>( Point( x, y ) )[2];
    /*rgb-->int-->s*/ //m的颜色, 数字又转换为颜色,变成名称
    coutsf2( "第{}行`第{}列=", y, x );
    couta1( "{ " );
    couta2( f记录, " }\n" );
  }/*template auto*/
  template<typename at类型>
  auto c一个通道的值( Mat& m, int i第几个通道, int y, int x ){
    switch( i第几个通道 ){
    default:
      break;
    case(0):
      c第0通道<at类型>( m, y, x );
      break;
    case(1):
      c第1通道<at类型>( m, y, x );
      break;
    case(2):
      c第2通道<at类型>( m, y, x );
      break;
    }/*switch*/
  }/*template auto*/
   /*左上角到`右下角*/
  template<typename at类型>
  auto c对角线的一个通道的值(/*输入*/Mat& m, int i第几个通道, int x下个点是加几个像素 ){
    /*输入`记录图片信息*/
    CoM尺寸ζ入.Y = m.rows; CoM尺寸ζ入.X = m.cols;
    size_t y = 0;/*行*/
    for( size_t x = 0; x < CoM尺寸ζ入.X; x += x下个点是加几个像素 ){
      y = x;
      if( y < CoM尺寸ζ入.Y ){
        c一个通道的值<at类型>( m, i第几个通道, y, x );
      }/*if*/
    }/*for*/
  }/*template auto*/
  template<typename at类型>
  auto c所有点的一个通道的值(/*输入*/Mat& m, int i第几个通道, int y下个点是加几个像素, int x下个点是加几个像素 ){
    CoM尺寸ζ入.Y = m.rows; CoM尺寸ζ入.X = m.cols;
    for( size_t y = 0; y < CoM尺寸ζ入.Y; y += y下个点是加几个像素 ){/*行*/
      for( size_t x = 0; x < CoM尺寸ζ入.X; x += x下个点是加几个像素 ){
        c一个通道的值<at类型>( m, i第几个通道, y, x );
      }/*for*/
    }/*for*/
  }/*template auto*/
   /*用v2i*/
   ///template<typename at类型>
   ///auto c对角线的一个通道的值(/*输入*/Mat& m, 新v2i& v2i256色图, int x下个点是加几个像素) {
   ///	/*输入`记录图片信息*/
   ///	CoM尺寸ζ入.Y = m.rows; CoM尺寸ζ入.X = m.cols;
   ///	size_t y = 0;/*行*/
   ///	for (size_t x = 0; x < CoM尺寸ζ入.X; x += x下个点是加几个像素) {
   ///		y = x;
   ///		if (y < CoM尺寸ζ入.Y) {
   ///			cRgb<at类型>(v2i256色图, y, x);
   ///		}/*if*/
   ///	}/*for*/
   ///}/*template auto*/
   ///template<typename at类型>
   ///auto c所有点的一个通道的值(Mat& m, int y下个点是加几个像素, int x下个点是加几个像素) {
   ///	CoM尺寸ζ入.Y = m.rows; CoM尺寸ζ入.X = m.cols;
   ///	for (size_t y = 0; y < CoM尺寸ζ入.Y; y += y下个点是加几个像素) {/*行*/
   ///		for (size_t x = 0; x < CoM尺寸ζ入.X; x += x下个点是加几个像素) {
   ///			cRgb<at类型>(m, y, x);
   ///		}/*for*/
   ///	}/*for*/
   ///}/*template auto*/

   /*坐标边界检测 {x两种情况,y一种情况}*/
  int v2坐标边界检测(/*输入*/int& y, int& x, COORD CoV的尺寸 ){
    if( x < (CoV的尺寸.X - 1) ){/*x在范围内*/
      retu 1;/*可以向右, 这个`没改, 下面那个是`向右移动了*/
    } else{/*x>=范围*/
      if( y < CoV的尺寸.Y - 1 ){/*y没有到底*/
        retu 2;/*需要向下*/
      } else{
        /*坐标完了*/
        retu 0;/*读取完了*/
      }/*else*/
    }/*else*/
  }/*int*/
  int get下一个点(/*输入输出*/int& y, int& x, COORD CoV的尺寸 ){
    if( x < CoV的尺寸.X - 1 ){/*x在范围内*/
      x++;
      retu 1;/*改了*/
    } else{/*x>=范围*/
      if( y < CoV的尺寸.Y - 1 ){/*y没有到底*/
        y++; x = 0;
        retu 2;/*换行*/
      } else{/*y是最下面一行*/
        /*坐标完了*/retu 0;/*没有改*/
      }/*else*/
    }/*else*/
  }/*int*/;
  int get下一个点的坐标(/*输入输出*/COORD Co点坐标,/*输入*/COORD CoV的尺寸 ){
    if( Co点坐标.X < CoV的尺寸.X - 1 ){/*x在范围内*/
      Co点坐标.X++;
      retu 1;/*改了*/
    } else{/*x>=范围*/
      if( Co点坐标.Y < CoV的尺寸.Y - 1 ){/*y没有到底*/
        Co点坐标.Y++; Co点坐标.X = 0;
        retu 2;/*这行`到最右边*/
      } else{/*y是最下面一行*/
        /*坐标完了*/retu 0;/*没有改*/
      }/*else*/
    }/*else*/
  }/*int*/;
  int get右边的点的坐标(/*输入输出*/COORD Co点坐标,/*输入*/COORD CoV的尺寸 ){
    if( Co点坐标.X < CoV的尺寸.X - 1 ){/*x在范围内*/
      Co点坐标.X++;
      retu 1;/*改了*/
    } else{/*x>=范围*/
      if( Co点坐标.Y < CoV的尺寸.Y - 1 ){/*y没有到底*/
        retu 2;/*这行`到最右边*/
      } else{/*y是最下面一行*/
        /*坐标完了*/retu 0;/*没有改*/
      }/*else*/
    }/*else*/
  }/*int*/;

  void get任务栏hwnd( 窗口info& 窗口1 /*HWND &hwnd*/ ){
    /*getHwnd*/
    窗口1.className = (LPTSTR)"Shell_trayWnd";
    窗口1.windowName = (LPTSTR)"";
    idkb.get用className得窗口infoTHENc( 窗口1 );
  }/*void*/;
  /*switch( 除数 ){ v2i.assign }, v2i不同*/
  void switchV2i灰度图片除几的assign( 图片info& 图片,/*输入*/Mat& M, int y下个点加几个像素, int x下个点加几个像素, int 除数 ){
    switch( 除数 ){
    default:break;
    case(50): 图片.灰度图片除50i.v2i图片.assign( M.rows / y下个点加几个像素, 新vi( M.cols / x下个点加几个像素, 0 ) );			break;
    case(1): 图片.灰度图片i.v2i图片.assign( M.rows / y下个点加几个像素, 新vi( M.cols / x下个点加几个像素, 0 ) );			break;
    case(5): 图片.灰度图片除5i.v2i图片.assign( M.rows / y下个点加几个像素, 新vi( M.cols / x下个点加几个像素, 0 ) );			break;
    case(15): 图片.灰度图片除15i.v2i图片.assign( M.rows / y下个点加几个像素, 新vi( M.cols / x下个点加几个像素, 0 ) );			break;
    }/*switch*/;
  }/*void*/;
  /**/;//▬例子▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
  void 例子_截图转换v2i( ){
    int 图片类型, 图片类型2; int 色除 = 1;
    Mat M1, M灰;
    jxtu.get截图( M1, 图片类型/*, 10000*/ );
    /*转换>`单通道图片*/cv::cvtColor( M1, M灰, cv::COLOR_BGR2GRAY );
    getMatUcharTV2除( M灰, 1, 1, 色除, 单通道6色图片.灰度图片除50i.v2i图片 );
    getV2TMatUchar除( 单通道6色图片.灰度图片除50i.v2i图片, 1, 1, 色除, 1, M灰 );
  }/*void*/;
  void 例子_for所有像素( ){
    下标info 像素下标;
    for( 像素下标.一/*y*/ = 0; 像素下标.一 < 0; 像素下标.一++ ){
      for( 像素下标.二/*x*/ = 0; 像素下标.二 < 0; 像素下标.二++ ){
        单通道6色图片.灰度图片除50i.v2i图片[像素下标.一][像素下标.二];
      }/*for*/;
    }/*for*/;
  }/*void*/;
}/*struct*/;
#undef defV2灰
#endif