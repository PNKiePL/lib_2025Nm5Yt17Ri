#pragma once
#ifndef WF_ZI_DU_QU_CPP
#define WF_ZI_DU_QU_CPP

//#pragma execution_character_set("utf-8") //中文

#include  <E:\lib\头文件 c++.h>
#include <E:\lib\数字格式.h>
/*?35个报错*///*#include <E:\lib\文件读写.h>

/*todo删掉*/
//#define
///void 替换目标和后面共a个字符(新s 原文,新s 查找,新i a,替换){ 原文.replace(原文.find(查找),a,替换); } //没找到就报错
void 查找前a个字符TO替换( 新s 原文, 新s 查找, 新s 替换, 新i a ){ 原文.replace( 原文.find( 查找 ), a, 替换 ); } //没找到就报错
void 原文前a个字符中查找TO替换( 新s 原文, 新i a, 新s 查找, 新s 替换 ){ 原文.replace( 原文.find( 查找 ), a, 替换 ); } //没找到就报错
////void 原文前a个字符中查找的前b个字符TO替换( 新s 原文, 新i a, 新s 查找, 新i b, 新s 替换 ){ 原文.replace( 原文.find( 查找 ), a, b, 替换 ); } //没找到就报错
//void 替换目标前a个字符中的(新s 原文,新s a,查找,替换){ 原文.replace(原文.begin(),a,查找,替换);}
////void 替换目标前a个字符中的( 新s 原文, 新i a, 新s 查找, 新s 替换 ){ 原文.replace( 原文.begin( ), a, (原文.find( 查找 ), 替换) ); }
////void replace简写(新s 原文,新s 查找,新s 替换){ 原文.replace(原文.begin(),原文.end(),查找,替换);}
////void replace简写( 新s 原文, 新s 查找, 新s 替换 ){ 原文.replace( 原文.begin( ), 原文.end( ), 原文.find( 查找 ), 替换 ); }
////void 用匹配对象的指定子串（从a字符数共b个字符）替换从c到d位置( 新s 原文, 新s 匹配对象, 新i a, 新s b, 新s c, 新s d ){ 原文.replace( c, d, 匹配对象, 匹配对象.find( a ), b ); }
void 用指定子串（从a位置数共b个字符）替换从0到5位置( 新s 原文, 新s 查找, 新s 替换 ){ 原文.replace( 原文.find( 查找 ), 1, "" ); }

//正则
///2023年6月11日 15:21:53 \
[/][/][-]{9,999} --> [/][/][▬]{9,999} \

#define struct_文字读取 文字读取
struct 文字读取 //*:public c注释info
{
public:
  类型转换 lzxy转换;
  数N分<int, 4> 数4分i;
  数N分<int, 5> 数5分i;
  数N分<int, 3> 数6分i;
  //*类型转换 lzxy转换;
public:
  int 汉字宽度 = 2; //占size的位置

  //vector<int> 行数[];
  int 光标位置 = 0, 个数 = 0, 换行 = 0;
  size_t 当前内容的size = 0; /*auto const */ /*string 全部每行的内容[]; string 每行一行的内容; int 这一行每行的内容的光标位置 = 0;*/
  fstream 默认文档;	fstream 匹配词暂存;
  /*int 结果是1就是有t1, 结果是1就是有t2;*/
  vector<vector<string>> 文本属性;

