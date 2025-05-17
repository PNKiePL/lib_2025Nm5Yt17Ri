#pragma once
//c++
#ifndef 类型转换_H
#define 类型转换_H

#include  <E:\lib\头文件 c++.h>
class 类型转换{
  ///类型转换 lzxy转换; ccp = 简写Adb.lzxy转换.TOccp( s );/*空的*/
public:
public:
public:
  //▬全写,TO+小写▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬

  //▬简写,to+大写▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
  char toC( string 输入 ){ TOc( 输入 ); }/*char*/
  char toC( const char* 输入 ){ return (char)输入; }/*char*/
  //▬简写,t+大写▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
  char tC( string 输入 ){ TOc( 输入 ); }/*char*/
  char tC( const char* 输入 ){ return (char)输入; }/*char*/
  //▬简写,TO+小写▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
  char TOc( string 输入 ){ const char* cc输入 = 输入.c_str( );    return (char)(cc输入); }/*char*/
  char TOc( const char* 输入 ){ return (char)输入; }/*char*/
  char TOc( int i ){
    ////return (char)i + '0';/*https://blog.csdn.net/qq_33726635/article/details/107292795 >*/
    新c c[14];
    return  _itoa_s( i, c, 10 );/*https://docs.pingcode.com/baike/1234174 */
  }
  /*cc,不知道*/
  const char TOcc( string 输入 ){
    return (新cc)输入.c_str( );
  }/*const char*/
  const char TOcc( char 输入 ){
    return (const char)输入;
  }/*const char*/
  const char* TOccp用s点c_str( string s ){/*TOccpByS点c_str*/
    return s.c_str( );/*?直接用s.cstr可以的,用这个是`葺葺葺葺葺葺葺葺葺葺葺葺葺葺葺葺葺葺葺葺葺葺葺葺葺葺葺葺葺葺葺葺葺葺葺葺葺葺葺葺葺葺l*/
  }/*const char*/
  const char* TOccp用s点c_str7( string& s ){
    return s.c_str( );
  }/*const char*/
  /*c[]=s[]-->ccp;*/
  const char* TOccp( string s ){
    新c c[140] = "";
    for( size_t i = 0; i < s.size( ); i++ ){
      c[i] = s[i];
    }/*for*/
    return (新ccp)c;
  }/*const char*/
  const char* TOccp( char 输入 ){
    return (const char*)输入;
  }/*const char*/
  /*todo s.c_str()全都是数字*/
  const char* TOccp( int i ){
    ///新ccp ccp[14];
    新c c[14];
    return  (新ccp)_itoa_s( i, c, 10 );/*https://docs.pingcode.com/baike/1234174 */
  }/*const char*/
  void TOccp( char 输入, const char*& 输出 ){
    输出 = (const char*)输入;
  }/*void*/
  char const* TOcharCp( string 输入 ){ }/*char const**/
  char const* TOcharCp( char 输入 ){
    return (char const*)输入;
  }/*char const**/
  string TOs( char C ){
    return to_string( C );/*2025年1月8日21:00:01`( + 和 .appendS )=( 数字+s );*/
  }/*string*/
  string 一位charTOs( char c ){
    string s结果;
    s结果.assign( 1, c );
    return s结果;
  }/*string*/
#define TOs输入一位char 一位charTOs
#define TOs_一位char 一位charTOs
  string TOs( const char* ccp, int ccp的buffer大小 ){
    ////return to_string((char)ccp);
    新s s; s.assign( 2800, '0' );
    新c c复制ccp[2800]; strcpy_s( c复制ccp, ccp );
    size_t i = 0;
    for( ; i < ccp的buffer大小; i++ ){
      s[i] = c复制ccp[i];
    }/*for*/
    s = s.substr( 0, i );
    return s;
  }/*string*/
  string TOs( const char* ccp ){
    ////return to_string((char)ccp);
    新s s; s.assign( 2800, '0' );
    新c c复制ccp[2800]; strcpy_s( c复制ccp, ccp );
    size_t i = 0;
    for( ; i < strlen( c复制ccp ); i++ ){
      s[i] = c复制ccp[i];
    }/*for*/
    s = s.substr( 0, i );
    return s;
  }/*string*/
  string TOs( int I ){
    return to_string( I );
  }/*string*/
  string TOs( size_t I64 ){ return to_string( I64 ); }/*string*/;
  string TOs( 新f 数 ){ return to_string( 数 ); }/*string*/;
  /*TCHAR=LPTSTR*//*****************************************
  Function:        TCHAR2STRING
  Description:     TCHAR转string
  Input:           str:待转化的TCHAR*类型字符串
  Return:          转化后的string类型字符串
  *****************************************/

