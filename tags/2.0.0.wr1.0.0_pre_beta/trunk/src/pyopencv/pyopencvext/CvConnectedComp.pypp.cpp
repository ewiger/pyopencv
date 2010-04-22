// This file has been generated by Py++.

#include "boost/python.hpp"
#include "__ctypes_integration.pypp.hpp"
#include "opencv_headers.hpp"
#include "boost/python/object.hpp"
#include "CvConnectedComp.pypp.hpp"

namespace bp = boost::python;

struct CvConnectedComp_wrapper : CvConnectedComp, bp::wrapper< CvConnectedComp > {

    CvConnectedComp_wrapper(CvConnectedComp const & arg )
    : CvConnectedComp( arg )
      , bp::wrapper< CvConnectedComp >(){
        // copy constructor
        
    }

    CvConnectedComp_wrapper()
    : CvConnectedComp()
      , bp::wrapper< CvConnectedComp >(){
        // null constructor
        
    }

    static bp::object get_contour( ::CvConnectedComp const & inst ){        
        return inst.contour? bp::object(inst.contour): bp::object();
    }

};

void register_CvConnectedComp_class(){

    bp::class_< CvConnectedComp_wrapper >( "CvConnectedComp" )    
        .add_property( "this", pyplus_conv::make_addressof_inst_getter< CvConnectedComp >() )    
        .def_readwrite( "area", &CvConnectedComp::area )    
        .def_readwrite( "rect", &CvConnectedComp::rect )    
        .def_readwrite( "value", &CvConnectedComp::value )    
        .add_property( "contour", bp::make_function(&::CvConnectedComp_wrapper::get_contour) );

}