  //行数[0] = 1;

public:
  文字读取( ){
    cout3( "文字读取", "()", "开始" ); coutEnd;

  };
  /*?弃用*/;//▬特化的,cmd指令,简写▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
  /*输出{ i结束的s位=for后的i }*/
  void getS从第几位开始等于s2(/*输入*/新i i初始的s位, 新s s2,/*输出*/新s& s, 新i& i结束的s位 ){/*getS变成adb杠s设备名*/
    int iS下标 = i初始的s位/*iCcp下标*/;
    ///cmd1.set颜色( 100 );coutsf( "getS从第几位开始等于s2{} 新i i初始的s位={},/*输出*/新s &s={},新s2 &s={},", "{",  i初始的s位, s,s2 );coutsf( " {}", "}" ); coutEnd;cmd1.set颜色( 7 ); 
    for( size_t 位/*s2的位*/ = 0; 位 < ((string)s2).size( ); 位++, iS下标++ ){
      s[iS下标] = ((string)s2)[位];
    }/*for*/
    i结束的s位 = iS下标;
  }/*void*/;
  void getS等于xcopyKYES1S2(/*输入*/int& iS下标, 新s s1, 新s s2,/*输出*/新s& s ){/*getS变成adb杠s设备名,getS等于adb杠s设备名,getAdb杠s设备名,getS_adb杠s设备名*/
    getS从第几位开始等于s2( iS下标, "xcopy /k/y/e ", s, iS下标 );
    getS从第几位开始等于s2( iS下标, s1, s, iS下标 );
    getS从第几位开始等于s2( iS下标, " ", s, iS下标 );
    getS从第几位开始等于s2( iS下标, s2, s, iS下标 );
  }/*void*/
  void getS等于xcopyKYE双引号S1双引号双引号S2双引号(/*输入*/int& iS下标, 新s s1, 新s s2,/*输出*/新s& s ){/*getS变成adb杠s设备名,getS等于adb杠s设备名,getAdb杠s设备名,getS_adb杠s设备名*/
    getS从第几位开始等于s2( iS下标, "xcopy /k/y/e ", s, iS下标 );
    getS从第几位开始等于s2( iS下标, R"(")", s, iS下标 );
    getS从第几位开始等于s2( iS下标, s1, s, iS下标 );
    getS从第几位开始等于s2( iS下标, R"(")", s, iS下标 );
    getS从第几位开始等于s2( iS下标, " ", s, iS下标 );
    getS从第几位开始等于s2( iS下标, R"(")", s, iS下标 );
    getS从第几位开始等于s2( iS下标, s2, s, iS下标 );
    getS从第几位开始等于s2( iS下标, R"(")", s, iS下标 );
  }/*void*/
  /**/;//▬文字`修改▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
  ////新i 翻转(新i i, int 位数) {/*https://blog.csdn.net/YMWM_/article/details/115468297>*/
  ////	reverse(i, i + 位数);
  ////	ret i;
  ////}
  auto ret大写TO小写( auto 输入 ){ retu tolower( 输入 ); }
  auto ret小写TO大写( auto 输入 ){ retu toupper( 输入 ); }
  int 如果最后不是斜杠则添加斜杠( 新ccp 输入 ){
    retu 0;
  }/*int*/;
  void get替换斜杠(/*输入*/新s 斜杠改成, int 保证s后是_1是斜杠改成,/*输出*/新s& s输出 ){/*2025年4月12日02:55:44*/
    get把s1的s2改成s3( "/", 斜杠改成, s输出 ); get把s1的s2改成s3( "\\", 斜杠改成, s输出 );
    if( 保证s后是_1是斜杠改成 ){      /*保证s后是斜杠*/确保s1最后一位是s2( 斜杠改成, s输出 ); }/*if*/;
  }/*void*/;
#define 输入斜杠要变成哪一种Z替换斜杠A保证s后是斜杠 替换斜杠A保证s后是斜杠
#define 输入斜杠要变成哪一种Z替换为这种斜杠A保证s后是斜杠 替换斜杠A保证s后是斜杠
  void 替换斜杠A保证s后是斜杠(/*输入*/新s 斜杠改成,/*输出*/新s& s输出 ){
    /*?没尝试*///* /*替换斜杠*/if( 斜杠改成 == "/" ){/*!改成左斜杠*/ get把s1的s2改成s3( "\\", "/", s输出 ); } else if( 斜杠改成 == "\\" ){/*!改成右斜杠*/ get把s1的s2改成s3( "/", "\\", s输出 ); } else{/*!改成<不是斜杠>*/get把s1的s2改成s3( "/", 斜杠改成, s输出 ); get把s1的s2改成s3( "\\", 斜杠改成, s输出 ); }/*else*/;
    get替换斜杠( 斜杠改成, 1, s输出 );
  }/*void*/;
  /**/;//▬▬适用的,文字,if对比`if判断▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
  /**/;//▬输入`文字▬▬▬▬▬▬▬▬▬
  int getline到终止( fstream& fst, string& 读取到的str, string 终止字符 ){
    //getline删末尾的一个==我不用删, 末尾没读取
    /**///>getline终止符==只生效最后一个字符. 不能直接用
    getline( fst, 读取到的str, fst.widen( 终止字符[终止字符.size( ) - 1] ) );
    if( 从右查找str( 读取到的str, 终止字符, 1 ) == 1 ){ //getline会删去末尾
      return 1; //匹配
    }/*if*/
    return 0;
  }/*int*/;
  /*//>修改={文件写入,c}*/
  /**/;//▬cout文字▬▬▬▬▬▬▬▬▬
  /*c多个一样的文字*/
  void coutS( 新s 输入, int 数量 ){
    for( size_t i = 0; i < 数量; i++ ){
      cout << 输入;
    }/*for*/
  }/*void*/;
  void coutI( 新i 输入, int 数量 ){
    for( size_t i = 0; i < 数量; i++ ){
      cout << 输入;
    }/*for*/
  }/*void*/
  void cS( 新s 输入, int 数量 ){
    coutS( 输入, 数量 );
  }/*void*/
  void cI( 新i 输入, int 数量 ){
    coutI( 输入, 数量 );
  }/*void*/
  void 读取一词cout一词( string path, int 显示几行 ){
    新ifs ifs读取;
    新s s读取;
    从头读取( ifs读取, path );
    for( size_t i = 0; i < 显示几行; i++ ){
      ifs读取 >> s读取;
      couta2( s读取, "\n" );
    }/*for*/
    ifs读取.close( );
  }/*void*/;
  void 读取一行cout一行( string path, int 显示几行 ){
    新ifs ifs读取;
    新s s读取;
    从头读取( ifs读取, path );
    for( size_t i = 0; i < 显示几行; i++ ){
      getline( ifs读取, s读取 );
      couta2( s读取, "\n" );
    }/*for*/
    ifs读取.close( );
  }/*void*/;
  /*todo 放在<前置/文字修改>里*/
  /**/;//▬修改s▬▬▬▬
  void get在i前加i(/*输入*/新i 输入, int 在i前添加, int 数量,/*输出*/int& 输出 ){
    int 输入的位数 = 数4分i.ret整数位数( 输入 );
    for( size_t 现在的位数 = 输入的位数; 现在的位数 < 输入的位数 + 在i前添加; 现在的位数++ ){
      输出 += 在i前添加 * pow( 10, 现在的位数 );/*次方 https://blog.csdn.net/2301_82018821/article/details/135305369 */
    }/*for*/;
  }/*void*/;
  void get在s前加s( string 输入, string 加的s, int 加几个, string& 输出 ){
    int 一共增加的字数 = 加几个 * 加的s.size( );
    ///cout3("一共增加的字数=",一共增加的字数, "\n");
    ///cout2("resize", "\n");
    输出.resize( 输入.size( ) + 一共增加的字数 );/*字数*/
    ///cout2("在前面加", "\n");
    /*在前面加s*/
    for( size_t 输出的坐标 = 0, 记录输出的坐标 = 0; 输出的坐标 < 一共增加的字数; 输出的坐标++/* 加的s的坐标 = 0*/ ){
      记录输出的坐标 = 输出的坐标;
      for( size_t 加的s的坐标 = 0; 加的s的坐标 < 加的s.size( ); 输出的坐标++, 加的s的坐标++ ){
        ///cout3("输出的坐标=", 输出的坐标,"\n");
        ///cout3("加的s的坐标=", 加的s的坐标,"\n");
        输出[输出的坐标] = 加的s[加的s的坐标];
      }/*for*/;
      输出的坐标 = 记录输出的坐标;
    }/*for*/;
    /*复制s*/
   ///cout2("复制", "\n");
    for( size_t 输入的坐标 = 0, 输出的坐标 =/*下一个坐标*/一共增加的字数; 输入的坐标 < 输入.size( ); 输入的坐标++, 输出的坐标++ ){
      输出[输出的坐标] = 输入[输入的坐标];
    }/*for*/;
  }/*void*/;
  新s ret翻转( 新s s ){ 新s s结果 = s;   for( size_t 行 = 0, s结果行 = s.size( ); 行 < s.size( ); 行++, s结果行-- ){ s结果[s结果行] = s[行]; }/*for*/;  retu s; }/*新s*/;
#define ret翻转_检测中文 ret翻转_检测2宽字
#define ret翻转_检测宽2字 ret翻转_检测2宽字
  新s ret翻转_检测2宽字( 新s s ){
    新s s结果 = s;   for( size_t 行 = 0, s结果行 = s.size( ); 行 < s.size( ); 行++, s结果行-- ){
      if( char是否占2位( s[行] ) == 1 ){
        /*不翻转这2位*/
        s结果[s结果行 - 1] = s[行];
        s结果[s结果行] = s[行 + 1];
      } else{
        s结果[行] = s[行];
      }/*else*/;
    }/*for*/; retu s;
  }/*新s*/;
  新s reverseS( 新s s ){ reverse( s.begin( ), s.end( ) );    retu s; }/*新s*/;
  /*todo 放在<前置/文字修改>里*/
  /**/;//>▬对比▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
  int 是否s1等于s2( string& s1, string s2 ){/*2025年1月4日14:59:30*/    if( s1 == s2 ){ retu 1; }retu 0; }/*int*/;
  int 是否c是数字( char 输入 ){
    if( (输入 == '0')
      || (输入 == '1')
      || (输入 == '2')
      || (输入 == '3')
      || (输入 == '4')
      || (输入 == '5')
      || (输入 == '6')
      || (输入 == '7')
      || (输入 == '8')
      || (输入 == '9') ){
      retu 1;
    }/*if*/
    retu 0;
  }/*int*/
  int 是否s是数字( string 输入 ){
    for( size_t i = 0; i < 输入.size( ); i++ ){
      if( 是否c是数字( 输入[i] == 0 ) ){
        retu 0;
        break;
      }/*if*/
    }/*for*/
    retu 1;
  }/*int*/
  //ifS1某几位是s2
#define 是否s1从开头等于s2 是否s1首是s2
#define 是否s1从开头包含s2 是否s1首是s2
#define def量的关系 想得的量的关系_1是包含s2_2是等于s2
  /*用{ s1(s2Size).compare s2 }; ret{ 0=不OR没比较(s1更短), 1=是; }*/
  /*例{ 是否s1首是s2("z11mini","z11" ) = 1 }*/
  /*是否短s的首包含长s; 对比方式{ 1是多变少/少; 2是多/少 };*/
  //!是否s1从某下标是s2(s1,s2,i,i)-->{ 是否s1首是s2(s1,s2,i)-->{ 是否s1首包含s2(s1,s2); 是否s1首等于s2(s1,s2); }; };
  //!是否s1从某下标是s2(s1,s2,i,i)-->是否s1首是s2(s1,s2,i)-->是否s1首包含s2(s1,s2); 是否s1首等于s2(s1,s2);
  int 是否s1从某下标是s2( /*输入*/新s s1, 新s s2, int s1的左的起始下标, int def量的关系/*输出*/ ){/*2025年5月4日23:05:56*/
    int iRetu = 0;
    if( /*s1字多*/s1.size( ) >= s2.size( ) and s2.size( ) > 0 ){
      if( s1的左的起始下标 > 0 or def量的关系 == 1 ){/*!是将s1变短*/
        int 裁剪s1的字数 = 0;
        if( s1的左的起始下标 > 0 ){/*!是s1左标>0Z裁剪*/ 裁剪s1的字数 = s1.size( ) - s1的左的起始下标; if( 裁剪s1的字数 < s2.size( ) ){/*!是裁剪的s1更短-->不能比较*/retu iRetu; }/*if*/; }/*if*/;
        if( def量的关系 == 1 ){ 裁剪s1的字数 = s2.size( ); }/*if*/;
        /*裁剪,getS2字数的s1*/s1 = s1.substr( s1的左的起始下标, 裁剪s1的字数 );
      }/*if*/;
      int i返回 = s1.compare( s2 );
      if( i返回 == 0 ){/*2个s相等*/
        iRetu = 1;
      }/*if*/;
    }/*if*/;
    if( iRetu == 0 ){ cout6( "否<", s1, ">的首包含<", s2, ">", endl ); } else if( iRetu == 1 ){ cout6( "是<", s1, ">的首包含<", s2, ">", endl ); }/*else if*/;
    retu iRetu;
  }/*int*/;
  //-->
  int 是否s1首是s2(/*输入*/新s s1, 新s s2, int def量的关系 ){ retu 是否s1从某下标是s2( s1, s2, 0, def量的关系 ); }/*int*/;/*2025年2月25日15:05:22*/
  ;//-->
  int 是否s1首包含s2(/*输入*/新s s1, 新s s2 ){ retu 是否s1从某下标是s2( s1, s2, 0, 1 ); }/*int*/;
  int 是否s1首等于s2(/*输入*/新s s1, 新s s2 ){ retu 是否s1从某下标是s2( s1, s2, 0, 2 ); }/*int*/;
  //OR
#define 是否s包含s 是否s1包含s2
#define 是否s有s 是否s1包含s2
#define 是否s1有s2 是否s1包含s2
#define 是否s有s2 是否s1包含s2
  /*for(){ 是否s1首是s2(右移下标) }*/
  int 是否s1包含s2( string s1, string s2, int  def量的关系 ){/*2025年2月25日17:41:57*/
    /*2025年2月25日18:06:39*//*?无限c空格是因为c注释*/ ///是否c注释 = 1000000;
    函数前( 2, "是否s1包含s2" );
    int iRetu = 0;
    /*开始对比的位数: 0 1 2...*/
#define iS1可操作位数 iS1可右移位数
    int iS1可右移位数 = 0, i函数返回 = 0; string 新的s1 = "";
    ;/*c*/{ c注释1ζ2 { c注空格 c注释次加 /*c*/cout3( "这行是:"," ","if( s1.size( )>=s2.size( ) ){" ); coutEnd; }/*if*/ }/*c*/
    if( s1.size( ) >= s2.size( ) ){
      iS1可右移位数 = s1.size( ) - s2.size( ); ;/*c*/{ c注释1ζ2 { c注空格 c注释次加 /*c*/cout2( "iS1可右移位数=",iS1可右移位数 ); coutEnd; }/*if*/ }/*c*/
      /*for { sub不同位置`相同位数的s1-->对比s2 }*/;/*c*/{ c注释1ζ2 { c注空格 c注释次加 /*c*/cout2( "for"," { " ); coutEnd; }/*if*/ }/*c*/
      for( size_t i右移位数 = 0; i右移位数 < iS1可右移位数; i右移位数++ ){
        i函数返回 = 是否s1从某下标是s2( s1, s2, i右移位数, def量的关系 );
        if( i函数返回 == 1 ){/*!是s1(包含/等于)s2*/ iRetu = 1; break; }/*if*/;
      }/*for*/;;/*c*/{ c注释1ζ2 { c注空格 c注释次加 /*c*/cout1( " }; " ); coutEnd; }/*if*/ }/*c*/
    }/*if*/;
    函数后( 2, "是否s1包含s2" );
    retu iRetu;
  }/*int*/;
  //>是否<某>是v元
#define def要的关系 s和v元的关系_1是s
#define de谁是主要 谁是主要_1是s_2是v元
  //2025年5月2日02:39:10`找z11mini有2个, 应该{ s1找完s2没完也算 }
  /*是否短s的首包含长s*/
  //!for(v){ 是否s1首是s2( v[],s,i ); / 是否s1首是s2( s,v[],i ); };
  //!for(v){ 是否s1首是s2( v[],s,i ); }; / for(v){ 是否s1首是s2( s,v[],i ); };
  /*ret{ 0=没运行, 1=是 }*/
  int 是否s首和v元首是包含关系AGet标( string s1, 新vs v_入, int de谁是主要, int def量的关系,/*!输出*/新vi& v下标_出, 新vs& v元_出 ){/*2025年5月7日18:06:14*/
    int iRetu = 0;
#define 已通过的行的数量 v元_出.size()
#define pushb后的c cout4( "是", v_入[行], "的首包含", s1 ); coutEnd; ///sleep1000;
    if( de谁是主要 == 1 ){
      for( size_t 行 = 0; 行 < v_入.size( ); 行++ ){
        if( 是否s1首是s2( v_入[行], s1, def量的关系 ) == 1 ){/*!是v[]首是s*/
          iRetu = 1; v元_出.push_back( v_入[行] ); v下标_出.push_back( 行 ); ; pushb后的c
        } else{/*否s1首是s2*/
        }/*else*/;
      }/*for*/;
    } else if( de谁是主要 == 2 ){
      for( size_t 行 = 0; 行 < v_入.size( ); 行++ ){
        if( 是否s1首是s2( s1, v_入[行], def量的关系 ) == 1 ){/*!是s首是v[]*/
          iRetu = 1; v元_出.push_back( v_入[行] ); v下标_出.push_back( 行 ); ; pushb后的c
        } else{/*否s1首是s2*/
        }/*else*/;
      }/*for*/;
    }/*else if*/;
    if( 已通过的行的数量 > 1 ){ cout2( "是否v1的元素首是s1()的结果数量=", v元_出.size( ) ); coutEnd; }/*if*/;
#undef 已通过的行的数量
    retu iRetu;
  }/*int*/;
  //-->
  int 是否s的首包含v元AGet标( string s1, 新vs v_入, int def量的关系,/*!输出*/新vi& v下标_出, 新vs& v元_出 ){ retu 是否s首和v元首是包含关系AGet标( s1, v_入, 1, def量的关系, v下标_出, v元_出 ); }/*int*/;
  int 是否v元的首包含sAGet标( 新vs v_入, string s1, int def量的关系,/*!输出*/新vi& v下标_出, 新vs& v元_出 ){ retu 是否s首和v元首是包含关系AGet标( s1, v_入, 2, def量的关系, v下标_出, v元_出 ); }/*int*/;
  ;//-->
  int 是否s的首包含v元AGet标( string s1, 新vs v_入, int def量的关系,/*!输出*/新i& 首个元的下标 ){
    int i函数返回 = 0; 新vi v下标_出; 新vs v元_出; i函数返回 = 是否s的首包含v元AGet标( s1, v_入, def量的关系, v下标_出, v元_出 );
    if( i函数返回 == 1 ){/*!是有元*/ 首个元的下标 = v下标_出[0]; }/*if*/; retu i函数返回;
  }/*int*/;
  int 是否v元的首包含sAGet标( 新vs v_入, string s1, int def量的关系,/*!输出*/新i& 首个元的下标 ){
    int i函数返回 = 0; 新vi v下标_出; 新vs v元_出; i函数返回 = 是否v元的首包含sAGet标( v_入, s1, def量的关系, v下标_出, v元_出 );
    if( i函数返回 == 1 ){/*!是有元*/ 首个元的下标 = v下标_出[0]; }/*if*/; retu i函数返回;
  }/*int*/;
#define 是否s1包含v1的元素 是否s包含v的元素
#define 是否s有v的元素 是否s包含v的元素
#define 是否s1有v1的元素 是否s包含v的元素
  int 是否s包含v的元素( string s1, 新vs v1 ,int def量的关系){/*2025年2月25日18:44:53*/
    int iRetu = 0;
    for( size_t 行 = 0; 行 < v1.size( ); 行++ ){
      if( 是否s1包含s2( s1, v1[行] , def量的关系 ) == 1 ){/*是s1首是s2*/
        iRetu = 1; break;
      } else{/*否s1首是s2*/
      }/*else*/;
    }/*for*/;
    retu iRetu;
  }/*int*/;
  /*ret{ 0=否, 1=是 } */
  int 是否hwnd是v元( HWND hwnd1, 新vhwnd v1){/*2025年5月17日12:05:47*/
    int iRetu = 0;
    for( size_t 一 = 0; 一 < v1.size( ); 一++ ){
      if( hwnd1 == v1[一] ){/*是hwnd*/
        iRetu = 1; break;
      } else{/*否s1首是s2*/
      }/*else*/;
    }/*for*/;
    retu iRetu;
  }/*int*/;

#define 是否s最后一位是 ifS最后一位是
  int ifS最后一位是( string s输入, 新c c ){/*ifs最后一位是c; ifs的size减1位是c;*/    if( s输入[s输入.size( ) - 1] == c ){ retu 1; }/*if*/;   retu 0; }/*int*/;
#define 是否s最后一位是c1或c2 ifS最后一位是c1或c2
  int ifS最后一位是c1或c2( string s输入, 新c c1, 新c c2 ){ if( s输入.size( ) > 0 ){ if( s输入[s输入.size( ) - 1] == c1 ){ retu 1; }/*if*/; if( s输入[s输入.size( ) - 1] == c2 ){ retu 1; }/*if*/; }/*if*/; retu 0; }/*int*/;
  int ifS最后一位是( string s输入, 新ccp ccp匹配词 ){ if( s输入[s输入.size( ) - 1] == ccp匹配词[0] ){ retu 1; }/*if*/;   retu 0; }/*int*/;
  int s最后一位是否是( string s, 新ccp ccp ){ retu ifS最后一位是( s, ccp ); }/*int*/;
  int ifS有c( string& s输入, 新c c ){ for( size_t 行 = 0; 行 < s输入.size( ); 行++ ){ if( s输入[行] == c ){ retu 1; }/*if*/; }/*for*/; retu 0; }/*int*/;
#define 是否s有c ifS有c
  /*ret{ 有=最后(if是)的下标=>=0;无=-1; }*/
  int ifS有cANDret最后if是的下标( string& s输入, 新c c ){/*ifS有c和ret最后if是的下标*/
    int 上次if是的下标 = -1/*上次if是的s行*/;
    for( size_t 行 = 0; 行 < s输入.size( ); 行++ ){ if( s输入[行] == c ){ 上次if是的下标 = 行; }/*if*/; }/*for*/
    retu 上次if是的下标;
  }/*int*/
#define 是否s1等于s2从第几位 是否s1从第几下标开始等于s2
#define 是否s1从第几位等于s2 是否s1从第几下标开始等于s2
#define ifS1从第几位开始等于s2 是否s1从第几下标开始等于s2
#define 是否s1从第几位开始等于s2 是否s1从第几下标开始等于s2
  /*retu{ 0=不等于; 1=等于; 2=s2字更多; 3=s2字更少; */
  int 是否s1从第几下标开始等于s2( string& s1, /*变量*/int iS1的匹配区的左的位, string s2,/*!输出*/新vi& vi在部分相同的s中_s2的第几位不相等 ){/*2025年3月1日19:12:47*/
    size_t /*!定量*/s2行 = 0/*是下标*/, /*!变量*/s1行 = 0;
    int iR = 0; /*从不同下标开始`多次匹配,可能结果多; 但这个函数是"从第几位开始",开始的位是定的;*/vi在部分相同的s中_s2的第几位不相等 = {};
    int 是否2个c相等 = 0;
    //找<s1中的s2> = 是否`最后?位( 在右移 )=s2[] 
    for( s1行 = iS1的匹配区的左的位, s2行 = 0; s1行 < s1.size( ) and s2行 < s2.size( )/*终点不能右移*/; s1行++, s2行++ ){
      if( s1[s1行] == s2[s2行] ){
        是否2个c相等 = 1;
      }/*if*/
      if( s1行 < s1.size( ) - 1 ){/*s1行!=最后一位*/
        if( s2行 < s2.size( ) - 1 ){/*s1行!=最后一位 A s2行!=最后一位*/
          if( 是否2个c相等 == 1 ){ continu; } else{ vi在部分相同的s中_s2的第几位不相等.push_back( s2行 ); iR = 0; break; }/*else*/;
        } else{/*s2行=最后一位*/ if( 是否2个c相等 == 1 ){ iR = 3; break; } else{ vi在部分相同的s中_s2的第几位不相等.push_back( s2行 ); iR = 0; break; }/*else*/; }/*else*/;
      } else{/*s1行=最后一位*/ if( s2行 < s2.size( ) - 1 ){/*s1行=最后一位 A s2行!=最后一位*/
        if( 是否2个c相等 == 1 ){ iR = 2; break; } else{ vi在部分相同的s中_s2的第几位不相等.push_back( s2行 ); iR = 0; break; }/*else*/;
      } else{/*s1行=最后一位 A s2行=最后一位*/ if( 是否2个c相等 == 1 ){ iR = 1; break; } else{ vi在部分相同的s中_s2的第几位不相等.push_back( s2行 ); iR = 0; break; }/*else*/; }/*else*/;
      }/*else*/;
    }/*for*/;
    retu iR;
  }/*int*/;
  //>好几个`没用过
  int 是否s1从第几下标开始等于s2( string& s1, /*变量*/int iS1, string s2/*!输出*/ ){ 新vi vi没用; retu 是否s1从第几位开始等于s2( s1, iS1, s2, vi没用 ); }/*int*/;
  /*没试*/ /*?2025年3月1日16:43:08可能不对*/
  /*retu 1=等于; retu 2=s2.size()>s1.size(); retu 3=s2.size()<s1.size(); retu 0=有字不同; */
  int ifS1从第几位开始等于s2_一种省时间的写法( string& s1, /*变量*/int iS1, string s2 ){
    size_t /*!定量*/s2行 = 0/*是下标*/, /*!变量*/s1行 = 0;
    for( s1行 = iS1, s2行;; ){
      if( /*最后?位=s2[]*/s1[s1行] == s2[s2行] ){
        /*下面是for里的*/
        s1行++;
        if( s1行 < s1.size( ) ){/*s1匹配完*/
          s2行++;
          if( s2行 < s2.size( ) ){/*s2匹配完*/
            retu 1;
          }/*if*/
          retu 3;
        }/*if*/
        s2行++;
        if( s2行 < s2.size( ) ){/*s2匹配完*/
          retu 2;
        }/*if*/
        continu;
      }/*if*/
      retu 0;//*break;
    }/*for*/
  }/*int*/
  /*ret 1/0*/
  /*retu 1=等于; retu 2= s2.size( )>i; retu 3= s2.size( )<i; retu 0=有字不同; */
  int ifS1从末尾左移i位开始等于s2( string s1, int i, string s2 ){
    size_t s1行, s2行;
    if( s2.size( ) > i ){
      for( s1行 = s1.size( ) - i/*s1下标左移i个*/, s2行 = 0; s1行 < s1.size( )/*终点不能右移*/; s1行++, s2行++ ){
        if( /*最后?位=s2[]*/s1[s1行] == s2[s2行] ){
          continu;
        }/*if*/
        retu 0;//*break;
      }/*for*/
      retu 2;/*等于，但是 s2还没完*/
    }/*if*/
    if( s2.size( ) == i ){
      for( s1行 = s1.size( ) - i/*s1下标左移i个*/, s2行 = 0; s1行 < s1.size( ); s1行++, s2行++ ){
        if( /*最后?位=s2[]*/s1[s1行] == s2[s2行] ){
          continu;
        }/*if*/
        retu 0;//*break;
      }/*for*/
      retu 1;/*等于*/
    }/*if*/
    if( s2.size( ) < i ){/*!s2字数<i*/
      for( s1行 = s1.size( ) - i/*s1下标左移i个*/, s2行 = 0; s1行 < s1.size( ) - i + s2.size( )/*终点左移,s1-大字数+小字数*/; s1行++, s2行++ ){
        if( /*最后?位=s2[]*/s1[s1行] == s2[s2行] ){
          continu;
        }/*if*/
        retu 0;//*break;
      }/*for*/
      retu 3;/*等于，但是 s2字数不够*/
    }/*if*/
  }/*int*/
  int 是否s1从末尾左移i位开始等于s2( string s1, string s2, int i ){ retu ifS1从末尾左移i位开始等于s2( s1, i, s2 ); }/*int*/
  int ifS1最后i位是s2( string s1, int i, string s2 ){
    int i结果 = ifS1从末尾左移i位开始等于s2( s1, i, s2 );
    if( i结果 > 0 ){
      retu 1;
    }/*if*/
    retu 0;
  };/*int*/
#define 是否s1最后i位是s2 ifS1最后i位是s2
  /*retu 1/0, retu 2=s1是0个字, retu 3=s2是0个字, retu 4=s2字更多;*/
  int ifS1最后是s2( string s1, string s2 ){/*ifS1最后是s2,retIfS1最后是s2,retuIfS1最后是s2*/
    size_t s1行, s2行;
    /*有些情况会跳过for*/if( s1.size( ) == 0 ){ retu 2; }/*if*/if( s2.size( ) == 0 ){ retu 3; }/*if*/
    if( /*减没了*/s2.size( ) > s1.size( ) ){
      retu 4;
    }/*if*/
    for( s1行 = s1.size( ) - s2.size( )/*s1下标左移s2个*/, s2行 = 0; s1行 < s1.size( ); s1行++, s2行++ ){
      if( /*最后?位=s2[]*/s1[s1行] == s2[s2行] ){
        continu;
      }/*if*/
      retu 0;//*break;
    }/*for*/
    retu 1;
  };/*int*/
  /*retu 1*/
  int 是否s1最后是s2( string s1, string s2 ){ retu ifS1最后是s2( s1, s2 ); }/*int*/;
  //>for从右
  新i 是否s1包含某单字符_从右( 新s s1, 新s s2 ){
    int iR = 0;
    for( size_t 位 = s1.size( ) - 1; 位 >= 0; 位-- ){/*从右找s2[0]*/
      if( s1[位] == s2[0] ){/*是找到*/ iR = 1; retu iR; }/*if*/;
    }/*for*/; retu iR;
  }/*新i*/;
  /*是否s1包含s2_s1从右检测s2, */
  新i 是否s1包含s2_从右( 新s s1, 新s s2 ){
    int iR = 0;
    for( size_t 位 = s1.size( ) - 1; 位 >= 0; 位-- ){/*从右找s2[0]*/
      if( s1[位] == s2[0] ){/*是找到*/ if( 是否s1从第几下标开始等于s2( s1, 位, s2 ) == 1 ){ iR = 1; retu iR; }/*if*/; }/*if*/;
    }/*for*/; retu iR;
  }/*新i*/;
  /*ret{ -1=否找到s2; >=0=s2的左下标; }*/
  新i retS1的某单字符的下标_从右( 新s s1, 新s s2 ){
    ;/*c*/{ c注释1ζ3 { c注次加 /*c*/cout2( "retS1的某单字符的下标_从右()开始: 位=",s1.size( ) - 1 );  coutEnd; }/*if*/; }/*c*/;
    int iR = -1;
    for( size_t 位 = s1.size( ) - 1; 位 >= 0; 位-- ){/*从右找s2[0]*/
      if( s1[位] == s2[0] ){/*是找到*/ iR = 位; retu iR; }/*if*/;
    }/*for*/;;/*c*/{ c注释1ζ3 { c注次加 /*c*/cout4( "retS1的某单字符的下标_从右: s1的",s2,"的下标=",iR );  coutEnd; }/*if*/; }/*c*/;
    retu iR;
  }/*新i*/;
  /*ret{ -1=否找到s2; >=0=s2的左下标; }*/
  新i retS1的s2的左下标_从右( 新s s1, 新s s2 ){/*2025年4月15日16:19:06*/
    int iR = -1;
    for( size_t 位 = s1.size( ) - 1; 位 >= 0; 位-- ){/*从右找s2[0]*/
      if( s1[位] == s2[0] ){/*是找到*/ if( 是否s1从第几下标开始等于s2( s1, 位, s2 ) == 1 ){ iR = 位; retu iR; }/*if*/; }/*if*/;
    }/*for*/; retu iR;
  }/*新i*/;
  /*?getline得到的s匹配不到vs[]*/
  int ifS1等于vs的某个元素( /*!输入*/string s1, 新vs& vs ){/*2025年1月4日15:00:57*/
    for( size_t 行 = 0; 行 < vs.size( ); 行++ ){
      if( s1 == vs[行] ){ retu 1; }
    }/*for*/
    retu 0;
  }/*int*/
   /*2025年1月16日23:45:50*//*?s1末尾=\时,行=0直接ret1;*/
  int 是否s1最后是vs的某个元素( /*!输入*/string s1, 新vs& v ){
    for( size_t 行 = 0; 行 < v.size( ); 行++ ){
      if( 是否s1最后是s2( s1, v[行] ) == 1 ){/*对一个 or 全不对*//*?不是==1?*/
        cout8( "行=", 行, ",s1=", s1, ",v[行]=", v[行], "是否s1最后是s2(s1,v[行])=", 是否s1最后是s2( s1, v[行] ) ); coutEnd;
        retu 1;
      }/*if*/
    }/*for*/
    retu 0;
  };/*int*/
  /*输入{ &s,"s" }; s2字数更少; ret{ retu 2=s2字更多; };*/
  int s1平行匹配s2Ret0或1_s2字数应更少( /*!输入*/string& s1, string s2 ){/*s1逐字if等于s2逐字*/    if( s1.size( ) < s2.size( ) ){ retu 2; }/*if*/;   if( 逐字匹配str( s1, s2 ) > 0 ){ retu 1; }/*if*/;   retu 0; }/*int*/
  /*重复-if s[i]=s[i],`从头*/
  int 逐字匹配str( string& 读取到的str, string 匹配str ){
    if( 读取到的str.size( ) >= 匹配str.size( ) ){ //字数足够
      //"匹配str"的字数
      size_t 第几个字 = 0;
      //for "s匹配,"的字数,条件必须是匹配的坐标<匹配的size
      for( 第几个字 = 0; 第几个字 < 匹配str.size( ); 第几个字++ ){
        if( 读取到的str[第几个字] == 匹配str[第几个字] ){ //匹配-->匹配下一个字
        } else{ //不匹配-->break
          return 0; //失败
        }/*else*/
      }/*for*/
      return 第几个字; //成立,ret下一个字的坐标
    }/*if*/
    retu - 1;/*读取到的str`字数不够*/
  }/*int*/
  int 逐字匹配str( string& s输入, string s匹配, int 从第几个字开始 ){
    if( s输入.size( ) >= s匹配.size( ) ){ //字数足够
      //for "s匹配,"的字数,条件必须是匹配的坐标<匹配的size
      size_t 第几个字 = 0;
      for( 第几个字 = 从第几个字开始; 第几个字 < s匹配.size( ); 第几个字++ ){
        if( s输入[第几个字] == s匹配[第几个字] ){ //匹配-->匹配下一个字
        } else{ //不匹配-->break
          return 0; //失败
        }/*else*/
      }/*for*/
      return 第几个字; //成立,ret下一个字的坐标
    }/*if*/
    retu - 1;/*s输入`字数不够*/
  }/*int*/
  int 逐字匹配str( string& s输入, int 源_从第几个字开始, string s匹配, int 匹配_从第几个字开始 ){
    if( s输入.size( ) >= s匹配.size( ) ){ //字数足够
      size_t 源_第几个字, 匹配_第几个字;
      //>for "s匹配,"的字数,条件必须是匹配的坐标<匹配的size
      for( 源_第几个字 = 源_从第几个字开始, 匹配_第几个字 = 匹配_从第几个字开始; 匹配_第几个字 < s匹配.size( ); 源_第几个字++, 匹配_第几个字++ ){
        if( s输入[源_第几个字] == s匹配[匹配_第几个字] ){ //匹配-->匹配下一个字
        } else{ //不匹配-->break
          return 0; //失败
        }/*else*/
      }/*for*/
      return 源_第几个字; //成立,ret下一个字的坐标
    }/*if*/
    retu - 1;/*s输入`字数不够*/
  }/*int*/
   /*if v1[1]=v2[1]*/
  int 逐字匹配str(/*输入*/新vs& vs读取到的str, 新vs& vs匹配str ){
    int 这一行的结果;
    size_t 行数 = 0;
    for( 行数 = 0; 行数 < vs匹配str.size( ); 行数++ ){
      这一行的结果 = 逐字匹配str( vs读取到的str[行数], vs匹配str[行数] );
      if( 这一行的结果 == 0 ){
        /*!输出*/retu 这一行的结果;
      }
      if( 这一行的结果 == -1 ){
        /*!输出*/retu 这一行的结果;/*读取到的str`字数不够*/
      }
    }
    return 行数; //成立`下一行的坐标
  }/*int*/
  int 从右查找str( string str, string s查找内容, int 查找内容末尾的忽略字数 ){ //从后/右,有没有这个字, 匹配次数=字符数量, 从右 逐字匹配
    for( size_t i = 1; i <= /*s查找内容`字符数*/s查找内容.size( ) - 查找内容末尾的忽略字数; i++ ){
      /*有个字不同*/if( str[str.size( ) - i] != s查找内容[s查找内容.size( ) - i - 查找内容末尾的忽略字数] ){
        return 0; //不对
      }
    }
    return 1; //对了
  }
  /**/;//判断
  int char是否占2位( char 输入 ){/*中文*/
    if( 输入 > 0 && 输入 < 255 ){
      return 0;/*不是*/
    }
    char c;
    while( 1 ){
      c = 输入++;/*检测下一位*/
      if( c == 0 ) break;  //如果到字符串尾则说明该字符串没有中文字符
      if( c & 0x80 )        //如果字符高位为1且下一字符高位也是1则有中文字符
        if( 输入 & 0x80 ) return 1;/*是*/
    }
    return 0;/*不是*/
  }
#define retChar是否占2位 char是否占2位
#define 是否char占2位 char是否占2位
#define ret是否char占2位 char是否占2位
  int char是否是中文( char 输入 ){/*中文*/
    return char是否占2位( 输入 );
  }
  /*todo 没*/
  int char是否有中文( char 输入 ){/*中文*/
    return char是否占2位( 输入 );
  }
  /**/;//>▬对比+修改▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
#define get把s的c1改成c2ANDget上1次修改的下标 get把s的c1改成c2_get上1次修改的下标
#define get把s的c1改成c2AGet上1次修改的下标 get把s的c1改成c2_get上1次修改的下标
  int get把s的c1改成c2_get上1次修改的下标( 新c c1, 新c c2,/*!输出*/string& s输入, int& 上1次修改的下标 ){
    int 上次if是的行 = -1;
    for( size_t 行 = 0; 行 < s输入.size( ); 行++ ){
      if( s输入[行] == c1 ){ s输入[行] = c2; 上次if是的行 = 行; }/*if*/
    }/*for*/cout1( "get把s的c1改成c2`for完\n" );
    if( 上次if是的行 == -1 ){/*未*/
      retu 0;
    }
    上1次修改的下标 = 上次if是的行;
    retu 1;
  }/*int*/
  /*ret{ 有=最后(if是)的下标;无=-1; }*/
  int get把s的c1改成c2ANDret最后if是的下标( 新c c1, 新c c2,/*!输出*/string& s输入 ){
    cout5( "get把s的c1改成c2`输入{ ", c1, ",", c2, " }\n" );
    int 上次if是的下标 = -1;
    for( size_t 行 = 0; 行 < s输入.size( ); 行++ ){
      if( s输入[行] == c1 ){ s输入[行] = c2; 上次if是的下标 = 行; }/*if*/
    }/*for*/cout1( "get把s的c1改成c2`for完\n" );
    retu 上次if是的下标;
  }/*int*/
  void 确保s1最后一位是c( 新c c,/*!输出*/string& s1 ){ if( ifS最后一位是( s1, c ) != 1 ){ s1 = s1 + lzxy转换.一位charTOs( c ); }/*if*/; }/*void*/;
  void 确保s1最后一位是s2( 新s s2,/*!输出*/string& s1 ){ if( ifS最后一位是( s1, s2[0] ) != 1 ){ s1 = s1 + s2; }/*if*/; }/*void*/;
  void 确保s1最后一位是c1或c2( 新c c1, 新c c2,/*!输出*/string& s1 ){ if( 是否s最后一位是c1或c2( s1, c1, c2 ) == 0 ){/*不是c1或c2*/ s1 = s1 + lzxy转换.一位charTOs( c1 ); }/*if*/; }/*void*/;
  void 确保s1最后一位是斜杠( /*!输出*/string& s1 ){ 确保s1最后一位是c1或c2( '/', '\\', s1 ); }/*void*/;
  void 确保s1最后一位不是斜杠( /*!输出*/string& s1 ){ ifS1最后一位是c1或c2Z删掉( '/', '\\', s1 ); }/*void*/;
#define 如果s1最后一位是c1或c2Z删掉 ifS1最后一位是c1或c2Z删掉
  void ifS1最后一位是c1或c2Z删掉( 新c c1, 新c c2,/*!输出*/string& s1 ){ if( 是否s最后一位是c1或c2( s1, c1, c2 ) == 1 ){/*不是c1或c2*/ s1 = s1.substr( 0, s1.size( ) - 1 ); }/*if*/; }/*void*/;
#define 如果s1最后一位是s2或s3Z删掉 ifS1最后一位是s2或s3Z删掉
  void ifS1最后一位是s2或s3Z删掉( 新s s2, 新s s3,/*!输出*/string& s1 ){ if( 是否s最后一位是c1或c2( s1, s2[0], s3[0] ) == 1 ){/*不是c1或c2*/ s1 = s1.substr( 0, s1.size( ) - 1 ); }/*if*/; }/*void*/;
#define get把s的c1改成c2 get把s1的c2改成c3
#define get把s的c2改成c3 get把s1的c2改成c3
  int get把s1的c2改成c3( char c2, char c3, string& s1 ){ int iR = 0; for( size_t 行 = 0; 行 < s1.size( ); 行++ ){ if( s1[行] == c2 ){ s1[行] = c3; iR = 1; }/*if*/; }/*for*/; retu iR; }/*int*/;
  void get把s1的一位s2改成一位s3( 新s s2, 新s s3, string& s1 ){ get把s1的c2改成c3( s2[0], s3[0],/*!输出*/s1 ); }/*void*/;
#define get删除s1的从第几下标含该下标开始的几个字 get删除s1的从第几下标开始的几个字
#define get删除s1的从第几下标开始的几个字_含该下标 get删除s1的从第几下标开始的几个字
#define getS1删除从第几下标开始的几个字 get删除s1的从第几下标开始的几个字
  /*含该下标, "121",输入{ 1,1 }="11"*/
  void get删除s1的从第几下标开始的几个字( int 开始, int 删几个, string& s1 ){
    ///for( size_t 位 = 开始; 位 < (开始+删几个); 位++ ){ }/*for*/
    /*substr示例*/
    /*get中间*////s1 = s1.substr( 开始,删几个 );
    /*get两边,再s+s*/s1 = (s1.substr( 0, 开始 + 1 ) + s1.substr( 开始 + 删几个, s1.size( ) ));
    cout4( "s1拆为s1=", s1.substr( 0, 开始 )
      , ",s1拆为s2=", s1.substr( 开始 + 删几个, s1.size( ) ) ); coutEnd;
  }/*void*/
  /*"111",输入{ 1,"222" }="122211"*/
  void get在s1的第几下标加上s2( int 开始, string s2, string& s1 ){
    新s s1拆为s1, s1拆为s2;
    s1拆为s1 = s1.substr( 0, 开始 ); s1拆为s2 = s1.substr( 开始, s1.size( ) );
    /*get两边,再s+s+s*/s1 = s1拆为s1 + s2 + s1拆为s2;
    cout6( "s1拆为s1=", s1拆为s1, ",s1拆为s2=", s1拆为s2, ",结果s1=", s1 ); coutEnd;
  }/*void*/
  int get把s1的s2改成s3( string s2, string s3, string& s1 ){
    int iR = 0;
    for( size_t 行 = 0; 行 < s1.size( ); 行++ ){
      int i开始行动的下标 = 是否s1从第几下标开始等于s2( s1, 行, s2 );   if( i开始行动的下标 == 1 or i开始行动的下标 == 3 ){/*等于s2-->改成s3*/
        if( s2.size( ) == s3.size( ) ){ getS1从第几下标开始等于s2( s3, 行, s1 ); } else{
          /*else*/ /*删除s2*/get删除s1的从第几下标开始的几个字( 行, s2.size( ), s1 ); /*加上s3*/get在s1的第几下标加上s2( 行, s3, s1 );
          iR = 1;
        }/*else*/;
      }/*if*/
    }/*for*/;
    retu iR;
  }/*int*/;
  void getS1从第几下标开始等于s2( /*!输入*//*定量*/ /*变量*/string s2, int i, /*!输出*/string& s1 ){ /*cout1( "getS1从第几下标开始等于s2"); coutEnd;*/for( size_t 行 = i, s2行 = 0; (行 < s1.size( ) and s2行 < s2.size( )); 行++, s2行++ ){ s1[行] = s2[s2行]; } }/*void*/
  新s ret删掉s最后一位( string s输入 ){
    新s s结果;
    s结果.resize( s输入.size( ) - 1 );/*调整容量*/
    /*复制数据*/
    for( size_t s中字的位置 = 0; s中字的位置 < s输入.size( ) - 1; s中字的位置++ ){ s结果[s中字的位置] = s输入[s中字的位置]; }/*for*/
    retu s结果;
  }/*新s*/
  新void get删掉s最后一位( /*!输入*/string s输入, /*!输出*/string& s输出 ){
    s输出.resize( s输入.size( ) - 1 );/*调整容量*/
    /*复制数据*/
    for( size_t s中字的位置 = 0; s中字的位置 < s输入.size( ) - 1; s中字的位置++ ){ s输出[s中字的位置] = s输入[s中字的位置]; }/*for*/
  }/*新void*/
#define getSIfS末尾是cZ删除c   ifS末尾是cZ删除c
#define ifS末尾是cZ删除cGetS   ifS末尾是cZ删除c
#define ifS末尾是cZ删除cAGetS  ifS末尾是cZ删除c
#define ifS末尾是c则删除cAGetS ifS末尾是cZ删除c

#define getSForIfS末尾是cZ删除c   forIfS末尾是cZ删除c
#define forIfS末尾是cZ删除cGetS   forIfS末尾是cZ删除c
#define forIfS末尾是cZ删除cAGetS  forIfS末尾是cZ删除c
#define ifS末尾是c则删除cAGetS forIfS末尾是cZ删除c
#define get删除s末尾的c forIfS末尾是cZ删除c
#define getS删除s末尾的c forIfS末尾是cZ删除c
#define getS_删除s末尾的c forIfS末尾是cZ删除c
  /*删除s末尾的c*/
  void forIfS末尾是cZ删除c( int 最大for次数, char c1, /*!输出*/string& s1 ){
    for( size_t i = 0; i < 最大for次数; i++ ){
      if( /*是/*/s1[s1.size( ) - 1] == c1 ){/*是-->删除*/ /*get删除s1的从第几下标开始的几个字( s1.size( )-1, 1, s1 )*/get删掉s最后一位( s1, s1 ); } else{/*否-->结束*/ breakFor; }/*else*/;
    }/*for*/;
    retu;
  }/*void*/;
  void forIfS末尾是cZ删除c( int 最大for次数, char c1, char c2,/*!输出*/string& s1 ){
    for( size_t i = 0; i < 最大for次数; i++ ){
      if( /*是/or\*/s1[s1.size( ) - 1] == c1 or s1[s1.size( ) - 1] == c2 ){/*是-->删除*/ get删掉s最后一位( s1, s1 ); } else{/*否-->结束*/  breakFor; }/*else*/;
    }/*for*/;
  }/*void*/;
  void forIfS末尾是cZ删除c( string s1, int 最大for次数, char c1, /*!输出*/string& s2 ){ s2 = s1; forIfS末尾是cZ删除c( 最大for次数, c1, s2 ); }/*void*/;
  void forIfS末尾是cZ删除c( string s1, int 最大for次数, char c1, char c2, /*!输出*/string& s2 ){ s2 = s1; forIfS末尾是cZ删除c( 最大for次数, c1, c2, s2 ); }/*void*/;
  /*12345输入3=1245*/
  void getS指定下标后的s前移(/*!输入*/int 下标, string& s ){/*可以*/
    /*?删了2个字,多删了前面一位*//*?E:/vs-->/vs*/
    //*for( size_t s位 = 下标+1; s位<s.size( ); s位++ ){
    //*  s[下标-1]=s[下标];/*前=后*/
    //*}/*for*/
    //*s=s.substr( 0,s.size( )-1);/*删末尾*/
    string s1, s2;
    s1 = s.substr( 0, 下标/*!这个不是下标,是字数=下标+1*/ )/*之前*/;
    s2 = s.substr( 下标 + 1, s.size( ) - 下标 - 1 )/*之后*/;
    ///cout1( "getS指定下标后的s前移{" );cout1( " " );cout1( "下标之前=" ); cout1( s1 ); cout1( "," ); cout1( "下标之后=" ); cout1( s2 );cout1( " " );cout1( "}" ); 
    s = s1 + s2;
  }/*void*/
  /*好傻*/string retS指定下标后的s前移(/*!输入*/string s, int 下标 ){
    for( size_t s位 = 下标 + 1; s位 < s.size( ); s位++ ){
      s[下标 - 1] = s[下标];/*前=后*/
    }/*for*/
    s = s.substr( 0, s.size( ) - 1 );
    retu s;
  }/*string*/
  void getS指定下标后的s前移(/*!输入*/string s, int 下标,/*!输出*/string& s结果 ){/*可以*/
    string s1, s2;
    s1 = s.substr( 0, 下标/*!这个不是下标,是字数=下标+1*/ )/*之前*/;
    s2 = s.substr( 下标 + 1, s.size( ) - 下标 - 1 )/*之后*/;
    ///cout1( "getS指定下标后的s前移{" );cout1( " " );cout1( "下标之前=" ); cout1( s1 ); cout1( "," ); cout1( "下标之后=" ); cout1( s2 );cout1( " " );cout1( "}" ) ;cout1( ";" ); 
    s结果 = s1 + s2;/*可以*/
    ///cout1( "getS指定下标后的s前移{" );cout1( " " );cout1( "s结果=" ); cout1( s结果 );cout1( " " );cout1( "}" ) ;cout1( ";" ); 
  }/*void*/
  /*todo*/void getS删掉其中的s1(/*!输入*/string s1, string s2,/*!输出*/string& s ){ }/*void*/
  /*todo*/void getS删掉其中的s1(/*!输入*/string s1,/*!输出*/string& s ){ }/*void*/
  void getS删掉其中的char(/*!输入*/char c,/*!输出*/string& s ){
    for( size_t 位 = 0; 位 < s.size( ); 位++ ){
      if( s[位] == c ){
        /*删掉这一位字,s=前+后*/
        ///cout1("if( s[位]==c ) = ");cout5("if( ",s[位],"==",c," )\n");
        getS指定下标后的s前移( 位, s );///s[位] = s[位+1];
      }/*if*/
    }
  }/*void*/
  void getS删掉其中的char(/*!输入*/string s, char c,/*!输出*/string& s结果 ){/*?////*/
    s结果 = s;
    for( size_t 位 = 0; 位 < s.size( ); 位++ ){
      if( s[位] == c ){
        /*删掉这一位字,s=前+后*/
        getS指定下标后的s前移( s, 位, s结果 );
        ///cout1("getS删掉其中的char{ ");cout5("s=",s,",s结果=",s结果," }\n");/*可以*/
      }/*if*/
    }
  }/*void*/
#define getS删掉其中的一位char getS删掉其中的char
  /*删掉s中的所有s1,s1是一位的s*/
  void getS删掉其中的一位s1(/*!输入*/string s1,/*!输出*/string& s ){ getS删掉其中的char( s1[0], s ); }/*void*/
  void getS删掉其中的一位s1(/*!输入*/string s, string s1,/*!输出*/string& s结果 ){
    getS删掉其中的char( s, s1[0], s结果 );
    ///cout1("  ");cout1("getS删掉其中的一位s1{ ");cout5("s=",s,",s结果=",s结果," }\n");/*?s没变*/
  }/*void*/
  /*跳过前几个字`复制一个s*/
  新s ret删掉s前几个字( string s输入, int 几 ){
    ///couta3("删掉之前s=", s输入, "\n");
    新s s结果;
    s结果.resize( s输入.size( ) );/*调整容量*/
    /*复制后面的字*/
    for( size_t s中字的位置 = 几; s中字的位置 < s输入.size( ); s中字的位置++ ){
      s结果[s中字的位置] = s输入[s中字的位置];
    }/*for*/
     ///couta3("删掉之后s=", s结果, "\n");
    retu s结果;
  }
  新s ret删掉s前几位_坐标( string s输入, int 几 ){
    ///couta3("删掉之前s=", s输入, "\n");
    新s s结果;
    s结果.resize( s输入.size( ) );/*调整容量*/
    /*复制后面的字*/
    for( size_t s中字的位置 = 几 + 1; s中字的位置 < s输入.size( ); s中字的位置++ ){
      s结果[s中字的位置] = s输入[s中字的位置];
    }/*for*/
     ///couta3("删掉之后s=", s结果, "\n");
    retu s结果;
  }
  void get裁剪( string s输入, int 开始的字的坐标, int 结束的字的坐标, string& s输出 ){ }
  void get裁剪( string s输入, int 删掉前几个字, string& s输出 ){
    ///couta3("删掉之前s=", s输入, "\n");
    s输出 = ret删掉s前几个字( s输入, 删掉前几个字 );
    ///couta3("删掉之后s=", s输入, "\n");
  }
  /**/;//对比-->行动
  void 如果s是aThen改成b( 新s s, 新s a, 新s b ){/*如果s是Athen改成B*/
    if( s == a ){
      s = b;
    }
  }
  /**/;//判断-->行动
  int ret如果i不够几位THEN在i前补齐加i(/*输入*/新i 输入, int 至少位数, int 在i前添加 ){
    int 输入的位数 = 数4分i.ret整数位数( 输入 );
    int 差多少位/*= 宽度-x*/ = 至少位数 - 输入的位数;
    int 结果 = 输入;
    if( 差多少位 > 0 ){
      ///*补齐*/cout空格(差多少空格);
      /*现在的位数=本来的位数+1,循环到至少位数-1*/
      for( size_t 现在的位数 = 输入的位数; 现在的位数 < 至少位数; 现在的位数++ ){
        结果 += 在i前添加 * pow( 10, 现在的位数 );/*次方 https://blog.csdn.net/2301_82018821/article/details/135305369 */
      }/*for*/
    }/*if*/
    retu 结果;
  }
  int ret如果数字不够几位THEN在数字前补齐加数字(/*输入*/新i 输入, int 至少位数, int 在i前添加 ){
    retu ret如果i不够几位THEN在i前补齐加i( 输入, 至少位数, 在i前添加 );
  }
  string ret转s_如果i不够几位THEN在i前补齐加i(/*输入*/新i 输入, int 至少位数, int 在i前添加 ){
    ////retu to_string( ret如果i不够几位THEN在i前补齐加i(输入,至少位数,在i前添加));
    int 输入的位数 = 数4分i.ret整数位数( 输入 );
    int 差多少位/*= 宽度-x*/ = 至少位数 - 输入的位数;
    if( 差多少位 > 0 ){/*改,差多少位=还差多少个字*/
      if( 在i前添加 == 0 ){/*0不能乘-->直接改s*/
        string( s结果 );
        get在s前加s( to_string( 输入 ), to_string( 在i前添加 ), 差多少位, s结果 );
        retu( s结果 );
      }/*if*/
      int 结果 = 输入;
      ///*补齐*/cout空格(差多少空格);
      /*现在的位数=本来的位数+1,循环到至少位数-1*/
      for( size_t 现在的位数 = 输入的位数; 现在的位数 < 至少位数; 现在的位数++ ){
        结果 += 在i前添加 * pow( 10, 现在的位数 );/*次方 https://blog.csdn.net/2301_82018821/article/details/135305369 */
      }/*for*/
      retu to_string( 结果 );
    }/*if*/
    retu to_string( 输入 );/*不需要改*/
  }
  string ret转s_如果i不够几位THEN在i前补齐加s(/*输入*/新i 输入, int 至少位数, string 在i前添加 ){
    ////retu to_string( ret如果i不够几位THEN在i前补齐加i(输入,至少位数,在i前添加));
    int 输入的位数 = 数4分i.ret整数位数( 输入 );
    int 差多少位/*= 宽度-x*/ = 至少位数 - 输入的位数;
    int 结果 = 输入;
    if( 差多少位 > 0 ){
      string( s结果 );
      get在s前加s( to_string( 输入 ), 在i前添加, 差多少位, s结果 );
      retu( s结果 );
    }/*if*/
    retu to_string( 结果 );
  }
  VOID 如果i不够几位THEN补齐ANDcI(/*输入*/新i 输入, int 至少位数, int coutInt ){/*如果i不够几位THEN补齐cI*/
    int 输入的位数 = 数4分i.ret整数位数( 输入 );
    int 差多少位/*= 宽度-x*/ = 至少位数 - 输入的位数;
    if( 差多少位 > 0 ){
      /*补齐*/coutI( 0, 差多少位 );
    }/*if*/
  }
  VOID 如果i不够几位THEN在i前补齐ANDcI(/*输入*/新i 输入, int 至少位数, int coutInt ){/*如果i不够几位THEN在i前补齐cI*/
    int 输入的位数 = 数4分i.ret整数位数( 输入 );
    int 差多少位/*= 宽度-x*/ = 至少位数 - 输入的位数;
    if( 差多少位 > 0 ){
      /*补齐*/coutI( 0, 差多少位 );
    }/*if*/
    cout1( 输入 );
  }
  /**///▬正则▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
  /*我一次都没用过*/
  auto r替换( string input, string 匹配, string 替换 ){ return regex_replace( input, regex( 匹配 ), 替换 ); }
  auto r全文匹配( string input, string 匹配 ){ smatch what;    return regex_match( input, what, regex( 匹配 ) ); }
  auto r匹配( string input, string 匹配 ){ smatch what;    return regex_search( input, what, regex( 匹配 ) );    cout << "position   " + what.position( 0 ) << "\n"; }
  auto r迭代器匹配( string 输入, string 匹配 ){
    int 次数 = 0;
    string::const_iterator iterStart = 输入.begin( ); //迭代器声明
    string::const_iterator iterEnd = 输入.end( );
    smatch results;
    string temp;
    int 只执行一次 = 0;
    while( regex_search( iterStart, iterEnd, results, regex( 匹配 ) ) ){
      if( 只执行一次 == 0 ){
        cout << "有"; 只执行一次 += 1;
      }
      temp = results[0];
      cout << 次数 + "   " + temp << "\n";;
      cout << "position   " + results.position( 次数 ) << "\n";
      次数++;
      iterStart = results[0].second; //更新搜索起始位置，搜索剩下的字符串
    }
    cout << "\n";
  }
  /**/;//▬vec▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
  /**/;//vec`c
  template<typename 类型> void coutvec( vector<类型>& vec ){
    for( size_t i = 0; i < vec.size( ); i++ ){
      cout << std::format( "第{}行: ", i );
      cout << std::format( "{}\n", vec[i] );
    }
  }
  template<typename 类型> void cout二维vec( vector<vector<类型>>& vec, int 一行几个量 ){
    for( size_t i = 0; i < vec.size( ); i++ ){
      cout << std::format( "第{}行: ", i );
      for( size_t 行 = 0; 行 < 一行几个量; 行++ ){
        cout << std::format( "{}; ", vec[i][行] );
      }
      //一行完
      cout << std::format( "\n" );
    }
  }
  /**/;//vec`行动
  //我在看/*找到一样的-->改名`在后面加上数字-->*/
  /*for(v){for(v){如果有重复的，在后面加上数字; 数字++}}*/
  void getvecs去重_加数字( vector<string >& vecs ){ //改名append数字
    int 数字;
    for( size_t 序号 = 0; 序号 < vecs.size( ); 序号++ ){
      数字 = 2; //起始
      for( size_t 序号2 = 序号 + 1; 序号2 < vecs.size( ); 序号2++ ){
        //找到一样的-->改名-->
        if( vecs[序号] == vecs[序号2] ){
          vecs[序号2] = vecs[序号2].append( to_string( 数字 ) ); 数字++;
        }
      }
    }/*for*/
  }
  void getvecs去重_加数字( vector<string >& vecs, int 从哪行开始 ){
    int 数字;
    for( size_t 序号 = 从哪行开始; 序号 < vecs.size( ); 序号++ ){
      数字 = 2; //起始
      for( size_t 序号2 = 序号 + 1; 序号2 < vecs.size( ); 序号2++ ){
        //找到一样的-->改名-->
        if( vecs[序号] == vecs[序号2] ){
          vecs[序号2] = vecs[序号2].append( to_string( 数字 ) ); 数字++;
        }
      }
    }
  }
  void get二维vecs去重_加数字( vector<vector<string >>& vecs, int 对比几列 ){
    int 第几次遇到 = 2;
    for( size_t 列序号 = 0; 列序号 < 对比几列; 列序号++ ){ //列内
      for( size_t 行序号 = 0; 行序号 < vecs.size( ); 行序号++ ){ //行内
        第几次遇到 = 2; //?每次都是3
        //>用值,向后对比. 和下面每列的值对比
        for( size_t 行序号2 = 行序号 + 1; 行序号2 < vecs.size( ); 行序号2++ ){
          //找到一样的-->改名-->
          //>两个值:行不一样, 列一样
          if( vecs[行序号2][列序号] == vecs[行序号][列序号] ){ ///if (vecs[行序号2][序号].compare(vecs[行序号][序号])) {
            vecs[行序号2][列序号] = vecs[行序号][列序号].append( to_string( 第几次遇到 ) ); 第几次遇到 += 1;
            ////vecs[行序号2][列序号] = vecs[行序号][列序号].append(to_string( stoi( vecs[行序号][列序号].substr(vecs[行序号][列序号].size()-2,vecs[行序号][列序号].size()-1))+1));
            ////vecs[行序号2][列序号] = vecs[行序号][列序号].append(to_string( stoi( vecs[行序号][列序号].substr(vecs[行序号][列序号].size()-1,vecs[行序号][列序号].size()))+1));
            //cout << std::format("uuzi={},", 第几次遇到);
          }
          //if (行序号2 == vecs.size() - 1) {
          //	cout << std::format("\n");
          //}
        }
        //cout << std::format("\nuuzi={},\n",  数字);
      }
    }
  }
  void get二维vecs去重_加数字( vector<vector<string >>& vecs, int 每行对比的开始, int 对比几列 ){
    int 数字;
    for( size_t 列序号 = 每行对比的开始; 列序号 < 对比几列 + 每行对比的开始; 列序号++ ){
      for( size_t 行序号 = 0; 行序号 < vecs.size( ); 行序号++ ){
        数字 = 2; //起始  
        //>向后对比
        for( size_t 行序号2 = 行序号 + 1; 行序号2 < vecs.size( ); 行序号2++ ){
          //找到一样的-->改名-->
          if( vecs[行序号2][列序号] == vecs[行序号][列序号] ){
            vecs[行序号2][列序号] = vecs[行序号][列序号].append( to_string( 数字 ) ); 数字++;
          }
        }
      }
    }
  }
  void get二维vecs去重_加数字( vector<vector<string >>& vecs, int 从哪行开始, int 每行对比的开始, int 对比几列 ){
    int 数字;
    for( size_t 序号 = 每行对比的开始; 序号 < 对比几列; 序号++ ){
      for( size_t 行序号 = 从哪行开始; 行序号 < vecs.size( ); 行序号++ ){
        数字 = 2; //起始
        //>向后对比
        for( size_t 行序号2 = 行序号 + 1; 行序号2 < vecs.size( ); 行序号2++ ){
          //找到一样的-->改名-->
          if( vecs[行序号2][序号] == vecs[行序号][序号] ){
            vecs[行序号2][序号] = vecs[行序号][序号].append( to_string( 数字 ) ); 数字++;
          }
        }
      }
    }
  }
  void get二维vecs去重_加数字( vector<vector<string >>& vecs, int 从哪行开始, int 对比几行, int 每行对比的开始, int 对比几列 ){
    int 数字;
    for( size_t 序号 = 每行对比的开始; 序号 < 对比几列; 序号++ ){
      for( size_t 行序号 = 从哪行开始; 行序号 < 从哪行开始 + 对比几行; 行序号++ ){
        数字 = 2; //起始
        //>向后对比
        for( size_t 行序号2 = 行序号 + 1; 行序号2 < vecs.size( ); 行序号2++ ){
          //找到一样的-->改名-->
          if( vecs[行序号2][序号] == vecs[行序号][序号] ){
            vecs[行序号2][序号] = vecs[行序号][序号].append( to_string( 数字 ) ); 数字++;
          }
        }
      }
    }
  }
  void get二维vecs行内去重_加数字( vector<vector<string >>& vecs, int 对比几列 ){
    int 数字;
    //>向后对比
    for( size_t 行序号 = 0; 行序号 < vecs.size( ); 行序号++ ){
      //行内
      for( size_t 序号 = 0; 序号 < 对比几列; 序号++ ){
        //列内
        数字 = 2; //起始
        for( size_t 序号2 = 序号 + 1; 序号2 < 对比几列; 序号2++ ){
          //找到一样的-->改名-->
          if( vecs[行序号][序号] == vecs[行序号][序号2] ){
            vecs[行序号][序号2] = vecs[行序号][序号2].append( to_string( 数字 ) ); 数字++;
          }
        }
      }
    }
  }
  void get二维vecs行内去重_加数字( vector<vector<string >>& vecs, int 每行对比的开始, int 对比几列 ){
    int 数字;
    for( size_t 行序号 = 0; 行序号 < vecs.size( ); 行序号++ ){
      for( size_t 序号 = 每行对比的开始; 序号 < 对比几列 + 每行对比的开始; 序号++ ){
        数字 = 2; //起始
        for( size_t 序号2 = 序号 + 1; 序号2 < 对比几列 + 每行对比的开始; 序号2++ ){
          //找到一样的-->改名-->
          if( vecs[行序号][序号] == vecs[行序号][序号2] ){
            vecs[行序号][序号2] = vecs[行序号][序号2].append( to_string( 数字 ) ); 数字++;
          }
        }
      }
    }
  }
  void get二维vecs行内去重_加数字( vector<vector<string >>& vecs, int 从哪行开始, int 每行对比的开始, int 对比几列 ){
    int 数字;
    for( size_t 行序号 = 从哪行开始; 行序号 < vecs.size( ); 行序号++ ){
      for( size_t 序号 = 每行对比的开始; 序号 < 对比几列; 序号++ ){
        数字 = 2; //起始
        for( size_t 序号2 = 序号 + 1; 序号2 < 对比几列; 序号2++ ){
          //找到一样的-->改名-->
          if( vecs[行序号][序号] == vecs[行序号][序号2] ){
            vecs[行序号][序号2] = vecs[行序号][序号2].append( to_string( 数字 ) ); 数字++;
          }
        }
      }
    }
  }
  void get二维vecs去重_删除( vector<vector<string >>& vecs, int 对比几列 ){
    int 第几次遇到 = 2;
    for( size_t 列序号 = 0; 列序号 < 对比几列; 列序号++ ){ //列内
      for( size_t 行序号 = 0; 行序号 < vecs.size( ); 行序号++ ){ //行内
        第几次遇到 = 2; //?每次都是3
        //>用值,向后对比. 和下面每列的值对比
        for( size_t 行序号2 = 行序号 + 1; 行序号2 < vecs.size( ); 行序号2++ ){
          //找到一样的-->改名-->
          //>两个值:行不一样, 列一样
          if( vecs[行序号2][列序号] == vecs[行序号][列序号] ){ ///if (vecs[行序号2][序号].compare(vecs[行序号][序号])) {
            vecs[行序号2][列序号] = "";
          }
        }
      }
    }
  }
  void get二维vecs去重_删除( vector<vector<string >>& vecs, int 每行对比的开始, int 对比几列 ){
    for( size_t 列序号 = 每行对比的开始; 列序号 < 对比几列 + 每行对比的开始; 列序号++ ){
      for( size_t 行序号 = 0; 行序号 < vecs.size( ); 行序号++ ){
        //>向后对比
        for( size_t 行序号2 = 行序号 + 1; 行序号2 < vecs.size( ); 行序号2++ ){
          //找到一样的-->改名-->
          if( vecs[行序号2][列序号] == vecs[行序号][列序号] ){
            vecs[行序号2][列序号] = "";
          }
        }
      }
    }
  }
  void get二维vecs去重_删除( vector<vector<string >>& vecs, int 从哪行开始, int 每行对比的开始, int 对比几列 ){
    for( size_t 列序号 = 每行对比的开始; 列序号 < 对比几列; 列序号++ ){
      for( size_t 行序号 = 从哪行开始; 行序号 < vecs.size( ); 行序号++ ){
        //>向后对比
        for( size_t 行序号2 = 行序号 + 1; 行序号2 < vecs.size( ); 行序号2++ ){
          //找到一样的-->改名-->
          if( vecs[行序号2][列序号] == vecs[行序号][列序号] ){
            vecs[行序号2][列序号] = "";

          }
        }
      }
    }
  }
  void get二维vecs去重_删除( vector<vector<string >>& vecs, int 从哪行开始, int 对比几行, int 每行对比的开始, int 对比几列 ){
    for( size_t 列序号 = 每行对比的开始; 列序号 < 对比几列; 列序号++ ){
      for( size_t 行序号 = 从哪行开始; 行序号 < 从哪行开始 + 对比几行; 行序号++ ){
        //>向后对比
        for( size_t 行序号2 = 行序号 + 1; 行序号2 < vecs.size( ); 行序号2++ ){
          //找到一样的-->改名-->
          if( vecs[行序号2][列序号] == vecs[行序号][列序号] ){
            vecs[行序号2][列序号] = "";

          }
        }
      }
    }
  }
  /**/;//vec复制▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
  template<typename 值类型> void getVec复制( vector<值类型>& 结果vec, vector<值类型>& 被复制的vec ){
    size_t 行 = 0;
    for( ; 行 < 结果vec.size( ); 行++ ){
      结果vec[行] = 被复制的vec[行];
    }
  }
  void getveci复制( vector<int>& veci, vector<int>& 被复制的vec ){
    size_t 行 = 0;
    for( ; 行 < veci.size( ); 行++ ){
      veci[行] = 被复制的vec[行];
    }
  }
  //二维to一维
  template<typename 值类型>	void getVec复制( vector<值类型>& 结果vec, vector<vector<值类型>>& 被复制的vec, int 列 ){
    size_t 行 = 0;
    for( ; 行 < 结果vec.size( ); 行++ ){
      结果vec[行] = 被复制的vec[行][列];
    }
  }
  void getveci复制( vector<int>& veci, vector<vector<int>>& 被复制的vec, int 列 ){
    size_t 行 = 0;
    for( ; 行 < veci.size( ); 行++ ){
      veci[行] = 被复制的vec[行][列];
    }
  }
  //二维to二维
  template<typename 值类型>	void getVec复制(/*输入*/vector<vector<值类型>>& 被复制的veci, int 被复制的列,/*输出*/vector<vector<值类型>>& veci, int 结果的列 ){
    size_t 行 = 0;
    for( ; 行 < veci.size( ); 行++ ){
      veci[行][结果的列] = 被复制的veci[行][被复制的列];
    }
  }
  void getveci复制(/*输入*/vector<vector<int>>& 被复制的veci, int 被复制的列,/*输出*/vector<vector<int>>& veci, int 结果的列 ){
    size_t 行 = 0;
    for( ; 行 < veci.size( ); 行++ ){
      veci[行][结果的列] = 被复制的veci[行][被复制的列];
    }
  }
  //▬1▬从文件读取变量▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
  template<typename 匹配词类型, typename 取出类型>int get从文件读取_匹配vec( fstream& fstre, string 路径, vector<匹配词类型>& vec匹配词, vector<取出类型>& vec取出的值 ){
    从头读取( fstre, 路径 );
    string 一行str, 读取到的str;
    int vec匹配词size = vec匹配词.size( );
    if( vec取出的值.size( ) < vec匹配词size ){ vec取出的值.resize( vec匹配词size ); } //vec太短-->resize
    //!读取str-->是否和匹配词一样-->读取str-->vec取出的值[]-->
    for( size_t 匹配了几个词 = 0; 匹配了几个词 < vec匹配词size; 匹配了几个词++ ){
      //>读取str
      fstre >> 读取到的str;
      /*WfDhJxUu*/if( 读取到的str == s文档结尾 ){
        return 0; //失败
      }
      //>是否和"vec匹配词[]"一样
      for( size_t 序号 = 0; 序号 < vec匹配词size; 序号++ ){
        //一样
        if( 读取到的str == vec匹配词[序号] ){
          //vec取出的值[]= str
          fstre >> 读取到的str;
          vec取出的值[序号] = stoi( 读取到的str );
        } else{ //不一样
          fstre >> 读取到的str;
        }
      }
    }
    return 1; //vec读完了-->.成功
  }
  template<typename 取出类型>int get从文件读取_匹配第一个字( fstream& fstre, string 路径, char 取出的值的第一个字, /*int 匹配几个词,*/ vector<取出类型>& vec取出的值 ){
    从头读取( fstre, 路径 );
    string 一行str, 读取到的str;
    //!读取str-->第一个字是否一样-->vec取出的值[]-->
    for( size_t 匹配了几个词 = 0; 匹配了几个词 < vec取出的值.size( ); 匹配了几个词++ ){
      //>读取str
      fstre >> 读取到的str;
      std::cout << 读取到的str << "= 读取到的str\n";
      //>有没有str
      if( 读取到的str == s文档结尾 ){
        return 0; //失败
      }
      //匹配
      if( 读取到的str[0] == 取出的值的第一个字 ){
        vec取出的值[匹配了几个词] = stoi( 读取到的str );
      }
    }
    return 1; //vec读完了-->.成功
  }
  template<typename 取出类型>int get从文件读取_匹配str( fstream& fstre, string 路径, string 匹配str, /*int 匹配几个词,*/ vector<取出类型>& vec取出的值 ){
    从头读取( fstre, 路径 );
    string 一行str, 读取到的str; //int for匹配str是否成功 = 1; //默认运行
    //!读取str-->和str是否一样-->str=vec取出的值[]-->
    for( size_t 匹配了几个词 = 0; 匹配了几个词 < vec取出的值.size( ); 匹配了几个词++ ){
      //>读取str
      fstre >> 读取到的str;
      std::cout << 读取到的str << "= 读取到的str\n";
      //>有没有str
      if( 读取到的str == s文档结尾 ){
        return 0; //失败
      }
      //匹配
      if( 逐字匹配str( 读取到的str, 匹配str ) == 1 ){
        //str=vec取出的值[]
        vec取出的值[匹配了几个词] = stoi( 读取到的str );
      }
    }
    return 1; //vec读完了-->.成功
  }
  void 例子get从文件读取( ){
    文字读取 wfziduqu;
    fstream fstre; string 路径; vector<string> vec匹配词( 10, "234234" ); vector<int> vec取出的值( 10, -1 );
    路径 = "E:/PINKIE PIE/窗口信息/雷电模拟器9.0.48.cpp";
    wfziduqu.get从文件读取_匹配vec( fstre, 路径, vec匹配词, vec取出的值 );
    cout << std::format( "vec匹配词\n" );
    wfziduqu.coutvec<string>( vec匹配词 );
    cout << std::format( "vec取出的值\n" );
    wfziduqu.coutvec<int>( vec取出的值 );
  }
  //▬1▬文件TOvec▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
  void get从文件读取v( 文字读取info& 文读i, string path, vector<string>& v ){ get文件TOvs( 文读i, path, v ); }
  void get从文件读取v( string path, vector<string>& v ){ 文字读取info 文读i; get文件TOvs( 文读i, path, v ); }
  void get文件TOvi( string 路径, vector<int>& veci ){
    fstream vecto文件fst; string 读取str;    从头读取( vecto文件fst, 路径 );
    for( size_t 读取了几个值 = 0; ; 读取了几个值++ ){
      vecto文件fst >> 读取str; //int不需要>>序号
      if( 读取str == s文档结尾 ){
        break;
      }/*if*/
      veci[读取了几个值] = stoi( 读取str );
    }/*for*/
  }
  void get文件TOvs( 文字读取info& 文读i, string 路径, vector<string>& v ){
    fstream fstVecTO文件; string s读取;  int 行 = 0;  从头读取( 文读i.fI.fst, 路径 );
    for( ; ;/*for后运行*/ ){
      fstVecTO文件 >> s读取; 文读i.读取了几个值++;/*提前+1*/
      if( ifS1等于vs的某个元素( s读取, 文读i.vs标记文档结尾 ) ){/*?原来是这里不能用*/
        break;
      }/*if*/
      if( ifS1等于vs的某个元素( s读取, 文读i.vs标记这行没有 ) ){
        break;
      }/*if*/
      v.push_back( s读取 );
    }/*for*/
    ;/*c*/{
      cout1( "\n" );
      cout1( "get文件TOvs(,,){ " );
      cout1( "读取了几个值=" );
      cout1( 文读i.读取了几个值 );
      cout1( " }" );
      cout1( "\n" );
    }/*c*/
  }/*void*/
  /*?空cmd*/
  void 在文件行尾加sTO新文件( 文字读取info& 文读i, string s, string path旧文件, string path新文件/*!输出*/ ){/*在文件行尾加s变成新文件*/
    ;/*c*/{ cout1( "在文件行尾加sTO新文件(,,,){ " );      cout1( "s读取一行=" );      cout1( 文读i.fI.s读取一行 );      cout1( " }" );      cout1( "\n" ); }/*c*/
    /*fst,读取,写入*/
    从头读取( 文读i.fI.fst, path旧文件 );
    从头覆盖写入( 文读i.fI.fst2, path新文件 );
    for( ; ; ){
      /*读一行-->写*/
      //*文读i.fI.fst>>文读i.fI.s读取;    文读i.fI.fst2<<文读i.fI.s读取; 文读i.fI.fst2<<s; 文读i.读取了几个值++;
      getline( 文读i.fI.fst, 文读i.fI.s读取一行, '\n' ); 文读i.fI.fst2 << 文读i.fI.s读取一行; 文读i.fI.fst2 << s; 文读i.读取了几个值++;
      ;/*c*/{ cout1( "在文件行尾加sTO新文件(,,,){ " );      cout1( "s读取一行=" );      cout1( 文读i.fI.s读取一行 );      cout1( " }" );      cout1( "\n" ); }/*c*/
      if( ifS1等于vs的某个元素( 文读i.fI.s读取, 文读i.vs标记文档结尾 ) ){
        break;
      }/*if*/
      if( ifS1等于vs的某个元素( 文读i.fI.s读取, 文读i.vs标记这行没有 ) ){
        break;
      }/*if*/
    }/*for*/
    ;/*c*/{
      cout1( "\n" );
      cout1( "在文件行尾加sTO新文件(,,,){ " );
      cout1( "读取了几个值=" );
      cout1( 文读i.读取了几个值 );
      cout1( " }" );
      cout1( "\n" );
    }/*c*/
  }/*void*/
  void 在文件行尾加sTO新文件( string s, string path旧文件, string path新文件/*!输出*/ ){
    文字读取info 文读i;
    在文件行尾加sTO新文件( 文读i, s, path旧文件, path新文件 );
  }/*void*/
  //▬1▬文件TOvec▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
  /*每行{ 行 值 }*/
  void get文件TOvi_每行有行和值( string 路径, vector<int>& veci ){
    fstream vecto文件fst; string 读取str;
    从头读取( vecto文件fst, 路径 );
    for( size_t 读取了几个值 = 0; ; 读取了几个值++ ){
      vecto文件fst >> 读取str; //int不需要>>序号
      if( 读取str == s文档结尾 ){
        break;
      }/*if*/
      veci[读取了几个值] = stoi( 读取str );
    }/*for*/
  }
  void get文件TOvs_每行有行和值( string 路径, vector<string>& vecs ){
    fstream vecto文件fst; string 读取str; int 读取的行序号 = 0;
    从头读取( vecto文件fst, 路径 );
    for( size_t 读取了几个值 = 0; ; 读取了几个值++ ){
      vecto文件fst >> 读取str; //>>行序号
      ///新vs       vs文档结尾 = { "WfDhJxWz" ,"Wj" ,"wj" ,"WJ" };
      ///if( ifS1等于vs的某个元素(读取str,vs文档结尾) ){ }
      if( 读取str == s文档结尾 or 读取str == "Wj" or 读取str == "wj" or 读取str == "WJ" ){ //WfDhJxUu 总是第一个
        break;
      }/*if*/
      读取的行序号 = stoi( 读取str );
      vecto文件fst >> 读取str;
      if( 读取str == "vehhmzyb" ){ //vehhmzyb=这行没有
        break;
      }/*if*/
      vecs[读取的行序号] = 读取str;
    }/*for*/
  }
  template<typename 值类型> void get文件TOv2( string 路径, vector<vector<值类型>>& vec, int 每行几个值 ){
    fstream vecto文件fst; string 读取str;
    从头读取( vecto文件fst, 路径 );
    for( size_t 读取了几个值 = 0; ; 读取了几个值++ ){ //int不需要>>序号
      for( size_t 行中量序号 = 0; 行中量序号 < 每行几个值; 行中量序号++ ){
        vecto文件fst >> 读取str;
        if( 读取str == s文档结尾 ){/*是否结尾*/
          break;
        }/*if*/
        vec[读取了几个值][行中量序号] = stoi( 读取str );
      }/*for*/
    }/*for*/
  }
  void get文件TOv2i( string 路径, vector<vector<int>>& veci, int 每行几个值 ){
    fstream vecto文件fst; string 读取str;
    从头读取( vecto文件fst, 路径 );
    int for1break = 0; //for死循环. 没有s文档结尾->需要这个标识
    for( size_t 读取了几个值 = 0; ; 读取了几个值++ ){ //int不需要>>序号
      for( size_t 行中量序号 = 0; 行中量序号 < 每行几个值; 行中量序号++ ){
        vecto文件fst >> 读取str;
        if( 读取str == s文档结尾 ){
          for1break = 1;
          break; //for
        }/*if*/
        veci[读取了几个值][行中量序号] = stoi( 读取str );
      }/*for*/
      if( for1break == 1 ){
        break; //for
      }/*if*/
    }/*for*/
  }
  void get文件TOv2s(/*输入*/string 路径, int 每行几个值,/*输出*/vector<vector<string>>& vecs ){
    fstream vecto文件fst; string 读取str; int 读取的行序号 = 0, 读取的行中值的序号 = 0;
    从头读取( vecto文件fst, 路径 );
    for( size_t 读取了几个值 = 0; ; 读取了几个值++ ){
      vecto文件fst >> 读取str; //>>行序号
      if( 读取str == s文档结尾 ){
        break;
      }
      读取的行序号 = stoi( 读取str );
      for( size_t 行中量序号 = 0; 行中量序号 < 每行几个值; 行中量序号++ ){
        vecto文件fst >> 读取str; //>>行中量序号
        if( 读取str == "vehhmzyb" ){ //vehhmzyb=这行没有
          break;
        }
        读取的行中值的序号 = stoi( 读取str );
        vecto文件fst >> 读取str; //序号后必有str
        vecs[读取的行序号][读取的行中值的序号] = 读取str;
        if( 读取的行中值的序号 == 每行几个值 - 1 ){
          break; //for
        }
      }
      if( 读取的行序号 == vecs.size( ) - 1 ){
        break; //for
      }
    }
  }
  //▬1▬vecTO文件▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
  /*不换行,一行*/
  template<typename 值类型> void vTO文件( string 路径, vector<值类型>& vec, string 间隔字符 ){
    fstream vecto文件fst;
    从头覆盖写入( vecto文件fst, 路径 );
    for( size_t 写入了几个值 = 0; 写入了几个值 < vec.size( ); 写入了几个值++ ){
      vecto文件fst << vec[写入了几个值]; //int不需要<<序号
      vecto文件fst << 间隔字符;
    }
    vecto文件fst << s文档结尾;
    vecto文件fst.close( );
  }
  void viTO文件( string 路径, vector<int>& veci, string 间隔字符 ){
    fstream vecto文件fst;
    从头覆盖写入( vecto文件fst, 路径 );
    for( size_t 写入了几个值 = 0; 写入了几个值 < veci.size( ); 写入了几个值++ ){
      vecto文件fst << veci[写入了几个值]; //int不需要<<序号
      vecto文件fst << 间隔字符;
    }
    vecto文件fst << s文档结尾;
    vecto文件fst.close( );
  }
  /*元素后换行*/
  template<typename 值类型>void vTO文件( string 路径, vector<值类型>& vec ){ //换行
    fstream vecto文件fst;
    从头覆盖写入( vecto文件fst, 路径 );
    for( size_t 写入了几个值 = 0; 写入了几个值 < vec.size( ); 写入了几个值++ ){
      vecto文件fst << vec[写入了几个值]; //int不需要<<序号
      vecto文件fst << "\n";
    }
    vecto文件fst << s文档结尾;
    vecto文件fst.close( );
  }
  void viTO文件( string 路径, vector<int>& veci ){ //换行
    fstream vecto文件fst;
    从头覆盖写入( vecto文件fst, 路径 );
    for( size_t 写入了几个值 = 0; 写入了几个值 < veci.size( ); 写入了几个值++ ){
      vecto文件fst << veci[写入了几个值]; //int不需要<<序号
      vecto文件fst << "\n";
    }
    vecto文件fst << s文档结尾;
    vecto文件fst.close( );
  }
  void viTO文件( string 路径, vector<int>& veci, int 写入几行 ){ //换行
    fstream vecto文件fst;
    从头覆盖写入( vecto文件fst, 路径 );
    for( size_t 写入了几个值 = 0; 写入了几个值 < 写入几行; 写入了几个值++ ){
      vecto文件fst << veci[写入了几个值]; //int不需要<<序号
      vecto文件fst << "\n";
    }
    vecto文件fst << s文档结尾;
    vecto文件fst.close( );
  }
  ////*每行`末尾`会自动加入换行*/
  ///void vsTO文件(/*输入*/string 路径, vector<string>& vecs) { //换行
  ///	fstream vecto文件fst; int 行中量序号 = 0;
  ///	从头覆盖写入(vecto文件fst, 路径);
  ///	for (size_t 行坐标 = 0; 行坐标 < vecs.size(); 行坐标++) {
  ///		if (!vecs[行坐标].empty()) { //>有字
  ///			vecto文件fst << vecs[行坐标];
  ///			vecto文件fst << "\n";
  ///		} else { //>没字
  ///			vecto文件fst << s这行没有;
  ///		}
  ///	}/*for*/
  ///	vecto文件fst << s文档结尾;
  ///	vecto文件fst.close();
  ///}
  void vsTO文件(/*输入*/string 路径, vector<string>& vecs, int 写入几行 ){ //换行
    fstream vecto文件fst; int 行中量序号 = 0;
    从头覆盖写入( vecto文件fst, 路径 );
    //for (size_t 行坐标 = 0; 行坐标 < 写入几行; 行坐标++) {
    //	if (!vecs[行坐标].empty()) { //>vs[]有字
    //		vecto文件fst << vecs[行坐标];
    //		vecto文件fst << "\n";
    //	} else { //>没字
    //		vecto文件fst << s这行没有;
    //	}
    //}/*for*/
    for( size_t 行坐标 = 0; 行坐标 < 写入几行; 行坐标++ ){
      vecto文件fst << vecs[行坐标];
      vecto文件fst << "\n";
    }/*for*/
    vecto文件fst << s文档结尾;
    vecto文件fst.close( );
  }
  /*每行`前面`加入行数和空格,尾`会自动加入换行*/
  void vsTO文件(/*输入*/string 路径, vector<string>& vecs ){ //换行
    fstream vecto文件fst; int 行中量序号 = 0;
    从头覆盖写入( vecto文件fst, 路径 );
    for( size_t 写入了几个值 = 0; 写入了几个值 < vecs.size( ); 写入了几个值++ ){
      if( !vecs[写入了几个值].empty( ) ){ //>有字
        vecto文件fst << 写入了几个值; //<<序号
        vecto文件fst << " ";
        vecto文件fst << vecs[写入了几个值];
        vecto文件fst << "\n";
      } else{ //>没字
        vecto文件fst << s这行没有;
      }
    }/*for*/
    vecto文件fst << s文档结尾;
    vecto文件fst.close( );
  }
  /*v2; 每一行保存成每一行: 1 1 1 \n 1 1 1*/
  template<typename 值类型> void v2TO文件( string 路径, vector<vector<值类型>>& vec, /*int 有几行, */int 每行几个值, string 间隔字符 ){
    fstream vecto文件fst;
    从头覆盖写入( vecto文件fst, 路径 );
    ///for (size_t 写入了几行 = 0; 写入了几行 < 有几行;) {
    for( size_t 写入了几行 = 0; 写入了几行 < vec.size( ); 写入了几行++ ){
      for( size_t 行中量序号 = 0; 行中量序号 < 每行几个值; 行中量序号++ ){
        vecto文件fst << vec[写入了几行][行中量序号]; //int不需要<<序号
        vecto文件fst << 间隔字符;
      } //行完
      vecto文件fst << "\n";
    } //完
    vecto文件fst << s文档结尾;
    vecto文件fst.close( );
  }
  void v2iTO文件(/*输入*/string 路径, vector<vector<int>>& veci, /*int 有几行, */int 每行几个值, string 间隔字符 ){
    fstream vecto文件fst;
    从头覆盖写入( vecto文件fst, 路径 );
    ///for (size_t 写入了几行 = 0; 写入了几行 < 有几行;) {
    for( size_t 写入了几行 = 0; 写入了几行 < veci.size( ); 写入了几行++ ){
      for( size_t 行中量序号 = 0; 行中量序号 < 每行几个值; 行中量序号++ ){
        vecto文件fst << veci[写入了几行][行中量序号]; //int不需要<<序号
        vecto文件fst << 间隔字符;
      } //行完
      vecto文件fst << "\n";
    } //完
    vecto文件fst << s文档结尾;
    vecto文件fst.close( );
  }
  void v2sTO文件( string 路径, vector<vector<string>>& vecs, /*int 有几行, */int 每行几个值, string 间隔字符 ){
    fstream vecto文件fst;
    从头覆盖写入( vecto文件fst, 路径 );
    ///for (size_t 写入了几行 = 0; 写入了几行 < 有几行;) {
    for( size_t 写入了几行 = 0; 写入了几行 < vecs.size( ); 写入了几行++ ){
      //>行序号 序号 值
      vecto文件fst << 写入了几行; //<<行序号
      vecto文件fst << " ";
      for( size_t 行中量序号 = 0; 行中量序号 < 每行几个值; 行中量序号++ ){
        if( !vecs[写入了几行][行中量序号].empty( ) ){ //>有字 \ 条件不满足的时候执行时间比if条件满足的时间要长 https://blog.csdn.net/qq_31985307/article/details/123782398
          vecto文件fst << 行中量序号; //<<序号
          vecto文件fst << " ";
          vecto文件fst << vecs[写入了几行][行中量序号];
          vecto文件fst << 间隔字符;
        } else{ //>没字
          vecto文件fst << "vehhmzyb"; //这行没有
        }
      } //行完
      vecto文件fst << "\n";
    } //完
    vecto文件fst << s文档结尾;
    vecto文件fst.close( );
  }
  /*v3; 每一行保存成每一行: 1 1 1 \n 1 1 1*/

