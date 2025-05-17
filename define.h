#pragma once
#ifndef DEFINE_H
#define DEFINE_H

//namespace wode {
//}
/**///▬关键词▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
#define 右大括号 }
#define 右大括号分号 };
#define 右大括号if }/*if*/;
#define 右大括号while }/*while*/;
#define 右大括号for }/*for*/;
/**///▬关键词▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
#define mian main
#define wihle while
#define wijle while
//#define vec vector
//#define sw switch
//#define au auto
//#define vo void
//#define stri string		//可以
//#define st string
//#define mat Mat			//改成小写是和qt重名的
///#define min min //覆盖define
///#define max max
#define cstr c_str()
////#define c_str c_str()
#define retu return
#define RETU return
#define retu1 return 1
#define retu0 return 0
#define retus return s
#define retuS return S
#define retus结果 return s结果
#define retuS结果 return S结果
////#define s:: std::
#define bre break
#define breakwhile break
#define breakWhile break
#define breakfor break
#define breakFor break
#define breakif break
#define breakIf break
#define conti continue
#define contin continue
#define continu continue
#define continuewhile continue
#define continueWhile continue
#define continuwhile continue
#define continuWhile continue
#define continuefor continue
#define continufor continue
#define continuFor continue
#define continueFor continue

/*SYSTEMTIME*/
#define SYSTEMTIME小时 wHour
#define SYSTEMTIME分 wMinute
#define SYSTEMTIME秒 wSecond
#define SYSTEMTIME毫秒 wMilliseconds
//▬类型名▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
#define 新a auto
#define AUTO auto
#define 新s string
#define 新str string
#define 新sv string_view
#define 新c char
#define 新cp char*
#define 新cc const char
#define 新ccp const char*
#define 新i int
#define itn int
#define 新ip int*
#define intp int*
#define 新sh short
#define 新l long
#define 新f float
#define 新d double
#define 新ostst ostringstream 
#define 新Mat Mat
#define 新M Mat
/*结构`类型*/
#define vodi void
#define 新vo void
#define 新vodi void
#define 新void void
/*v,vec,vector*/
#define 新v  vector
#define 新v2 vector<vector
#define 新v3 vector<vector<vector
#define 新v4 vector<vector<vector<vector
#define 新v5 vector<vector<vector<vector<vector
#define 新vec  新v 
#define 新vec2 新v2 
#define 新vec3 新v3 
#define 新vec4 新v4 
#define 新vec5 新v5 
#define 新va  vector<auto>
#define 新v2a vector<vector<auto>>
#define 新v3a vector<vector<vector<auto>>>
#define 新v4a vector<vector<vector<vector<auto>>>>
#define 新v5a vector<vector<vector<vector<vector<auto>>>>>
#define 新vecA 新va
#define 新vc  vector<char>
#define 新v2c vector<vector<char>>
#define 新v3c vector<vector<vector<char>>>
#define 新v4c vector<vector<vector<vector<char>>>>
#define 新v5c vector<vector<vector<vector<vector<char>>>>>
#define 新vecC 新vc
#define 新vs  vector<string>
#define 新v2s vector<vector<string>>
#define 新v3s vector<vector<vector<string>>>
#define 新v4s vector<vector<vector<vector<string>>>>
#define 新v5s vector<vector<vector<vector<vector<string>>>>>
#define 新vecs 新vs
#define 新vi  vector<int>
#define 新v2i vector<vector<int>>
#define 新v3i vector<vector<vector<int>>>
#define 新v4i vector<vector<vector<vector<int>>>>
#define 新v5i vector<vector<vector<vector<vector<int>>>>>
#define 新vecI 新vi
#define 新vip  vector<int*>
#define 新v2ip vector<vector<int*>>
#define 新v3ip vector<vector<vector<int*>>>
#define 新v4ip vector<vector<vector<vector<int*>>>>
#define 新v5ip vector<vector<vector<vector<vector<int*>>>>>
#define 新vecIp 新vip
#define 新vsh  vector<short>
#define 新v2sh vector<vector<short>>
#define 新v3sh vector<vector<vector<short>>>
#define 新v4sh vector<vector<vector<vector<short>>>>
#define 新v5sh vector<vector<vector<vector<vector<short>>>>>
#define 新vSh 新vsh
#define 新vecSh 新vsh
#define 新vl  vector<long>
#define 新v2l vector<vector<long>>
#define 新v3l vector<vector<vector<long>>>
#define 新v4l vector<vector<vector<vector<long>>>>
#define 新v5l vector<vector<vector<vector<vector<long>>>>>
#define 新vll  vector<long long>
#define 新v2ll vector<vector<long long>>
#define 新v3ll vector<vector<vector<long long>>>
#define 新v4ll vector<vector<vector<vector<long long>>>>
#define 新v5ll vector<vector<vector<vector<vector<long long>>>>>
#define 新vlll  vector<long long long>
#define 新v2lll vector<vector<long long long>>
#define 新v3lll vector<vector<vector<long long long>>>
#define 新v4lll vector<vector<vector<vector<long long long>>>>
#define 新v5lll vector<vector<vector<vector<vector<long long long>>>>>
#define 新vllll  vector<long long long long>
#define 新v2llll vector<vector<long long long long>>
#define 新v3llll vector<vector<vector<long long long long>>>
#define 新v4llll vector<vector<vector<vector<long long long long>>>>
#define 新v5llll vector<vector<vector<vector<vector<long long long long>>>>>
#define 新vf  vector<float>
#define 新v2f vector<vector<float>>
#define 新v3f vector<vector<vector<float>>>
#define 新v4f vector<vector<vector<vector<float>>>>
#define 新v5f vector<vector<vector<vector<vector<float>>>>>
#define 新vd  vector<double>
#define 新v2d vector<vector<double>>
#define 新v3d vector<vector<vector<double>>>
#define 新v4d vector<vector<vector<vector<double>>>>
#define 新v5d vector<vector<vector<vector<vector<double>>>>>
#define 新vtt  vector<time_t>
#define 新v2tt vector<vector<time_t>>
#define 新v3tt vector<vector<vector<time_t>>>
#define 新v4tt vector<vector<vector<vector<time_t>>>>
#define 新v5tt vector<vector<vector<vector<vector<time_t>>>>>
#define 新vhwnd  vector<HWND>
#define 新v2hwnd vector<vector<HWND>>
#define 新v3hwnd vector<vector<vector<HWND>>>
#define 新v4hwnd vector<vector<vector<vector<HWND>>>>
#define 新v5hwnd vector<vector<vector<vector<vector<HWND>>>>>

