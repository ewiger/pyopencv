// This file has been generated by Py++.

#include "boost/python.hpp"
#include "__array_1.pypp.hpp"
#include "__ctypes_integration.pypp.hpp"
#include "opencv_headers.hpp"
#include "boost/python/object.hpp"
#include "boost/python/list.hpp"
#include "boost/python/tuple.hpp"
#include "CvQuadEdge2D.pypp.hpp"

namespace bp = boost::python;

struct CvQuadEdge2D_wrapper : CvQuadEdge2D, bp::wrapper< CvQuadEdge2D > {

    CvQuadEdge2D_wrapper(CvQuadEdge2D const & arg )
    : CvQuadEdge2D( arg )
      , bp::wrapper< CvQuadEdge2D >(){
        // copy constructor
        
    }

    CvQuadEdge2D_wrapper()
    : CvQuadEdge2D()
      , bp::wrapper< CvQuadEdge2D >(){
        // null constructor
        
    }

    static pyplusplus::containers::static_sized::array_1_t< size_t, 4>
    pyplusplus_next_wrapper( ::CvQuadEdge2D & inst ){
        return pyplusplus::containers::static_sized::array_1_t< size_t, 4>( inst.next );
    }

};

static bp::object get_pt( ::CvQuadEdge2D const & inst ){
    bp::list l;
    for(int i = 0; i < 4; ++i)
        l.append(inst.pt[i]);
    return bp::tuple(l);
}

void register_CvQuadEdge2D_class(){

    { //::CvQuadEdge2D
        typedef bp::class_< CvQuadEdge2D_wrapper > CvQuadEdge2D_exposer_t;
        CvQuadEdge2D_exposer_t CvQuadEdge2D_exposer = CvQuadEdge2D_exposer_t( "CvQuadEdge2D" );
        bp::scope CvQuadEdge2D_scope( CvQuadEdge2D_exposer );
        CvQuadEdge2D_exposer.add_property( "this", pyplus_conv::make_addressof_inst_getter< CvQuadEdge2D >() );
        CvQuadEdge2D_exposer.def_readwrite( "flags", &CvQuadEdge2D::flags );
        pyplusplus::containers::static_sized::register_array_1< size_t, 4 >( "__array_1_size_t_4" );
        { //CvQuadEdge2D::next [variable], type=CvSubdiv2DEdge[4]
        
            typedef pyplusplus::containers::static_sized::array_1_t< size_t, 4> ( *array_wrapper_creator )( ::CvQuadEdge2D & );
            
            CvQuadEdge2D_exposer.add_property( "next"
                , bp::make_function( array_wrapper_creator(&CvQuadEdge2D_wrapper::pyplusplus_next_wrapper)
                                    , bp::with_custodian_and_ward_postcall< 0, 1 >() ) );
        }
        CvQuadEdge2D_exposer.add_property( "pt", &::get_pt );
    }

}