  /**/;//▬零件▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬

  /**/;//▬杂项▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬

  /**/;//▬附加功能▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
  void 设置程序为中文编码( ){
    setlocale( LC_ALL, "zh-CN" );
  }
  /**/;//▬`例子▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬

  /**/;//▬不完整的`例子▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
  void 从文件读取变量数值( 新s path ){
    新fs fs;
    新s s;
    从头读写( fs, path );
    while( true ){
      fs >> s;/*这是`标记*/
      if( s == s文档结尾 ){/*完了*/
        breakWhile;
      }/*if*/
      if( s == "idkb`x" ){/* "IdKb`x" "IdKb`X" "idkb`x" "idkb`X"*/
        fs >> s;/*这是`数值*/
      }/*if*/
      if( s == "idkb`y" ){/* "IdKb`x" "IdKb`X" "idkb`x" "idkb`X"*/
        fs >> s;/*这是`数值*/
      }/*if*/
      if( s == "idkb`y" ){/* "IdKb`x" "IdKb`X" "idkb`x" "idkb`X"*/
        fs >> s;/*这是`数值*/
      }/*if*/
    }/*while*/
    fs.close( );
  }
  void 从文件读取变量数值_getline( 新s path ){
    新fs fs;
    新s s;
    从头读写( fs, path );
    while( true ){
      getline( fs, s );/*这是`标记*/
      if( s == s文档结尾 ){/*完了*/
        breakWhile;
      }/*if*/
      if( s == "idkb`x" ){/* "IdKb`x" "IdKb`X" "idkb`x" "idkb`X"*/
        getline( fs, s );/*这是`数值*/
      }/*if*/
    }/*while*/
    fs.close( );
  }