/*push_back多个,v.p1; v.p2; v.p3; */
#define pushb push_back
#define pushB push_back
#define push_b push_back
#define push_B push_back
#define vPushb1(v,p1) v.push_back(p1);
#define vPushb2(v,p1,p2) v.push_back(p1);v.push_back(p2);
#define vPushb3(v,p1,p2,p3) v.push_back(p1);v.push_back(p2);v.push_back(p3);
#define vPushb4(v,p1,p2,p3,p4) v.push_back(p1);v.push_back(p2);v.push_back(p3);v.push_back(p4);
#define vPushb5(v,p1,p2,p3,p4,p5) v.push_back(p1);v.push_back(p2);v.push_back(p3);v.push_back(p4);v.push_back(p5);
#define vPushb6(v,p1,p2,p3,p4,p5,p6) v.push_back(p1);v.push_back(p2);v.push_back(p3);v.push_back(p4);v.push_back(p5);v.push_back(p6);
#define vPushB1(v,p1) v.push_back(p1);
#define vPushB2(v,p1,p2) v.push_back(p1);v.push_back(p2);
#define vPushB3(v,p1,p2,p3) v.push_back(p1);v.push_back(p2);v.push_back(p3);
#define vPushB4(v,p1,p2,p3,p4) v.push_back(p1);v.push_back(p2);v.push_back(p3);v.push_back(p4);
#define vPushB5(v,p1,p2,p3,p4,p5) v.push_back(p1);v.push_back(p2);v.push_back(p3);v.push_back(p4);v.push_back(p5);
#define vPushB6(v,p1,p2,p3,p4,p5,p6) v.push_back(p1);v.push_back(p2);v.push_back(p3);v.push_back(p4);v.push_back(p5);v.push_back(p6);
#define vPush_back1(v,p1) v.push_back(p1);
#define vPush_back2(v,p1,p2) v.push_back(p1);v.push_back(p2);
#define vPush_back3(v,p1,p2,p3) v.push_back(p1);v.push_back(p2);v.push_back(p3);
#define vPush_back4(v,p1,p2,p3,p4) v.push_back(p1);v.push_back(p2);v.push_back(p3);v.push_back(p4);
#define vPush_back5(v,p1,p2,p3,p4,p5) v.push_back(p1);v.push_back(p2);v.push_back(p3);v.push_back(p4);v.push_back(p5);
#define vPush_back6(v,p1,p2,p3,p4,p5,p6) v.push_back(p1);v.push_back(p2);v.push_back(p3);v.push_back(p4);v.push_back(p5);v.push_back(p6);
#define vPushback1(v,p1) v.push_back(p1);
#define vPushback2(v,p1,p2) v.push_back(p1);v.push_back(p2);
#define vPushback3(v,p1,p2,p3) v.push_back(p1);v.push_back(p2);v.push_back(p3);
#define vPushback4(v,p1,p2,p3,p4) v.push_back(p1);v.push_back(p2);v.push_back(p3);v.push_back(p4);
#define vPushback5(v,p1,p2,p3,p4,p5) v.push_back(p1);v.push_back(p2);v.push_back(p3);v.push_back(p4);v.push_back(p5);
#define vPushback6(v,p1,p2,p3,p4,p5,p6) v.push_back(p1);v.push_back(p2);v.push_back(p3);v.push_back(p4);v.push_back(p5);v.push_back(p6);
#define vPushBack1(v,p1) v.push_back(p1);
#define vPushBack2(v,p1,p2) v.push_back(p1);v.push_back(p2);
#define vPushBack3(v,p1,p2,p3) v.push_back(p1);v.push_back(p2);v.push_back(p3);
#define vPushBack4(v,p1,p2,p3,p4) v.push_back(p1);v.push_back(p2);v.push_back(p3);v.push_back(p4);
#define vPushBack5(v,p1,p2,p3,p4,p5) v.push_back(p1);v.push_back(p2);v.push_back(p3);v.push_back(p4);v.push_back(p5);
#define vPushBack6(v,p1,p2,p3,p4,p5,p6) v.push_back(p1);v.push_back(p2);v.push_back(p3);v.push_back(p4);v.push_back(p5);v.push_back(p6);
#define push_back1(v,p1) v.push_back(p1);
#define push_back2(v,p1,p2) v.push_back(p1);v.push_back(p2);
#define push_back3(v,p1,p2,p3) v.push_back(p1);v.push_back(p2);v.push_back(p3);
#define push_back4(v,p1,p2,p3,p4) v.push_back(p1);v.push_back(p2);v.push_back(p3);v.push_back(p4);
#define push_back5(v,p1,p2,p3,p4,p5) v.push_back(p1);v.push_back(p2);v.push_back(p3);v.push_back(p4);v.push_back(p5);
#define push_back6(v,p1,p2,p3,p4,p5,p6) v.push_back(p1);v.push_back(p2);v.push_back(p3);v.push_back(p4);v.push_back(p5);v.push_back(p6);
#define pushback1(v,p1) v.push_back(p1);
#define pushback2(v,p1,p2) v.push_back(p1);v.push_back(p2);
#define pushback3(v,p1,p2,p3) v.push_back(p1);v.push_back(p2);v.push_back(p3);
#define pushback4(v,p1,p2,p3,p4) v.push_back(p1);v.push_back(p2);v.push_back(p3);v.push_back(p4);
#define pushback5(v,p1,p2,p3,p4,p5) v.push_back(p1);v.push_back(p2);v.push_back(p3);v.push_back(p4);v.push_back(p5);
#define pushback6(v,p1,p2,p3,p4,p5,p6) v.push_back(p1);v.push_back(p2);v.push_back(p3);v.push_back(p4);v.push_back(p5);v.push_back(p6);
#define pushBack1(v,p1) v.push_back(p1);
#define pushBack2(v,p1,p2) v.push_back(p1);v.push_back(p2);
#define pushBack3(v,p1,p2,p3) v.push_back(p1);v.push_back(p2);v.push_back(p3);
#define pushBack4(v,p1,p2,p3,p4) v.push_back(p1);v.push_back(p2);v.push_back(p3);v.push_back(p4);
#define pushBack5(v,p1,p2,p3,p4,p5) v.push_back(p1);v.push_back(p2);v.push_back(p3);v.push_back(p4);v.push_back(p5);
#define pushBack6(v,p1,p2,p3,p4,p5,p6) v.push_back(p1);v.push_back(p2);v.push_back(p3);v.push_back(p4);v.push_back(p5);v.push_back(p6);

