#include <boost/python/detail/prefix.hpp>
#include <boost/python/extract.hpp>
#include <boost/python/default_call_policies.hpp>
#include <boost/python/object.hpp>

#include <algorithm>
#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>

#include "opencv_extra.hpp"


// ================================================================================================

void CV_CDECL sdTrackbarCallback2(int pos, void* userdata)
{
    bp::object items(bp::handle<>(bp::borrowed((PyObject *)userdata)));
    (items[0])(pos, bp::object(items[1])); // need a copy of items[1] to make it safe with threading
}


void CV_CDECL sdMouseCallback(int event, int x, int y, int flags, void* param)
{
    bp::object items(bp::handle<>(bp::borrowed((PyObject *)param)));
    (items[0])(event, x, y, flags, bp::object(items[1])); // need a copy of items[1] to make it safe with threading
}

float CV_CDECL sdDistanceFunction( const float* a, const float*b, void* user_param )
{
    bp::object items(bp::handle<>(bp::borrowed((PyObject *)user_param)));
    // pass 'a' and 'b' by address instead of by pointer
    return bp::extract < float >((items[0])((int)a, (int)b, bp::object(items[1]))); // need a copy of items[1] to make it safe with threading
}

// ================================================================================================

template void convert_Mat( const cv::Mat &in_arr, char *&out_arr );
template void convert_Mat( const cv::Mat &in_arr, unsigned char *&out_arr );
template void convert_Mat( const cv::Mat &in_arr, short *&out_arr );
template void convert_Mat( const cv::Mat &in_arr, unsigned short *&out_arr );
template void convert_Mat( const cv::Mat &in_arr, long *&out_arr );
template void convert_Mat( const cv::Mat &in_arr, unsigned long *&out_arr );
template void convert_Mat( const cv::Mat &in_arr, int *&out_arr );
template void convert_Mat( const cv::Mat &in_arr, unsigned int *&out_arr );
template void convert_Mat( const cv::Mat &in_arr, float *&out_arr );
template void convert_Mat( const cv::Mat &in_arr, double *&out_arr );

// ================================================================================================

DEFINE_SEQUENCE_FOR_VECTOR(bool)
DEFINE_SEQUENCE_FOR_VECTOR(char)
DEFINE_SEQUENCE_FOR_VECTOR(uchar)
DEFINE_SEQUENCE_FOR_VECTOR(short)
DEFINE_SEQUENCE_FOR_VECTOR(ushort)
DEFINE_SEQUENCE_FOR_VECTOR(int)
DEFINE_SEQUENCE_FOR_VECTOR(unsigned)
DEFINE_SEQUENCE_FOR_VECTOR(float)
DEFINE_SEQUENCE_FOR_VECTOR(double)
DEFINE_SEQUENCE_FOR_VECTOR(cv::Vec2f)
DEFINE_SEQUENCE_FOR_VECTOR(cv::Vec3f)
DEFINE_SEQUENCE_FOR_VECTOR(cv::Vec4i)
DEFINE_SEQUENCE_FOR_VECTOR(cv::Scalar)
DEFINE_SEQUENCE_FOR_VECTOR(cv::Point2i)
DEFINE_SEQUENCE_FOR_VECTOR(cv::Point2f)
DEFINE_SEQUENCE_FOR_VECTOR(cv::Point3i)
DEFINE_SEQUENCE_FOR_VECTOR(cv::Point3f)
DEFINE_SEQUENCE_FOR_VECTOR(cv::Mat)
DEFINE_SEQUENCE_FOR_VECTOR(cv::MatND)
DEFINE_SEQUENCE_FOR_VECTOR(cv::KeyPoint)
DEFINE_SEQUENCE_FOR_VECTOR(cv::CascadeClassifier::DTreeNode)
DEFINE_SEQUENCE_FOR_VECTOR(cv::CascadeClassifier::DTree)
DEFINE_SEQUENCE_FOR_VECTOR(cv::CascadeClassifier::Stage)

// ================================================================================================

DEFINE_SEQUENCE_FOR_VECTOR_VECTOR(int)
DEFINE_SEQUENCE_FOR_VECTOR_VECTOR(float)
DEFINE_SEQUENCE_FOR_VECTOR_VECTOR(cv::Point2f)
DEFINE_SEQUENCE_FOR_VECTOR_VECTOR(cv::Point3f)

// ================================================================================================