  //>▬2022.8.13 18:51▬文字读取常量初始化▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
  /*这是一套东西,用起来很很烦,以后要删掉的*/
  string retvector转string( vector<vector<string>> 当前内容, int 第几行, int 第几列 ){
    string 字符;
    字符 = 当前内容[第几行][第几列];
    return 字符;
  }
  //▬属性▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
  auto 字数( string 当前内容 ){
    size_t 字数 = 0;
    //字数| 是否有中文| 是中文的字的序号| 
    for( auto i = 0; i < 当前内容的size; i++ ){
      if( char是否是中文( 当前内容[i] ) == 1 ) //yb中文
      {
        i++; //下一个字
        字数 += 1;
      } else //2
      {
        字数 += 1;
      }
    }
    return 字数;
  }
  auto ret属性( string 当前内容 ){
    vector<vector<string>> 结果( 6, vector<string>( 1400, "0" ) ); //, vector<int>(1400, 0)
    int 序号_汉字在字数里的序号 = 0; //0bu能改
    int 序号_汉字在size里的序号 = 0;
    size_t 当前内容的size = 当前内容.size( );
    size_t 字数 = 0; //是int
    //第一行\
			0 字数| 1 是否有中文| 2 序号_汉字在字数里的序号| 3 序号_汉字在size里的序号
      //第2行\
			汉字在字数里的序号| \
			//第3行\
			| 汉字在size里的序号
    switch( 汉字宽度 ){
    case 2:
      for( auto i = 0; i < 当前内容的size; i++ ){
        if( char是否是中文( 当前内容[i] ) == 1 ) //yb中文
        {
          //汉字在size里的序号
          结果[2][i] = "1"; //每次+2
          i++; //一个字的右边
          结果[2][i] = "1";

          结果[1][序号_汉字在字数里的序号] = "1"; //每次+1
          字数 += 1; //先= 后+
          序号_汉字在字数里的序号++;
          序号_汉字在size里的序号 += 2;
        } else //2
        {
          字数 += 1;
        }
      }
      //jxg结果 换成stri
      结果[0][0] = to_string( 字数 ); //字数 stri
      //第二行= 是否有中文
      switch( stoi( 结果[1][0] ) ){
      case 1:
        结果[0][1] = "1";
        break;
      case 0:
        结果[0][1] = "2";
        break;
      }
      结果[0][2] = to_string( 序号_汉字在字数里的序号 );//字数
      结果[0][3] = to_string( 序号_汉字在size里的序号 );//size
      文本属性 = 结果;
      return 结果;
      break;

    case 3:
      for( auto i = 0; i < 当前内容的size; i++ ){
        switch( char是否是中文( 当前内容[i] ) ){
        case 1:
          //size
          //汉字在size里的序号
          结果[2][i] = "1"; //每次+2
          i++; //一个字的右边
          结果[2][i] = "1";
          i++; //一个字的右边
          结果[2][i] = "1";

          //字数
          结果[1][序号_汉字在字数里的序号] = "1"; //每次+1
          字数 += 1; //先= 后+
          序号_汉字在字数里的序号++;
          序号_汉字在size里的序号 += 2;
          break;
        case 2:
          字数 += 1;
          break;
        }
      }
      //jxg结果 换成stri
      结果[0][0] = to_string( 字数 ); //字数 stri
      //第二行= 是否有中文
      switch( stoi( 结果[1][0] ) ){
      case 1:
        结果[0][1] = "1";
        break;
      case 0:
        结果[0][1] = "2";
        break;
      }
      结果[0][2] = to_string( 序号_汉字在字数里的序号 );//字数
      结果[0][3] = to_string( 序号_汉字在size里的序号 );//size
      文本属性 = 结果;
      return 结果;
      break;

    default:
      break;
    }
  }
  //▬文本操作▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
  /*用append复制s*/
  auto ret逐字append( string 当前内容 ){
    string 结果;
    size_t 当前内容的size = 当前内容.size( );
    for( auto i = 0; i < 当前内容的size; i++ ){
      结果.append( 当前内容, i, 1 );
    }
    return 结果;
  }
  auto ret逐字加中括号( string 当前内容 ){
    string 结果;
    size_t 当前内容的size = 当前内容.size( );
    switch( 汉字宽度 ){
    case 2:
      for( auto i = 0; i < 当前内容的size; i++ ){
        if( 文本属性[2][i] == "1" ){ //是中文
          结果.append( "[" );
          结果.append( 当前内容, i, 1 );
          i += 1;
          结果.append( 当前内容, i, 1 );
          结果.append( "]" );
        } else{
          结果.append( "[" );
          结果.append( 当前内容, i, 1 );
          结果.append( "]" );
        }/*else*/
      }
      return 结果;
      break;

    case 3:
      for( auto i = 0; i < 当前内容的size; i++ ){
        if( 文本属性[2][i] == "1" ){ //是中文
          结果.append( "[" );
          结果.append( 当前内容, i, 1 );
          i += 1;
          结果.append( 当前内容, i, 1 );
          i += 1;
          结果.append( 当前内容, i, 1 );
          结果.append( "]" );
        } else{
          结果.append( "[" );
          结果.append( 当前内容, i, 1 );
          结果.append( "]" );
        }
      }
      return 结果;
      break;
    }
  }
  auto 逐字倒放( string 当前内容 ){
    string 结果;
    size_t 当前内容的size = 当前内容.size( );
    当前内容的size--; //从-1开始
    switch( 汉字宽度 ){
    case 2:
      for( auto i = 0; i <= 当前内容的size; 当前内容的size-- ) //0位vi报错
      {
        if( 文本属性[2][当前内容的size] == "1" ) //是中文
        {
          if( i == 0 )break; //为什么0不停止
          结果.append( 当前内容, 当前内容的size - 1, 1 );
          结果.append( 当前内容, 当前内容的size, 1 );
          当前内容的size -= 1;
        } else{
          结果.append( 当前内容, 当前内容的size, 1 );
        }
      }
      return 结果;
      break;

    case 3:
      for( auto i = 0; i <= 当前内容的size; 当前内容的size-- ) //0位vi报错
      {
        if( 文本属性[2][当前内容的size] == "1" ) //是中文
        {
          if( i == 0 )break; //为什么0不停止
          结果.append( 当前内容, 当前内容的size - 2, 1 );
          结果.append( 当前内容, 当前内容的size - 1, 1 );
          结果.append( 当前内容, 当前内容的size, 1 );
          当前内容的size -= 2;
        } else{
          结果.append( 当前内容, 当前内容的size, 1 );
        }
      }
      return 结果;
      break;
    }
  }
  //▬cout▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
  auto 字数并cout( string 当前内容 ){
    size_t 字数 = 0;
    //字数| 是否有中文| 是中文的字的序号| 
    for( auto i = 0; i < 当前内容的size; i++ ){
      if( char是否是中文( 当前内容[i] ) == 1 ) //yb中文
      {
        i++; //下一个字
        字数 += 1;
      } else //2
      {
        字数 += 1;
      }
    }
    return 字数;
  }
  auto 逐字导入并cout( string 当前内容 ){
    string 结果;
    size_t 当前内容的size = 当前内容.size( );
    for( auto i = 0; i < 当前内容的size; i++ ){
      结果.append( 当前内容, i, 1 );
      cout << 结果 << "\n";
    }
    return 结果;
  }
  auto 逐字加中括号并cout( string 当前内容 ){
    string 结果;
    size_t 当前内容的size = 当前内容.size( );
    for( auto i = 0; i < 当前内容的size; i++ ){
      if( 文本属性[2][i] == "1" ) //是中文
      {
        结果.append( "[" );
        结果.append( 当前内容, i, 1 );
        i += 1;
        结果.append( 当前内容, i, 1 );
        结果.append( "]" );
        cout << 当前内容的size << "\n";
      } else{
        结果.append( "[" );
        结果.append( 当前内容, i, 1 );
        结果.append( "]" );
      }
      cout << 结果 << "\n";
    }
    return 结果;
  }
  auto 逐字倒放并cout( string 当前内容 ){
    string 结果;
    size_t 当前内容的size = 当前内容.size( );
    当前内容的size--;
    for( auto i = 0; i <= 当前内容的size; 当前内容的size-- ) //0位vi报错
    {
      if( 文本属性[2][当前内容的size] == "1" ) //是中文
      {
        if( i == 0 )break; //为什么0不停止
        结果.append( 当前内容, 当前内容的size - 1, 1 );
        结果.append( 当前内容, 当前内容的size, 1 );
        当前内容的size -= 1;
        cout << 当前内容的size << "\n";
      } else{
        结果.append( 当前内容, 当前内容的size, 1 );
      }
      cout << 结果 << "\n";
    }
    return 结果;
  }
  auto 逐字倒放并cout_前后换位( string 当前内容 ){
    string 结果 = 当前内容;
    size_t 当前内容的size = 结果.size( );
    //当前内容的size--; 末尾= i+1	开i
    for( int i = 0; i < 当前内容的size / 2; i += 2, 当前内容的size -= 2 ){
      //左2 中
      int iret = 结果[i];
      结果[i] = 结果[当前内容的size - 2]; //当前内容[i]= 末尾左2
      结果[当前内容的size - 2] = iret; //末尾左2 = 当前内容[i]
      //左1 右1
      iret = 结果[i + 1]; //iret = 右1
      结果[i + 1] = 结果[当前内容的size - 1]; //右1= 末尾左1
      结果[当前内容的size - 1] = iret; //末尾左1= 右1
      cout << 结果 << "\n";
    }
    return 结果;
  }