  string TOs( CString cs ){/*https://blog.csdn.net/u014801811/article/details/90439888 */
    std::string s( CW2A( cs.GetString( ) ) );		return s;
  }/*string*/;
  /*?已经定义或声明, =<TCHAR* pTCHAR>*//*没试*/
  string TOs( LPTSTR _入 ){/*https://cplusplus.com/forum/windows/186674/ */
    //*std::string s(_入);
    wstring ws( _入 );
    return TOs(ws);
    std::string s = (LPSTR)_入;

  }/*string*/;
  string TOs( wstring ws_入 ){/*https://www.geeksforgeeks.org/convert-wstring-to-string-in-c/ */
    // Calculating the length of the multibyte string
    // Creating a buffer to hold the multibyte string
    char* buffer = new char[800];
    // Converting wstring to string
    wcstombs_s( 0,buffer,1000, ws_入.c_str( ), 999 );
    // Creating std::string from char buffer
    string str( buffer );
    // Cleaning up the buffer
    delete[] buffer;
    retu str;
  }/*string*/;
  /*CString*/
  CString TOCstr( string str ){/*TOCstr ToCstring TOCstring TOcstring TOCSTRING ToCSTRING*//*https://blog.csdn.net/dycljj/article/details/110529484 */
    return CString( str.c_str( ) );
  }/*CString*/
  int TOi( char c ){
    switch( c ){
    case '0':return 0; break;
    case '1':return 1; break;
    case '2':return 2; break;
    case '3':return 3; break;
    case ' 4':return 4; break;
    case '5':return 5; break;
    case '6':return 6; break;
    case '7':return 7; break;
    case '8':return 8; break;
    case '9':return 9; break;
    default:retu - 1; break;
    }
  }
  int TOi( const char* cC ){
    return atoi( cC );
  }
  int TOi( string S ){
    return stoi( S );
  }
  time_t TOtime_t( const SYSTEMTIME& st ){//SYSTEMTIME 与 time_t 之间的转换 https://blog.csdn.net/hellokandy/article/details/51329446
    struct tm gm = { st.wSecond, st.wMinute, st.wHour, st.wDay, st.wMonth - 1, st.wYear - 1900, st.wDayOfWeek, 0, 0 };
    return mktime( &gm );
  }/*time_t*/
  /*?加&= 识别不到`函数*/
  time_t TOtime_t( filesystem::file_time_type 时间 ){
    //*/*https://cloud.tencent.com/developer/ask/sof/242796 */
    //*time_t 新time_t = filesystem::file_time_type::clock::/*?没有成员*/to_time_t();
    //*filesystem::file_time_type::clock 哈哈;time_t 新time_t = 哈哈.to_time_t(时间);
    //*std::time_t 新time_t = decltype(filesystem::file_time_type)::clock::to_time_t(时间);
    /*https://dev59.com/CVIH5IYBdhLWcg3wIJmB */
    ///const auto fileTime = std::filesystem::last_write_time(filePath);
    const auto systemTime = std::chrono::clock_cast<std::chrono::system_clock>(时间);
    const auto 新time_t = std::chrono::system_clock::to_time_t( systemTime );
    return 新time_t;
  }/*time_t*/
#define TOTime_t TOtime_t
#define TOTimet TOtime_t
#define Ttime_t TOtime_t
#define Ttimet TOtime_t
  /*2025年1月20日20:07:34,<filesystem::file_time_type>TOtime_t*/
  time_t TOtime_t( string filePath/**,filesystem::directory_iterator( filePath ) &一个文件的属性*/ ){
    /*https://dev59.com/CVIH5IYBdhLWcg3wIJmB */
    const auto fileTime = std::filesystem::last_write_time( filePath );
    const auto systemTime = std::chrono::clock_cast<std::chrono::system_clock>(fileTime);
    const auto 新time_t = std::chrono::system_clock::to_time_t( systemTime );
    return 新time_t;
  }/*time_t*/
#define strTOfile_time_typeTOtime_t TOtime_t
#define retStrTOfile_time_typeTOtime_t TOtime_t
#define pathTOfile_time_typeTOtime_t TOtime_t
#define retPathTOfile_time_typeTOtime_t TOtime_t
  SYSTEMTIME TOSYSTEMTIME( time_t t ){
    tm temptm; localtime_s( &temptm, &t );
    SYSTEMTIME st = { 1900 + temptm.tm_year,
      1 + temptm.tm_mon,
      temptm.tm_wday,
      temptm.tm_mday,
      temptm.tm_hour,
      temptm.tm_min,
      temptm.tm_sec,
      0 };
    return st;
  }
  //▬简写,T+大写▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
#define TC TOc
#define TCc TOcc
#define TCcp TOccp
#define TS TOs
#define TI TOi
#define TTime_t TOtime_t
#define TTimet TOtime_t


public:
};

#endif


