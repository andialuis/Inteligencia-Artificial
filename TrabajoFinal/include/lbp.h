#ifndef LBP_H
#define LBP_H


#include "opencv2/core/core.hpp"
#include "opencv2/contrib/contrib.hpp"
#include "opencv2/highgui/highgui.hpp"

#include <limits>

using namespace cv;
using namespace std;

namespace lbp {

template <typename _Tp>
void OLBP_(const cv::Mat& src, cv::Mat& dst);

template <typename _Tp>
void ELBP_(const cv::Mat& src, cv::Mat& dst, int radius = 1, int neighbors = 8);

template <typename _Tp>
void VARLBP_(const cv::Mat& src, cv::Mat& dst, int radius = 1, int neighbors = 8);

void OLBP(const Mat& src, Mat& dst);
void ELBP(const Mat& src, Mat& dst, int radius = 1, int neighbors = 8);
void VARLBP(const Mat& src, Mat& dst, int radius = 1, int neighbors = 8);

Mat OLBP(const Mat& src);
Mat ELBP(const Mat& src, int radius = 1, int neighbors = 8);
Mat VARLBP(const Mat& src, int radius = 1, int neighbors = 8);

}
#endif
