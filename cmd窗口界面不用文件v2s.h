#pragma once
#ifndef CMD窗口界面不用文件V2S_H 
#define CMD窗口界面不用文件V2S_H

using namespace std;
//extern int 按下;
/*
v2s选项,v2i选项颜色;
选择一项-->if (vs选项[][]=""){}
*/
class cmd窗口界面不用文件v2s :public cmd{
public:
  //using
public:
  //classjisr;
  前置计算_不使用前置变量 qmvi计算_不使用前置变量;
  前置计算 qmvi计算;
  前置cout qmviCout;
  文字读取  wfzi读取;
  cmd窗口界面_小组件 cmdIdkb界面_小组件;
public:
  /**//*cmd界面*/
  struct cmd窗口界面不用文件v2sInfo{
    新v2s v2s顶部工具栏; 新v2i v2i顶部工具栏颜色;
    新v2s v2s选项; 新v2i v2i选项颜色;
    /*todo 把变量`写在外面吧*/
    cmd窗口界面不用文件v2sInfo( ){ }/*();是外部变量, (){}可以;*/
  };
  cmd窗口界面不用文件v2sInfo cmdIdkb界面不用文件info;
  /**//*设置`限制输入*/
  struct 光标限制{
    int 开关 = 0
      /*x,y  x1,y
      x,y1 x1,y1*/
      , x, x1, y, y1;
  };
  /**//*设置*/
  //>设置`cout
  int 每行显示几个选项 = 1, 每行显示几个顶部工具栏选项 = 140, 是否补齐到上限的字显示默认背景色 = 0
    /*换行条件只有: if个数满-->cANDcEndl, ifv行完AND个数没满-->c,*/
    ,是否选项光标下标X超过每行显示几个选项时换行= 1,是否c选项v行完AND选项光标下标X不超过每行显示几个选项时换行= 0
    , 选项是否对齐 = 1,/*对齐几个字符,每个几个字*/选项对齐的字数上限 = 14
    /*如果不`对齐*/, 是否选项有字数上限 = 1, 选项的字数上限 = 14
    , 展开顶部工具栏 = 0/*折叠顶栏*/
    , 是否判定面积包含s选项间隔 = 0, 是否选中背景时改变背景色 = 1
    /*默认颜色*/
    , 默认背景色 = 7/*黑白*/, 默认前景色 = 176/*绿黑*/
    /*todo 我是不会做这个了*/
    , 是否有选项在运行前THEN修改c的颜色, 默认运行前背景色 = 140, 默认运行前前景色 = 140
    , 是否有选项在运行时THEN修改c的颜色, 默认运行时背景色 = 140, 默认运行时前景色 = 140
    /*就用这两个*/, 默认运行前高亮色 = 140, 默认运行时高亮色 = 140
    /*记录*/
    ;
  string  s选项间隔 = " ";
  //>设置`操作
  int 是否if方向键输入 = 1, 是否if左键输入 = 1, 是否if键盘输入 = 1
    , 是否方向键弹起时输入 = 1, 是否方向键按下时输入 = 0
    , 是否关闭列表，退出循环 = 0
    /*界面`开关*/
    , 多线程了按键功能 = 0
    /*记录*/
    , 是否已按过按键 = 0, 是否已使用选项 = 0, 是否已展开过顶栏;
  /**//*记录*/
  /*记录c对应的v{
    if每行c2个{
      选项1=v[0][1] 选项2=v[0][2]
      选项3=v[0][3]
    }
  }
  */
  下标info 当前选择的项_v的下标/*c{ if是这个下标{if是光标停留{}if是运行中{}if是已运行过{}}*/
    , 上次选择的项_v的下标;
  /*运行时*/int 运行时_当前这一行已经显示了几个元素;
  //todo 如果c(v一行)是换行的,找不到选中的选项; 2024年12月25日00:00:46
public:
  /*static*/ const char* ccCr_lf = "\r\n";
public:
  cmd窗口界面不用文件v2s( ){ }/*( )*/
  /**///▬cmd实现窗口UI▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
  int cInfo( cmd窗口界面不用文件v2sInfo& cmdIdkb界面不用文件info ){
    int cInfo有几行 = 0;
    cout1( "cInfo{  }" );  coutEnd行加一( cInfo有几行 );
    /**///c设置`if1c亮,if0c暗
    if( 是否if左键输入 ){ set颜色( 默认前景色 ); }/*else{set颜色(默认背景色); }*/ cout1( "左键输入" ); set颜色( 默认背景色 ); cout1( s选项间隔 );
    if( 是否if键盘输入 ){ set颜色( 默认前景色 ); }/*else{set颜色(默认背景色); }*/ cout1( "键盘输入" ); set颜色( 默认背景色 ); cout1( s选项间隔 );
    if( 是否if方向键输入 ){ set颜色( 默认前景色 ); }/*else{set颜色(默认背景色); }*/ cout1( "方向键输入" ); set颜色( 默认背景色 ); cout1( s选项间隔 );
    /**///c按键检测
    if( 现在[VK_UP] ){ set颜色( 默认前景色 ); }/*else{set颜色(默认背景色); }*/ cout1( "上" ); set颜色( 默认背景色 ); cout1( s选项间隔 );
    if( 现在[VK_DOWN] ){ set颜色( 默认前景色 ); }/*else{set颜色(默认背景色); }*/ cout1( "下" ); set颜色( 默认背景色 ); cout1( s选项间隔 );
    if( 现在[VK_LEFT] ){ set颜色( 默认前景色 ); }/*else{set颜色(默认背景色); }*/ cout1( "左" ); set颜色( 默认背景色 ); cout1( s选项间隔 );
    if( 现在[VK_RIGHT] ){ set颜色( 默认前景色 ); }/*else{set颜色(默认背景色); }*/ cout1( "右" ); set颜色( 默认背景色 ); cout1( s选项间隔 );
    set颜色( 默认背景色 ); coutEnd行加一( cInfo有几行 );
    /**///c变量size
    cout1( "v2s顶部工具栏[0].size=" ); cout1( cmdIdkb界面不用文件info.v2s顶部工具栏[0].size( ) ); cout1( " " );
    cout1( "v2i顶部工具栏颜色[0].size=" ); cout1( cmdIdkb界面不用文件info.v2i顶部工具栏颜色[0].size( ) ); coutEnd行加一( cInfo有几行 );
    cout1( "v2s选项[0].size=" ); cout1( cmdIdkb界面不用文件info.v2s选项[0].size( ) ); cout1( " " );
    cout1( "v2i选项颜色[0].size=" ); cout1( cmdIdkb界面不用文件info.v2i选项颜色[0].size( ) ); coutEnd行加一( cInfo有几行 );
    cmdIdkb界面_小组件.c光标2( cmd光标坐标 ); cout1( ";" );
    cout1( "cInfo有几行=" ); cout1( cInfo有几行 ); coutEnd行加一( cInfo有几行 );
    retu cInfo有几行;
  };/*int*/
  void 输入v2s_例子( cmd窗口界面不用文件v2sInfo& cmdIdkb界面不用文件info ){
    /*?不pushBack就[0].assign=outOfR*/
    cmdIdkb界面不用文件info.v2i顶部工具栏颜色.push_back( {} ); cmdIdkb界面不用文件info.v2s顶部工具栏.push_back( {} ); /*可以*/
    cmdIdkb界面不用文件info.v2i顶部工具栏颜色[0].assign( 0, 0 ); cmdIdkb界面不用文件info.v2s顶部工具栏[0].assign( 0, "100" );
    cmdIdkb界面不用文件info.v2i顶部工具栏颜色[0].push_back( 01 ); cmdIdkb界面不用文件info.v2s顶部工具栏[0].push_back( "ceui" );
    cmdIdkb界面不用文件info.v2i顶部工具栏颜色[0].push_back( 默认背景色 ); cmdIdkb界面不用文件info.v2s顶部工具栏[0].push_back( "修改外观`颜色" );
    cmdIdkb界面不用文件info.v2i顶部工具栏颜色[0].push_back( 默认背景色 ); cmdIdkb界面不用文件info.v2s顶部工具栏[0].push_back( "c所有颜色" );
    cmdIdkb界面不用文件info.v2i顶部工具栏颜色[0].push_back( 默认背景色 ); cmdIdkb界面不用文件info.v2s顶部工具栏[0].push_back( "?" );
    cmdIdkb界面不用文件info.v2i顶部工具栏颜色[0].push_back( 默认背景色 ); cmdIdkb界面不用文件info.v2s顶部工具栏[0].push_back( "展开" );

    cmdIdkb界面不用文件info.v2i选项颜色.push_back( {} ); cmdIdkb界面不用文件info.v2s选项.push_back( {} ); /*可以*////qmvi计算_不使用前置变量. v2sAssign( cmdIdkb界面不用文件info.v2s选项,1,0, "");
    cmdIdkb界面不用文件info.v2i选项颜色[0].assign( 0, 0 ); cmdIdkb界面不用文件info.v2s选项[0].assign( 0, "100" );
    cmdIdkb界面不用文件info.v2s选项[0].push_back( "push_back1" );
    cmdIdkb界面不用文件info.v2s选项[0].push_back( "push_back2" );
    cmdIdkb界面不用文件info.v2s选项[0].push_back( "push_back3" );;
    vPushBack3( cmdIdkb界面不用文件info.v2i选项颜色[0], 1, 2, 3, 默认背景色, 默认背景色, 默认背景色, 默认背景色 );
  };/*void*/
  void 输入v2i颜色_例子( cmd窗口界面不用文件v2sInfo& cmdIdkb界面不用文件info ){
    ///cmdIdkb界面不用文件info.v2i选项颜色[0].push_back(1);
    /*v2iResizeOR手动pushB 默认前景色*/ /*qmvi计算_不使用前置变量. v2iResize()*/
  };/*void*/
  /**///c的最小单位
  void c一个元素size( 新v2s v2s, int 行, int 列 ){
    cout1( v2s[行][列].size( ) ); cout1( s选项间隔 );
  }/*void*/
   /*set颜色-->c-->set默认背景色-->c间隔*/
  void c一个元素size( 新v2i v2i, 新v2s v2s, int 行, int 列 ){
    set颜色( v2i[行][列] ); cout1( v2s[行][列].size( ) ); set颜色( 默认背景色 ); cout1( s选项间隔 );
  }/*void*/
   /*c-->c间隔*/
  void c一个元素( 新v2s v2s, int 行, int 列 ){
    cout1( v2s[行][列] ); cout1( s选项间隔 );
  }/*void*/
   /*set颜色-->c-->set默认背景色-->c间隔*/
  void c一个元素( 新v2i v2i, 新v2s v2s, int 行, int 列 ){
    auto lamSet颜色ANDcANDset颜色 = [&]( int 颜色 ){
      set颜色( 颜色 ); cout1( v2s[行][列] ); set颜色( 默认背景色 ); cout1( s选项间隔 ); retu;
      };
    if( 行==当前选择的项_v的下标.一 ){
      if( 列==当前选择的项_v的下标.二 ){
        if( 当前选择的项_v的下标.状态==1/*1=悬停,2=运行前,3=运行时*/ ){
          lamSet颜色ANDcANDset颜色( 默认运行前高亮色 );
        }/*if*/
        if( 当前选择的项_v的下标.状态==2 or 当前选择的项_v的下标.状态==3/*!暂时不区分` 运行前` 运行时*/ ){
          lamSet颜色ANDcANDset颜色( 默认运行时高亮色 );
        }/*if*/
      }/*if*/
    }/*if*/
    lamSet颜色ANDcANDset颜色( v2i[行][列] );
  }/*void*/
   /*c-->c空格-->c间隔*/
  void forV2sC元素( 新v2s v2s, 新v2i v2i, int 每行显示几个元素 ){/*c一个v的选项_对齐*/
    运行时_当前这一行已经显示了几个元素=0;/*每行c几个元素,c=++,c满=0*/
    for( size_t 行 = 0; 行 < v2s.size( ); 行++ ){
      for( size_t 列 = 0; 列 <v2s[行].size( ); 列++ ){
        /*todo if( 当前行字数>最大字数 ){ c一半-->c下一行 }*/
        c一个元素( v2i, v2s, 行, 列 )/*2个v的顺序*/;运行时_当前这一行已经显示了几个元素++/*c=++*/;
        //*if( 每行显示几个元素==1 or 列%每行显示几个元素==0/*每行显示几个>1={ 除尽=换行; 最后补一个换行 }*/ ){ coutEndl;continuefor;}
        if( 每行显示几个元素==运行时_当前这一行已经显示了几个元素 ){ 运行时_当前这一行已经显示了几个元素=0/*c满=0*/;coutEndl; continuefor; }
      }/*for*/
    }/*for*///*if( 每行显示几个元素>1 ){ coutEndl; }
  }/*void*/
  void forV2sC元素_每行显示v行size个选项( 新v2s v2s, 新v2i v2i ){/*forV2sC元素_每行显示最多选项*/
    for( size_t 行 = 0; 行 < v2s.size( ); 行++ ){
      for( size_t 列 = 0; 列 <v2s[行].size( ); 列++ ){
        /*todo if( 当前行字数>最大字数 ){ 不c了,c下一行 }*/
        c一个元素( v2i, v2s, 行, 列 );/*2个v的顺序*/
      }/*for*/
      coutEndl;
    }/*for*///*coutEndl;
  }/*void*/
  void forV2sC选项( cmd窗口界面不用文件v2sInfo& cmdIdkb界面不用文件info ){/*c一个v的选项*/
    forV2sC元素( cmdIdkb界面不用文件info.v2s选项, cmdIdkb界面不用文件info.v2i选项颜色, 每行显示几个选项 );
  }/*void*/
  void forV2sC顶部工具栏选项( cmd窗口界面不用文件v2sInfo& cmdIdkb界面不用文件info ){/*c一个v的顶部工具栏选项*/
    forV2sC元素_每行显示v行size个选项( cmdIdkb界面不用文件info.v2s顶部工具栏, cmdIdkb界面不用文件info.v2i顶部工具栏颜色 );
  }/*void*/
  /**///是`对齐
  void c一个元素_对齐_if小于上限( 新v2s v2s, int 行, int 列 ){/*, int i还差几个到字数上限*/    cout1( v2s[行][列].size( ) );    wfzi读取.coutS( " ",/*还差几个字*/选项对齐的字数上限-v2s[行][列].size( ) );    cout1( s选项间隔 ); }/*void*/
  /*set颜色-->c-->set默认背景色-->c间隔*/
  void c一个元素_对齐_if小于上限( 新v2i v2i, 新v2s v2s, int 行, int 列 ){
    auto lamSet颜色ANDcANDset颜色 = [&]( int 颜色 ){
      set颜色( 颜色 ); cout1( v2s[行][列] );
      /*if-->set颜色*/if( 是否补齐到上限的字显示默认背景色 ){ set颜色( 默认背景色 ); }/*if*/   wfzi读取.coutS( " ", /*还差几个字*/选项对齐的字数上限-v2s[行][列].size( ) );
      set颜色( 默认背景色 ); cout1( s选项间隔 );
      };
    if( 行==当前选择的项_v的下标.一 ){/*是否是`光标悬停的`下标*/
      if( 列==当前选择的项_v的下标.二 ){
        if( 当前选择的项_v的下标.状态==1/*1=悬停,2=运行前,3=运行时*/ ){
          lamSet颜色ANDcANDset颜色( 默认运行前高亮色 );
        }/*if*/
        if( 当前选择的项_v的下标.状态==2 or 当前选择的项_v的下标.状态==3/*!暂时不区分` 运行前` 运行时*/ ){
          lamSet颜色ANDcANDset颜色( 默认运行时高亮色 );
        }/*if*/
      }/*if*/
    }/*if*/
    lamSet颜色ANDcANDset颜色( v2i[行][列] );
  }/*void*/
  void c一个元素_对齐( 新v2s v2s, 新v2i v2i, int 行, int 列 ){
    /*比较字数*/
    if( v2s[行][列].size( )>选项对齐的字数上限 ){
      v2s[行][列] = v2s[行][列].substr( 0, 14 );
      c一个元素( v2i, v2s, 行, 列 );
    }/*if*/
    if( v2s[行][列].size( )==选项对齐的字数上限 ){
      c一个元素( v2i, v2s, 行, 列 );
    }/*if*/
    if( v2s[行][列].size( )<选项对齐的字数上限 ){
      c一个元素_对齐_if小于上限( v2i, v2s, 行, 列 );
    }/*if*/
  }/*void*/
  void c一个选项_对齐( cmd窗口界面不用文件v2sInfo& cmdIdkb界面不用文件info, int 行, int 列 ){
    c一个元素_对齐( cmdIdkb界面不用文件info.v2s选项, cmdIdkb界面不用文件info.v2i选项颜色, 行, 列 );
  }/*void*/
  /*和上面`一样,输入的v不同*/void c一个顶部工具栏选项_对齐( cmd窗口界面不用文件v2sInfo& cmdIdkb界面不用文件info, int 行, int 列 ){
    c一个元素_对齐( cmdIdkb界面不用文件info.v2s顶部工具栏, cmdIdkb界面不用文件info.v2i顶部工具栏颜色, 行, 列 );
  }/*void*/
  void forV2sC元素_对齐( 新v2s v2s, 新v2i v2i, int 每行显示几个元素 ){/*c一个v的选项_对齐*/
    for( size_t 行 = 0; 行 < v2s.size( ); 行++ ){
      for( size_t 列 = 0; 列 <v2s[行].size( ); 列++ ){
        /*todo if( 当前行字数>最大字数 ){ 不c了,c下一行 }*/
        c一个元素_对齐( v2s, v2i, 行, 列 );
        if( 每行显示几个选项==1 or 列%每行显示几个选项==0/*每行显示几个>1={ 除尽=换行; 最后补一个换行 }*/ ){ coutEndl; continuefor; }
      }/*for*/
      if( 每行显示几个选项>1 ){ coutEndl; }
    }/*for*/
    if( 每行显示几个选项>1 ){ coutEndl; }
  }/*void*/
  void forV2sC选项_对齐( cmd窗口界面不用文件v2sInfo& cmdIdkb界面不用文件info ){/*c一个v的选项_对齐*/
    forV2sC元素_对齐( cmdIdkb界面不用文件info.v2s选项, cmdIdkb界面不用文件info.v2i选项颜色, 每行显示几个选项 );
  }/*void*/
  /*!不需对齐*/void forV2sC顶部工具栏选项_对齐( cmd窗口界面不用文件v2sInfo& cmdIdkb界面不用文件info ){/*c一个v的顶部工具栏选项_对齐*/
    forV2sC元素_对齐( cmdIdkb界面不用文件info.v2s顶部工具栏, cmdIdkb界面不用文件info.v2i顶部工具栏颜色, 每行显示几个顶部工具栏选项 );
  }/*void*/
  void c( cmd窗口界面不用文件v2sInfo& cmdIdkb界面不用文件info ){
    int c的内容之前有几行 = 0;
    ///cout1( "c{  }" ); coutEnd行加一(c的内容之前有几行);
    forV2sC顶部工具栏选项( cmdIdkb界面不用文件info );
    if( 选项是否对齐 ==1 ){
      forV2sC选项_对齐( cmdIdkb界面不用文件info );
    } else{
      forV2sC选项( cmdIdkb界面不用文件info );
    }/*else*/
  };/*void*/
  void get光标位置AND清屏ANDcANDset光标坐标( COORD& cmd光标坐标, cmd窗口界面不用文件v2sinfo& cmdIdkb界面不用文件info ){
    ///cout1( "get光标位置( cmd光标坐标 );" ); coutEnd;
    get光标位置( cmd光标坐标 );
    清屏( ); c( cmdIdkb界面不用文件info ); cInfo( cmdIdkb界面不用文件info );
    ///cout1( "set光标坐标( cmd光标坐标 );" ); coutEnd;
    set光标坐标( cmd光标坐标 );
  }/*void*/
  /*!输入{行},输出{列},return{1=选项,2=间隔}*/ /*todo 记录{ cV起始的行, v的在坐标上面的行 }*/
  /*todo 要把v坐标换算成c坐标,坐标对两者来说不一样; if显示几个=1{ 改Y=改X,直到X完 }*/
  int get坐标选中的元素的下标_选项是否对齐( /*输入*/COORD& C当前的光标坐标, COORD& C临时记录光标,int 选项是否对齐, 新v2s v2s, int& 行, /*输出*/int& 列 ){
    ///cout1( "get坐标选中的元素的下标" ); coutEnd;
    /*布局`要考虑到每行显示几个*//*我操，我写过注释2024年12月25日17:28:40*/
    /*todo get 这行的c是`从哪个列开始`哪个列结束*/
    /*假设<每行.size>一样*/
    /*todo if(每行.size不一样)怎么办,HGet选项是v2哪行*/
    if( 每行显示几个选项> v2s[行].size()){
    }/*if*/
    C临时记录光标.X=0;
    if( 选项是否对齐 ){
      if( 行 <v2s.size( ) ){/*outOfR检测*/
        /*!用v下标计算C光标坐标; C+=元素字数-->if(C.X>=C当前坐标.X)-->C+=间隔字数-->if(C.X>=C.X)*/
        for( size_t 列 = 0; 列 <v2s[行].size( ); 列++ ){
          /*加上`元素字数*/C临时记录光标.X += 选项对齐的字数上限;
          if( /*在范围内*/C临时记录光标.X>=C当前的光标坐标.X ){/*是这个COORD坐标( <=.X )上的东西*/
            ///清屏();cout2( "get坐标选中的元素的下标=列=", 列 ); coutEnd;sleep(1000);
            /*结果*/retu 1;/*悬停在坐标v[行, 列]*/
          }/*if*/
          /*加上`间隔*/C临时记录光标.X += s选项间隔.size( );
          if( 是否判定面积包含s选项间隔 ){/*如果包含就再if一次*/
            /*和上面一样*/
            if( C临时记录光标.X>=C当前的光标坐标.X ){
              ///清屏();cout2( "get坐标选中的元素的下标=列=", 列 ); coutEnd;sleep(1000);
              /*结果*/retu 2;/*retu v[行, 列]后面的间隔*/
            }/*if*/
          }/*if*/
        }/*for*/
      }/*if*/
    } else{/*选项不对齐*/
      ///cout1( "else { /*选项不对齐*/" ); coutEnd; ///coutsf( "行={},列={};",行,列 ); coutEnd;/*49,0*/
      if( 行 <v2s.size( ) ){/*outOfR检测*/
        /*?2024年12月25日02:06:23 就是这句*/for( size_t 列 = 0; 列 <v2s[行].size( ); 列++ ){
          ///coutsf( "行={},列={};", 行, 列 ); coutEnd;
          /*加上`元素字数*/C临时记录光标.X += /*字数*/v2s[行][列].size( );
          ///cout1( "你妈你妈你妈你妈" ); coutEnd;
          if( /*在范围内*/C临时记录光标.X>=C当前的光标坐标.X ){/*是这个COORD坐标( <=.X )上的东西*/
            清屏();cout2( "get坐标选中的元素的下标=列=", 列 ); coutEnd;sleep(1000);
            /*结果*/retu 1;/*悬停在坐标v[行, 列]*/
          }/*if*/
          /*加上`间隔*/C临时记录光标.X += s选项间隔.size( );
          ///cout1( "if( 是否判定面积包含s选项间隔 ){" ); coutEnd;
          if( 是否判定面积包含s选项间隔 ){/*如果包含就再if一次*/
            ///cout1( "if包含" ); coutEnd;
            /*和上面一样*/
            if( C临时记录光标.X>=C当前的光标坐标.X ){
              清屏();cout2( "get坐标选中的元素的下标=列=", 列 ); coutEnd;sleep(1000);
              /*结果*/retu 2;/*retu v[行, 列]后面的间隔*/
            }/*if*/
          }/*if*/
        }/*for*/
      } else{
        /*?cout会把光标设置在最后*////coutsf( "在get坐标选中的元素的下标()中差点出现outOfR,行={},列={};", 行, 列 ); coutEnd;
      }/*else*/
    }/*else*/
    ///cout1( "retu 0;" ); coutEnd;
    retu 0;
  };/*int*/
  int get坐标选中的元素的下标( /*输入*/COORD& C当前的光标坐标, COORD& C临时记录光标, 新v2s v2s, int& 行, /*输出*/int& 列 ){
    retu get坐标选中的元素的下标_选项是否对齐(C当前的光标坐标,C临时记录光标,选项是否对齐,v2s,行,列);
  };/*int*/
  /*两种{ 选中选项; 选中选项`开始运行 }*/
  /*顶部工具栏=ret1,选项=ret2*//*?todo 总是v[][0]*/
  int get输入COORD输出下标( /*输入*/cmd窗口界面不用文件v2sinfo& cmdIdkb界面不用文件info, COORD &Ccmd光标坐标,/*输出*/int& 行, int& 列 ){
    ///cout1( "get输入COORD输出下标" ); coutEnd;
    COORD C记录光标2 { 0,0 };
    int v的行 = 0;
    /*把一行的v元素依次加上,if( C记录光标2.X>=C.X )-->运行`从v[此处]*/
    ///cout1( "ifC记录光标2.Y<cmdIdkb界面不用文件info.v2s顶部工具栏.size( )" ); coutEnd;
    if( C记录光标2.Y<cmdIdkb界面不用文件info.v2s顶部工具栏.size( ) ){
      v的行 = Ccmd光标坐标.Y;
      if( get坐标选中的元素的下标( Ccmd光标坐标, C记录光标2, cmdIdkb界面不用文件info.v2s顶部工具栏, v的行,/*输出*/列 )>0 ){/*1=选中选项,2=间隔*/
        行 = v的行;
        retu 1;
      }/*if*/
      retu 0;
    }/*if*/
    ///cout1( "ifC记录光标2.Y<cmdIdkb界面不用文件info.v2s顶部工具栏.size( )+cmdIdkb界面不用文件info.v2s选项.size( )" ); coutEnd;
    if( C记录光标2.Y<cmdIdkb界面不用文件info.v2s顶部工具栏.size( )+cmdIdkb界面不用文件info.v2s选项.size( )/*?要不要减一？*/ ){
      v的行 = Ccmd光标坐标.Y-cmdIdkb界面不用文件info.v2s顶部工具栏.size( );
      if( get坐标选中的元素的下标( Ccmd光标坐标, C记录光标2, cmdIdkb界面不用文件info.v2s选项, v的行, 列 )>0 ){/*1=选中选项,2=间隔*/
        行 = v的行;
        retu 2;
      }/*if*/
      retu 0;
    }/*if*/
    retu 0;
  }/*int*/
  /*输入Ccmd光标坐标; 输出v2s的s { 计算`v的行-->getv的列--> }*/
  string ret输入COORD输出s( cmd窗口界面不用文件v2sinfo& cmdIdkb界面不用文件info, COORD &Ccmd光标坐标/*光标对应一个v2下标*/ ){
    COORD C记录光标2 { 0,0 };
    int v的行 = 0, v的列 = 0;/*s=v2s[v的行][v的列]*/
    /*把一行的v元素依次加上,if( C记录光标2.X>=C.X )-->运行`从v[此处]*/
    if( /*光标2.Y<v.size*/Ccmd光标坐标.Y<cmdIdkb界面不用文件info.v2s顶部工具栏.size( ) ){
      v的行 = Ccmd光标坐标.Y;/*s=v2s[v的行][v的列]*/
      if( /*getv的列*/get坐标选中的元素的下标_选项是否对齐( Ccmd光标坐标, C记录光标2, 0/*特殊情况`这里强制改成零就好了,就是好烦*/,cmdIdkb界面不用文件info.v2s顶部工具栏, v的行, v的列 )>0 ){/*1=选中选项,2=间隔*/
        /*更新标记`坐标选中哪个元素,用来c高亮选项*/当前选择的项_v的下标.一 = v的行, 当前选择的项_v的下标.二 = v的列;
        清屏();cout6( "ret输入COORD输出s{ ","行=",v的行,"列=", v的列,"}" ); coutEnd;sleep(2000);
        retu cmdIdkb界面不用文件info.v2s顶部工具栏[v的行][v的列];
      }/*if*/
      retu "nima";
    }/*if*/
    if( Ccmd光标坐标.Y<cmdIdkb界面不用文件info.v2s顶部工具栏.size( )+cmdIdkb界面不用文件info.v2s选项.size( )/*?+c的不可操作信息的行数*/ ){
      v的行 = Ccmd光标坐标.Y-cmdIdkb界面不用文件info.v2s顶部工具栏.size( )/*?-c的不可操作信息的行数*/ ;
      if( get坐标选中的元素的下标( Ccmd光标坐标, C记录光标2, cmdIdkb界面不用文件info.v2s选项, v的行, v的列 )>0 ){/*1=选中选项,2=间隔*/
        /*更新标记`坐标选中哪个元素,用来c高亮选项*/当前选择的项_v的下标.一 = v的行, 当前选择的项_v的下标.二 = v的列;
        retu cmdIdkb界面不用文件info.v2s选项[v的行][v的列];
      }/*if*/
      retu "nima";
    }/*if*/
    retu "nima";
  }/*string*/
  /*ifS=ret输入COORD输出s(info,Ccmd光标坐标){ 运行 }*/
  int 运行对应的操作( cmd窗口界面不用文件v2sinfo& cmdIdkb界面不用文件info, /*cmd光标坐标*/COORD& C ){
    string s = "";
    get光标位置( C );
    s = ret输入COORD输出s( cmdIdkb界面不用文件info, C );/*?2024年12月25日03:16:13 都是ceui*/
    清屏();
    cout1( "ret输入COORD输出s=" ); cout1( s ); coutEnd;
    cmdIdkb界面_小组件.c光标2(C);coutEnd;
    if( s=="nima" ){
      cout1( "光标处没有选项" ); coutEnd;
      之前和现在批量相等( 200 );/*-->重新检测*/sleep300; set光标位置(C); retu 1;/*完*/
    }/*if*/
    if( s=="ceui" ){
      cout1( "ceui" ); coutEnd;
      cout1( "ceui" ); coutEnd;
      cout1( "ceui" ); coutEnd;
      cout1( "ceui" ); coutEnd;
      cout1( "ceui" ); coutEnd;
      cout1( "ceui" ); coutEnd;
      cout1( "ceui" ); coutEnd;
      之前和现在批量相等( 200 );/*-->重新检测*/sleep300;
      set光标位置(C);retu 1;/*完*/
    }/*if*/
    if( s=="修改外观`颜色" ){
      cmdIdkb界面_小组件.c所有颜色( "" );
      set光标位置(C);retu 1;
    }/*if*/
    if( s=="c所有颜色" ){
      cmdIdkb界面_小组件.c所有颜色( "" );
      set光标位置(C);retu 1;
    }/*if*/
    if( s=="?" ){
      cout1( "?" ); coutEnd;
      cout1( "?" ); coutEnd;
      cout1( "?" ); coutEnd;
      cout1( "?" ); coutEnd;
      cout1( "?" ); coutEnd;
      cout1( "?" ); coutEnd;
      cout1( "?" ); coutEnd;
      cout1( "?" ); coutEnd;
      cout1( "?" ); coutEnd;
      set光标位置(C);retu 1;
    }/*if*/
    if( s=="展开" ){
      cout1( "展开" ); coutEnd;
      cout1( "展开" ); coutEnd;
      cout1( "展开" ); coutEnd;
      cout1( "展开" ); coutEnd;
      cout1( "展开" ); coutEnd;
      cout1( "展开" ); coutEnd;
      cout1( "展开" ); coutEnd;
      cout1( "展开" ); coutEnd;
      cout1( "展开" ); coutEnd;
      set光标位置(C);retu 1;
    }/*if*/
    if( s=="移动" ){
      set光标位置(C);retu 1;
    }/*if*/
    if( s=="重启parsec" ){
      set光标位置(C);retu 1;
    }/*if*/
    /*不存在这种`坐标对应的内容*//*?弹窗确定,就没法操作了*/
    //*MessageBox( NULL, L"不存在这种代码", L"2024年1月30日", MB_OK | MB_ICONASTERISK );/*https://blog.csdn.net/LCR2025/article/details/129223538>*/
    清屏();cout2( "不存在这种代码; s=",s ); coutEnd;sleep(2000);
    retu 0;/*完*/
  }/*int*/
  /*//>用键盘操作光标*/
  int 更改cmd光标坐标AND运行对应的操作( cmd窗口界面不用文件v2sinfo& cmdIdkb界面不用文件info, COORD& cmd光标坐标 ){
    /*没用吧*/COORD 将来的cmd光标坐标, 刚才的cmd光标坐标;
    /*todo 把这段直接截选`当成说明吧*/
    是否已按过按键 = 1;
    /*快捷键`关闭键盘输入*/
    if( 按下 ){
      if( (现在[VK_SPACE]==1)&&(现在['L']==1) ){/*快捷键`切换某个选项*/
        qmvi计算_不使用前置变量.互换01( 是否if键盘输入 );
      }/*if*/
      if( 是否if键盘输入==1 ){
        if( 是否方向键按下时输入==1 ){
          if( 多线程了按键功能!=1 ){
            ///cout1( "if按下VK_SHIFT" ); coutEnd;
            if( (现在[VK_SHIFT]==1)||(现在['Z']==1) ){/*todo 停不下*/
              /*加速*/if4个方向键按下移动cmd光标( 1, 2, cmd光标坐标 );
              ifESDF键按下移动cmd光标( 1, 1, cmd光标坐标 );
              /*更新标记`坐标选中哪个元素*/get输入COORD输出下标( cmdIdkb界面不用文件info, cmd光标坐标, /*这两个不就放里面就行了*/当前选择的项_v的下标.一, 当前选择的项_v的下标.二 );
            } else{
              if4个方向键按下移动cmd光标( 1, 1, cmd光标坐标 ); /*get下标`坐标选中哪个元素*/
              ifESDF键按下移动cmd光标( 1, 1, cmd光标坐标 );
              get输入COORD输出下标( cmdIdkb界面不用文件info, cmd光标坐标, /*这两个不就放里面就行了*/当前选择的项_v的下标.一, 当前选择的项_v的下标.二 );
            }/*else*/
             /*return;*/
          } else{/*多线程了按键功能*/

          }/*else*/
        }/*if*/
        ///cout1( "if现在[VK_RETURN]" ); coutEnd;
        if( /*回车*/现在[VK_RETURN]==1 ){
          /*回车-->运行对应的操作 and 标记v[][]-->c*/
          if( 运行对应的操作( cmdIdkb界面不用文件info, cmd光标坐标 )==1 ){
            retu cmd光标坐标.Y;
          }/*if`3*/
        }/*if`2*/
      }/*if`是否if键盘输入*/
      ///cout1( "是否if左键输入" ); coutEnd;
      if( 是否if左键输入==1 ){
        //>按下左键-->get鼠标坐标对应的光标坐标-->运行对应的操作()
        /*?左键点了会暂停吧,所以不能*/
        ///if( 现在[MOUSE_MOVED]==1 ){
        ///  if( 运行对应的操作( cmdIdkb界面不用文件info, cmd光标坐标 )==1 ){
        ///    retu cmd光标坐标.Y;
        ///  }/*if`3*/
        ///}/*if`2*/
      }/*if`是否if左键输入*/
    }/*if`按下*/
    ///cout1( "if按下=2" ); coutEnd;
    if( 按下==2 ){/*弹起*/
      if( 是否if键盘输入==1 ){
        if( 是否方向键弹起时输入==1 ){
          if( 多线程了按键功能!=1 ){
            if( (现在[VK_SHIFT]==1)||(现在['Z']==1) ){/*todo 停不下*/
              /*加速*/if4个方向键弹起移动cmd光标( 1, 2, cmd光标坐标 );
              /*更新标记`坐标选中哪个元素*/get输入COORD输出下标( cmdIdkb界面不用文件info, cmd光标坐标, /*这两个不就放里面就行了*/当前选择的项_v的下标.一, 当前选择的项_v的下标.二 );
            } else{
              if4个方向键弹起移动cmd光标( 1, 1, cmd光标坐标 ); /*get下标`坐标选中哪个元素*/get输入COORD输出下标( cmdIdkb界面不用文件info, cmd光标坐标, /*这两个不就放里面就行了*/当前选择的项_v的下标.一, 当前选择的项_v的下标.二 );
            }/*else*/
             /*return;*/
          } else{/*多线程了按键功能*/

          }/*else*/
        }/*if*/
      }/*if*/
    }/*if`弹起*/
    retu 0;
  }
  int if按下更改cmd光标坐标AND运行对应的操作( int& 是否有按键按下, cmd窗口界面不用文件v2sinfo& cmdIdkb界面不用文件info, COORD& cmd光标坐标 ){
    /*todo 把这段直接截选`当成说明吧*/
    if( 是否有按键按下>=1 ){
      retu 更改cmd光标坐标AND运行对应的操作( cmdIdkb界面不用文件info, cmd光标坐标 );
    }/*if*/
    retu 0;
  }
  /**///▬附加功能▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
  void 例子_c界面( ){
    禁止鼠标左键点( );
    //*COORD cmd光标坐标;
    ///cout1( "cmdIdkb界面不用文件info{  }" );/* cout1( c结果 );*/ coutEnd;
    cmd窗口界面不用文件v2sinfo cmdIdkb界面不用文件info; ///cout1( "cmdIdkb界面不用文件info`已新建;" );/* cout1( c结果 );*/ coutEnd;
    ///qmvi计算_不使用前置变量.v2sAssign( cmdIdkb界面不用文件info.v2s顶部工具栏, 10, 10, "100" );
    ///qmvi计算_不使用前置变量.v2iAssign( cmdIdkb界面不用文件info.v2i顶部工具栏颜色, 10, 10, 100 );
    ///qmvi计算_不使用前置变量.v2sAssign( cmdIdkb界面不用文件info.v2s选项, 10, 10, "100" );
    ///qmvi计算_不使用前置变量.v2iAssign( cmdIdkb界面不用文件info.v2i选项颜色, 10, 10, 100 );
    每行显示几个顶部工具栏选项 = 140;
    每行显示几个选项 = /*!todo*/1
      , 选项是否对齐 = 1
      , 选项对齐的字数上限 = 14;
    ///选项是否对齐 = 0, 选项的字数上限 = 选项对齐的字数上限;/*todo*/
    是否方向键弹起时输入 = 0;
    是否方向键按下时输入 = 1;
    /**///初始化
    ///检测按键是否按下 jmce按键是否按下;
    多个之前和现在归零( 1400 );
    输入v2s_例子( cmdIdkb界面不用文件info );
    输入v2i颜色_例子( cmdIdkb界面不用文件info );
    /**///开始
    c( cmdIdkb界面不用文件info );
    cInfo( cmdIdkb界面不用文件info );
    while( true ){
      检测全部键是否按下( );/*-->按下=1*/
      if( 按下>0 ){
        /*按下-->get坐标-->清屏c-->set坐标-->更改cmd光标坐标-->弹起-->*/
        get光标位置AND清屏ANDcANDset光标坐标( cmd光标坐标, cmdIdkb界面不用文件info );
        更改cmd光标坐标AND运行对应的操作( cmdIdkb界面不用文件info, cmd光标坐标 );
      }/*if`弹起*/
      /**///
      按下 = 0; 是否已按过按键 = 0;
      之前和现在批量相等( 200 );/*-->重新检测*/
      sleep5;
    }/*while*/
  }
};



#endif