// This file has been generated by Py++.

#include "boost/python.hpp"
#include "__ctypes_integration.pypp.hpp"
#include "opencv_headers.hpp"
#include "ndarray.hpp"
#include "opencv_converters.hpp"
#include "Range.pypp.hpp"

namespace bp = boost::python;

void register_Range_class(){

    bp::class_< cv::Range >( "Range", bp::init< >() )    
        .add_property( "this", pyplus_conv::make_addressof_inst_getter< cv::Range >() )    
        .def( bp::init< int, int >(( bp::arg("_start"), bp::arg("_end") )) )    
        .def( 
            "all"
            , (::cv::Range (*)(  ))( &::cv::Range::all ) )    
        .def( 
            "empty"
            , (bool ( ::cv::Range::* )(  ) const)( &::cv::Range::empty ) )    
        .def( 
            "size"
            , (int ( ::cv::Range::* )(  ) const)( &::cv::Range::size ) )    
        .def_readwrite( "end", &cv::Range::end )    
        .def_readwrite( "start", &cv::Range::start )    
        .staticmethod( "all" )    
        .def("from_ndarray", &sdcpp::from_ndarray< cv::Range >, (bp::arg("inst_ndarray")) )    
        .staticmethod("from_ndarray")    
        .add_property("ndarray", &sdcpp::as_ndarray< cv::Range >)    
        .def("__not__", &__not__<cv::Range> )    
        .def("__iand__", &__iand__<cv::Range, cv::Range >, bp::return_self<>() )    
        .def("__and__", &__and__<cv::Range, cv::Range> )    
        .def("__ne__", &__ne__<cv::Range, cv::Range> )    
        .def("__eq__", &__eq__<cv::Range, cv::Range> )    
        .def("__add__", &__add__<cv::Range, int> )    
        .def("__sub__", &__sub__<cv::Range, int> )    
        .def("__radd__", &__radd__<int, cv::Range> );

}
