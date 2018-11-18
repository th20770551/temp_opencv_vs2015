#include<iostream>
#include<stdlib.h>//system関数用
#include<opencv2\highgui\highgui.hpp>
#include<opencv2\opencv.hpp>

using namespace std;
using namespace cv;//OpenCV系の名前空間


int main() {

	system("dir");
	Mat temp = imread("lena.png",1);
	if (temp.empty()) {
		return -1;
	}
	else {
		cout << "画像読み込み完了\n";
		namedWindow("ImageWindow", CV_WINDOW_AUTOSIZE | CV_WINDOW_FREERATIO);
		imshow("ImageWindow", temp);
		waitKey(0);
	}
	return 0;
}

/*
作業メモ

Nugetでインストールしたもの・・・OpenCV
									- 3.1 (sift使えないVer)◎　
									- 2.3.1 ×
									- 2.3.1.1 ×
									- 2.4.6 ×
									- 2.4.7 ×
									- 2.4.8 ×
									- 2.4.9 ×
									- 2.4.10 ×
									- 2.4.11 ×

設定・・・・・・・・・・・・・・特になし
環境・・・・・・・・・・・・・・VS C++ 2015 Community(実質Pro版), Win10 Pro64bit


備考・・・・・・・・・・・・・・Nugetで入るOpenCVは、VSのバージョン依存あり。
　　　　　　　　　　　　　　　　インストール出来るものが全て動くとは限らないらしい。
*/