  //▬大概没用▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
  /*报错*/	//auto 逐行导入(const auto 输入) {
  //	全部每行的内容[行数] = { 输入 };
  //}
  auto 文字倒序( const string a ){
    for( auto i = a.size( ) - 1; ; i-- ) //auto
    {
      if( a[i] )cout << a[i];
      else break;
    }
    cout << endl;
  }
  /*旧的*/
  auto 平行匹配( string 当前内容, string 匹配对象 ){ //匹配对象 完了 才是有 //可以cout
    auto  匹配对象的字符数量 = 匹配对象.size( ); //auto
    光标位置 = 0;
    int 结果是1就是有 = 0;
    size_t 当前内容的size = 当前内容.size( );
    if( 当前内容的size >= 匹配对象的字符数量 ) //字不够不干
    {
      auto 匹配对象光标位置 = 0; //初始化
      结果是1就是有 = 1;
      /**/
      for( auto i = 光标位置; i < 当前内容的size; i++ ) //内容的字符长度= 当前内容.size()   匹配对象的字符长度= 匹配对象.size()
      {
        if( 当前内容[光标位置] != 匹配对象[匹配对象光标位置] ){ //对不上
          结果是1就是有 = 2;/*不等于*/
          break;
        }
        匹配对象光标位置++; //匹配下一位
        if( 匹配对象光标位置 == 匹配对象的字符数量 ){ //匹配对象光标位置 =匹配对象后面一位
          break;/*等于了*/
        }
      }
    }
    return 结果是1就是有;
  }
  auto 匹配( string 当前内容, string 匹配对象 ){ //匹配对象 完了 才是有
    auto  匹配对象的字符数量 = 匹配对象.size( ); //auto

    int 结果是1就是有 = 0;
    size_t 当前内容的size = 当前内容.size( );
    if( 当前内容的size >= 匹配对象的字符数量 ) //字不够不干
    {
      auto 匹配对象光标位置 = 0; //初始化
      结果是1就是有 = 2;
      for( auto i = 光标位置; i < 当前内容的size; i++ ) //当前内容的size 完了 就结束 ////光标位置自增
      {
        if( 当前内容[光标位置] == 匹配对象[匹配对象光标位置] ){ //接着匹配下一位
          匹配对象光标位置++; //匹配下一位
          if( 匹配对象光标位置 == 匹配对象的字符数量 ){ //匹配对象光标位置 =匹配对象后面一位
            结果是1就是有 = 1; //!结束
            break;
          }
          continue;
        }
        匹配对象光标位置 = 0; //不对 重来
      }
    }
    return 结果是1就是有;
  }
  //读取一行, 再一个一个词匹配 ,不归零光标位置
  auto 平行匹配一行( string 当前内容, string 匹配对象, string 写入此路径的文档 ){
    当前内容 = r替换( 当前内容, " ", "" );

    int 结果是1就是有 = 0, 匹配结果;
    fstream 匹配词暂存文档;
    从头覆盖写入( 匹配词暂存文档, 写入此路径的文档 );
    匹配词暂存文档 << 匹配对象;
    //cout << 当前内容 << endl; /*测试 平行匹配一行 [0]*/

    /*读取匹配对象*/
    匹配词暂存文档 >> 匹配对象;
    /*cout << 匹配对象 ; /*测试 平行匹配一行 [0]*/
    while( 匹配词暂存文档 ) //读不到了就结束 //根本不通过
    {
      cout << "1 " + 匹配对象 << endl; /*测试 平行匹配一行 [0]*/ //只有1,没有 匹配对象
      /*//处理之前读取的当前内容*/
      匹配结果 = 匹配( 当前内容, 匹配对象 );
      if( 匹配结果 == 1 ){
        匹配词暂存文档 >> 匹配对象; //读取新的匹配对象
        cout << 匹配对象 << endl; /*测试 平行匹配一行 [0]*/
      } else{ //不是1都一样 2是失败, 0是没运行
        结果是1就是有 = 2;
        goto 完;
        //不 读取新的匹配对象
      }
      cout << 光标位置 << endl; /*测试 平行匹配一行 [0]*/
    }
    结果是1就是有 = 1;
  完:
    /*cout << endl; /*测试 平行匹配一行 [0]*/
    return 结果是1就是有;
    /*//匹配词暂存文档.close;*/
  }

