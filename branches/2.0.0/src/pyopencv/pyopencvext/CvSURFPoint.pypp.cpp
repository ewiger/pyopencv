// This file has been generated by Py++.

#include "boost/python.hpp"
#include "__ctypes_integration.pypp.hpp"
#include "opencv_headers.hpp"
#include "CvSURFPoint.pypp.hpp"

namespace bp = boost::python;

void register_CvSURFPoint_class(){

    bp::class_< CvSURFPoint >( "CvSURFPoint" )    
        .add_property( "this", pyplus_conv::make_addressof_inst_getter< CvSURFPoint >() )    
        .def_readwrite( "dir", &CvSURFPoint::dir )    
        .def_readwrite( "hessian", &CvSURFPoint::hessian )    
        .def_readwrite( "laplacian", &CvSURFPoint::laplacian )    
        .def_readwrite( "pt", &CvSURFPoint::pt )    
        .def_readwrite( "size", &CvSURFPoint::size );

}