/*fstream*/
#define 新fs fstream
#define 新fst fstream
#define 新ifs ifstream
#define 新ofs ofstream
///读取(默认文档, "E:\\库\\头文件\\按键检测.cpp");
#define 从头读取(a, b) (a.open(b, ios::in))  
#define 从头写入(a, b) (a.open(b, ios::out))
#define 从末尾写入(a, b) (a.open(b, ios::app))
#define 二进制读取(a, b) (a.open(b, ios::binary))
#define 定位到末尾(a, b) (a.open(b, ios::ate))
#define 覆盖(a, b) (a.open(b, ios::trunc)) //没用
/*读写*/
#define 从头覆盖写入(a, b) (a.open(b, ios::out| ios::trunc))
#define 从头覆盖读写(a, b) (a.open(b, ios::in | ios::out | ios::trunc))
#define 从头读写(a, b) (a.open(b, ios::in | ios::out))
#define 从末尾读写(a, b) (a.open(b, ios::in | ios::out|ios::app))


//▬方法▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
#define 两值中_返回大的(a,b) (a< b) ? b : a
#define 两值中_返回小的(a,b) (a< b) ? a : b
//▬结构的简写▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
/*//#define 左右大括号(函数名) 函数名(){}
////#define 左大括号(函数名) 函数名(){
////#define 右大括号(函数名) 函数名()}*/
//#define 新void(函数名) void 函数名
//#define 新auto(函数名) auto 函数名
//#define 新str(函数名) string 函数名
//#define 新int(函数名) int 函数名
/**///▬函数`简写▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
#define cmdret 		exit(0);
#define cmdRet 		exit(0);
#define cmdbreake 		exit(0);
#define cmdbre 		exit(0);
#define cmdBre 		exit(0);
///#define cmdret system(R"(exit)")
///#define cmdRet system(R"(exit)")
///#define cmdbreake system(R"(exit)")
///#define cmdbre system(R"(exit)")
///#define cmdBre system(R"(exit)")
#define sleep Sleep
#define sllep Sleep
#define Sllep Sleep
#define SLEEP Sleep
#define sleep1 Sleep(1)
#define sleep3 Sleep(3)
#define sleep4 Sleep(4)
#define sleep5 Sleep(5)
#define sleep6 Sleep(6)
#define sleep7 Sleep(7)
#define sleep10 Sleep(10)
#define sleep14 Sleep(14)
#define sleep100 Sleep(100)
#define sleep140 Sleep(140)
#define sleep200 Sleep(200)
#define sleep300 Sleep(300)
#define sleep500 Sleep(500)
#define sleep1000 Sleep(1000)
#define sleep1400 Sleep(1400)
#define sleep2000 Sleep(2000)
#define sleep3000 Sleep(3000)
#define sleep5000 Sleep(5000)
#define sleep10000 Sleep(10000)
#define sleep14000 Sleep(14000)
#define sleep50000 Sleep(50000)
#define sleep60000 Sleep(60000)
#define sleep70000 Sleep(70000)
#define sleep80000 Sleep(80000)
#define sleep90000 Sleep(90000)
#define sleep100000 Sleep(100000)
#define sleep140000 Sleep(140000)
#define sleep100000 Sleep(1000000)
#define sleep1400000  Sleep(1400000)
#define tostring to_string
#define v行数 size()
#define v元素数 size()
#define v长度 size()
#define v的长度 size()
/*COUT*/
#define COUT cout
#define cEndl cout<<endl
#define coutEndl cout<<endl
#define cEnd cout<<endl
#define coutEnd cout<<endl
#define coutEnd行加一(行) cout<<endl;行++;
#define cout1(a) cout<<a
#define cout2(a,b) cout<<a<<b
#define cout3(a,b,c) cout<<a<<b<<c
#define cout4(a,b,c,d) cout<<a<<b<<c<<d
#define cout5(a,b,c,d,e) cout<<a<<b<<c<<d<<e
#define cout6(a,b,c,d,e,f) cout<<a<<b<<c<<d<<e<<f
#define cout7(a,b,c,d,e,f,g) cout<<a<<b<<c<<d<<e<<f<<g
#define cout8(a,b,c,d,e,f,g,h) cout<<a<<b<<c<<d<<e<<f<<g<<h
#define cout9(a,b,c,d,e,f,g,h,i) cout<<a<<b<<c<<d<<e<<f<<g<<h<<i
#define cout10(a,b,c,d,e,f,g,h,i,j) cout<<a<<b<<c<<d<<e<<f<<g<<h<<i<<j
#define cout11(a,b,c,d,e,f,g,h,i,j,k) cout<<a<<b<<c<<d<<e<<f<<g<<h<<i<<j<<k
#define cout12(a,b,c,d,e,f,g,h,i,j,k,l) cout<<a<<b<<c<<d<<e<<f<<g<<h<<i<<j<<k<<l
/*这两种一样的*/
#define couta1(a)                          cout1(a)
#define couta2(a,b)                        cout2(a,b)
#define couta3(a,b,c)                      cout3(a,b,c)
#define couta4(a,b,c,d)                    cout4(a,b,c,d)
#define couta5(a,b,c,d,e)                  cout5(a,b,c,d,e)
#define couta6(a,b,c,d,e,f)                cout6(a,b,c,d,e,f)
#define couta7(a,b,c,d,e,f,g)              cout7(a,b,c,d,e,f,g)
#define couta8(a,b,c,d,e,f,g,h)            cout8(a,b,c,d,e,f,g,h)
#define couta9(a,b,c,d,e,f,g,h,i)          cout9(a,b,c,d,e,f,g,h,i)
#define couta10(a,b,c,d,e,f,g,h,i,j)       cout10(a,b,c,d,e,f,g,h,i,j)
#define couta11(a,b,c,d,e,f,g,h,i,j,k)     cout11(a,b,c,d,e,f,g,h,i,j,k)
#define couta12(a,b,c,d,e,f,g,h,i,j,k,l)   cout12(a,b,c,d,e,f,g,h,i,j,k,l)
#define cou1 cout1 
#define cou2 cout2 
#define cou3 cout3 
#define cou4 cout4 
#define cou5 cout5 
#define cou6 cout6 
#define cou7 cout7 
#define cou8 cout8 
#define cou9 cout9 
#define cou10 cout10
#define cou11 cout11
#define cou12 cout12
#define COUT1 cout1 
#define COUT2 cout2 
#define COUT3 cout3 
#define COUT4 cout4 
#define COUT5 cout5 
#define COUT6 cout6 
#define COUT7 cout7 
#define COUT8 cout8 
#define COUT9 cout9 
#define COUT10 cout10
#define COUT11 cout11
#define COUT12 cout12
/*带颜色c*/
///#define c颜色1(cmd1,i1,a) cmd1.set颜色(i1);cout<<a;
#define 带颜色c c颜色
#define c颜色1(i1,a,i2) cmd1.set颜色(i1);cout<<a;cmd1.set颜色(i2);
#define c颜色2(i1,a,i2,b,i3) cmd1.set颜色(i1);cout<<a;cmd1.set颜色(i2);cout<<b;cmd1.set颜色(i3);
#define c颜色3(i1,a,i2,b,i3,c,i4) cmd1.set颜色(i1);cout<<a;cmd1.set颜色(i2);cout<<b;cmd1.set颜色(i3);cout<<c;cmd1.set颜色(i4);
#define c颜色4(i1,a,i2,b,i3,c,i4,d,i5) cmd1.set颜色(i1);cout<<a;cmd1.set颜色(i2);cout<<b;cmd1.set颜色(i3);cout<<c;cmd1.set颜色(i4);cout<<d;cmd1.set颜色(i5);
#define c颜色5(i1,a,i2,b,i3,c,i4,d,i5,e,i6) cmd1.set颜色(i1);cout<<a; cmd1.set颜色(i2);cout<<b; cmd1.set颜色(i3);cout<<c; cmd1.set颜色(i4);cout<<d; cmd1.set颜色(i5);cout<<e; cmd1.set颜色(i6);
#define c颜色1_不需要cmd1(i1,a,i2) set颜色(i1);cout<<a;set颜色(i2);
#define c颜色2_不需要cmd1(i1,a,i2,b,i3) set颜色(i1);cout<<a;set颜色(i2);cout<<b;set颜色(i3);
#define c颜色3_不需要cmd1(i1,a,i2,b,i3,c,i4) set颜色(i1);cout<<a;set颜色(i2);cout<<b;set颜色(i3);cout<<c;set颜色(i4);
#define c颜色4_不需要cmd1(i1,a,i2,b,i3,c,i4,d,i5) set颜色(i1);cout<<a;set颜色(i2);cout<<b;set颜色(i3);cout<<c;set颜色(i4);cout<<d;set颜色(i5);
#define c颜色5_不需要cmd1(i1,a,i2,b,i3,c,i4,d,i5,e,i6) set颜色(i1);cout<<a;set颜色(i2);cout<<b;set颜色(i3);cout<<c;set颜色(i4);cout<<d;set颜色(i5);cout<<e;set颜色(i6);
#define set颜色ANDcout (classCmd1,将set的颜色1,c的内容1) classCmd1.set颜色( 将set的颜色1 );cout<<(c的内容1);
#define set颜色ANDcoutsf (classCmd1,将set的颜色1,c的内容1) classCmd1.set颜色( 将set的颜色1 );cout<<std::format( "{}", c的内容1);
/*cout`format*/
#define coutf cout<<format/*(*/
#define coutf0(a) cout<<format(a)
#define coutf1(a,b) cout<<format(a,b)
#define coutf2(a,b,c) cout<<format(a,b,c)
#define coutf3(a,b,c,d) cout<<format(a,b,c,d)
#define coutf4(a,b,c,d,e) cout<<format(a,b,c,d,e)
#define coutf5(a,b,c,d,e,f) cout<<format(a,b,c,d,e,f)
#define coutf6(a,b,c,d,e,f,g) cout<<format(a,b,c,d,e,f,g)
#define coutf7(a,b,c,d,e,f,g,h) cout<<format(a,b,c,d,e,f,g,h)
#define coutsf cout<<std::format
#define coutsf0(a) cout<<std::format(a)
#define coutsf1(a,b) cout<<std::format(a,b)
#define coutsf2(a,b,c) cout<<std::format(a,b,c)
#define coutsf3(a,b,c,d) cout<<std::format(a,b,c,d)
#define coutsf4(a,b,c,d,e) cout<<std::format(a,b,c,d,e)
#define coutsf5(a,b,c,d,e,f) cout<<std::format(a,b,c,d,e,f)
#define coutsf6(a,b,c,d,e,f,g) cout<<<std::format(a,b,c,d,e,f,g)
#define coutsf7(a,b,c,d,e,f,g,h) cout<<<std::format(a,b,c,d,e,f,g,h)
/*fst<<sf*/
#define 写入sf0(a) <<std::format(a)
#define 写入sf1(a,b) <<std::format(a,b)
#define 写入sf2(a,b,c) <<std::format(a,b,c)
#define 写入sf3(a,b,c,d) <<std::format(a,b,c,d)
#define 写入sf4(a,b,c,d,e) <<std::format(a,b,c,d,e)
#define 写入sf5(a,b,c,d,e,f) <<std::format(a,b,c,d,e,f)
#define 写入sf6(a,b,c,d,e,f,g) <<<std::format(a,b,c,d,e,f,g)
#define 写入sf7(a,b,c,d,e,f,g,h) <<<std::format(a,b,c,d,e,f,g,h)
/**///▬变量含值▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
///2023年7月18日
#define newenmu时间单位 enum 时间单位 {\
	年 = 1, 月 = 2, 日 = 3\
	, 时 = 4, 小时 = 4\
	, 分 = 5, 分钟 = 5\