  auto 判断有没有空格( string 当前内容 ){
    size_t 当前内容的size = 当前内容.size( );
    匹配( 当前内容, " " );
  }
  auto 清除开头空格( string s ){/*2024年11月30日12:18:49*/
    新s s结果; 新i 开头空格的数量 = 0;
    for( size_t i = 0; i < s.size( ); i++ ){
      if( s[i] == ' ' ){ 开头空格的数量++; }/*if*/
    }/*for*/
    s结果 = s.substr( 开头空格的数量, s.size( ) - 开头空格的数量 );
    retu s结果;
  }
  auto 清除空格( string 当前内容 ){ //:初始化
    //			string::size_type position;
     //position = 当前内容.find(" ");
     //if (position != 当前内容.npos)  //如果没找到，返回一个特别的标志c++中用npos表示，我这里npos取值是4294967295，
     //{
      // 替换(当前内容, " ", "");
     //}
  }

  auto 平行匹配文档( string 当前内容, fstream 匹配对象文档 ){ }

  auto 跳到空格后的内容( string 当前内容 ){
    int 结果是1就是有;
    for( 光标位置; 光标位置 < 当前内容的size; 光标位置++ ){
      //if (!isspace(当前内容[光标位置])) { //空格后有内容
      if( 当前内容[光标位置] != ' ' ){ //空格后有内容 光标指向256
        结果是1就是有 = 1;
        break;
      }
    }
  }
  auto 打印本行( string 当前内容 ){
    //cout << 当前内容; //测试
    for( 光标位置; 光标位置 < 当前内容的size; 光标位置++ ){
      //cout << 光标位置;
      cout << 当前内容[光标位置];
    }
    cout << endl;
  }

