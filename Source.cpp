#include<iostream>
#include<stdlib.h>//system�֐��p
#include<opencv2\highgui\highgui.hpp>
#include<opencv2\opencv.hpp>

using namespace std;
using namespace cv;//OpenCV�n�̖��O���


int main() {

	system("dir");
	Mat temp = imread("lena.png",1);
	if (temp.empty()) {
		return -1;
	}
	else {
		cout << "�摜�ǂݍ��݊���\n";
		namedWindow("ImageWindow", CV_WINDOW_AUTOSIZE | CV_WINDOW_FREERATIO);
		imshow("ImageWindow", temp);
		waitKey(0);
	}
	return 0;
}

/*
��ƃ���

Nuget�ŃC���X�g�[���������́E�E�EOpenCV
									- 3.1 (sift�g���Ȃ�Ver)���@
									- 2.3.1 �~
									- 2.3.1.1 �~
									- 2.4.6 �~
									- 2.4.7 �~
									- 2.4.8 �~
									- 2.4.9 �~
									- 2.4.10 �~
									- 2.4.11 �~

�ݒ�E�E�E�E�E�E�E�E�E�E�E�E�E�E���ɂȂ�
���E�E�E�E�E�E�E�E�E�E�E�E�E�EVS C++ 2015 Community(����Pro��), Win10 Pro64bit


���l�E�E�E�E�E�E�E�E�E�E�E�E�E�ENuget�œ���OpenCV�́AVS�̃o�[�W�����ˑ�����B
�@�@�@�@�@�@�@�@�@�@�@�@�@�@�@�@�C���X�g�[���o������̂��S�ē����Ƃ͌���Ȃ��炵���B
*/