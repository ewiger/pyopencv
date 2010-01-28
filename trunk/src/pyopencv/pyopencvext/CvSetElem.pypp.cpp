// This file has been generated by Py++.

#include "boost/python.hpp"
#include "__ctypes_integration.pypp.hpp"
#include "opencv_headers.hpp"
#include "boost/python/object.hpp"
#include "CvSetElem.pypp.hpp"

namespace bp = boost::python;

struct CvSetElem_wrapper : CvSetElem, bp::wrapper< CvSetElem > {

    CvSetElem_wrapper(CvSetElem const & arg )
    : CvSetElem( arg )
      , bp::wrapper< CvSetElem >(){
        // copy constructor
        
    }

    CvSetElem_wrapper()
    : CvSetElem()
      , bp::wrapper< CvSetElem >(){
        // null constructor
        
    }

    static bp::object get_next_free( ::CvSetElem const & inst ){        
        return inst.next_free? bp::object(inst.next_free): bp::object();
    }

};

void register_CvSetElem_class(){

    bp::class_< CvSetElem_wrapper >( "CvSetElem" )    
        .add_property( "this", pyplus_conv::make_addressof_inst_getter< CvSetElem >() )    
        .def_readwrite( "flags", &CvSetElem::flags )    
        .add_property( "next_free", bp::make_function(&::CvSetElem_wrapper::get_next_free) );

}
