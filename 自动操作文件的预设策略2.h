#pragma once
#ifndef 自动操作文件的预设策略2_H 
#define 自动操作文件的预设策略2_H
using namespace std;
  void 复制path1内某类文件TOPath2_单exe_99个子层(/*!输入*/cmd窗口界面不用文件vsInfo& cmd窗界i, string 斜杠, string s后缀, string path1, string path2, int 初始最大子层数, int 最大子path下标_if子path下标超过Z退出此文件夹, int 是否粘贴到同一个文件夹, int 是否if子path是文件夹/*!输出*/ ){
    cout1("复制path1内某类文件TOPath2_单exe");coutEnd;
    path内文件属性info p文i;
    //全局{ 2个文件夹名; 访p历记i.vs记录path; }
    //输入{ 父path=vs记录path[父path的下标]; vs子path; }
    //运行时{ vs子path的下标; }
    //输出{  p文i.属性; }
    //-->vs记录path.pushb(父path)-->getPathTO文件属性(path)-->
    //for( vs子path的下标<vs子path ){
    //  if( 是否子层没有文件夹 ){ break=for完; }/if/
    //  if( 是否子path=文件夹 ){
    //    if( 排除词 ){...};
    //    是-->{ 是否要进入1层子层=1;/!循环/(输入{ path=此`子path, };输出{};)-->vs记录path.pushb(父path)-->getPathTO文件属性(path)-->for(vs子path){ if是否是文件夹{ 是否要进入1层子层=1;...} }; };
    //    否-->{ 继续for };}/if/;};
    //-->for完=是否要返回1层父层Z接着操作子层=1;if(是否`有之前的path){ 是-->/!循环/(输入{ path=之前的path, };输出{};) 否-->{ /!完/完; }; }/if/
    /*!全局{ */新i 退出时的大小 = 0;/* !}全局*/
    /*!全局{ */string 文件夹名 = "`文件属性`文件info`wfjmInfo", 旧版文件的文件夹名 = "`文件属性`文件info`wfjmInfo`旧版";/* !}全局*/
    /*!全局{ */int /*=8,这次最大层数限制*/最大子层数 = 初始最大子层数, 触发最大子层数变的子层数 = 100;/* !}全局*/
    /*!全局{ */int 最大子path下标 = 最大子path下标_if子path下标超过Z退出此文件夹;/* !}全局*/
    /*!全局{ */int 是否刚刚for完一个子层Z要返回1层父层 = 1, 是否要进入1层子层 = -1, 是否要返回1层父层从头操作子层 = 1, 是否要返回1层父层Z接着操作子层 = -1;/* !}全局*/
    /*!全局{ */访问path的历史记录info 访p历记i; 访p历记i.vs记录path[0] = (path1);/* !}全局*/
    /*!全局{ */p文i.运行时_正在操作第几层子path = 1;/* !}全局*/
    /*!输入{ */string 父path; int /*取出父path*/父path的下标 = 0;/* !}输入*/
    /*!输入{ *//*从头开始*/父path = 访p历记i.vs记录path[父path的下标];/* !}输入*/
    /*!输入{ *//*!或者*//*ret后继续`都是这种*/父path /*= 父的父层的`p文i.vs子path[].vs记录path[父path的下标]*/;/* !}输入*/
    /*!运行时{ *//* !}运行时*/
    /*!输出{ */p文i.第1层子目录i.vs子path; p文i.第1层子目录i.vs文件名; p文i.第1层子目录i.vi类型; p文i.第1层子目录i.vi修改时间; p文i.第1层子目录i.vi创建时间; p文i.第1层子目录i.vi大小; p文i.第1层子目录i.运行时_正在操作的子path的下标;/* !}输出*/
    /*!输出{ */新fst fst; int vs子path的下标/*for; 出来继续时`输入<子层[]>*/ = 0;/* !}输出*/
    /**///开始了,或者能移动lam
        /**///>新建文件14.cpp
    新s 父path变合适文件名; /**wfzi读取.getS删掉其中的一位s1( path, path中的斜杠, 父path变合适文件名 );*/wfzi读取.getS删掉其中的一位s1( path1, ":", 父path变合适文件名 );
    新s 根path = "C:"+斜杠+文件夹名+斜杠/*wfjm`info,wfjm`uuxy*/, s写入文件的完整path, 文件名 = "14.cpp";
    /*!lam{*/
    /* lam*//*没用*//*path斜杠替换成_变文件名*/auto lamGet文件名是path斜杠替换成_并非14点cpp/*14.cpp*/ = [&]( string path, string& 文件名 )->void{
      pathInfo pI( path );
      pI.getsAppendVs每部分( 斜杠, 文件名 );
      };/*lam*/
    /*2025年1月13日22:00:05:断点续传{
    连续意外停止=一次运行;if完整运行,应该删除文件吗? 因为只有读取了名太长的文件就会bufferTooSmall;

    }    */
    /*!lam*/auto lamVs写入文件_读取文件的记录/*14.cpp*/ = [&]( /*!输入*/int 正在操作第几层子path, string 父path, /*!输出*/子path内文件属性info& 上一层的子pathI, 子path内文件属性info& 子pathI )->void{
      string exe的父path = qmvi计算.retExe的父path( 斜杠 ), 文件名_读取文件的记录 = "duqu`wfjm`de`jilu.cxx";
      新fst fst; 从末尾读写( fst, exe的父path+文件名_读取文件的记录 ); fst<<"path{ "<</*要每个path都写一次,因为exe不知道这次会不会中断; 2025年1月13日22:44:30,可以算了*/"";
      fst.close( );
      };
    /*!lam*/auto lamVs记录pathPpushb父层A写入子层文件属性Afor子层/*14.cpp*/ = [&]( /*!输入*/int 正在操作第几层子path, string 父path, /*!输出*/子path内文件属性info& 上一层的子pathI, 子path内文件属性info& 子pathI )->void{
      //retu 下一次循环( 输入{ 父=父的子 } );
      /*!lam*/auto lam是否要进入1层子层 = [&]( )->void{
        /*!运行时{ */子pathI.vi运行时_是否操作了这个下标的子path[vs子path的下标] = 1;/*! }运行时*/
        /*输出{ */是否要进入1层子层 = 1;/*进入之后,本层是已有数据的*/子pathI.是否有数据 = 1;/* }输出*/
        /*输出{ */子pathI.运行时_正在操作的子path的下标 = vs子path的下标;/* }输出*/
        /*!全局{ */p文i.运行时_正在操作第几层子path = 正在操作第几层子path+1;/*! }全局*////if( p文i.运行时_正在操作第几层子path!=(父path的下标+1)/*父=0->子=1*/ ){ set颜色( 6 ); cout1( "正在操作第几层子path!=(父path的下标+1)" ); set颜色( 7 ); coutEndl; }/*if*/
        /*!全局{ */父path的下标 = 正在操作第几层子path; 访p历记i.vs记录path[父path的下标] = 子pathI.vs子path[子pathI.运行时_正在操作的子path的下标];/* !}全局*/
        ///cout1( "是否要进入1层子层=1" ); set颜色( 6 ); cout4( ", 运行时_正在操作第几层子path=", 父path的下标+1, ", 运行时_正在操作的子path的下标=", vs子path的下标 ); set颜色( 7 ); cout2( ", 子path=", 子pathI.vs子path[子pathI.运行时_正在操作的子path的下标] ); coutEnd;
        //>新增的行为
        };/*lam*/
      //retu 输入{ 父=父的父 },下一次循环;
      /*!lam*/auto lam是否要返回1层父层Z接着操作子层 = [&]( )->void{
        /*运行时{ */子pathI.vi运行时_是否操作了这个下标的子path = {};/*! }运行时*/
        /*输出{ */是否要返回1层父层Z接着操作子层 = 1;/*返回之后,本层是需要新数据的*/子pathI.是否有数据 = 0;/* }输出*/
        /*!不再写入文件{ *//**从头覆盖写入( fst, s写入文件的完整path ); 写入Path内文件属性_中文等于大括号_去掉TimeAccess( fst, 父path, 子pathI ); fst.close( );*//*! }不再写入文件*/
        /*可验证一下是不是文件夹*/if( wfzi读取.是否s1最后是s2( 上一层的子pathI.vs文件名[上一层的子pathI.运行时_正在操作的子path的下标], 斜杠 ) ){
          /*是文件夹*/上一层的子pathI.vi大小[上一层的子pathI.运行时_正在操作的子path的下标] += 子pathI.本层总文件大小_含子层;
        } else{
          set颜色( 100 ); cout1( "你妈了个逼的外面居然不是文件夹\n" ); set颜色( cmd窗界i.默认背景色 );
        }/*else*/
        /*输出{ *//*存档`子path的下标*/子pathI.运行时_正在操作的子path的下标 = 0;/* }输出*/
        /*全局{ */p文i.运行时_正在操作第几层子path = 正在操作第几层子path-1;/* !}全局*////if( p文i.运行时_正在操作第几层子path!=(父path的下标)/*父=0->子=1*/ ){ set颜色( 6 ); cout1( "正在操作第几层子path!=(父path的下标)" ); set颜色( 7 ); coutEndl; }/*if*/
        /*全局{ */父path的下标 = 正在操作第几层子path-2;/* !}全局*/
        ///cout1( "是否要返回1层父层Z接着操作子层=1" ); set颜色( 6 ); cout4( ", 运行时_正在操作第几层子path=", 父path的下标, ", 运行时_正在操作的子path的下标=", vs子path的下标 ); set颜色( 7 ); coutEnd;
        //>新增的行为
        };/*lam*/
      /*!全局{ *//* !}全局*/
      /*!全局{ *//*父=子-1*/父path的下标 = 正在操作第几层子path-1; 访p历记i.vs记录path[父path的下标] = 父path;/* !}全局*/
      cout8( "全局{ ", ", 运行时_正在操作第几层子path=", 父path的下标, ", 运行时_正在操作的子path的下标=", vs子path的下标, ", 父path=", 父path, " }; " ); coutEndl;
      /*!输出{ */p文i.第1层子目录i.vs子path; p文i.第1层子目录i.vs文件名; p文i.第1层子目录i.vi类型; p文i.第1层子目录i.vi修改时间; p文i.第1层子目录i.vi创建时间; p文i.第1层子目录i.vi大小; p文i.第1层子目录i.运行时_正在操作的子path的下标;/* !}输出*/
      //>get属性,去重复
      if( 子pathI.是否有数据!=1/*没数据-->get数据-->新建A写入*/ ){/*这些行只进行一次*/
        子pathI.getPathTO文件属性( 父path, 斜杠 );
        /*新建文件*/wfzi读取.getS删掉其中的一位s1( 父path, ":", 父path变合适文件名 ); wfjm读写.封装的新建文件( 根path+父path变合适文件名, 斜杠+文件名, 斜杠 );
        s写入文件的完整path = 根path+父path变合适文件名+ 斜杠+文件名;
        /*TO文件*/从头覆盖写入( fst, s写入文件的完整path ); 写入Path内文件属性_中文等于大括号_去掉TimeAccess( fst, 父path, 子pathI ); fst.close( );
      }/*if*/
       //*/*outOfR-->再回1层*/if( 子pathI.运行时_正在操作的子path的下标>=子pathI.vs文件名.size( ) ){ /*再回1层*/p文i.运行时_正在操作第几层子path--; 子pathI.是否有数据 = 0; }/*if*/
      if( /*没有outOfR-->for*/子pathI.运行时_正在操作的子path的下标<子pathI.vs文件名.size( ) ){
        /*!没有子文件夹也`应该for*///*if( 子pathI.文件夹数量==0 ){/*没有子文件夹,到外1层*/}/*if*/
        //*if( 子pathI.文件夹数量>0 ){/*有子文件夹,到内1层=到子文件夹里*/}/*if*/
          ///cout4( "文件夹数量>0,文件夹数量=", 子pathI.文件夹数量, "; for子层, 第几层=", 正在操作第几层子path ); coutEnd;
          /*lam*///>文件夹数量>0-->开新for; for第<父path的下标>层path的子path; 父层完,for子层;
        if( 子pathI.运行时_正在操作的子path的下标<0 ){ set颜色( 6 ); cout1( "下标<0" ); set颜色( 7 ); coutEndl; }
        if( 子pathI.运行时_正在操作的子path的下标>子pathI.vs文件名.size( ) ){ set颜色( 6 ); cout1( "下标>.size( )" ); set颜色( 7 ); coutEndl; }
        /*新for*/
        //*for( vs子path的下标 = 子pathI.运行时_正在操作的子path的下标; (vs子path的下标< 子pathI.vs文件名.size( ) ) and (vs子path的下标<=最大子path下标); vs子path的下标++ ){
        for( vs子path的下标 = 子pathI.运行时_正在操作的子path的下标; vs子path的下标< 子pathI.vs文件名.size( ); vs子path的下标++ ){
          if( 子pathI.vi运行时_是否操作了这个下标的子path[vs子path的下标] ){
            continu;
          }/*if*/
            //>复制文件还得放在这里,因为父path不是文件
          if( wfzi读取.是否s1最后是s2( 子pathI.vs文件名[vs子path的下标], s后缀 ) ){
            //>复制文件
            新s 要复制的文件的path = 子pathI.vs子path[vs子path的下标];
            if( 是否粘贴到同一个文件夹 ){
              xcopyKYE复制粘贴path1TPath2( 要复制的文件的path, path2 );
            } else{//粘贴到path2+path1
              /*新建文件*/wfzi读取.getS删掉其中的一位s1( 要复制的文件的path, ":", 父path变合适文件名 );
              wfzi读取.确保s1最后一位是s2( path2, 斜杠 ); wfjm读写.封装的新建文件( path2+父path变合适文件名, 斜杠+文件名, 斜杠 );
              s写入文件的完整path = path2+父path变合适文件名+ 斜杠+文件名;
              xcopyKYE复制粘贴path1TPath2( 要复制的文件的path, s写入文件的完整path );
            }/*else*/
          }/*if*/
          ///set颜色( 6 ); cout1( "for里运行了几次=vs子path的下标=" ); cout1( vs子path的下标 ); coutEnd; set颜色( 7 );
          /*?2025年1月10日04:41:08,我猜是写了这句之后出. 还真是*///>if( 子pathI.vi是否下标是文件夹[vs子path的下标] ){
          if( 是否if子path是文件夹/*是否if深层子文件夹( if-->进入 )*/ ){
            if( 子pathI.vi类型[vs子path的下标]==16/*文件夹*/or 子pathI.vi类型[vs子path的下标]==17/*百度同步盘/ Users*/
              or 子pathI.vi类型[vs子path的下标]==22/*$RECYCLE.BIN/ Config.Msi*/
              or 子pathI.vi类型[vs子path的下标]==18/*$WinREAgent*/
              or 子pathI.vi类型[vs子path的下标]==34/*$WINRE_BACKUP_PARTITION.MARKER/ .GamingRoot*/
              ){
              /*!排除词*//*,不进入一些文件夹*/
              if( wfzi读取.ifS1等于vs的某个元素( 子pathI.vs文件名[vs子path的下标], 子pathI.vs排除词 ) ){
                /*跳过*/continu;
              }/*if*/
               /*?循环,卡死在C:\old\Windows*/
               //*if( wfzi读取.ifS1等于vs的某个元素( 子pathI.vs文件名[vs子path的下标], 子pathI.vs排除词_最大子层数变2 ) ){
               //*  最大子层数 = 2; 触发最大子层数变的子层数 = 正在操作第几层子path;
               //*  /*进入*/
               //*}/*if*/
              lam是否要进入1层子层( ); retu;
            }/*if*/
          }/*if*/
        }/*!for*/
      }/*if*/
      lam是否要返回1层父层Z接着操作子层( ); retu;
      };/*lam*/
    /* !}lam*/
    //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 1, path1, p文i.第0层子目录i, p文i.第1层子目录i );
    int 第几次while = 1, 第几次while的数字的位数 = 0;
    while( true ){
      //?12000后退出到主菜单了,2025年1月10日03:40:44
      //?2025年1月10日04:52:01,一直写`C:\`文件属性`文件info`wfjmInfo\C\Program Files (x86)\Android\android-sdk\platforms\android-34\data\res \
      好了; 我猜是一直进目录`不创建文件;应该是`每次都get一遍,导致耗时; <循环(7-->switch不能8-->7->get文件i)>应改成<(7->新建文件夹->switch不能8->7->不get文件i)>
      set颜色( 6 );
      if( 第几次while>9999 ){
        /*?很慢*/数4分i.cout数字( 第几次while );
      } else{
        cout1( 第几次while );
      }/*else*/
      set颜色( 7 );/// 第几次while的数字的位数 = qmvi计算_不使用前置变量.ret数字位数( 第几次while ); qmviCout.cS( "/", cmd窗界i.cmd窗i.窗口大小_字数x-第几次while的数字的位数 ); 
      coutEnd;
      第几次while++;
      //*if( 是否要返回1层父层从头操作子层 ){/*bucpzlde*/ 是否要返回1层父层从头操作子层 = 2;}/*if*/
      /*是否要进入1层子层{ 不更改 }
      *是否要返回1层父层Z接着操作子层{
      本层.本层总文件大小_含子层=上一层.vi大小[上一层.运行时_正在操作的子path的下标];
      }
      */
      if( 是否要进入1层子层 or 是否要返回1层父层Z接着操作子层 ){
        是否要返回1层父层Z接着操作子层 = 2;
        是否要进入1层子层 = 2;
        if( 触发最大子层数变的子层数 <= p文i.运行时_正在操作第几层子path/*回来/出来了*/ ){
          最大子层数 = 初始最大子层数/*一轮*/;
        }/*if*/
         /*todo*/
        if( 最大子层数==2 ){
          switch( /*!子层*/p文i.运行时_正在操作第几层子path ){
          default:
            ///cout1( "是否要进入1层子层: default" ); coutEnd;
            retu; break;
          case(-1):cout1( "是否要返回1层父层Z接着操作子层:第-1层子层" ); coutEnd; retu; break;
          case(0):cout1( "是否要返回1层父层Z接着操作子层:第0层子层" ); coutEnd; retu; break;
          case(1):lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 1, 访p历记i.vs记录path[0], p文i.第0层子目录i, p文i.第1层子目录i ); break;
          case(2):lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 2, 访p历记i.vs记录path[1], p文i.第1层子目录i, p文i.第2层子目录i ); break;
          case(3):
            /*?算了,懒得*////父path=p文i.第2层子目录i.vs子path[p文i.第2层子目录i.运行时_正在操作的子path的下标];/*新建文件*/wfzi读取.getS删掉其中的一位s1( 父path, ":", 父path变合适文件名 ); wfjm读写.封装的新建文件( 根path+父path变合适文件名, 斜杠+文件名, 斜杠 );
            /*回1层*/p文i.运行时_正在操作第几层子path = 2; p文i.第2层子目录i.运行时_正在操作的子path的下标++; break;
          case(4):/*回1层*/p文i.运行时_正在操作第几层子path = 3; p文i.第3层子目录i.运行时_正在操作的子path的下标++; break;
          case(5):/*回1层*/p文i.运行时_正在操作第几层子path = 4; p文i.第4层子目录i.运行时_正在操作的子path的下标++; break;
          case(6):/*回1层*/p文i.运行时_正在操作第几层子path = 5; p文i.第5层子目录i.运行时_正在操作的子path的下标++; break;
          case(7):/*回1层*/p文i.运行时_正在操作第几层子path = 6; p文i.第6层子目录i.运行时_正在操作的子path的下标++; break;
          case(8):/*回1层*/p文i.运行时_正在操作第几层子path = 7; p文i.第7层子目录i.运行时_正在操作的子path的下标++; break;
          case(9):/*回1层*/p文i.运行时_正在操作第几层子path = 8; p文i.第8层子目录i.运行时_正在操作的子path的下标++; break;
          }/*switch*/
          continu;
        }/*if*/
        if( 最大子层数==8 ){
          switch( /*!子层*/p文i.运行时_正在操作第几层子path ){
          default:
            ///cout1( "是否要进入1层子层: default" ); coutEnd;
            retu; break;
          case(-1):cout1( "是否要返回1层父层Z接着操作子层:第-1层子层" ); coutEnd; retu; break;
          case(0):cout1( "是否要返回1层父层Z接着操作子层:第0层子层" ); coutEnd; retu; break;
          case(1):lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 1, 访p历记i.vs记录path[0], p文i.第0层子目录i, p文i.第1层子目录i ); break;
          case(2):lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 2, 访p历记i.vs记录path[1], p文i.第1层子目录i, p文i.第2层子目录i ); break;
          case(3):lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 3, 访p历记i.vs记录path[2], p文i.第2层子目录i, p文i.第3层子目录i ); break;
          case(4):lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 4, 访p历记i.vs记录path[3], p文i.第3层子目录i, p文i.第4层子目录i ); break;
          case(5):lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 5, 访p历记i.vs记录path[4], p文i.第4层子目录i, p文i.第5层子目录i ); break;
          case(6):lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 6, 访p历记i.vs记录path[5], p文i.第5层子目录i, p文i.第6层子目录i ); break;
          case(7):lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 7, 访p历记i.vs记录path[6], p文i.第6层子目录i, p文i.第7层子目录i ); break;
          case(8):lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 8, 访p历记i.vs记录path[7], p文i.第7层子目录i, p文i.第8层子目录i ); break;
          case(9):/*回1层*/p文i.运行时_正在操作第几层子path = 8; p文i.第8层子目录i.运行时_正在操作的子path的下标++; break;
          }/*switch*/
          continu;
        }/*if*/
        if( 最大子层数>8 and 最大子层数<=18 ){
          switch( /*!子层*/p文i.运行时_正在操作第几层子path ){
          default:
            ///cout1( "是否要进入1层子层: default" ); coutEnd;
            retu; break;
          case(-1):cout1( "是否要返回1层父层Z接着操作子层:第-1层子层" ); coutEnd; retu; break;
          case(0):cout1( "是否要返回1层父层Z接着操作子层:第0层子层" ); coutEnd; retu; break;
          case(1):lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 1, 访p历记i.vs记录path[0], p文i.第0层子目录i, p文i.第1层子目录i ); break;
          case(2):lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 2, 访p历记i.vs记录path[1], p文i.第1层子目录i, p文i.第2层子目录i ); break;
          case(3):lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 3, 访p历记i.vs记录path[2], p文i.第2层子目录i, p文i.第3层子目录i ); break;
          case(4):lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 4, 访p历记i.vs记录path[3], p文i.第3层子目录i, p文i.第4层子目录i ); break;
          case(5):lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 5, 访p历记i.vs记录path[4], p文i.第4层子目录i, p文i.第5层子目录i ); break;
          case(6):lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 6, 访p历记i.vs记录path[5], p文i.第5层子目录i, p文i.第6层子目录i ); break;
          case(7):lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 7, 访p历记i.vs记录path[6], p文i.第6层子目录i, p文i.第7层子目录i ); break;
          case(8):lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 8, 访p历记i.vs记录path[7], p文i.第7层子目录i, p文i.第8层子目录i ); break;
          case(9):lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 9, 访p历记i.vs记录path[8], p文i.第8层子目录i, p文i.第9层子目录i ); break;
          case(10):lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 10, 访p历记i.vs记录path[9], p文i.第9层子目录i, p文i.第10层子目录i ); break;
          case(11):lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 11, 访p历记i.vs记录path[10], p文i.第10层子目录i, p文i.第11层子目录i ); break;
          case(12):lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 12, 访p历记i.vs记录path[11], p文i.第11层子目录i, p文i.第12层子目录i ); break;
          case(13):lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 13, 访p历记i.vs记录path[12], p文i.第12层子目录i, p文i.第13层子目录i ); break;
          case(14):lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 14, 访p历记i.vs记录path[13], p文i.第13层子目录i, p文i.第14层子目录i ); break;
          case(15):lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 15, 访p历记i.vs记录path[14], p文i.第14层子目录i, p文i.第15层子目录i ); break;
          case(16):lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 16, 访p历记i.vs记录path[15], p文i.第15层子目录i, p文i.第16层子目录i ); break;
          case(17):lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 17, 访p历记i.vs记录path[16], p文i.第16层子目录i, p文i.第17层子目录i ); break;
          case(18):lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 18, 访p历记i.vs记录path[17], p文i.第17层子目录i, p文i.第18层子目录i ); break;
          case(19):/*回1层*/p文i.运行时_正在操作第几层子path = 18; p文i.第18层子目录i.运行时_正在操作的子path的下标++; break;
          case(20):/*回1层*/p文i.运行时_正在操作第几层子path = 19; p文i.第19层子目录i.运行时_正在操作的子path的下标++; break;
          }/*switch*/
          continu;
        }/*if*/
        if( 最大子层数==33 ){
          switch( /*!子层*/p文i.运行时_正在操作第几层子path ){
          default:
            ///cout1( "是否要进入1层子层: default" ); coutEnd;
            retu; break;
          case(-1):cout1( "是否要返回1层父层Z接着操作子层:第-1层子层" ); coutEnd; retu; break;
          case(0):cout1( "是否要返回1层父层Z接着操作子层:第0层子层" ); coutEnd; retu; break;
          case(1):lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 1, 访p历记i.vs记录path[0], p文i.第0层子目录i, p文i.第1层子目录i ); break;
          case(2):lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 2, 访p历记i.vs记录path[1], p文i.第1层子目录i, p文i.第2层子目录i ); break;
          case(3):lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 3, 访p历记i.vs记录path[2], p文i.第2层子目录i, p文i.第3层子目录i ); break;
          case(4):lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 4, 访p历记i.vs记录path[3], p文i.第3层子目录i, p文i.第4层子目录i ); break;
          case(5):lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 5, 访p历记i.vs记录path[4], p文i.第4层子目录i, p文i.第5层子目录i ); break;
          case(6):lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 6, 访p历记i.vs记录path[5], p文i.第5层子目录i, p文i.第6层子目录i ); break;
          case(7):lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 7, 访p历记i.vs记录path[6], p文i.第6层子目录i, p文i.第7层子目录i ); break;
          case(8):lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 8, 访p历记i.vs记录path[7], p文i.第7层子目录i, p文i.第8层子目录i ); break;
          case(9):lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 9, 访p历记i.vs记录path[8], p文i.第8层子目录i, p文i.第9层子目录i ); break;
          case(10):lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 10, 访p历记i.vs记录path[9], p文i.第9层子目录i, p文i.第10层子目录i ); break;
          case(11):lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 11, 访p历记i.vs记录path[10], p文i.第10层子目录i, p文i.第11层子目录i ); break;
          case(12):lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 12, 访p历记i.vs记录path[11], p文i.第11层子目录i, p文i.第12层子目录i ); break;
          case(13):lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 13, 访p历记i.vs记录path[12], p文i.第12层子目录i, p文i.第13层子目录i ); break;
          case(14):lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 14, 访p历记i.vs记录path[13], p文i.第13层子目录i, p文i.第14层子目录i ); break;
          case(15):lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 15, 访p历记i.vs记录path[14], p文i.第14层子目录i, p文i.第15层子目录i ); break;
          case(16):lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 16, 访p历记i.vs记录path[15], p文i.第15层子目录i, p文i.第16层子目录i ); break;
          case(17):lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 17, 访p历记i.vs记录path[16], p文i.第16层子目录i, p文i.第17层子目录i ); break;
          case(18):lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 18, 访p历记i.vs记录path[17], p文i.第17层子目录i, p文i.第18层子目录i ); break;
          case(19):lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 19, 访p历记i.vs记录path[18], p文i.第18层子目录i, p文i.第19层子目录i ); break;
          case(20):lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 20, 访p历记i.vs记录path[19], p文i.第19层子目录i, p文i.第20层子目录i ); break;
          case(21):lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 21, 访p历记i.vs记录path[20], p文i.第20层子目录i, p文i.第21层子目录i ); break;
          case(22):lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 22, 访p历记i.vs记录path[21], p文i.第21层子目录i, p文i.第22层子目录i ); break;
          case(23):lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 23, 访p历记i.vs记录path[22], p文i.第22层子目录i, p文i.第23层子目录i ); break;
          case(24):lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 24, 访p历记i.vs记录path[23], p文i.第23层子目录i, p文i.第24层子目录i ); break;
          case(25):lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 25, 访p历记i.vs记录path[24], p文i.第24层子目录i, p文i.第25层子目录i ); break;
          case(26):lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 26, 访p历记i.vs记录path[25], p文i.第25层子目录i, p文i.第26层子目录i ); break;
          case(27):lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 27, 访p历记i.vs记录path[26], p文i.第26层子目录i, p文i.第27层子目录i ); break;
          case(28):lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 28, 访p历记i.vs记录path[27], p文i.第27层子目录i, p文i.第28层子目录i ); break;
          case(29):lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 29, 访p历记i.vs记录path[28], p文i.第28层子目录i, p文i.第29层子目录i ); break;
          case(30):lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 30, 访p历记i.vs记录path[29], p文i.第29层子目录i, p文i.第30层子目录i ); break;
          case(31):lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 31, 访p历记i.vs记录path[30], p文i.第30层子目录i, p文i.第31层子目录i ); break;
          case(32):lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 32, 访p历记i.vs记录path[31], p文i.第31层子目录i, p文i.第32层子目录i ); break;
          case(33):lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 33, 访p历记i.vs记录path[32], p文i.第32层子目录i, p文i.第33层子目录i ); break;
          case(34):/*回1层*/p文i.运行时_正在操作第几层子path = 33; p文i.第33层子目录i.运行时_正在操作的子path的下标++; break;
          case(35):/*回1层*/p文i.运行时_正在操作第几层子path = 34; p文i.第34层子目录i.运行时_正在操作的子path的下标++; break;
          }/*switch*/
          continu;
        }/*if*/
        int 当前子层 = p文i.运行时_正在操作第几层子path;
        if( 最大子层数>-2 ){
          switch( /*!第几子层,从1*/当前子层 ){
          default:
            ///cout1( "是否要进入1层子层: default" ); coutEnd;
            retu; break;
          case(-1):cout1( "是否要返回1层父层Z接着操作子层:第-1层子层" ); coutEnd; retu; break;
          case(0):cout1( "是否要返回1层父层Z接着操作子层:第0层子层" ); coutEnd; retu; break;
            ///case(1):lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 1, 访p历记i.vs记录path[0], p文i.第0层子目录i, p文i.第1层子目录i ); break;
            ///case(2):if( 最大子层数>=2 ){ lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 2, 访p历记i.vs记录path[1], p文i.第1层子目录i, p文i.第2层子目录i ); } else{ 当前子层 = 1; p文i.第1层子目录i.运行时_正在操作的子path的下标++;}/*esle*/ break; 
          ///case(0):if( 最大子层数>=0 ){ lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 0, 访p历记i.vs记录path[18446744073709551615], p文i.第18446744073709551615层子目录i, p文i.第0层子目录i ); } else{ 当前子层 = 18446744073709551615; p文i.第18446744073709551615层子目录i.运行时_正在操作的子path的下标++;}/*esle*/ break; 
          case(1):if( 最大子层数>=1 ){ lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 1, 访p历记i.vs记录path[0], p文i.第0层子目录i, p文i.第1层子目录i ); } else{ 当前子层 = 0; p文i.第0层子目录i.运行时_正在操作的子path的下标++; }/*esle*/ break;
          case(2):if( 最大子层数>=2 ){ lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 2, 访p历记i.vs记录path[1], p文i.第1层子目录i, p文i.第2层子目录i ); } else{ 当前子层 = 1; p文i.第1层子目录i.运行时_正在操作的子path的下标++; }/*esle*/ break;
          case(3):if( 最大子层数>=3 ){ lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 3, 访p历记i.vs记录path[2], p文i.第2层子目录i, p文i.第3层子目录i ); } else{ 当前子层 = 2; p文i.第2层子目录i.运行时_正在操作的子path的下标++; }/*esle*/ break;
          case(4):if( 最大子层数>=4 ){ lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 4, 访p历记i.vs记录path[3], p文i.第3层子目录i, p文i.第4层子目录i ); } else{ 当前子层 = 3; p文i.第3层子目录i.运行时_正在操作的子path的下标++; }/*esle*/ break;
          case(5):if( 最大子层数>=5 ){ lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 5, 访p历记i.vs记录path[4], p文i.第4层子目录i, p文i.第5层子目录i ); } else{ 当前子层 = 4; p文i.第4层子目录i.运行时_正在操作的子path的下标++; }/*esle*/ break;
          case(6):if( 最大子层数>=6 ){ lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 6, 访p历记i.vs记录path[5], p文i.第5层子目录i, p文i.第6层子目录i ); } else{ 当前子层 = 5; p文i.第5层子目录i.运行时_正在操作的子path的下标++; }/*esle*/ break;
          case(7):if( 最大子层数>=7 ){ lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 7, 访p历记i.vs记录path[6], p文i.第6层子目录i, p文i.第7层子目录i ); } else{ 当前子层 = 6; p文i.第6层子目录i.运行时_正在操作的子path的下标++; }/*esle*/ break;
          case(8):if( 最大子层数>=8 ){ lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 8, 访p历记i.vs记录path[7], p文i.第7层子目录i, p文i.第8层子目录i ); } else{ 当前子层 = 7; p文i.第7层子目录i.运行时_正在操作的子path的下标++; }/*esle*/ break;
          case(9):if( 最大子层数>=9 ){ lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 9, 访p历记i.vs记录path[8], p文i.第8层子目录i, p文i.第9层子目录i ); } else{ 当前子层 = 8; p文i.第8层子目录i.运行时_正在操作的子path的下标++; }/*esle*/ break;
          case(10):if( 最大子层数>=10 ){ lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 10, 访p历记i.vs记录path[9], p文i.第9层子目录i, p文i.第10层子目录i ); } else{ 当前子层 = 9; p文i.第9层子目录i.运行时_正在操作的子path的下标++; }/*esle*/ break;
          case(11):if( 最大子层数>=11 ){ lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 11, 访p历记i.vs记录path[10], p文i.第10层子目录i, p文i.第11层子目录i ); } else{ 当前子层 = 10; p文i.第10层子目录i.运行时_正在操作的子path的下标++; }/*esle*/ break;
          case(12):if( 最大子层数>=12 ){ lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 12, 访p历记i.vs记录path[11], p文i.第11层子目录i, p文i.第12层子目录i ); } else{ 当前子层 = 11; p文i.第11层子目录i.运行时_正在操作的子path的下标++; }/*esle*/ break;
          case(13):if( 最大子层数>=13 ){ lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 13, 访p历记i.vs记录path[12], p文i.第12层子目录i, p文i.第13层子目录i ); } else{ 当前子层 = 12; p文i.第12层子目录i.运行时_正在操作的子path的下标++; }/*esle*/ break;
          case(14):if( 最大子层数>=14 ){ lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 14, 访p历记i.vs记录path[13], p文i.第13层子目录i, p文i.第14层子目录i ); } else{ 当前子层 = 13; p文i.第13层子目录i.运行时_正在操作的子path的下标++; }/*esle*/ break;
          case(15):if( 最大子层数>=15 ){ lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 15, 访p历记i.vs记录path[14], p文i.第14层子目录i, p文i.第15层子目录i ); } else{ 当前子层 = 14; p文i.第14层子目录i.运行时_正在操作的子path的下标++; }/*esle*/ break;
          case(16):if( 最大子层数>=16 ){ lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 16, 访p历记i.vs记录path[15], p文i.第15层子目录i, p文i.第16层子目录i ); } else{ 当前子层 = 15; p文i.第15层子目录i.运行时_正在操作的子path的下标++; }/*esle*/ break;
          case(17):if( 最大子层数>=17 ){ lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 17, 访p历记i.vs记录path[16], p文i.第16层子目录i, p文i.第17层子目录i ); } else{ 当前子层 = 16; p文i.第16层子目录i.运行时_正在操作的子path的下标++; }/*esle*/ break;
          case(18):if( 最大子层数>=18 ){ lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 18, 访p历记i.vs记录path[17], p文i.第17层子目录i, p文i.第18层子目录i ); } else{ 当前子层 = 17; p文i.第17层子目录i.运行时_正在操作的子path的下标++; }/*esle*/ break;
          case(19):if( 最大子层数>=19 ){ lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 19, 访p历记i.vs记录path[18], p文i.第18层子目录i, p文i.第19层子目录i ); } else{ 当前子层 = 18; p文i.第18层子目录i.运行时_正在操作的子path的下标++; }/*esle*/ break;
          case(20):if( 最大子层数>=20 ){ lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 20, 访p历记i.vs记录path[19], p文i.第19层子目录i, p文i.第20层子目录i ); } else{ 当前子层 = 19; p文i.第19层子目录i.运行时_正在操作的子path的下标++; }/*esle*/ break;
          case(21):if( 最大子层数>=21 ){ lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 21, 访p历记i.vs记录path[20], p文i.第20层子目录i, p文i.第21层子目录i ); } else{ 当前子层 = 20; p文i.第20层子目录i.运行时_正在操作的子path的下标++; }/*esle*/ break;
          case(22):if( 最大子层数>=22 ){ lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 22, 访p历记i.vs记录path[21], p文i.第21层子目录i, p文i.第22层子目录i ); } else{ 当前子层 = 21; p文i.第21层子目录i.运行时_正在操作的子path的下标++; }/*esle*/ break;
          case(23):if( 最大子层数>=23 ){ lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 23, 访p历记i.vs记录path[22], p文i.第22层子目录i, p文i.第23层子目录i ); } else{ 当前子层 = 22; p文i.第22层子目录i.运行时_正在操作的子path的下标++; }/*esle*/ break;
          case(24):if( 最大子层数>=24 ){ lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 24, 访p历记i.vs记录path[23], p文i.第23层子目录i, p文i.第24层子目录i ); } else{ 当前子层 = 23; p文i.第23层子目录i.运行时_正在操作的子path的下标++; }/*esle*/ break;
          case(25):if( 最大子层数>=25 ){ lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 25, 访p历记i.vs记录path[24], p文i.第24层子目录i, p文i.第25层子目录i ); } else{ 当前子层 = 24; p文i.第24层子目录i.运行时_正在操作的子path的下标++; }/*esle*/ break;
          case(26):if( 最大子层数>=26 ){ lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 26, 访p历记i.vs记录path[25], p文i.第25层子目录i, p文i.第26层子目录i ); } else{ 当前子层 = 25; p文i.第25层子目录i.运行时_正在操作的子path的下标++; }/*esle*/ break;
          case(27):if( 最大子层数>=27 ){ lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 27, 访p历记i.vs记录path[26], p文i.第26层子目录i, p文i.第27层子目录i ); } else{ 当前子层 = 26; p文i.第26层子目录i.运行时_正在操作的子path的下标++; }/*esle*/ break;
          case(28):if( 最大子层数>=28 ){ lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 28, 访p历记i.vs记录path[27], p文i.第27层子目录i, p文i.第28层子目录i ); } else{ 当前子层 = 27; p文i.第27层子目录i.运行时_正在操作的子path的下标++; }/*esle*/ break;
          case(29):if( 最大子层数>=29 ){ lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 29, 访p历记i.vs记录path[28], p文i.第28层子目录i, p文i.第29层子目录i ); } else{ 当前子层 = 28; p文i.第28层子目录i.运行时_正在操作的子path的下标++; }/*esle*/ break;
          case(30):if( 最大子层数>=30 ){ lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 30, 访p历记i.vs记录path[29], p文i.第29层子目录i, p文i.第30层子目录i ); } else{ 当前子层 = 29; p文i.第29层子目录i.运行时_正在操作的子path的下标++; }/*esle*/ break;
          case(31):if( 最大子层数>=31 ){ lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 31, 访p历记i.vs记录path[30], p文i.第30层子目录i, p文i.第31层子目录i ); } else{ 当前子层 = 30; p文i.第30层子目录i.运行时_正在操作的子path的下标++; }/*esle*/ break;
          case(32):if( 最大子层数>=32 ){ lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 32, 访p历记i.vs记录path[31], p文i.第31层子目录i, p文i.第32层子目录i ); } else{ 当前子层 = 31; p文i.第31层子目录i.运行时_正在操作的子path的下标++; }/*esle*/ break;
          case(33):if( 最大子层数>=33 ){ lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 33, 访p历记i.vs记录path[32], p文i.第32层子目录i, p文i.第33层子目录i ); } else{ 当前子层 = 32; p文i.第32层子目录i.运行时_正在操作的子path的下标++; }/*esle*/ break;
          case(34):if( 最大子层数>=34 ){ lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 34, 访p历记i.vs记录path[33], p文i.第33层子目录i, p文i.第34层子目录i ); } else{ 当前子层 = 33; p文i.第33层子目录i.运行时_正在操作的子path的下标++; }/*esle*/ break;
          case(35):if( 最大子层数>=35 ){ lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 35, 访p历记i.vs记录path[34], p文i.第34层子目录i, p文i.第35层子目录i ); } else{ 当前子层 = 34; p文i.第34层子目录i.运行时_正在操作的子path的下标++; }/*esle*/ break;
          case(36):if( 最大子层数>=36 ){ lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 36, 访p历记i.vs记录path[35], p文i.第35层子目录i, p文i.第36层子目录i ); } else{ 当前子层 = 35; p文i.第35层子目录i.运行时_正在操作的子path的下标++; }/*esle*/ break;
          case(37):if( 最大子层数>=37 ){ lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 37, 访p历记i.vs记录path[36], p文i.第36层子目录i, p文i.第37层子目录i ); } else{ 当前子层 = 36; p文i.第36层子目录i.运行时_正在操作的子path的下标++; }/*esle*/ break;
          case(38):if( 最大子层数>=38 ){ lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 38, 访p历记i.vs记录path[37], p文i.第37层子目录i, p文i.第38层子目录i ); } else{ 当前子层 = 37; p文i.第37层子目录i.运行时_正在操作的子path的下标++; }/*esle*/ break;
          case(39):if( 最大子层数>=39 ){ lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 39, 访p历记i.vs记录path[38], p文i.第38层子目录i, p文i.第39层子目录i ); } else{ 当前子层 = 38; p文i.第38层子目录i.运行时_正在操作的子path的下标++; }/*esle*/ break;
          case(40):if( 最大子层数>=40 ){ lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 40, 访p历记i.vs记录path[39], p文i.第39层子目录i, p文i.第40层子目录i ); } else{ 当前子层 = 39; p文i.第39层子目录i.运行时_正在操作的子path的下标++; }/*esle*/ break;
          case(41):if( 最大子层数>=41 ){ lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 41, 访p历记i.vs记录path[40], p文i.第40层子目录i, p文i.第41层子目录i ); } else{ 当前子层 = 40; p文i.第40层子目录i.运行时_正在操作的子path的下标++; }/*esle*/ break;
          case(42):if( 最大子层数>=42 ){ lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 42, 访p历记i.vs记录path[41], p文i.第41层子目录i, p文i.第42层子目录i ); } else{ 当前子层 = 41; p文i.第41层子目录i.运行时_正在操作的子path的下标++; }/*esle*/ break;
          case(43):if( 最大子层数>=43 ){ lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 43, 访p历记i.vs记录path[42], p文i.第42层子目录i, p文i.第43层子目录i ); } else{ 当前子层 = 42; p文i.第42层子目录i.运行时_正在操作的子path的下标++; }/*esle*/ break;
          case(44):if( 最大子层数>=44 ){ lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 44, 访p历记i.vs记录path[43], p文i.第43层子目录i, p文i.第44层子目录i ); } else{ 当前子层 = 43; p文i.第43层子目录i.运行时_正在操作的子path的下标++; }/*esle*/ break;
          case(45):if( 最大子层数>=45 ){ lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 45, 访p历记i.vs记录path[44], p文i.第44层子目录i, p文i.第45层子目录i ); } else{ 当前子层 = 44; p文i.第44层子目录i.运行时_正在操作的子path的下标++; }/*esle*/ break;
          case(46):if( 最大子层数>=46 ){ lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 46, 访p历记i.vs记录path[45], p文i.第45层子目录i, p文i.第46层子目录i ); } else{ 当前子层 = 45; p文i.第45层子目录i.运行时_正在操作的子path的下标++; }/*esle*/ break;
          case(47):if( 最大子层数>=47 ){ lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 47, 访p历记i.vs记录path[46], p文i.第46层子目录i, p文i.第47层子目录i ); } else{ 当前子层 = 46; p文i.第46层子目录i.运行时_正在操作的子path的下标++; }/*esle*/ break;
          case(48):if( 最大子层数>=48 ){ lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 48, 访p历记i.vs记录path[47], p文i.第47层子目录i, p文i.第48层子目录i ); } else{ 当前子层 = 47; p文i.第47层子目录i.运行时_正在操作的子path的下标++; }/*esle*/ break;
          case(49):if( 最大子层数>=49 ){ lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 49, 访p历记i.vs记录path[48], p文i.第48层子目录i, p文i.第49层子目录i ); } else{ 当前子层 = 48; p文i.第48层子目录i.运行时_正在操作的子path的下标++; }/*esle*/ break;
          case(50):if( 最大子层数>=50 ){ lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 50, 访p历记i.vs记录path[49], p文i.第49层子目录i, p文i.第50层子目录i ); } else{ 当前子层 = 49; p文i.第49层子目录i.运行时_正在操作的子path的下标++; }/*esle*/ break;
          case(51):if( 最大子层数>=51 ){ lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 51, 访p历记i.vs记录path[50], p文i.第50层子目录i, p文i.第51层子目录i ); } else{ 当前子层 = 50; p文i.第50层子目录i.运行时_正在操作的子path的下标++; }/*esle*/ break;
          case(52):if( 最大子层数>=52 ){ lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 52, 访p历记i.vs记录path[51], p文i.第51层子目录i, p文i.第52层子目录i ); } else{ 当前子层 = 51; p文i.第51层子目录i.运行时_正在操作的子path的下标++; }/*esle*/ break;
          case(53):if( 最大子层数>=53 ){ lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 53, 访p历记i.vs记录path[52], p文i.第52层子目录i, p文i.第53层子目录i ); } else{ 当前子层 = 52; p文i.第52层子目录i.运行时_正在操作的子path的下标++; }/*esle*/ break;
          case(54):if( 最大子层数>=54 ){ lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 54, 访p历记i.vs记录path[53], p文i.第53层子目录i, p文i.第54层子目录i ); } else{ 当前子层 = 53; p文i.第53层子目录i.运行时_正在操作的子path的下标++; }/*esle*/ break;
          case(55):if( 最大子层数>=55 ){ lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 55, 访p历记i.vs记录path[54], p文i.第54层子目录i, p文i.第55层子目录i ); } else{ 当前子层 = 54; p文i.第54层子目录i.运行时_正在操作的子path的下标++; }/*esle*/ break;
          case(56):if( 最大子层数>=56 ){ lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 56, 访p历记i.vs记录path[55], p文i.第55层子目录i, p文i.第56层子目录i ); } else{ 当前子层 = 55; p文i.第55层子目录i.运行时_正在操作的子path的下标++; }/*esle*/ break;
          case(57):if( 最大子层数>=57 ){ lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 57, 访p历记i.vs记录path[56], p文i.第56层子目录i, p文i.第57层子目录i ); } else{ 当前子层 = 56; p文i.第56层子目录i.运行时_正在操作的子path的下标++; }/*esle*/ break;
          case(58):if( 最大子层数>=58 ){ lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 58, 访p历记i.vs记录path[57], p文i.第57层子目录i, p文i.第58层子目录i ); } else{ 当前子层 = 57; p文i.第57层子目录i.运行时_正在操作的子path的下标++; }/*esle*/ break;
          case(59):if( 最大子层数>=59 ){ lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 59, 访p历记i.vs记录path[58], p文i.第58层子目录i, p文i.第59层子目录i ); } else{ 当前子层 = 58; p文i.第58层子目录i.运行时_正在操作的子path的下标++; }/*esle*/ break;
          case(60):if( 最大子层数>=60 ){ lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 60, 访p历记i.vs记录path[59], p文i.第59层子目录i, p文i.第60层子目录i ); } else{ 当前子层 = 59; p文i.第59层子目录i.运行时_正在操作的子path的下标++; }/*esle*/ break;
          case(61):if( 最大子层数>=61 ){ lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 61, 访p历记i.vs记录path[60], p文i.第60层子目录i, p文i.第61层子目录i ); } else{ 当前子层 = 60; p文i.第60层子目录i.运行时_正在操作的子path的下标++; }/*esle*/ break;
          case(62):if( 最大子层数>=62 ){ lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 62, 访p历记i.vs记录path[61], p文i.第61层子目录i, p文i.第62层子目录i ); } else{ 当前子层 = 61; p文i.第61层子目录i.运行时_正在操作的子path的下标++; }/*esle*/ break;
          case(63):if( 最大子层数>=63 ){ lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 63, 访p历记i.vs记录path[62], p文i.第62层子目录i, p文i.第63层子目录i ); } else{ 当前子层 = 62; p文i.第62层子目录i.运行时_正在操作的子path的下标++; }/*esle*/ break;
          case(64):if( 最大子层数>=64 ){ lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 64, 访p历记i.vs记录path[63], p文i.第63层子目录i, p文i.第64层子目录i ); } else{ 当前子层 = 63; p文i.第63层子目录i.运行时_正在操作的子path的下标++; }/*esle*/ break;
          case(65):if( 最大子层数>=65 ){ lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 65, 访p历记i.vs记录path[64], p文i.第64层子目录i, p文i.第65层子目录i ); } else{ 当前子层 = 64; p文i.第64层子目录i.运行时_正在操作的子path的下标++; }/*esle*/ break;
          case(66):if( 最大子层数>=66 ){ lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 66, 访p历记i.vs记录path[65], p文i.第65层子目录i, p文i.第66层子目录i ); } else{ 当前子层 = 65; p文i.第65层子目录i.运行时_正在操作的子path的下标++; }/*esle*/ break;
          case(67):if( 最大子层数>=67 ){ lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 67, 访p历记i.vs记录path[66], p文i.第66层子目录i, p文i.第67层子目录i ); } else{ 当前子层 = 66; p文i.第66层子目录i.运行时_正在操作的子path的下标++; }/*esle*/ break;
          case(68):if( 最大子层数>=68 ){ lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 68, 访p历记i.vs记录path[67], p文i.第67层子目录i, p文i.第68层子目录i ); } else{ 当前子层 = 67; p文i.第67层子目录i.运行时_正在操作的子path的下标++; }/*esle*/ break;
          case(69):if( 最大子层数>=69 ){ lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 69, 访p历记i.vs记录path[68], p文i.第68层子目录i, p文i.第69层子目录i ); } else{ 当前子层 = 68; p文i.第68层子目录i.运行时_正在操作的子path的下标++; }/*esle*/ break;
          case(70):if( 最大子层数>=70 ){ lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 70, 访p历记i.vs记录path[69], p文i.第69层子目录i, p文i.第70层子目录i ); } else{ 当前子层 = 69; p文i.第69层子目录i.运行时_正在操作的子path的下标++; }/*esle*/ break;
          case(71):if( 最大子层数>=71 ){ lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 71, 访p历记i.vs记录path[70], p文i.第70层子目录i, p文i.第71层子目录i ); } else{ 当前子层 = 70; p文i.第70层子目录i.运行时_正在操作的子path的下标++; }/*esle*/ break;
          case(72):if( 最大子层数>=72 ){ lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 72, 访p历记i.vs记录path[71], p文i.第71层子目录i, p文i.第72层子目录i ); } else{ 当前子层 = 71; p文i.第71层子目录i.运行时_正在操作的子path的下标++; }/*esle*/ break;
          case(73):if( 最大子层数>=73 ){ lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 73, 访p历记i.vs记录path[72], p文i.第72层子目录i, p文i.第73层子目录i ); } else{ 当前子层 = 72; p文i.第72层子目录i.运行时_正在操作的子path的下标++; }/*esle*/ break;
          case(74):if( 最大子层数>=74 ){ lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 74, 访p历记i.vs记录path[73], p文i.第73层子目录i, p文i.第74层子目录i ); } else{ 当前子层 = 73; p文i.第73层子目录i.运行时_正在操作的子path的下标++; }/*esle*/ break;
          case(75):if( 最大子层数>=75 ){ lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 75, 访p历记i.vs记录path[74], p文i.第74层子目录i, p文i.第75层子目录i ); } else{ 当前子层 = 74; p文i.第74层子目录i.运行时_正在操作的子path的下标++; }/*esle*/ break;
          case(76):if( 最大子层数>=76 ){ lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 76, 访p历记i.vs记录path[75], p文i.第75层子目录i, p文i.第76层子目录i ); } else{ 当前子层 = 75; p文i.第75层子目录i.运行时_正在操作的子path的下标++; }/*esle*/ break;
          case(77):if( 最大子层数>=77 ){ lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 77, 访p历记i.vs记录path[76], p文i.第76层子目录i, p文i.第77层子目录i ); } else{ 当前子层 = 76; p文i.第76层子目录i.运行时_正在操作的子path的下标++; }/*esle*/ break;
          case(78):if( 最大子层数>=78 ){ lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 78, 访p历记i.vs记录path[77], p文i.第77层子目录i, p文i.第78层子目录i ); } else{ 当前子层 = 77; p文i.第77层子目录i.运行时_正在操作的子path的下标++; }/*esle*/ break;
          case(79):if( 最大子层数>=79 ){ lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 79, 访p历记i.vs记录path[78], p文i.第78层子目录i, p文i.第79层子目录i ); } else{ 当前子层 = 78; p文i.第78层子目录i.运行时_正在操作的子path的下标++; }/*esle*/ break;
          case(80):if( 最大子层数>=80 ){ lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 80, 访p历记i.vs记录path[79], p文i.第79层子目录i, p文i.第80层子目录i ); } else{ 当前子层 = 79; p文i.第79层子目录i.运行时_正在操作的子path的下标++; }/*esle*/ break;
          case(81):if( 最大子层数>=81 ){ lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 81, 访p历记i.vs记录path[80], p文i.第80层子目录i, p文i.第81层子目录i ); } else{ 当前子层 = 80; p文i.第80层子目录i.运行时_正在操作的子path的下标++; }/*esle*/ break;
          case(82):if( 最大子层数>=82 ){ lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 82, 访p历记i.vs记录path[81], p文i.第81层子目录i, p文i.第82层子目录i ); } else{ 当前子层 = 81; p文i.第81层子目录i.运行时_正在操作的子path的下标++; }/*esle*/ break;
          case(83):if( 最大子层数>=83 ){ lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 83, 访p历记i.vs记录path[82], p文i.第82层子目录i, p文i.第83层子目录i ); } else{ 当前子层 = 82; p文i.第82层子目录i.运行时_正在操作的子path的下标++; }/*esle*/ break;
          case(84):if( 最大子层数>=84 ){ lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 84, 访p历记i.vs记录path[83], p文i.第83层子目录i, p文i.第84层子目录i ); } else{ 当前子层 = 83; p文i.第83层子目录i.运行时_正在操作的子path的下标++; }/*esle*/ break;
          case(85):if( 最大子层数>=85 ){ lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 85, 访p历记i.vs记录path[84], p文i.第84层子目录i, p文i.第85层子目录i ); } else{ 当前子层 = 84; p文i.第84层子目录i.运行时_正在操作的子path的下标++; }/*esle*/ break;
          case(86):if( 最大子层数>=86 ){ lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 86, 访p历记i.vs记录path[85], p文i.第85层子目录i, p文i.第86层子目录i ); } else{ 当前子层 = 85; p文i.第85层子目录i.运行时_正在操作的子path的下标++; }/*esle*/ break;
          case(87):if( 最大子层数>=87 ){ lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 87, 访p历记i.vs记录path[86], p文i.第86层子目录i, p文i.第87层子目录i ); } else{ 当前子层 = 86; p文i.第86层子目录i.运行时_正在操作的子path的下标++; }/*esle*/ break;
          case(88):if( 最大子层数>=88 ){ lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 88, 访p历记i.vs记录path[87], p文i.第87层子目录i, p文i.第88层子目录i ); } else{ 当前子层 = 87; p文i.第87层子目录i.运行时_正在操作的子path的下标++; }/*esle*/ break;
          case(89):if( 最大子层数>=89 ){ lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 89, 访p历记i.vs记录path[88], p文i.第88层子目录i, p文i.第89层子目录i ); } else{ 当前子层 = 88; p文i.第88层子目录i.运行时_正在操作的子path的下标++; }/*esle*/ break;
          case(90):if( 最大子层数>=90 ){ lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 90, 访p历记i.vs记录path[89], p文i.第89层子目录i, p文i.第90层子目录i ); } else{ 当前子层 = 89; p文i.第89层子目录i.运行时_正在操作的子path的下标++; }/*esle*/ break;
          case(91):if( 最大子层数>=91 ){ lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 91, 访p历记i.vs记录path[90], p文i.第90层子目录i, p文i.第91层子目录i ); } else{ 当前子层 = 90; p文i.第90层子目录i.运行时_正在操作的子path的下标++; }/*esle*/ break;
          case(92):if( 最大子层数>=92 ){ lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 92, 访p历记i.vs记录path[91], p文i.第91层子目录i, p文i.第92层子目录i ); } else{ 当前子层 = 91; p文i.第91层子目录i.运行时_正在操作的子path的下标++; }/*esle*/ break;
          case(93):if( 最大子层数>=93 ){ lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 93, 访p历记i.vs记录path[92], p文i.第92层子目录i, p文i.第93层子目录i ); } else{ 当前子层 = 92; p文i.第92层子目录i.运行时_正在操作的子path的下标++; }/*esle*/ break;
          case(94):if( 最大子层数>=94 ){ lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 94, 访p历记i.vs记录path[93], p文i.第93层子目录i, p文i.第94层子目录i ); } else{ 当前子层 = 93; p文i.第93层子目录i.运行时_正在操作的子path的下标++; }/*esle*/ break;
          case(95):if( 最大子层数>=95 ){ lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 95, 访p历记i.vs记录path[94], p文i.第94层子目录i, p文i.第95层子目录i ); } else{ 当前子层 = 94; p文i.第94层子目录i.运行时_正在操作的子path的下标++; }/*esle*/ break;
          case(96):if( 最大子层数>=96 ){ lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 96, 访p历记i.vs记录path[95], p文i.第95层子目录i, p文i.第96层子目录i ); } else{ 当前子层 = 95; p文i.第95层子目录i.运行时_正在操作的子path的下标++; }/*esle*/ break;
          case(97):if( 最大子层数>=97 ){ lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 97, 访p历记i.vs记录path[96], p文i.第96层子目录i, p文i.第97层子目录i ); } else{ 当前子层 = 96; p文i.第96层子目录i.运行时_正在操作的子path的下标++; }/*esle*/ break;
          case(98):if( 最大子层数>=98 ){ lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 98, 访p历记i.vs记录path[97], p文i.第97层子目录i, p文i.第98层子目录i ); } else{ 当前子层 = 97; p文i.第97层子目录i.运行时_正在操作的子path的下标++; }/*esle*/ break;
          case(99):if( 最大子层数>=99 ){ lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 99, 访p历记i.vs记录path[98], p文i.第98层子目录i, p文i.第99层子目录i ); } else{ 当前子层 = 98; p文i.第98层子目录i.运行时_正在操作的子path的下标++; }/*esle*/ break;
          //*case(100):if( 最大子层数>=100 ){ lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 100, 访p历记i.vs记录path[99], p文i.第99层子目录i, p文i.第100层子目录i ); } else{ 当前子层 = 99; p文i.第99层子目录i.运行时_正在操作的子path的下标++; }/*esle*/ break;
          //*case(101):if( 最大子层数>=101 ){ lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 101, 访p历记i.vs记录path[100], p文i.第100层子目录i, p文i.第101层子目录i ); } else{ 当前子层 = 100; p文i.第100层子目录i.运行时_正在操作的子path的下标++; }/*esle*/ break;
          //*case(102):if( 最大子层数>=102 ){ lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 102, 访p历记i.vs记录path[101], p文i.第101层子目录i, p文i.第102层子目录i ); } else{ 当前子层 = 101; p文i.第101层子目录i.运行时_正在操作的子path的下标++; }/*esle*/ break;
          //*case(103):if( 最大子层数>=103 ){ lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 103, 访p历记i.vs记录path[102], p文i.第102层子目录i, p文i.第103层子目录i ); } else{ 当前子层 = 102; p文i.第102层子目录i.运行时_正在操作的子path的下标++; }/*esle*/ break;
          //*case(104):if( 最大子层数>=104 ){ lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 104, 访p历记i.vs记录path[103], p文i.第103层子目录i, p文i.第104层子目录i ); } else{ 当前子层 = 103; p文i.第103层子目录i.运行时_正在操作的子path的下标++; }/*esle*/ break;
          //*case(105):if( 最大子层数>=105 ){ lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 105, 访p历记i.vs记录path[104], p文i.第104层子目录i, p文i.第105层子目录i ); } else{ 当前子层 = 104; p文i.第104层子目录i.运行时_正在操作的子path的下标++; }/*esle*/ break;
          //*case(106):if( 最大子层数>=106 ){ lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 106, 访p历记i.vs记录path[105], p文i.第105层子目录i, p文i.第106层子目录i ); } else{ 当前子层 = 105; p文i.第105层子目录i.运行时_正在操作的子path的下标++; }/*esle*/ break;
          //*case(107):if( 最大子层数>=107 ){ lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 107, 访p历记i.vs记录path[106], p文i.第106层子目录i, p文i.第107层子目录i ); } else{ 当前子层 = 106; p文i.第106层子目录i.运行时_正在操作的子path的下标++; }/*esle*/ break;
          //*case(108):if( 最大子层数>=108 ){ lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 108, 访p历记i.vs记录path[107], p文i.第107层子目录i, p文i.第108层子目录i ); } else{ 当前子层 = 107; p文i.第107层子目录i.运行时_正在操作的子path的下标++; }/*esle*/ break;
          //*case(109):if( 最大子层数>=109 ){ lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 109, 访p历记i.vs记录path[108], p文i.第108层子目录i, p文i.第109层子目录i ); } else{ 当前子层 = 108; p文i.第108层子目录i.运行时_正在操作的子path的下标++; }/*esle*/ break;
          //*case(110):if( 最大子层数>=110 ){ lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 110, 访p历记i.vs记录path[109], p文i.第109层子目录i, p文i.第110层子目录i ); } else{ 当前子层 = 109; p文i.第109层子目录i.运行时_正在操作的子path的下标++; }/*esle*/ break;
          //*case(111):if( 最大子层数>=111 ){ lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 111, 访p历记i.vs记录path[110], p文i.第110层子目录i, p文i.第111层子目录i ); } else{ 当前子层 = 110; p文i.第110层子目录i.运行时_正在操作的子path的下标++; }/*esle*/ break;
          //*case(112):if( 最大子层数>=112 ){ lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 112, 访p历记i.vs记录path[111], p文i.第111层子目录i, p文i.第112层子目录i ); } else{ 当前子层 = 111; p文i.第111层子目录i.运行时_正在操作的子path的下标++; }/*esle*/ break;
          //*case(113):if( 最大子层数>=113 ){ lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 113, 访p历记i.vs记录path[112], p文i.第112层子目录i, p文i.第113层子目录i ); } else{ 当前子层 = 112; p文i.第112层子目录i.运行时_正在操作的子path的下标++; }/*esle*/ break;
          //*case(114):if( 最大子层数>=114 ){ lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 114, 访p历记i.vs记录path[113], p文i.第113层子目录i, p文i.第114层子目录i ); } else{ 当前子层 = 113; p文i.第113层子目录i.运行时_正在操作的子path的下标++; }/*esle*/ break;
          //*case(115):if( 最大子层数>=115 ){ lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 115, 访p历记i.vs记录path[114], p文i.第114层子目录i, p文i.第115层子目录i ); } else{ 当前子层 = 114; p文i.第114层子目录i.运行时_正在操作的子path的下标++; }/*esle*/ break;
          //*case(116):if( 最大子层数>=116 ){ lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 116, 访p历记i.vs记录path[115], p文i.第115层子目录i, p文i.第116层子目录i ); } else{ 当前子层 = 115; p文i.第115层子目录i.运行时_正在操作的子path的下标++; }/*esle*/ break;
          //*case(117):if( 最大子层数>=117 ){ lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 117, 访p历记i.vs记录path[116], p文i.第116层子目录i, p文i.第117层子目录i ); } else{ 当前子层 = 116; p文i.第116层子目录i.运行时_正在操作的子path的下标++; }/*esle*/ break;
          //*case(118):if( 最大子层数>=118 ){ lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 118, 访p历记i.vs记录path[117], p文i.第117层子目录i, p文i.第118层子目录i ); } else{ 当前子层 = 117; p文i.第117层子目录i.运行时_正在操作的子path的下标++; }/*esle*/ break;
          //*case(119):if( 最大子层数>=119 ){ lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 119, 访p历记i.vs记录path[118], p文i.第118层子目录i, p文i.第119层子目录i ); } else{ 当前子层 = 118; p文i.第118层子目录i.运行时_正在操作的子path的下标++; }/*esle*/ break;
          //*case(120):if( 最大子层数>=120 ){ lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 120, 访p历记i.vs记录path[119], p文i.第119层子目录i, p文i.第120层子目录i ); } else{ 当前子层 = 119; p文i.第119层子目录i.运行时_正在操作的子path的下标++; }/*esle*/ break;
          //*case(121):if( 最大子层数>=121 ){ lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 121, 访p历记i.vs记录path[120], p文i.第120层子目录i, p文i.第121层子目录i ); } else{ 当前子层 = 120; p文i.第120层子目录i.运行时_正在操作的子path的下标++; }/*esle*/ break;
          //*case(122):if( 最大子层数>=122 ){ lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 122, 访p历记i.vs记录path[121], p文i.第121层子目录i, p文i.第122层子目录i ); } else{ 当前子层 = 121; p文i.第121层子目录i.运行时_正在操作的子path的下标++; }/*esle*/ break;
          //*case(123):if( 最大子层数>=123 ){ lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 123, 访p历记i.vs记录path[122], p文i.第122层子目录i, p文i.第123层子目录i ); } else{ 当前子层 = 122; p文i.第122层子目录i.运行时_正在操作的子path的下标++; }/*esle*/ break;
          //*case(124):if( 最大子层数>=124 ){ lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 124, 访p历记i.vs记录path[123], p文i.第123层子目录i, p文i.第124层子目录i ); } else{ 当前子层 = 123; p文i.第123层子目录i.运行时_正在操作的子path的下标++; }/*esle*/ break;
          //*case(125):if( 最大子层数>=125 ){ lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 125, 访p历记i.vs记录path[124], p文i.第124层子目录i, p文i.第125层子目录i ); } else{ 当前子层 = 124; p文i.第124层子目录i.运行时_正在操作的子path的下标++; }/*esle*/ break;
          //*case(126):if( 最大子层数>=126 ){ lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 126, 访p历记i.vs记录path[125], p文i.第125层子目录i, p文i.第126层子目录i ); } else{ 当前子层 = 125; p文i.第125层子目录i.运行时_正在操作的子path的下标++; }/*esle*/ break;
          //*case(127):if( 最大子层数>=127 ){ lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 127, 访p历记i.vs记录path[126], p文i.第126层子目录i, p文i.第127层子目录i ); } else{ 当前子层 = 126; p文i.第126层子目录i.运行时_正在操作的子path的下标++; }/*esle*/ break;
          //*case(128):if( 最大子层数>=128 ){ lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 128, 访p历记i.vs记录path[127], p文i.第127层子目录i, p文i.第128层子目录i ); } else{ 当前子层 = 127; p文i.第127层子目录i.运行时_正在操作的子path的下标++; }/*esle*/ break;
          //*case(129):if( 最大子层数>=129 ){ lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 129, 访p历记i.vs记录path[128], p文i.第128层子目录i, p文i.第129层子目录i ); } else{ 当前子层 = 128; p文i.第128层子目录i.运行时_正在操作的子path的下标++; }/*esle*/ break;
          //*case(130):if( 最大子层数>=130 ){ lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 130, 访p历记i.vs记录path[129], p文i.第129层子目录i, p文i.第130层子目录i ); } else{ 当前子层 = 129; p文i.第129层子目录i.运行时_正在操作的子path的下标++; }/*esle*/ break;
          //*case(131):if( 最大子层数>=131 ){ lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 131, 访p历记i.vs记录path[130], p文i.第130层子目录i, p文i.第131层子目录i ); } else{ 当前子层 = 130; p文i.第130层子目录i.运行时_正在操作的子path的下标++; }/*esle*/ break;
          //*case(132):if( 最大子层数>=132 ){ lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 132, 访p历记i.vs记录path[131], p文i.第131层子目录i, p文i.第132层子目录i ); } else{ 当前子层 = 131; p文i.第131层子目录i.运行时_正在操作的子path的下标++; }/*esle*/ break;
          //*case(133):if( 最大子层数>=133 ){ lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 133, 访p历记i.vs记录path[132], p文i.第132层子目录i, p文i.第133层子目录i ); } else{ 当前子层 = 132; p文i.第132层子目录i.运行时_正在操作的子path的下标++; }/*esle*/ break;
          //*case(134):if( 最大子层数>=134 ){ lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 134, 访p历记i.vs记录path[133], p文i.第133层子目录i, p文i.第134层子目录i ); } else{ 当前子层 = 133; p文i.第133层子目录i.运行时_正在操作的子path的下标++; }/*esle*/ break;
          //*case(135):if( 最大子层数>=135 ){ lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 135, 访p历记i.vs记录path[134], p文i.第134层子目录i, p文i.第135层子目录i ); } else{ 当前子层 = 134; p文i.第134层子目录i.运行时_正在操作的子path的下标++; }/*esle*/ break;
          //*case(136):if( 最大子层数>=136 ){ lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 136, 访p历记i.vs记录path[135], p文i.第135层子目录i, p文i.第136层子目录i ); } else{ 当前子层 = 135; p文i.第135层子目录i.运行时_正在操作的子path的下标++; }/*esle*/ break;
          //*case(137):if( 最大子层数>=137 ){ lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 137, 访p历记i.vs记录path[136], p文i.第136层子目录i, p文i.第137层子目录i ); } else{ 当前子层 = 136; p文i.第136层子目录i.运行时_正在操作的子path的下标++; }/*esle*/ break;
          //*case(138):if( 最大子层数>=138 ){ lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 138, 访p历记i.vs记录path[137], p文i.第137层子目录i, p文i.第138层子目录i ); } else{ 当前子层 = 137; p文i.第137层子目录i.运行时_正在操作的子path的下标++; }/*esle*/ break;
          //*case(139):if( 最大子层数>=139 ){ lamVs记录pathPpushb父层A写入子层文件属性Afor子层( 139, 访p历记i.vs记录path[138], p文i.第138层子目录i, p文i.第139层子目录i ); } else{ 当前子层 = 138; p文i.第138层子目录i.运行时_正在操作的子path的下标++; }/*esle*/ break;
          }/*switch*/
           //*if( 当前子层>139 ){
           //*  当前子层 = 139; p文i.第139层子目录i.运行时_正在操作的子path的下标++;
           //*}/*if*/
          if( 当前子层>99 ){
            当前子层 = 99; p文i.第99层子目录i.运行时_正在操作的子path的下标++;
          }/*if*/
          p文i.运行时_正在操作第几层子path = 当前子层;
          continu;
        }/*if*/
      }/*if*/
    }/*while*/
  }/*void*/
  
  /**///▬不改了,完成版,备份▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬

  /**///todo▬没做完▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬


#endif