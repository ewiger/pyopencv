// This file has been generated by Py++.

#include "boost/python.hpp"
#include "opencv_headers.hpp"
#include "pyopencvext_free_functions_ga.pypp.hpp"

namespace bp = boost::python;

void register_free_functions_ga(){

    { //::cv::GaussianBlur
    
        typedef void ( *GaussianBlur_function_type )( ::cv::Mat const &,::cv::Mat &,::cv::Size,double,double,int );
        
        bp::def( 
            "GaussianBlur"
            , GaussianBlur_function_type( &::cv::GaussianBlur )
            , ( bp::arg("src"), bp::arg("dst"), bp::arg("ksize"), bp::arg("sigma1"), bp::arg("sigma2")=0, bp::arg("borderType")=int(::cv::BORDER_REFLECT_101) ) );
    
    }

}
