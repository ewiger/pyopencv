// This file has been generated by Py++.

#include "boost/python.hpp"
#include "__ctypes_integration.pypp.hpp"
#include "opencv_headers.hpp"
#include "ndarray.hpp"
#include "Vec2f.pypp.hpp"

namespace bp = boost::python;

void register_Vec2f_class(){

    { //::cv::Vec< float, 2 >
        typedef bp::class_< cv::Vec< float, 2 > > Vec2f_exposer_t;
        Vec2f_exposer_t Vec2f_exposer = Vec2f_exposer_t( "Vec2f", bp::init< >() );
        bp::scope Vec2f_scope( Vec2f_exposer );
        Vec2f_exposer.add_property( "this", pyplus_conv::make_addressof_inst_getter< cv::Vec< float, 2 > >() );
        bp::scope().attr("depth") = (int)cv::Vec<float, 2>::depth;
        bp::scope().attr("channels") = (int)cv::Vec<float, 2>::channels;
        bp::scope().attr("type") = (int)cv::Vec<float, 2>::type;
        Vec2f_exposer.def( bp::init< float >(( bp::arg("v0") )) );
        bp::implicitly_convertible< float, cv::Vec< float, 2 > >();
        Vec2f_exposer.def( bp::init< float, float >(( bp::arg("v0"), bp::arg("v1") )) );
        Vec2f_exposer.def( bp::init< float, float, float >(( bp::arg("v0"), bp::arg("v1"), bp::arg("v2") )) );
        Vec2f_exposer.def( bp::init< float, float, float, float >(( bp::arg("v0"), bp::arg("v1"), bp::arg("v2"), bp::arg("v3") )) );
        Vec2f_exposer.def( bp::init< float, float, float, float, float >(( bp::arg("v0"), bp::arg("v1"), bp::arg("v2"), bp::arg("v3"), bp::arg("v4") )) );
        Vec2f_exposer.def( bp::init< float, float, float, float, float, float >(( bp::arg("v0"), bp::arg("v1"), bp::arg("v2"), bp::arg("v3"), bp::arg("v4"), bp::arg("v5") )) );
        Vec2f_exposer.def( bp::init< float, float, float, float, float, float, float >(( bp::arg("v0"), bp::arg("v1"), bp::arg("v2"), bp::arg("v3"), bp::arg("v4"), bp::arg("v5"), bp::arg("v6") )) );
        Vec2f_exposer.def( bp::init< float, float, float, float, float, float, float, float >(( bp::arg("v0"), bp::arg("v1"), bp::arg("v2"), bp::arg("v3"), bp::arg("v4"), bp::arg("v5"), bp::arg("v6"), bp::arg("v7") )) );
        Vec2f_exposer.def( bp::init< float, float, float, float, float, float, float, float, float >(( bp::arg("v0"), bp::arg("v1"), bp::arg("v2"), bp::arg("v3"), bp::arg("v4"), bp::arg("v5"), bp::arg("v6"), bp::arg("v7"), bp::arg("v8") )) );
        Vec2f_exposer.def( bp::init< float, float, float, float, float, float, float, float, float, float >(( bp::arg("v0"), bp::arg("v1"), bp::arg("v2"), bp::arg("v3"), bp::arg("v4"), bp::arg("v5"), bp::arg("v6"), bp::arg("v7"), bp::arg("v8"), bp::arg("v9") )) );
        Vec2f_exposer.def( bp::init< cv::Vec< float, 2 > const & >(( bp::arg("v") )) );
        { //::cv::Vec< float, 2 >::all
        
            typedef cv::Vec< float, 2 > exported_class_t;
            typedef ::cv::Vec< float, 2 > ( *all_function_type )( float );
            
            Vec2f_exposer.def( 
                "all"
                , all_function_type( &::cv::Vec< float, 2 >::all )
                , ( bp::arg("alpha") ) );
        
        }
        { //::cv::Vec< float, 2 >::cross
        
            typedef cv::Vec< float, 2 > exported_class_t;
            typedef ::cv::Vec< float, 2 > ( exported_class_t::*cross_function_type )( ::cv::Vec< float, 2 > const & ) const;
            
            Vec2f_exposer.def( 
                "cross"
                , cross_function_type( &::cv::Vec< float, 2 >::cross )
                , ( bp::arg("v") ) );
        
        }
        { //::cv::Vec< float, 2 >::ddot
        
            typedef cv::Vec< float, 2 > exported_class_t;
            typedef double ( exported_class_t::*ddot_function_type )( ::cv::Vec< float, 2 > const & ) const;
            
            Vec2f_exposer.def( 
                "ddot"
                , ddot_function_type( &::cv::Vec< float, 2 >::ddot )
                , ( bp::arg("v") ) );
        
        }
        { //::cv::Vec< float, 2 >::dot
        
            typedef cv::Vec< float, 2 > exported_class_t;
            typedef float ( exported_class_t::*dot_function_type )( ::cv::Vec< float, 2 > const & ) const;
            
            Vec2f_exposer.def( 
                "dot"
                , dot_function_type( &::cv::Vec< float, 2 >::dot )
                , ( bp::arg("v") ) );
        
        }
        { //::cv::Vec< float, 2 >::operator[]
        
            typedef cv::Vec< float, 2 > exported_class_t;
            typedef float ( exported_class_t::*__getitem___function_type )( int ) const;
            
            Vec2f_exposer.def( 
                "__getitem__"
                , __getitem___function_type( &::cv::Vec< float, 2 >::operator[] )
                , ( bp::arg("i") ) );
        
        }
        { //::cv::Vec< float, 2 >::operator[]
        
            typedef cv::Vec< float, 2 > exported_class_t;
            typedef float & ( exported_class_t::*__getitem___function_type )( int ) ;
            
            Vec2f_exposer.def( 
                "__getitem__"
                , __getitem___function_type( &::cv::Vec< float, 2 >::operator[] )
                , ( bp::arg("i") )
                , bp::return_value_policy< bp::copy_non_const_reference >() );
        
        }
        Vec2f_exposer.staticmethod( "all" );
        Vec2f_exposer.def("from_ndarray", &bp::from_ndarray< cv::Vec2f >, (bp::arg("arr")) );
        Vec2f_exposer.staticmethod("from_ndarray");
        Vec2f_exposer.add_property("ndarray", &bp::as_ndarray< cv::Vec2f >);
    }

}