, 秒 = 6, 毫秒 = 7\
/*2023年8月2日*/\
,YMoDHMSMs = 1234567\
,Y=1,Mo=2,D=3\
,MoDHMSMs=234567\
,DHMSMs=34567\
, H = 4, HM = 45, HMS = 456, HMSMs = 4567,HS=46,HMs=47\
,MS = 56,MSMs=567,MMs=57}
#define newenmu256色 enum _256色 {\
Black=0,Maroon=1,Green=2,Olive=3,Navy=4,Purple=5,Teal=6,Silver=7,Grey=8,Red=9,Lime=10,Yellow=11,Blue=12,Fuchsia=13,Aqua=14,White=15,Grey0=16,NavyBlue=17,DarkBlue=18,Blue3=19,Blue1=21,DarkGreen=22,DeepSkyBlue4=23,DodgerBlue3=26,DodgerBlue2=27,Green4=28,SpringGreen4=29,Turquoise4=30,DeepSkyBlue3=31,DodgerBlue1=33,Green3=34,SpringGreen3=35,DarkCyan=36,LightSeaGreen=37,DeepSkyBlue2=38,DeepSkyBlue1=39,SpringGreen2=42,Cyan3=43,DarkTurquoise=44,Turquoise2=45,Green1=46,SpringGreen1=48,MediumSpringGreen=49,Cyan2=50,Cyan1=51,DarkRed=52,DeepPink4=53,Purple4=54,Purple3=56,BlueViolet=57,Orange4=58,Grey37=59,MediumPurple4=60,SlateBlue3=61,RoyalBlue1=63,Chartreuse4=64,DarkSeaGreen4=65,PaleTurquoise4=66,SteelBlue=67,SteelBlue3=68,CornflowerBlue=69,Chartreuse3=70,CadetBlue=72,SkyBlue3=74,SteelBlue1=75,PaleGreen3=77,SeaGreen3=78,Aquamarine3=79,MediumTurquoise=80,Chartreuse2=82,SeaGreen2=83,SeaGreen1=84,Aquamarine1=86,DarkSlateGray2=87,DarkMagenta=90,DarkViolet=92,LightPink4=95,Plum4=96,MediumPurple3=97,SlateBlue1=99,Yellow4=100,Wheat4=101,Grey53=102,LightSlateGrey=103,MediumPurple=104,LightSlateBlue=105,DarkOliveGreen3=107,DarkSeaGreen=108,LightSkyBlue3=109,SkyBlue2=111,DarkSeaGreen3=115,DarkSlateGray3=116,SkyBlue1=117,Chartreuse1=118,LightGreen=119,PaleGreen1=121,DarkSlateGray1=123,Red3=124,MediumVioletRed=126,Magenta3=127,DarkOrange3=130,IndianRed=131,HotPink3=132,MediumOrchid3=133,MediumOrchid=134,MediumPurple2=135,DarkGoldenrod=136,LightSalmon3=137,RosyBrown=138,Grey63=139,MediumPurple1=141,Gold3=142,DarkKhaki=143,NavajoWhite3=144,Grey69=145,LightSteelBlue3=146,LightSteelBlue=147,Yellow3=148,DarkSeaGreen2=151,LightCyan3=152,LightSkyBlue1=153,GreenYellow=154,DarkOliveGreen2=155,DarkSeaGreen1=158,PaleTurquoise1=159,DeepPink3=161,Magenta2=165,HotPink2=169,Orchid=170,MediumOrchid1=171,Orange3=172,LightPink3=174,Pink3=175,Plum3=176,Violet=177,LightGoldenrod3=179,Tan=180,MistyRose3=181,Thistle3=182,Plum2=183,Khaki3=185,LightGoldenrod2=186,LightYellow3=187,Grey84=188,LightSteelBlue1=189,Yellow2=190,DarkOliveGreen1=191,Honeydew2=194,LightCyan1=195,Red1=196,DeepPink2=197,DeepPink1=198,Magenta1=201,OrangeRed1=202,IndianRed1=203,HotPink=205,DarkOrange=208,Salmon1=209,LightCoral=210,PaleVioletRed1=211,Orchid2=212,Orchid1=213,Orange1=214,SandyBrown=215,LightSalmon1=216,LightPink1=217,Pink1=218,Plum1=219,Gold1=220,NavajoWhite1=223,MistyRose1=224,Thistle1=225,Yellow1=226,LightGoldenrod1=227,Khaki1=228,Wheat1=229,Cornsilk1=230,Grey100=231,Grey3=232,Grey7=233,Grey11=234,Grey15=235,Grey19=236,Grey23=237,Grey27=238,Grey30=239,Grey35=240,Grey39=241,Grey42=242,Grey46=243,Grey50=244,Grey54=245,Grey58=246,Grey62=247,Grey66=248,Grey70=249,Grey74=250,Grey78=251,Grey82=252,Grey85=253,Grey89=254,Grey93=255\
	}
