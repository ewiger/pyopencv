// This file has been generated by Py++.

#include "boost/python.hpp"
#include "__array_1.pypp.hpp"
#include "__call_policies.pypp.hpp"
#include "__ctypes_integration.pypp.hpp"
#include "opencv_headers.hpp"
#include "boost/python/make_function.hpp"
#include "opencv_extra.hpp"
#include "ndarray.hpp"
#include "MatND.pypp.hpp"

namespace bp = boost::python;

struct MatND_wrapper : cv::MatND, bp::wrapper< cv::MatND > {

    MatND_wrapper( )
    : cv::MatND( )
      , bp::wrapper< cv::MatND >(){
        // null constructor
    
    }

    MatND_wrapper(::cv::MatND const & m )
    : cv::MatND( boost::ref(m) )
      , bp::wrapper< cv::MatND >(){
        // copy constructor
    
    }

    static void create( ::cv::MatND & inst, boost::python::object _sizes, int _type ){
        bool b__sizes= _sizes.ptr() != Py_None;
        int l__sizes= b__sizes? bp::len(_sizes): 0;
        std::vector< int > v__sizes(l__sizes);
    if(l__sizes > 0) for(int i__sizes = 0; i__sizes < l__sizes; ++i__sizes) v__sizes[i__sizes] = bp::extract< int >(_sizes[i__sizes]);
    
        inst.create(l__sizes, b__sizes? (& (v__sizes.front())): 0, _type);
    }

    static boost::python::object reshape( ::cv::MatND const & inst, int _newcn, boost::python::object _newsz=bp::object() ){
        bool b__newsz= _newsz.ptr() != Py_None;
        int l__newsz= b__newsz? bp::len(_newsz): 0;
        std::vector< int > v__newsz(l__newsz);
    if(l__newsz > 0) for(int i__newsz = 0; i__newsz < l__newsz; ++i__newsz) v__newsz[i__newsz] = bp::extract< int >(_newsz[i__newsz]);
    
        ::cv::MatND result = inst.reshape(_newcn, l__newsz, b__newsz? (& (v__newsz.front())): 0);
        return bp::object( result );
    }

    static pyplusplus::containers::static_sized::array_1_t< int, 32>
    pyplusplus_size_wrapper( ::cv::MatND & inst ){
        return pyplusplus::containers::static_sized::array_1_t< int, 32>( inst.size );
    }

    static pyplusplus::containers::static_sized::array_1_t< unsigned int, 32>
    pyplusplus_step_wrapper( ::cv::MatND & inst ){
        return pyplusplus::containers::static_sized::array_1_t< unsigned int, 32>( inst.step );
    }

};

static boost::shared_ptr<cv::MatND> MatND__init1__(const bp::tuple &_sizes, int _type)
{
    std::vector<int> _sizes2;
    int len = bp::len(_sizes);
    _sizes2.resize(len);
    for(int i = 0; i < len; ++i) _sizes2[i] = bp::extract<int>(_sizes[i]);
    return boost::shared_ptr<cv::MatND>(new cv::MatND(len, &_sizes2[0], _type));
}

static boost::shared_ptr<cv::MatND> MatND__init2__(const bp::tuple &_sizes, int _type, const cv::Scalar& _s)
{
    std::vector<int> _sizes2;
    int len = bp::len(_sizes);
    _sizes2.resize(len);
    for(int i = 0; i < len; ++i) _sizes2[i] = bp::extract<int>(_sizes[i]);
    return boost::shared_ptr<cv::MatND>(new cv::MatND(len, &_sizes2[0], _type, _s));
}

static boost::shared_ptr<cv::MatND> MatND__init3__(const cv::MatND& m, const bp::tuple &_ranges)
{
    std::vector<cv::Range> _ranges2;
    int len = bp::len(_ranges);
    _ranges2.resize(len);
    for(int i = 0; i < len; ++i) _ranges2[i] = bp::extract<cv::Range>(_ranges[i]);
    return boost::shared_ptr<cv::MatND>(new cv::MatND(m, &_ranges2[0]));
}

static cv::MatND MatND__call__(const cv::MatND& inst, const bp::tuple &ranges)
{
    std::vector<cv::Range> ranges2;
    int len = bp::len(ranges);
    ranges2.resize(len);
    for(int i = 0; i < len; ++i) ranges2[i] = bp::extract<cv::Range>(ranges[i]);
    return inst(&ranges2[0]);
}