  auto 每行加斜杠( string a ){

  }
  auto 检测是否按下( const string a ){
    //这一堆东西报错 ???

    //if (a[0] != '-')if (!isspace(a[0])) { //不对的字符
      //cout << "if ( 按下 == 0){";
      //cout << "if (GetKeyState(" << a << ") < 0)按下 = 1;}"; //gl=gtline
      //cout << "else goto if(按下==1);"; //跳出去
    个数 += 1;
    //if (!a[1])cout << "检测是否按下('" << a << "');";
    cout << "检测是否按下(" << 个数 << "," << a << ");";
    //cout << "//" << 个数;
    cout << endl;
    //}
  }
  auto 长字符( const string b1 ){
    if( b1[0] != '-' )if( !isspace( b1[0] ) ){
      //cout << "color(7); if (GetKeyState(" << b << ") < 0) color(177); prautof(" << b << ");  color(7); ";
      if( b1[1] ){
        cout << "长字符(" << b1 << "," << "冒号" << b1 << "冒号" << "); "; //cout << "显示文字('" << b << "'); ";
        //else cout << "显示文字(" << b << ");";
        cout << "//" << 个数; 换行 += 1;
        cout << endl;
      }
      if( 换行 == 9 ){ cout << "换行换行换行换行" << endl; 换行 = 0; }
      个数 -= 1;
    }
  }
  auto 长字符2( const string b, const string bb ){
    if( b[0] != '-' )if( !isspace( b[0] ) ) if( !(b[0] == '0') && (b[1]) ){
      //cout << "color(7); if (GetKeyState(" << b << ") < 0) color(177); prautof(" << b << ");  color(7); ";
      if( b[1] )cout << "长字符(" << b << "," << bb << "); "; //排除字母 //cout << "显示文字('" << b << "'); ";
      //else cout << "显示文字(" << b << ");";
      cout << "//" << 个数; 换行 += 1; cout << endl;
      if( 换行 == 9 ){ cout << "换行换行换行换行" << endl; 换行 = 0; }
      个数 -= 1;
    }
  }