#define 回车 (string)"\n"
#define c回车 '\n'
#define 换行符 "\n"
#define c行开始符 '^'
#define c行结束符 '&'
#define s文档末尾标记 "WfDhJxWz"
/*用这个*/#define s文档结尾 "WfDhJxWz"
#define s这行没有 "VeHhMzYb"
/*别用了*/#define s文档结束 "wfdhjxuu"
#define s文档结束_声母大写 "WfDhJxUu"
#define s文档结束_韵母大写 "wFdHjXuU"
#define s文档结束_有重音符 "wfdh`jxuu"
#define s文档结束_声母大写_有重音符 "WfDh`JxUu"
#define s文档结束_韵母大写_有重音符 "wFdH`jXuU"
////#define if a > b if( a > b)
//#define def define

////#include <iostream>
////using namespace std;
////namespace first_space
////{
////	void func()
////	{
////		cout << "Inside first_space" << endl;
////	}
////}

//#define

//constexpr auto
//▬class调用`简写▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
#define class调用1 类型转换 vrh;按键检测 按键检测1;时间 uijm;cmd cmd1;窗口 IdKb;文件读写 wfjmduxx;
#define class简写1 class调用1
#define class类型转换 类型转换 vrh
#define classvrh 类型转换 vrh
#define classVrh 类型转换 vrh
#define classvhr 类型转换 vrh
#define class按键检测 按键检测 按键检测1
#define class时间 时间 uijm
//*#define UiJm uijm;
#define classcmd cmd cmd1 
#define class窗口 窗口 IdKb
#define class文件读写 文件读写 wfjmduxx 
#define classwfjmduxx 文件读写 wfjmduxx
#define class计算 计算 jisr
#define classjisr 计算 jisr
#define class地址算 用地址计算 地址计算;

