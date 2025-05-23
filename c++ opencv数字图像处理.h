﻿#pragma once
#ifndef cpp_opencv数字图像处理_H 
#define cpp_opencv数字图像处理_H 

#include  <E:\lib\头文件 c++.h>
#include  <E:\lib\头文件 opcv.h>
#include  <E:\lib\define.h>
#include  <E:\lib\类型转换.h>
/*<https://zhuanlan.zhihu.com/p/483604320>*/
struct struct_opencv数字图像处理{
public:
	类型转换 lzxvrhr;
public:
	/*通过鼠标点击操作获取图像的像素坐标和像素值<https://zhuanlan.zhihu.com/p/486820683>*/
	cv::MouseCallback onMouse(int event, int x, int y, int flags, void* param) { //evnet:鼠标事件类型 x,y:鼠标坐标 flags：鼠标哪个键
		Mat* mp = reinterpret_cast<Mat*>(param);
		switch (event) {
		case EVENT_LBUTTONDOWN:
			//显示图像像素值
			if (static_cast<int>(mp->channels()) == 1) {
				//若图像为单通道图像，则显示鼠标点击的坐标以及灰度值
				switch (mp->type()) {
				case 0:
					cout << "坐标=(" << x << ", " << y << " ) value=" << static_cast<int>(mp->at<uchar>(Point(x, y))) << endl; break;
				case 1:
					cout << "坐标=(" << x << ", " << y << " ) value=" << static_cast<int>(mp->at<char>(Point(x, y))) << endl; break;
				case 2:
					cout << "坐标=(" << x << ", " << y << " ) value=" << static_cast<int>(mp->at<ushort>(Point(x, y))) << endl; break;
				case 3:
					cout << "坐标=(" << x << ", " << y << " ) value=" << static_cast<int>(mp->at<short>(Point(x, y))) << endl; break;
				case 4:
					cout << "坐标=(" << x << ", " << y << " ) value=" << static_cast<int>(mp->at<int>(Point(x, y))) << endl; break;
				case 5:
					cout << "坐标=(" << x << ", " << y << " ) value=" << static_cast<int>(mp->at<float>(Point(x, y))) << endl; break;
				case 6:
					cout << "坐标=(" << x << ", " << y << " ) value=" << static_cast<int>(mp->at<double>(Point(x, y))) << endl; break;
				}
			} else {
				//若图像为彩色图像，则显示鼠标点击坐标以及对应的B, G, R值
				cout << "坐标=(" << x << ", " << y << " )"
					<< "  B value =" << static_cast<int>(mp->at<Vec3b>(Point(x, y))[0])
					<< "  G value =" << static_cast<int>(mp->at<Vec3b>(Point(x, y))[1])
					<< "  R value =" << static_cast<int>(mp->at<Vec3b>(Point(x, y))[2])
					<< endl;
			}/*else*/
			break;
		}/*switch*/
		//retu;
		/*用法: {
			imshow("image1",image1);  //显示图像；
			setMouseCallback("image1", onMouse, reinterpret_cast<void*>(&image1)); //关联图像显示窗口和onMouse函数
		}*/
	}

	//setMouseCallback("image1", onMouse, reinterpret_cast<void*>(&image1)); //关联图像显示窗口和onMouse函数
	
	//Mat每个格子内的数据格式---------- - Mat定义
	//Mat_<uchar>-------- - CV_8U（0-255）
	//Mat<char>---------- - CV_8S（-128-127）
	//Nat_<short>-------- - CV_16S（-32768-32767）
	//Mat_<ushort>--------CV_16U（0-65535）
	//Mat_<int>---------- - CV_32S（-2147483648-2147483647）
	//Mat_<float>----------CV_32F（-FLT_MAX…FLT_MAX，INF，NAN）
	//Mat_<double>--------CV_64F（-DBL_MAX…DBL_MAX，INF，NAN）

	//Mat数据类型和通道对应的type()
	//              C1          C2          C3          C4
	//CV_8U         0           8           16          24
	//CV_8S         1           9           17          25
	//CV_16U        2          10           18          26
	//CV_16S        3          11           19          27
	//CV_32S        4          12           20          28
	//CV_32F        5          13           21          29
	//CV_64F        6          14           22          30



	int ret识别ascii键码(string STR输入) {
		if (STR输入 == " ") {
			return VK_SPACE;
		}
	}




};
#endif