  //#define 替换(原文,查找,替换) { \
		//	匹配(原文, 查找); \
		//		if (结果是1就是有 == 1) {\
		//				原文.replace(原文.find(查找), 140, 替换); \
		//		} \
		//	}

    // 读取一行, 再一个词匹配 ,不归零光标位置
    //#define 平行匹配一行(当前内容,匹配对象,写入此路径的文档) do {\
		//结果是1就是有 = 0; \
		//fstream 匹配词暂存文档;\
		//从头覆盖写入(匹配词暂存文档, "E:\\库\\匹配.cpp");\
		//匹配词暂存文档 << 匹配对象;\
		///*cout << 匹配对象; /*测试 平行匹配一行 [0]*/\
		//\
		///*读取匹配对象*/\
		//匹配词暂存文档 >> 匹配对象;\
		///*cout << 匹配对象 ; /*测试 平行匹配一行 [0]*/\
		//while (匹配词暂存文档)\
		//{\
		//	匹配(当前内容, 匹配对象); /*//处理之前读取的当前内容*/	 \
		//	if (结果是1就是有 == 1) {							\
		//		光标位置 = 0;								 \
		//		/*//读取新的当前内容	*/						  \
		//		默认文档 >> 当前内容;						  \
		//		/*cout << 当前内容 << endl; /*测试 平行匹配一行 [0]*/ 	\
		//		if (!默认文档) { break; } /*/默认文档有没有字*/   \
		//		size_t 当前内容的size =当前内容.size();				   \
		//													\
		//		/*//读取新的匹配对象*/							  \
		//		匹配词暂存文档 >> 匹配对象;						 \
		//		/*cout << 匹配对象 << endl; /*测试 平行匹配一行 [0]*/ 	\
		//	}\
		//	else { /*//不是1*/\
		//		结果是1就是有 = 2;\
		//		goto 完;\
		//	}\
		//}\
		//结果是1就是有 = 1;\
		//完:\
		///*cout << endl; /*测试 平行匹配一行 [0]*/\
		//return;\
		///*//匹配词暂存文档.close;*/\
		//}while(0)
    //// /*

    //犯病了5
    /*
    auto 匹配字符(auto 匹配字符_当前内容, auto 匹配字符_匹配对象, auto 匹配字符_光标位置, auto 匹配字符_结果是1就是有) {
      auto 匹配对象光标位置 = 0;
      for (auto i = 匹配字符_光标位置; i < 匹配字符_当前内容的size; i++) //内容的字符长度= 当前内容的size   匹配对象的字符长度= 匹配对象的字符数量
      {
          if (匹配字符_当前内容[匹配字符_光标位置] != 匹配字符_匹配对象[匹配对象光标位置]) { //对不上
            匹配字符_结果是1就是有 = 2;
          break;
        }
        if (匹配对象光标位置 == 匹配字符_匹配对象的字符数量) { //比过了 比完了
          匹配字符_结果是1就是有 = 1;
          break;
        }
        匹配对象光标位置 ++;
      }

    }
    auto 跳到空格后的内容(auto 跳到空格后的内容_当前内容, auto 跳到空格后的内容_光标位置, auto 跳到空格后的内容_结果是1就是有) {
      for (跳到空格后的内容_光标位置; 跳到空格后的内容_光标位置 < 跳到空格后的内容_当前内容的size; 跳到空格后的内容_光标位置++) {
        //if (!isspace(跳到空格后的内容_当前内容[光标位置])) { //空格后有内容
        if (跳到空格后的内容_当前内容[跳到空格后的内容_光标位置] != ' ') { //空格后有内容
          跳到空格后的内容_结果是1就是有 = 1;
          break;
        }10456
      }
    }
    */
  void 你妈的能不能别对齐上面的注释( ){ }
  /**/;//▬附加功能▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
  int retCcpTOcTOccp( 新ccp ccp ){/*可以*/
    新c c[140] = "";////新c c[140] =  {ccp};
    strcpy_s( c, ccp );
    cout1( "c=" ); cout1( c ); coutEnd;
    retu 0;
    retu 0;
  }
  /**/;//▬测试▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬


}/*文字读取*/;
#endif