#define cla简写1 class调用1
#define cla类型转换 类型转换 vrh
#define clavrh 类型转换 vrh
#define claVrh 类型转换 vrh
#define 类型TOs lzxy转换.TOs
#define 类型toS lzxy转换.TOs
#define 类型cTOs lzxy转换.一位charTOs
#define cla按键检测 按键检测 按键检测1
#define cla时间 时间 uijm
#define clacmd cmd cmd1 
#define cla窗口 窗口 IdKb
#define cla文件读写 文件读写 wfjmduxx
#define cla计算 计算 jisr
#define clajisr 计算 jisr
/**///应是▬//^函数▬直接用可以,用函数不行▬▬▬▬▬▬▬▬▬▬▬▬▬
/**////类型转换 lzxy转换
#define retSTOccp(s) s.cstr
#define getSTOccp(s,ccp) ccp=s.cstr

/**/;//>▬OpenCV▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
/**///量▬▬▬▬▬▬▬▬▬▬▬▬▬
#define CV8UC1 CV_8UC1
#define CV8UC2 CV_8UC2
#define CV8UC3 CV_8UC3
#define CV8UC4 CV_8UC4

/**/;//>▬乱简写▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
#define a等于b(a,b) a=b
#define b等于a(a,b) b=a

/**/;//▬简写▬▬▬▬▬▬▬▬▬▬▬,简写▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
/**/;//▬简写_c注释▬c注释,简写▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
//> 级别:{ 重要=0/1/2; struct前/后=3,函数前/后=4,垃圾c=5; }
/*!示例`def_ifC注释{ */
#define def_ifC注释(i注释级) if( 是否c注释>i注释级 and 计数_c注释次数< c注释次数上限 )
#define def_ifC注释内(i颜色) 计数_c注释次数++; set颜色(i颜色);
/* }示例*/;
/*!想改的话==undef再def; 能用就不undef*/
/*!undef( def_ifC注释`拆分 ){ */;
#undef c注释1
#undef c注释1ζ0 
#undef c注释1ζ3 
//>if的大括号内:
//*#undef c注次加
#undef c注释2(i颜色)
#undef c注释2ζ默
#undef c注释2ζ默高 
#undef c注释2ζ6 
#undef c注释2ζ7 
/* }undef( def_ifC注释`拆分 )*/;
/*!def_ifC注释`拆分{ */
//>c注释1()
#define c大于0的注释级乘1的空格AC注释1(f注释级) if( ( 外变i外.是否c注释>=((float)f注释级) ) and 外变i外.计数_c注释次数< 外变i外.c注释次数上限 ){for(int 个数=f注释级;个数>0;个数--){cout1(" ");}/*for*/;}/*if*/;if( ( 外变i外.是否c注释>=((float)f注释级) ) and 外变i外.计数_c注释次数< 外变i外.c注释次数上限 )
#define c大于0的注释级乘2的空格AC注释1(f注释级) if( ( 外变i外.是否c注释>=((float)f注释级) ) and 外变i外.计数_c注释次数< 外变i外.c注释次数上限 ){for(int 个数=f注释级;个数>0;个数--){cout1("  ");}/*for*/;}/*if*/;if( ( 外变i外.是否c注释>=((float)f注释级) ) and 外变i外.计数_c注释次数< 外变i外.c注释次数上限 )
#define c大于1的注释级乘1的空格AC注释1(f注释级) if( ( 外变i外.是否c注释>=((float)f注释级) ) and 外变i外.计数_c注释次数< 外变i外.c注释次数上限 ){for(int 个数=f注释级;个数>1;个数--){cout1(" ");}/*for*/;}/*if*/;if( ( 外变i外.是否c注释>=((float)f注释级) ) and 外变i外.计数_c注释次数< 外变i外.c注释次数上限 )
#define c大于1的注释级乘2的空格AC注释1(f注释级) if( ( 外变i外.是否c注释>=((float)f注释级) ) and 外变i外.计数_c注释次数< 外变i外.c注释次数上限 ){for(int 个数=f注释级;个数>1;个数--){cout1("  ");}/*for*/;}/*if*/;if( ( 外变i外.是否c注释>=((float)f注释级) ) and 外变i外.计数_c注释次数< 外变i外.c注释次数上限 )
#define c空格AC注释1(f注释级) c大于1的注释级乘1的空格AC注释1(f注释级)
///#define c注释1(f注释级) if( (外变i外.是否c注释- ((float)f注释级))>=((float)1.0) and 外变i外.计数_c注释次数< 外变i外.c注释次数上限 )
///#define c注释1(f注释级) if( ( 外变i外.是否c注释>=((float)f注释级) ) and 外变i外.计数_c注释次数< 外变i外.c注释次数上限 )
#define c注释1(f注释级) c空格AC注释1(f注释级)
#define c注释1ζ0 c注释1( 0.0 )
#define c注释1ζ1 c注释1( 1.0 )
#define c注释1ζ1点1 c注释1( 1.1 )
#define c注释1ζ2 c注释1( 2.0 )
#define c注释1ζ2点1 c注释1( 2.1 )
#define c注释1ζ3 c注释1( 3.0 )
#define c注释1ζ3点1 c注释1( 3.1 )
#define c注释1ζ4 c注释1( 4.0 )
#define c注释1ζ5 c注释1( 5.0 )
//>if的大括号内:
#define c空格(字数) for (size_t 已c空格数量 = 0; 已c空格数量 < 字数; 已c空格数量++){ cout1(" "); };
#define c注释的c空格 c空格(外变i外.注释左空格数量) 
#define c注空格 c注释的c空格
#define c注释空格 c注释的c空格
#define c注释的空格 c注释的c空格
#define c注释c空格 c注释的c空格
#define 注空格 c注释的c空格
#define 注释空格 c注释的c空格
#define 注释的空格 c注释的c空格
#define 注释c空格 c注释的c空格
#define c注次加AC空格 外变i外.计数_c注释次数++;
#define c注次加 外变i外.计数_c注释次数++;
#define c注释次加 c注次加
#define c注释2(i颜色) 外变i外.计数_c注释次数++; set颜色(i颜色);
#define c注释2ζ默 c注释2( cmd窗界i.默认注释色 )
#define c注释2ζ默1 c注释2ζ默
#define c注释2ζ默高 c注释2( cmd窗界i.默认注释高亮色 )
#define c注释2ζ默高1 c注释2ζ默高  
#define c注释2ζ6 c注释2( 6 )
#define c注释2ζ7 c注释2( 7 )
/* }def_ifC注释`拆分*/;
/*!def_cmd窗界iIfC注释{ */
//全简
#define cmd窗界iIfC注释1默认注释色 if( cmd窗界i.c注释i.是否c注释>1 and cmd窗界i.c注释i.计数_c注释次数< cmd窗界i.c注释i.c注释次数上限 ){ cmd窗界i.c注释i.计数_c注释次数++; c注释前( cmd窗界i, cmd窗界i.默认注释色 );
#define cmd窗界iIfC注释0默认注释色 if( cmd窗界i.c注释i.是否c注释>0 and cmd窗界i.c注释i.计数_c注释次数< cmd窗界i.c注释i.c注释次数上限 ){ cmd窗界i.c注释i.计数_c注释次数++; c注释前( cmd窗界i, cmd窗界i.默认注释色 );
#define cmd窗界iIfC注释2默认注释色 if( cmd窗界i.c注释i.是否c注释>2 and cmd窗界i.c注释i.计数_c注释次数< cmd窗界i.c注释i.c注释次数上限 ){ cmd窗界i.c注释i.计数_c注释次数++; c注释前( cmd窗界i, cmd窗界i.默认注释色 );
#define cmd窗界iIfC注释1注释高亮色 if( cmd窗界i.c注释i.是否c注释>1 and cmd窗界i.c注释i.计数_c注释次数< cmd窗界i.c注释i.c注释次数上限 ){ cmd窗界i.c注释i.计数_c注释次数++; c注释前( cmd窗界i, cmd窗界i.默认注释高亮色 );
#define cmd窗界iIfC注释0注释高亮色 if( cmd窗界i.c注释i.是否c注释>0 and cmd窗界i.c注释i.计数_c注释次数< cmd窗界i.c注释i.c注释次数上限 ){ cmd窗界i.c注释i.计数_c注释次数++; c注释前( cmd窗界i, cmd窗界i.默认注释高亮色 );
#define cmd窗界iIfC注释2注释高亮色 if( cmd窗界i.c注释i.是否c注释>2 and cmd窗界i.c注释i.计数_c注释次数< cmd窗界i.c注释i.c注释次数上限 ){ cmd窗界i.c注释i.计数_c注释次数++; c注释前( cmd窗界i, cmd窗界i.默认注释高亮色 );
//拆分
#define def_cmd窗界iIfC注释(cmd窗界i,i注释级) if( cmd窗界i.c注释i.是否c注释>i注释级 and cmd窗界i.c注释i.计数_c注释次数< cmd窗界i.c注释i.c注释次数上限 )
#define def_cmd窗界iC注释次加1Ac注释前(cmd窗界i,字色) cmd窗界i.c注释i.计数_c注释次数++; c注释前( cmd窗界i, 字色 );
#define def_cmd窗界iIfC注释内(cmd窗界i,字色) cmd窗界i.c注释i.计数_c注释次数++; c注释前( cmd窗界i, 字色 );
//连写
#define def_cmd窗界iIfC注释到c注释前(cmd窗界i,i注释级,字色) if( cmd窗界i.c注释i.是否c注释>i注释级 and cmd窗界i.c注释i.计数_c注释次数< cmd窗界i.c注释i.c注释次数上限 ){ cmd窗界i.c注释i.计数_c注释次数++; c注释前( cmd窗界i, 字色 );
#define def_cmd窗界iC注释前(cmd窗界i,i注释级,字色) cmd窗界i.c注释i.是否c注释>i注释级 and cmd窗界i.c注释i.计数_c注释次数< cmd窗界i.c注释i.c注释次数上限 ){ cmd窗界i.c注释i.计数_c注释次数++; c注释前( cmd窗界i, 字色 );
/* }def_cmd窗界iIfC注释*/;
/*!def_c注释iIfC注释{ */
#define def_c注释iIfC注释(c注释i,i注释级) if( c注释i.是否c注释>i注释级 and c注释i.计数_c注释次数< c注释i.c注释次数上限 )
#define def_c注释iIfC注释内(c注释i) c注释i.计数_c注释次数++;
/* }def_c注释iIfC注释*/;
/**/;//▬简写,/*函数模版*/▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
/*使用<struct_c注释i_在外>*/
//*#define 外变注左空格加2 外变i外.注释左空格数量+=2;
//*#define 外变注左空格减2 外变i外.注释左空格数量-=2;
#define 外变注左空格加2
#define 外变注左空格减2
#define 函数前2(i注释级,函数名) 外变注左空格加2;/*c*/{c注释1(i注释级) { c注空格 c注次加;/*c*/{ cout1( 函数名 ); cout1( "()开始" ); coutEnd; }/*c*/;  }/*if*/; }/*c*/
#define 函数前 函数前2
#define 函数前_set颜色ζ后(i注释级,函数名) 外变注左空格加2;/*c*/{c注释1(i注释级) { c注空格 c注次加;/*c*/{ cout1( 函数名 ); cout1( "()开始" ); coutEnd; }/*c*/; set颜色( cmd窗界i.默认注释色 ); }/*if*/; }/*c*/
#define 函数前_set颜色ζ后3(i注释级,函数名,颜色_后的) 外变注左空格加2;/*c*/{c注释1(i注释级) { c注空格 c注次加;/*c*/{ cout1( 函数名 ); cout1( "()开始" ); coutEnd; }/*c*/; set颜色( 颜色_后的 ); }/*if*/; }/*c*/
#define 函数后2(i注释级,函数名);/*c*/{c注释1(i注释级) { c注空格 c注次加;/*c*/{ cout1( 函数名 ); cout1( "()" );cout1( "结束" ); coutEnd; }/*c*/;  }/*if*/; }/*c*/;外变注左空格减2
#define 函数后 函数后2
#define 函数后_set颜色ζ高后(i注释级,函数名);/*c*/{c注释1(i注释级) { c注空格 c注次加;/*c*/{ cout1( 函数名 ); cout1( "()" ); set颜色( 6 ); cout1( "结束" ); coutEnd; }/*c*/; set颜色( cmd窗界i.默认注释色 ); }/*if*/; }/*c*/;外变注左空格减2
#define 函数后_set颜色ζ高后3(i注释级,函数名,i颜色);/*c*/{c注释1(i注释级) { c注空格 c注次加;/*c*/{ cout1( 函数名 ); cout1( "()" ); set颜色( i颜色 ); cout1( "结束" ); coutEnd; }/*c*/; set颜色( cmd窗界i.默认注释色 ); }/*if*/; }/*c*/;外变注左空格减2
#define 函数后_set颜色ζ高后4(i注释级,函数名,颜色_高亮,颜色_后的);/*c*/{c注释1(i注释级) { c注空格 c注次加;/*c*/{ cout1( 函数名 ); cout1( "()" ); set颜色( 颜色_高亮 ); cout1( "结束" ); coutEnd; }/*c*/; set颜色( 颜色_后的); }/*if*/; }/*c*/;外变注左空格减2
#define 函数后_set颜色ζ高3(i注释级,函数名,颜色_高亮);/*c*/{c注释1(i注释级) { c注空格 c注次加;/*c*/{ cout1( 函数名 ); cout1( "()" ); set颜色( 颜色_高亮 ); cout1( "结束" ); coutEnd; }/*c*/; }/*if*/; }/*c*/;外变注左空格减2