void register_MatND_class(){

    { //::cv::MatND
        typedef bp::class_< MatND_wrapper > MatND_exposer_t;
        MatND_exposer_t MatND_exposer = MatND_exposer_t( "MatND", bp::init< >() );
        bp::scope MatND_scope( MatND_exposer );
        MatND_exposer.add_property( "this", pyplus_conv::make_addressof_inst_getter< cv::MatND >() );
        bp::scope().attr("MAGIC_VAL") = (int)cv::MatND::MAGIC_VAL;
        bp::scope().attr("AUTO_STEP") = (int)cv::MatND::AUTO_STEP;
        bp::scope().attr("CONTINUOUS_FLAG") = (int)cv::MatND::CONTINUOUS_FLAG;
        bp::scope().attr("MAX_DIM") = (int)cv::MatND::MAX_DIM;
        MatND_exposer.def( bp::init< cv::MatND const & >(( bp::arg("m") )) );
        { //::cv::MatND::addref
        
            typedef void ( ::cv::MatND::*addref_function_type )(  ) ;
            
            MatND_exposer.def( 
                "addref"
                , addref_function_type( &::cv::MatND::addref ) );
        
        }
        { //::cv::MatND::assignTo
        
            typedef void ( ::cv::MatND::*assignTo_function_type )( ::cv::MatND &,int ) const;
            
            MatND_exposer.def( 
                "assignTo"
                , assignTo_function_type( &::cv::MatND::assignTo )
                , ( bp::arg("m"), bp::arg("type") ) );
        
        }
        { //::cv::MatND::channels
        
            typedef int ( ::cv::MatND::*channels_function_type )(  ) const;
            
            MatND_exposer.def( 
                "channels"
                , channels_function_type( &::cv::MatND::channels ) );
        
        }
        { //::cv::MatND::clone
        
            typedef ::cv::MatND ( ::cv::MatND::*clone_function_type )(  ) const;
            
            MatND_exposer.def( 
                "clone"
                , clone_function_type( &::cv::MatND::clone ) );
        
        }
        { //::cv::MatND::convertTo
        
            typedef void ( ::cv::MatND::*convertTo_function_type )( ::cv::MatND &,int,double,double ) const;
            
            MatND_exposer.def( 
                "convertTo"
                , convertTo_function_type( &::cv::MatND::convertTo )
                , ( bp::arg("m"), bp::arg("rtype"), bp::arg("alpha")=1, bp::arg("beta")=0 ) );
        
        }
        { //::cv::MatND::copyTo
        
            typedef void ( ::cv::MatND::*copyTo_function_type )( ::cv::MatND & ) const;
            
            MatND_exposer.def( 
                "copyTo"
                , copyTo_function_type( &::cv::MatND::copyTo )
                , ( bp::arg("m") ) );
        
        }
        { //::cv::MatND::copyTo
        
            typedef void ( ::cv::MatND::*copyTo_function_type )( ::cv::MatND &,::cv::MatND const & ) const;
            
            MatND_exposer.def( 
                "copyTo"
                , copyTo_function_type( &::cv::MatND::copyTo )
                , ( bp::arg("m"), bp::arg("mask") ) );
        
        }
        { //::cv::MatND::create
        
            typedef void ( *create_function_type )( ::cv::MatND &,boost::python::object,int );
            
            MatND_exposer.def( 
                "create"
                , create_function_type( &MatND_wrapper::create )
                , ( bp::arg("inst"), bp::arg("_sizes"), bp::arg("_type") ) );
        
        }
        { //::cv::MatND::depth
        
            typedef int ( ::cv::MatND::*depth_function_type )(  ) const;
            
            MatND_exposer.def( 
                "depth"
                , depth_function_type( &::cv::MatND::depth ) );
        
        }
        { //::cv::MatND::elemSize
        
            typedef ::size_t ( ::cv::MatND::*elemSize_function_type )(  ) const;
            
            MatND_exposer.def( 
                "elemSize"
                , elemSize_function_type( &::cv::MatND::elemSize ) );
        
        }
        { //::cv::MatND::elemSize1
        
            typedef ::size_t ( ::cv::MatND::*elemSize1_function_type )(  ) const;
            
            MatND_exposer.def( 
                "elemSize1"
                , elemSize1_function_type( &::cv::MatND::elemSize1 ) );
        
        }
        { //::cv::MatND::isContinuous
        
            typedef bool ( ::cv::MatND::*isContinuous_function_type )(  ) const;
            
            MatND_exposer.def( 
                "isContinuous"
                , isContinuous_function_type( &::cv::MatND::isContinuous ) );
        
        }
        MatND_exposer.def( "as__scope_cv_scope_Mat", &cv::MatND::operator ::cv::Mat  );
        { //::cv::MatND::operator=
        
            typedef ::cv::MatND & ( ::cv::MatND::*assign_function_type )( ::cv::MatND const & ) ;
            
            MatND_exposer.def( 
                "assign"
                , assign_function_type( &::cv::MatND::operator= )
                , ( bp::arg("m") )
                , bp::return_self< >() );
        
        }
        { //::cv::MatND::operator=
        
            typedef ::cv::MatND & ( ::cv::MatND::*assign_function_type )( ::cv::Scalar const & ) ;
            
            MatND_exposer.def( 
                "assign"
                , assign_function_type( &::cv::MatND::operator= )
                , ( bp::arg("s") )
                , bp::return_self< >() );
        
        }
        { //::cv::MatND::release
        
            typedef void ( ::cv::MatND::*release_function_type )(  ) ;
            
            MatND_exposer.def( 
                "release"
                , release_function_type( &::cv::MatND::release ) );
        
        }
        { //::cv::MatND::reshape
        
            typedef boost::python::object ( *reshape_function_type )( ::cv::MatND const &,int,boost::python::object );
            
            MatND_exposer.def( 
                "reshape"
                , reshape_function_type( &MatND_wrapper::reshape )
                , ( bp::arg("inst"), bp::arg("_newcn"), bp::arg("_newsz")=bp::object() ) );
        
        }
        { //::cv::MatND::setTo
        
            typedef ::cv::MatND & ( ::cv::MatND::*setTo_function_type )( ::cv::Scalar const &,::cv::MatND const & ) ;
            
            MatND_exposer.def( 
                "setTo"
                , setTo_function_type( &::cv::MatND::setTo )
                , ( bp::arg("s"), bp::arg("mask")=cv::MatND() )
                , bp::return_self< >() );
        
        }
        { //::cv::MatND::step1
        
            typedef ::size_t ( ::cv::MatND::*step1_function_type )( int ) const;
            
            MatND_exposer.def( 
                "step1"
                , step1_function_type( &::cv::MatND::step1 )
                , ( bp::arg("i") ) );
        
        }
        { //::cv::MatND::type
        
            typedef int ( ::cv::MatND::*type_function_type )(  ) const;
            
            MatND_exposer.def( 
                "type"
                , type_function_type( &::cv::MatND::type ) );
        
        }
        MatND_exposer.def_readwrite( "dims", &cv::MatND::dims );
        MatND_exposer.def_readwrite( "flags", &cv::MatND::flags );
        { //cv::MatND::size [variable], type=int[32]
        
            typedef pyplusplus::containers::static_sized::array_1_t< int, 32> ( *array_wrapper_creator )( ::cv::MatND & );
            
            MatND_exposer.add_property( "size"
                , bp::make_function( array_wrapper_creator(&MatND_wrapper::pyplusplus_size_wrapper)
                                    , bp::with_custodian_and_ward_postcall< 0, 1 >() ) );
        }
        pyplusplus::containers::static_sized::register_array_1< unsigned int, 32 >( "__array_1_unsigned_int_32" );
        { //cv::MatND::step [variable], type=size_t[32]
        
            typedef pyplusplus::containers::static_sized::array_1_t< unsigned int, 32> ( *array_wrapper_creator )( ::cv::MatND & );
            
            MatND_exposer.add_property( "step"
                , bp::make_function( array_wrapper_creator(&MatND_wrapper::pyplusplus_step_wrapper)
                                    , bp::with_custodian_and_ward_postcall< 0, 1 >() ) );
        }
        MatND_exposer.def("__init__", bp::make_constructor(&MatND__init1__));
        MatND_exposer.def("__init__", bp::make_constructor(&MatND__init2__));
        MatND_exposer.def("__init__", bp::make_constructor(&MatND__init3__));
        MatND_exposer.def("__call__", bp::make_function(&MatND__call__));
        MatND_exposer.def("from_ndarray", &bp::from_ndarray< cv::MatND > );
        MatND_exposer.staticmethod("from_ndarray");
        MatND_exposer.add_property("ndarray", &bp::as_ndarray< cv::MatND >);
    }

}
