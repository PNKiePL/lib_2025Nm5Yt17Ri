#pragma once
#ifndef WF_JM_DU_XX_CPP
#define WF_JM_DU_XX_CPP

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

class 文件读写/*:public 文字读取*/ : public c注释info{
public/*class*/:
  数N分<int, 4> 数4分i;
  时间 uijm;
  文字读取 wfzi读取;
  /*?在后面*///*cmd cmd1;
public/*struct*/:
public:
  文件读写( ){
    ///
    是否c注释 = 1;
    ///是否c注释=0;
  }/*()*/;
  /**/;//▬path,文字操作▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
  void getPath去掉最后1部分( /*!输入*/新s 斜杠, 新s path,/*变量*//*!输出*/新s& s结果 ){
    struct_pathInfo path1去掉文件名i( path ); s结果 = path1去掉文件名i.retVs去掉最后1部分( 斜杠 );
  }/*void*/;
#define getPath去掉文件名 getPath去掉最后1部分
  /**///▬改{,文件位置,文件属性,}▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬

  /**///▬简写,写入文件的字▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
  void 写入s1等于s2( 新fst& fst, string s1, string s2 ){ fst << s1 << "=" << s2; }/*void */
  void 写入s1等于i1( 新fst& fst, string s1, int i1 ){ fst << s1 << "=" << i1; }/*void */
  void 写入大括号s( 新fst& fst, string s ){ fst << "{ " << s << " }"; }/*void */
  void 写入大括号i( 新fst& fst, int i ){ fst << "{ " << i << " }"; }/*void */
  void 写入s1等于大括号s2( 新fst& fst, string s1, string s2 ){ fst << s1 << "={ " << s2 << " }"; }/*void */
#define 写入s1等于大括号i 写入s等于大括号i
#define 写入s等于大括号i1 写入s等于大括号i
#define 写入s1等于大括号i1 写入s等于大括号i
#define 写入s1等于大括号i2 写入s等于大括号i
  void 写入s等于大括号i( 新fst& fst, string s, int i ){ fst << s << "={ " << i << " }"; }/*void */
  /**///▬作`文件目录, path▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
  // /*已移动到<path内文件属性i>*/ /*移动回来了*/
  /*还需要创建文件*/
  void /**子path内文件属性info::*/getPathTO文件属性A写入Path内文件属性_中文等于大括号_去掉TimeAccess( /*!输入*/子path内文件属性info& 子i, string s输入path, 新s s斜杠, 新s s写入文件的完整path/*在末尾*//*!输出*/ ){
    新fst fst; 从头覆盖写入( fst, s写入文件的完整path );//*fst<<"\n";
    子i.变量初始化( );
    /**///开始
    intptr_t   /*句柄*/hFile = 0;
    struct _finddata_t /*一条path*/一个文件的属性;
    string s要pushb的 = "";/*只是初始化,没有意义*/
    /*_findfirst(通惠符,info)*/
    hFile = _findfirst( s要pushb的.assign( s输入path ).append( "/*" ).c_str( ), &一个文件的属性 );
    if( hFile != -1 ){
      int 子path下标 = 0/*子path数-1*/;
      int 返回值;
      do{
        子i.vi是否下标是文件夹.resize( 子path下标 + 1, 0 );
        子i.vi是否下标是文件.resize( 子path下标 + 1, 0 );
        子i.vi是否下标是隐藏文件.resize( 子path下标 + 1, 0 );
        ///vi是否下标是其余文件.resize(子path下标,0);
        /*if 不是`这两种情况*/
        /*todo 区分是文件还是文件夹,也就是加不加斜杠*/
        if( strcmp(/**/一个文件的属性.name, "." ) != 0 && strcmp( 一个文件的属性.name, ".." ) != 0 ){
          //*if( /**/一个文件的属性.name!="." and 一个文件的属性.name != ".." ){
          //*if( /**/一个文件的属性.name.size()<= 260 ){ //*if( /**/一个文件的属性.name[260]==NULL ){ //*if( /**/sizeof( 一个文件的属性.name ) ){
          /*!输出{ sGet }*/{
            /*清空*/s要pushb的.assign( "" );/*在s初始path后面`加上path*//*todo 其实能一次全部进一个s的,只要去掉这一句就行. 为什么?*/
            子i.vi类型.push_back( 一个文件的属性.attrib );
            子i.vi大小.push_back( 一个文件的属性.size );
            /*int时间*/子i.vi修改时间.push_back( 一个文件的属性.time_write );
            子i.vi创建时间.push_back( 一个文件的属性.time_create );
            子i.viTimeAccess.push_back( 一个文件的属性.time_access );
            /*timet*/子i.vtt修改时间.push_back( 一个文件的属性.time_write );
            子i.vtt创建时间.push_back( 一个文件的属性.time_create );
            子i.vttTimeAccess.push_back( 一个文件的属性.time_access );
            s要pushb的.append( 一个文件的属性.name );
            if( 一个文件的属性.attrib == 16/*文件夹*/ or 一个文件的属性.attrib == 17/*百度同步盘/ Users*/
              or 一个文件的属性.attrib == 22/*$RECYCLE.BIN/ Config.Msi*/
              or 一个文件的属性.attrib == 18/*$WinREAgent*/
              or 一个文件的属性.attrib == 34/*$WINRE_BACKUP_PARTITION.MARKER/ .GamingRoot*/
              ){
              s要pushb的.append( s斜杠 ); 子i.文件夹数量++; 子i.vi是否下标是文件夹[子path下标] = 1;
            }/*if*/else{
              if( 一个文件的属性.attrib == 32/*文件*/ ){ 子i.文件数量++; 子i.vi是否下标是文件[子path下标] = 1; }/*if*/
              if( 一个文件的属性.attrib == 38/*文件*/ ){ 子i.隐藏文件数量++; 子i.vi是否下标是隐藏文件[子path下标] = 1; }/*if*/
              子i.本层总文件大小_不含子层 += 一个文件的属性.size;
            }/*else*/
            子i.vs文件名.push_back( s要pushb的 );
            if(/*最后是斜杠*/s输入path[s输入path.size( ) - 1] == s斜杠[0] ){ 子i.vs子path.push_back( s输入path + s要pushb的 ); } else{ 子i.vs子path.push_back( s输入path + s斜杠 + s要pushb的 ); }/*else*/
            if( 一个文件的属性.time_write == 一个文件的属性.time_create ){ 子i.vi是否修改时间等于创建时间.push_back( 1 ); } else{ 子i.vi是否修改时间等于创建时间.push_back( 0 ); }/*else*/
            if( 一个文件的属性.time_write == 一个文件的属性.time_access ){ 子i.vi是否修改时间等于TimeAccess.push_back( 1 ); } else{ 子i.vi是否修改时间等于TimeAccess.push_back( 0 ); }/*else*/
            子i.vi运行时_是否操作了这个下标的子path.assign( 子i.vs文件名.size( ), 0 );
            //TO写入文件
            fst << "\n"; 写入s1等于大括号s2( fst, "文件名", s要pushb的 );
            fst << ", "; 写入s等于大括号i( fst, "类型", 一个文件的属性.attrib );
            fst << ", "; 写入s1等于大括号s2( fst, "大小", 数4分i.ret数字str( 一个文件的属性.size ) );
            fst << ", "; 写入s1等于大括号s2( fst, "修改时间", uijm.ret时间TOs_年月日冒号冒号秒_数字补到2位( 一个文件的属性.time_write, "" ) );
            fst << ", "; 写入s1等于大括号s2( fst, "创建时间", uijm.ret时间TOs_年月日冒号冒号秒_数字补到2位( 一个文件的属性.time_create, "" ) );
          }/*s输入+sGet*/;
        }/*if*/;
        子path下标++;
        /*?读了就buffer吧*/
        返回值 = _findnext( hFile, &一个文件的属性 );
      } while( 返回值 == 0/*成功*/ );
      /*查找文件`结束了*/
      _findclose( hFile );
      fst.close( );
      /*写入第一行的字*/{
        从头写入( fst, s写入文件的完整path );
        写入s1等于大括号s2( fst, "path", s输入path );
        fst << "\n"; 写入s等于大括号i( fst, "文件夹数量", 子i.文件夹数量 );
        fst << ", "; 写入s等于大括号i( fst, "文件数量", 子i.文件数量 );
        fst << ", "; 写入s等于大括号i( fst, "隐藏文件数量", 子i.隐藏文件数量 );
        fst << ", "; 写入s等于大括号i( fst,/**/"其余文件数量", 子i.vs文件名.size( ) - 子i.文件夹数量 - 子i.文件数量 - 子i.隐藏文件数量 );
        fst << ", "; 写入s等于大括号i( fst, "本层总文件大小_不含子层", 子i.本层总文件大小_不含子层 );
        fst << ", "; 写入s等于大括号i( fst, "本层总文件大小_含子层", 子i.本层总文件大小_含子层 );
        fst.close( );
      }/*写入第一行的字*/
    }/*if*/;
    /**///已完
    子i.是否有数据 = 1;
  }/*void*/
  /*输入{ path }, 输出{ vs{ path=s输入+sGet } };
  sGet=path内的(( _findfirst和_findnext )返回的sGet)*/
  void getpathTOvs_path接path( std::string s输入path, std::vector<std::string>& vs ){/*get(path后接path内的path)TOvs; get( path后接path内的path )TOvs*/
    intptr_t   /*句柄*/hFile = 0;
    struct _finddata_t /*一条path*/一个文件的属性;
    string s要pushb的 = "";/*只是初始化,没有意义*/
    /*_findfirst(通惠符,info)*/
    hFile = _findfirst( s要pushb的.assign( s输入path ).append( "/*" ).c_str( ), &一个文件的属性 );
    if( hFile != -1 ){
      do{
        /*if 不是`这两种情况*/
        if( strcmp(/**/一个文件的属性.name, "." ) != 0 && strcmp( 一个文件的属性.name, ".." ) != 0 ){
          /*!输出{ s输入+sGet }*/{
            s要pushb的.assign( s输入path );/*在s初始path后面`加上path*/
            if( wfzi读取.ifS最后一位是( s输入path, '/' ) == 1 ){/*s是文件夹,就应该有/*/
              s要pushb的.append( 一个文件的属性.name );
            } else{
              s要pushb的.append( "/" ).append( 一个文件的属性.name );
            }/*else*/
            vs.push_back( s要pushb的 );
          }/*s输入+sGet*/
        }/*else*/
      } while( _findnext( hFile, &一个文件的属性 ) == 0/*成功*/ );
      /*查找文件`结束了*/
      _findclose( hFile );
    }/*if*/
  }/*void*/;
  /*文件夹/{ 文件 }; 方法{ 确保s1最后一位是s2()-->新建文件夹(); }*/
  void 封装的新建文件( string path的文件夹部分, string path的文件部分, string 斜杠 ){
    wfzi读取.确保s1最后一位是s2( 斜杠, path的文件夹部分 );
    string s写入文件的完整path = ""; s写入文件的完整path = path的文件夹部分;
    ;/*c*/{ c注释1ζ3 { c注次加; cout4( "<class 文件读写>封装的新建文件夹的path=",path的文件夹部分,", 文件的path=",path的文件部分 ); coutEnd; }/*if*/ }/*c*/
    新建文件夹( s写入文件的完整path, 斜杠 );
    //新建文件
    s写入文件的完整path = path的文件夹部分 + path的文件部分;
    新建文件( s写入文件的完整path );
    ;/*c*/{ c注释1ζ3 { c注次加; cout1( "封装的新建文件()结束",path的文件夹部分,", 文件的path=",path的文件部分 ); coutEnd; }/*if*/ }/*c*/
  }/*void*/; /*用/*/void 封装的新建文件( string p的文件夹, string p的文件 ){ 封装的新建文件( p的文件夹, p的文件, "/" ); }/*void*/;
  /*文件夹/{ 时间; 文件 }*/
  void 封装的新建文件A添加时间文件( string path的文件夹部分, string path的文件部分, string 斜杠 ){
    wfzi读取.确保s1最后一位是s2( 斜杠, path的文件夹部分 );
    string s写入文件的完整path = ""; s写入文件的完整path = path的文件夹部分;
    cout4( "<class 文件读写>封装的新建文件夹的path=", path的文件夹部分, ", 文件的path=", path的文件部分 ); coutEnd;
    新建文件夹( s写入文件的完整path, 斜杠 );
    //新建时间文件
    SYSTEMTIME 时间; uijm.get系统时间( 时间 );
    s写入文件的完整path = path的文件夹部分 + uijm.retSYSTEMTIMETOS_年月日数数秒_数字补到2位( 时间, "" );
    新建文件( s写入文件的完整path );
    //新建文件
    s写入文件的完整path = path的文件夹部分 + path的文件部分;
    新建文件( s写入文件的完整path );
  }/*void*/;
  /*文件夹/{ 时间/; 文件 }*/
  void 封装的新建文件A添加时间文件夹( string path的文件夹部分, string path的文件部分, string 斜杠 ){
    wfzi读取.确保s1最后一位是s2( 斜杠, path的文件夹部分 );
    string s写入文件的完整path = ""; s写入文件的完整path = path的文件夹部分;
    cout4( "<class 文件读写>封装的新建文件夹的path=", path的文件夹部分, ", 文件的path=", path的文件部分 ); coutEnd;
    新建文件夹( s写入文件的完整path, 斜杠 );
    //新建时间文件夹
    SYSTEMTIME 时间; uijm.get系统时间( 时间 );
    s写入文件的完整path = path的文件夹部分 + uijm.retSYSTEMTIMETOS_年月日数数秒_数字补到2位( 时间, "" );
    新建文件夹( s写入文件的完整path, 斜杠 );
    //新建文件
    if( wfzi读取.ifS最后一位是( path的文件夹部分, 斜杠[0] ) ){ s写入文件的完整path = path的文件夹部分 + path的文件部分; } else{ s写入文件的完整path = path的文件夹部分 + 斜杠 + path的文件部分; }/*else*/
    新建文件( s写入文件的完整path );
  }/*void*/;
  /*没测试*/
  void getS其中斜杠替换成_( string& s ){
    struct_pathInfo pI( s );
    pI.getSAppendVs每部分( "_", s );
  }/*void*/;;
  /**/;//▬底层的积木,不用管了,毕竟看不见那么多条目▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
  /**/;//▬新建`删除`文件`path▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
  /**/;//新建
  /*斜杠可能不重要*/
  void 新建文件夹( string 新建要用到的path, string 斜杠 ){
    struct_pathInfo pI( 新建要用到的path );
    ///qmviCout.cVecSize( "新建要用到的path.vs每部分.size()", pI.vs每部分 );
    ///cout1( "\n" ); qmviCout.cVs( " ", pI.vs每部分 );
    ///cout1( "\n" );
    /*每层都新建*/for( size_t i = 0; i < pI.vs每部分.size( ); i++ ){
      string s = ""; for( size_t 行 = 0; 行 <= i; 行++ ){ s.append( pI.vs每部分[行] ).append( 斜杠 ); }/*for;*/_mkdir( s.c_str( ) );
      ///cout3( "新建了path=", s, "\n" );/*后有/也可以*/
    }/*for*/
  }/*void*/;
  void 新建文件( string 新建要用到的path ){
    使用ofstream新建文件( 新建要用到的path );
  }/*void*/;
  auto 简写mkdir( string& 输入 ){ _mkdir( 输入.c_str( ) ); }
  auto 新建path( string& 输入 ){ 简写mkdir( 输入 ); }
  auto 新建文件_无法引用fst( fstream& 输入流存档, string path ){ //?无法引用fst从头覆盖读写( 输入流存档, path ); //输入流存档<<path
    输入流存档.close( );
  }/*auto*/;
  int 使用ofstream新建文件( string path ){/*https://blog.csdn.net/hcf999/article/details/77864456 */
    ofstream ofs新建( path, fstream::out );
    if( ofs新建 ){ ///cout << endl<<"使用ofstream新建文件{ new file created; }" << endl;
      ofs新建.close( );       retu 1;
    }/*if*/;
    retu 0;
  }/*int*/;
  /**/;//删除
  auto 简写rmdir( string& 输入 ){
    _rmdir( 输入.c_str( ) );
  }
  auto 删除path( string& 输入 ){
    简写rmdir( 输入 );
  }/*auto*/ ;
  /*从头覆盖读写*/
  auto 清空( string path ){/*https://blog.csdn.net/weixin_48721345/article/details/131851796 */
    ///新建文件(path);
    ofstream truncateFile( path, ios::trunc );
    truncateFile.close( );
  }/*auto*/
#define 清空文件 清空
  /**/;//if
  /*不能读取=占用*/
  int 文件是否占用( string path ){ //https://blog.csdn.net/fruitz/article/details/41624921>
    ifstream ifs读取( path ); if( !ifs读取 ){ /*占用*/return 1;//或者抛出异常。
    } else{ return 0; }
  }
  /*1=是*/bool 文件是否存在_ifstream( string path ){ ifstream f( path.c_str( ) ); return f.good( );/*没有发生任何错误的时候返回true。*/ } /*<https://blog.csdn.net/QLeelq/article/details/123360740>*/
  /*不存在-->新建*/
  int if没有就新建( string path ){/*if没有T新建,if没有THEN新建*/
    if( 文件是否存在_ifstream( path ) == 0 ){
      /*不存在*/新建文件( path );
      retu 1;/*新建成功*/
    }
    retu 0;/*文件存在*/
  }
  int if没有Z新建( string path ){/*if没有T新建,if没有THEN新建*/
    if( 文件是否存在_ifstream( path ) == 0 ){
      /*不存在*/简写mkdir( path );
      retu 1;/*新建成功*/
    }
    retu 0;/*文件存在*/
  }
  int if没有Z使用ofstream新建文件( string path ){
    if( 文件是否存在_ifstream( path ) == 0 ){
      /*不存在*/使用ofstream新建文件( path );
      retu 1;/*新建成功*/
    }
    retu 0;/*文件存在*/
  }
  int 是否s是空文件( string path ){/*ifPath是空文件*/
    ifstream ifs;
    新s s;
    ///从头读取( ifs, path );
    ifs.open( path );
    ifs >> s;
    if( s == "" ){
      ifs.close( );
      retu 1;/*是空的*/
    }/*if*/
    ifs.close( );
    retu 0;/*不是*/
  }
  /**/;//▬读取文件▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
  //从文件读取一个变量
  void 从文件读取s( string path, std::string& s ){
    ///如果不存在
    if没有就新建( path );
  }/*void*/
  //这两个函数一起可以读取文件中某一特定行，行数line从1开始，Readline返回值为string类型 <https://blog.csdn.net/wq1psa78/article/details/103807227#:~:text=%E8%BF%99%E6%AE%B5%E4%BB%A3%E7%A0%81%E4%B8%BB%E8%A6%81%E5%8A%9F%E8%83%BD%3A%E2%80%83%20-%20%E8%AF%BB%E5%8F%96%E6%96%87%E4%BB%B6%E7%9A%84%E7%AC%ACline%E8%A1%8C%E6%95%B0%E6%8D%AE%2C%E8%BF%94%E5%9B%9Estring%3B%20%E4%BB%A3%E7%A0%81%E5%A6%82%E4%B8%8B%3A%2F%2F%E8%BF%99%E4%B8%A4%E4%B8%AA%E5%87%BD%E6%95%B0%E4%B8%80%E8%B5%B7%E5%8F%AF%E4%BB%A5%E8%AF%BB%E5%8F%96%E6%96%87%E4%BB%B6%E4%B8%AD%E6%9F%90%E4%B8%80%E7%89%B9%E5%AE%9A%E8%A1%8C%EF%BC%8C%E8%A1%8C%E6%95%B0line%E4%BB%8E1%E5%BC%80%E5%A7%8B%EF%BC%8CReadline%E8%BF%94%E5%9B%9E%E5%80%BC%E4%B8%BAstring%E7%B1%BB%E5%9E%8Bint%20CountLines%20%28string%20filename%29,%7B%20ifstream%20ReadFile%3B%20int%20n%3D0%3B%20string%20tmp%3B..._c%2B%2B%20%E6%8C%87%E5%AE%9A%E7%AC%AC%E5%87%A0%E8%A1%8C%E6%96%87%E4%BB%B6%E8%BF%9B%E8%A1%8C%E8%AF%BB%E5%86%99>
  int ret行数( string path ){
    ifstream 读取文件; int 行数 = 0; string tmp; 读取文件.open( path.c_str( ) );//ios::in 表示以只读的方式读取文件
    /*文件打开失败:返回0*/if( 读取文件.fail( ) ){ return 0; } /*文件存在*/else{
      while( getline( 读取文件, tmp, '\n' ) ){ 行数++; }/*while*/
      读取文件.close( );
      return 行数;
    }
  }/*int*/
  string ret读取第几行( string path, int 第几行 ){/*输出{} ret`string*/
    int 最大行数, 行 = 0;
    string strTemp;
    fstream fst;
    fst.open( path.c_str( ) );
    最大行数 = ret行数( path );
    if( 第几行 <= 0 ){ return "Error 1: 行数错误，不能为0或负数。"; }/*if*/
    if( fst.fail( ) ){ return "Error 2: 文件不存在。"; }/*if*/
    if( 第几行 > 最大行数 ){ return "Error 3: 行数超出文件长度。"; }/*if*/
    /*一直getline()*/while( getline( fst, strTemp ) && 行 < 第几行 - 1 ){ 行++; }/*while*/
    fst.close( );
    return strTemp;
  }/*string*/
  string ret读取第几行Ac( string path, int 第几行 ){
    int 最大行数, i = 0;
    string strTemp;
    fstream fst;
    fst.open( path.c_str( ) );
    最大行数 = ret行数( path );

    if( 第几行 <= 0 ){
      return "Error 1: 行数错误，不能为0或负数。";
    }
    if( fst.fail( ) ){
      return "Error 2: 文件不存在。";
    }
    if( 第几行 > 最大行数 ){
      return "Error 3: 行数超出文件长度。";
    }
    /*一直getline()*/while( getline( fst, strTemp ) && i < 第几行 - 1 ){ i++; }
    fst.close( );
    return strTemp;
  }/*string*/
  /**/;//下10个`是一个功能
  /*fs>>一个str, 在"s结果"后面追加, 匹配成功==结束*/
  void get读取到匹配( fstream& fs, string s结果, string 连续匹配词1 ){
    string s读取;
    while( 1 ){
      fs >> s读取;
      /*连续匹配1词*/if( s读取 == 连续匹配词1 ){
        retu;
      }
      /*未终止*/s结果 += s读取;
    }/*while()结束*/
  }
  string ret读取到匹配( fstream& fs, string 连续匹配词1 ){
    string s结果 = "";
    string s读取 = "";
    while( 1 ){
      fs >> s读取;
      /*连续匹配1词*/if( s读取 == 连续匹配词1 ){
        retu s结果;
      }
      /*未终止*/s结果 += s读取;
    }/*while()结束*/
  }
  void get读取到匹配( fstream& fs, string s结果, string 连续匹配词1, string 连续匹配词2 ){
    string s读取;
    while( 1 ){
      fs >> s读取;
      /*连续匹配2词*/if( s读取 == 连续匹配词1 ){
        /*匹配了-->终止*/fs >> s读取; if( s读取 == 连续匹配词2 ){
          return;
        }
        /*第2个不匹配-->s结果+=两个匹配词*/s结果 += 连续匹配词1;
      }
      /*未终止*/s结果 += s读取;
    }/*while()结束*/
  }
  string ret读取到匹配( fstream& fs, string 连续匹配词1, string 连续匹配词2 ){
    string s读取; string s结果;
    while( 1 ){
      fs >> s读取;
      /*连续匹配2词*/if( s读取 == 连续匹配词1 ){
        /*匹配了-->终止*/fs >> s读取; if( s读取 == 连续匹配词2 ){
          return s结果;
        }
        /*第2个不匹配-->s结果+=两个匹配词*/s结果 += 连续匹配词1;
      }
      /*未终止*/s结果 += s读取;
    }/*while()结束*/
  }
  void get读取到匹配( fstream& fs, string s结果, int 读取的最大次数, string 连续匹配词1, string 连续匹配词2 ){
    string s读取;
    for( size_t 读取的次数 = 0; 读取的次数 <= 读取的最大次数; 读取的次数++ ){
      fs >> s读取;
      /*连续匹配2词*/if( s读取 == 连续匹配词1 ){
        /*匹配了-->终止*/fs >> s读取; if( s读取 == 连续匹配词2 ){
          return;
        }
        /*第2个不匹配-->s结果+=两个匹配词*/s结果 += 连续匹配词1;
      }
      /*未终止*/s结果 += s读取;
    }/*for()结束*/
  }
  /*结束的标记="WfDhJxWz",s不+ta,返回str; 读取-->判断-->s+=s*/
  void get读取到结束( fstream& fs, string s结果 ){
    string s读取;
    while( 1 ){
      fs >> s读取;
      if( s读取 == /*结束的标记*/"WfDhJxWz" ){
        retu;
      }
      /*未终止*/s结果 += s读取;
    }/*while()结束*/
  }
  string ret读取到结束( fstream& fs ){
    string s读取 = ""; string s结果 = "";
    while( 1 ){
      fs >> s读取;
      if( s读取 == /*结束的标记*/"WfDhJxWz" ){
        retu s结果;
      }
      /*未终止*/s结果 += s读取;
    }/*while()结束*/
  }
  void get读取到结束( fstream& fs, string s结果, int 读取的最大次数 ){
    string s读取;
    for( size_t 读取的次数 = 0; 读取的次数 <= 读取的最大次数; 读取的次数++ ){
      fs >> s读取;
      if( s读取 == /*结束的标记*/"WfDhJxWz" ){
        retu;
      }
      /*未终止*/s结果 += s读取;
    }/*for()结束*/
  }
  /*读取-->判断; 返回0/1*/
  int get读取and对比( fstream& fs, string s读取, string 匹配词1 ){
    fs >> s读取;
    /*一样*/if( s读取 == 匹配词1 ){
      retu 1;
    }
    ///*用不到这个*/if (s读取 == /*终止了*/"WfDhJxWz") { retu 0; }
    /*不一样*/retu 0;
  }
  int get读取and对比( fstream& fs, string s读取, string 连续匹配词1, string 连续匹配词2 ){
    fs >> s读取;
    /*对比1*/if( s读取 == 连续匹配词1 ){
      /*一样*/fs >> s读取; /*对比2*/if( s读取 == 连续匹配词2 ){
        /*一样*/retu 1;
      }
    }
    /*不一样*/retu 0;
  }
  /*fs>>两个str*/
  int get读取and对比( fstream& fst, string s读取, string s读取2, string 连续匹配词1, string 连续匹配词2 ){
    fst >> s读取;
    /*对比1*/if( s读取 == 连续匹配词1 ){
      /*一样*/fst >> s读取2; /*对比2*/if( s读取 == 连续匹配词2 ){
        /*一样*/retu 1;
      }
    }
    /*不一样*/retu 0;
  }

  /**/;//▬附加功能▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
  void 例子_读取s( ){
    fstream fs; string s读取; string s读取2; int 当前读取词数; int 最大读取词数; int 最大行数;
    从头读取( fs, R"(C:\)" );
    while( 当前读取词数 < 最大读取词数 ){
      fs >> s读取; 当前读取词数++;
    }/*while*/
  }/*void*/
};

//[a.open(b, ios::][a-z]{0,8}[);] 

#endif