/**/;//▬数值▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
#define tan30 sqrt( 3 )/3
#define tan45 1
#define tan60 sqrt( 3 )
#define cos30 sqrt(3)/2
#define cos45 1/sqrt(2)
#define cos60 1/2
#define sin30 1/2
#define sin45 1/sqrt(2)
#define sin60 sqrt(3)/2
/**/;//▬E:/lib▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
/**/;//▬<E:/lib>▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
//>前置cout
#define cS前中括i1中括i2等于i3S后   c中括i1中括i2等于i3
//>前置计算 不使用前置变量
#define getV的元素的拼接 getV元素拼接
#define getV元素的拼接   getV元素拼接
#define getV的元素拼接   getV元素拼接
#define get把v的元素拼接  getV元素拼接
#define get将v的元素拼接  getV元素拼接
#define getV元素拼接TS   getV元素拼接
#define getV的元素拼接TS getV元素拼接
#define forVsZGetV元素相接 getV元素拼接
#define forVZGetV元素相接 getV元素拼接
#define forV_GetV元素相接 getV元素拼接
//>简写adb
#define retS_拖文件到exeZRetPath 拖文件到exeZRetPath
//adb shell wm 
#define adbShellWm 指令_adbShellWm
#define adbShellWmS1S2 指令_adbShellWm
#define 指令_adbShellWmS1S2 指令_adbShellWm
#define adbShellWmSize 指令_adbShellWmSize
#define adbShellWmDensity 指令_adbShellWmDensity
#define adbBackup 指令_adbBackup
#define 指令_是开启触觉反馈（振动反馈） 是开启触觉反馈（振动反馈）
#define 指令_否开启触觉反馈（振动反馈） 否开启触觉反馈（振动反馈）
#define 指令_是开启通知光 是开启通知光
#define 指令_否开启通知光 否开启通知光
#define 指令_是WiFi在屏幕关闭时始终保持连接 是WiFi在屏幕关闭时始终保持连接
//>图识
#define 保存M1到p1 写入MatTP
#define 保存M到p 写入MatTP
#define 保存MTp 写入MatTP
#define 写入MTp 写入MatTP
#define 写入M到p 写入MatTP
#define 写入Mat到p 写入MatTP
#define 写入MatTp 写入MatTP
#define 写入MTp 写入MatTP
#define 写入MTP 写入MatTP
#define 写入Mat1Tp1 写入MatTP
#define 输出Mat到p 写入MatTP
#define outMat到p 写入MatTP
#define getV2图TV最多的颜色的像素 getV2图TV最多的颜色
#define 输入v2图A输出v最多的颜色 getV2图TV最多的颜色
#define 输入v2图_输出v最多的颜色 getV2图TV最多的颜色
#define 输入v2图A输出v最多的颜色的像素 getV2图TV最多的颜色
/**/;//▬测试▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
#define 测试coutS(函数名) 注释左空格数量--;;/*c*/{ cout1( 函数名 ); coutEnd;  set颜色( cmd窗界i.默认注释色 ); }/*c*/



#endif