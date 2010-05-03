// This file has been generated by Py++.

#include "boost/python.hpp"
#include "__call_policies.pypp.hpp"
#include "__convenience.pypp.hpp"
#include "opencv_converters.hpp"
#include "__ctypes_integration.pypp.hpp"
#include "opencv_headers.hpp"
#include "opencv_converters.hpp"
#include "CvKNearest.pypp.hpp"

namespace bp = boost::python;

struct CvKNearest_wrapper : CvKNearest, bp::wrapper< CvKNearest > {

    CvKNearest_wrapper(CvKNearest const & arg )
    : CvKNearest( arg )
      , bp::wrapper< CvKNearest >(){
        // copy constructor
        
    }

    CvKNearest_wrapper( )
    : CvKNearest( )
      , bp::wrapper< CvKNearest >(){
        // null constructor
    
    }

    CvKNearest_wrapper(::CvMat const * _train_data, ::CvMat const * _responses, ::CvMat const * _sample_idx=0, bool _is_regression=false, int max_k=32 )
    : CvKNearest( boost::python::ptr(_train_data), boost::python::ptr(_responses), boost::python::ptr(_sample_idx), _is_regression, max_k )
      , bp::wrapper< CvKNearest >(){
        // constructor
    
    }

    CvKNearest_wrapper(::cv::Mat const & _train_data, ::cv::Mat const & _responses, ::cv::Mat const & _sample_idx=cv::Mat(), bool _is_regression=false, int max_k=32 )
    : CvKNearest( boost::ref(_train_data), boost::ref(_responses), boost::ref(_sample_idx), _is_regression, max_k )
      , bp::wrapper< CvKNearest >(){
        // constructor
    
    }

    virtual void clear(  ) {
        if( bp::override func_clear = this->get_override( "clear" ) )
            func_clear(  );
        else{
            this->CvKNearest::clear(  );
        }
    }
    
    void default_clear(  ) {
        CvKNearest::clear( );
    }

    virtual bool train( ::CvMat const * _train_data, ::CvMat const * _responses, ::CvMat const * _sample_idx=0, bool is_regression=false, int _max_k=32, bool _update_base=false ) {
        namespace bpl = boost::python;
        if( bpl::override func_train = this->get_override( "train" ) ){
            bpl::object py_result = bpl::call<bpl::object>( func_train.ptr(), _train_data, _responses, _sample_idx, is_regression, _max_k, _update_base );
            return bpl::extract< bool >( pyplus_conv::get_out_argument( py_result, 0 ) );
        }
        else{
            return CvKNearest::train( boost::python::ptr(_train_data), boost::python::ptr(_responses), boost::python::ptr(_sample_idx), is_regression, _max_k, _update_base );
        }
    }
    
    static boost::python::object default_train_1e01fd8b58a9d09df6e9b4c9038d3fa5( ::CvKNearest & inst, ::cv::Mat & _train_data, ::cv::Mat & _responses, ::cv::Mat _sample_idx=cv::Mat(), bool is_regression=false, int _max_k=32, bool _update_base=false ){
        bool result;
        if( dynamic_cast< CvKNearest_wrapper * >( boost::addressof( inst ) ) ){
            result = inst.::CvKNearest::train(get_CvMat_ptr(_train_data), get_CvMat_ptr(_responses), get_CvMat_ptr(_sample_idx), is_regression, _max_k, _update_base);
        }
        else{
            result = inst.train(get_CvMat_ptr(_train_data), get_CvMat_ptr(_responses), get_CvMat_ptr(_sample_idx), is_regression, _max_k, _update_base);
        }
        return bp::object( result );
    }

    virtual bool train( ::cv::Mat const & _train_data, ::cv::Mat const & _responses, ::cv::Mat const & _sample_idx=cv::Mat(), bool is_regression=false, int _max_k=32, bool _update_base=false ) {
        if( bp::override func_train = this->get_override( "train" ) )
            return func_train( boost::ref(_train_data), boost::ref(_responses), boost::ref(_sample_idx), is_regression, _max_k, _update_base );
        else{
            return this->CvKNearest::train( boost::ref(_train_data), boost::ref(_responses), boost::ref(_sample_idx), is_regression, _max_k, _update_base );
        }
    }
    
    bool default_train( ::cv::Mat const & _train_data, ::cv::Mat const & _responses, ::cv::Mat const & _sample_idx=cv::Mat(), bool is_regression=false, int _max_k=32, bool _update_base=false ) {
        return CvKNearest::train( boost::ref(_train_data), boost::ref(_responses), boost::ref(_sample_idx), is_regression, _max_k, _update_base );
    }

    virtual void load( char const * filename, char const * name=0 ) {
        if( bp::override func_load = this->get_override( "load" ) )
            func_load( filename, name );
        else{
            this->CvStatModel::load( filename, name );
        }
    }
    
    void default_load( char const * filename, char const * name=0 ) {
        CvStatModel::load( filename, name );
    }

    virtual void read( ::CvFileStorage * storage, ::CvFileNode * node ) {
        namespace bpl = boost::python;
        if( bpl::override func_read = this->get_override( "read" ) ){
            bpl::object py_result = bpl::call<bpl::object>( func_read.ptr(), storage, node );
        }
        else{
            CvStatModel::read( boost::python::ptr(storage), boost::python::ptr(node) );
        }
    }
    
    static void default_read( ::CvStatModel & inst, ::cv::FileStorage & storage, ::cv::FileNode & node ){
        if( dynamic_cast< CvKNearest_wrapper * >( boost::addressof( inst ) ) ){
            inst.::CvStatModel::read(storage.fs, *(node));
        }
        else{
            inst.read(storage.fs, *(node));
        }
    }

    virtual void save( char const * filename, char const * name=0 ) const  {
        if( bp::override func_save = this->get_override( "save" ) )
            func_save( filename, name );
        else{
            this->CvStatModel::save( filename, name );
        }
    }
    
    void default_save( char const * filename, char const * name=0 ) const  {
        CvStatModel::save( filename, name );
    }

    virtual void write( ::CvFileStorage * storage, char const * name ) const  {
        namespace bpl = boost::python;
        if( bpl::override func_write = this->get_override( "write" ) ){
            bpl::object py_result = bpl::call<bpl::object>( func_write.ptr(), storage, name );
        }
        else{
            CvStatModel::write( boost::python::ptr(storage), name );
        }
    }
    
    static void default_write( ::CvStatModel const & inst, ::cv::FileStorage & storage, char const * name ){
        if( dynamic_cast< CvKNearest_wrapper const* >( boost::addressof( inst ) ) ){
            inst.::CvStatModel::write(storage.fs, name);
        }
        else{
            inst.write(storage.fs, name);
        }
    }

    bp::object sd_find_nearest( cv::Mat const & _samples, int k, cv::Mat &results, 
        bool return_neighbors_by_addr, cv::Mat &neighbor_responses, cv::Mat &dist ) {
        if(!return_neighbors_by_addr)
            return bp::object(find_nearest((::CvMat const *)get_CvMat_ptr(_samples), k, get_CvMat_ptr(results), 
                0, get_CvMat_ptr(neighbor_responses), get_CvMat_ptr(dist)));
                
        std::vector<int> neighbors2; neighbors2.resize(k*_samples.rows);
        float return_value = find_nearest((::CvMat const *)get_CvMat_ptr(_samples), k, get_CvMat_ptr(results), 
            (const float **)&neighbors2[0], get_CvMat_ptr(neighbor_responses), get_CvMat_ptr(dist));
        return bp::make_tuple(bp::object(return_value), convert_from_T_to_object(neighbors2));
    }

};

void register_CvKNearest_class(){

    bp::class_< CvKNearest_wrapper, bp::bases< CvStatModel > >( "CvKNearest", bp::init< >() )    
        .add_property( "this", pyplus_conv::make_addressof_inst_getter< CvKNearest >() )    
        .def( bp::init< CvMat const *, CvMat const *, bp::optional< CvMat const *, bool, int > >(( bp::arg("_train_data"), bp::arg("_responses"), bp::arg("_sample_idx")=bp::object(), bp::arg("_is_regression")=(bool)(false), bp::arg("max_k")=(int)(32) ), "\nWrapped function:"
    "\n    CvKNearest"
    "\nArgument '_train_data':"\
    "\n    C/C++ type: ::CvMat const *."\
    "\n    Python type: Mat."\
    "\nArgument '_sample_idx':"\
    "\n    C/C++ type: ::CvMat const *."\
    "\n    Python type: Mat."\
    "\nArgument '_responses':"\
    "\n    C/C++ type: ::CvMat const *."\
    "\n    Python type: Mat.") )    
        .def( bp::init< cv::Mat const &, cv::Mat const &, bp::optional< cv::Mat const &, bool, int > >(( bp::arg("_train_data"), bp::arg("_responses"), bp::arg("_sample_idx")=cv::Mat(), bp::arg("_is_regression")=(bool)(false), bp::arg("max_k")=(int)(32) )) )    
        .def( 
            "clear"
            , (void ( CvKNearest::* )(  ) )(&::CvKNearest::clear)
            , (void ( CvKNearest_wrapper::* )(  ) )(&CvKNearest_wrapper::default_clear) )    
        .def( 
            "get_max_k"
            , (int ( CvKNearest::* )(  ) const)( &::CvKNearest::get_max_k ) )    
        .def( 
            "get_sample_count"
            , (int ( CvKNearest::* )(  ) const)( &::CvKNearest::get_sample_count ) )    
        .def( 
            "get_var_count"
            , (int ( CvKNearest::* )(  ) const)( &::CvKNearest::get_var_count ) )    
        .def( 
            "is_regression"
            , (bool ( CvKNearest::* )(  ) const)( &::CvKNearest::is_regression ) )    
        .def( 
            "train"
            , (boost::python::object (*)( CvKNearest &,::cv::Mat &,::cv::Mat &,::cv::Mat,bool,int,bool ))( &CvKNearest_wrapper::default_train_1e01fd8b58a9d09df6e9b4c9038d3fa5 )
            , ( bp::arg("inst"), bp::arg("_train_data"), bp::arg("_responses"), bp::arg("_sample_idx")=cv::Mat(), bp::arg("is_regression")=(bool)(false), bp::arg("_max_k")=(int)(32), bp::arg("_update_base")=(bool)(false) )
            , "\nArgument '_train_data':"\
    "\n    C/C++ type: ::CvMat const *."\
    "\n    Python type: Mat."\
    "\nArgument '_sample_idx':"\
    "\n    C/C++ type: ::CvMat const *."\
    "\n    Python type: Mat."\
    "\nArgument '_responses':"\
    "\n    C/C++ type: ::CvMat const *."\
    "\n    Python type: Mat." )    
        .def( 
            "train"
            , (bool ( CvKNearest::* )( ::cv::Mat const &,::cv::Mat const &,::cv::Mat const &,bool,int,bool ) )(&::CvKNearest::train)
            , (bool ( CvKNearest_wrapper::* )( ::cv::Mat const &,::cv::Mat const &,::cv::Mat const &,bool,int,bool ) )(&CvKNearest_wrapper::default_train)
            , ( bp::arg("_train_data"), bp::arg("_responses"), bp::arg("_sample_idx")=cv::Mat(), bp::arg("is_regression")=(bool)(false), bp::arg("_max_k")=(int)(32), bp::arg("_update_base")=(bool)(false) ) )    
        .def( 
            "load"
            , (void ( CvStatModel::* )( char const *,char const * ) )(&::CvStatModel::load)
            , (void ( CvKNearest_wrapper::* )( char const *,char const * ) )(&CvKNearest_wrapper::default_load)
            , ( bp::arg("filename"), bp::arg("name")=bp::object() ) )    
        .def( 
            "read"
            , (void (*)( CvStatModel &,::cv::FileStorage &,::cv::FileNode & ))( &CvKNearest_wrapper::default_read )
            , ( bp::arg("inst"), bp::arg("storage"), bp::arg("node") )
            , "\nArgument 'node':"\
    "\n    C/C++ type: ::CvFileNode *."\
    "\n    Python type: FileNode."\
    "\nArgument 'storage':"\
    "\n    C/C++ type: ::CvFileStorage *."\
    "\n    Python type: FileStorage." )    
        .def( 
            "save"
            , (void ( CvStatModel::* )( char const *,char const * ) const)(&::CvStatModel::save)
            , (void ( CvKNearest_wrapper::* )( char const *,char const * ) const)(&CvKNearest_wrapper::default_save)
            , ( bp::arg("filename"), bp::arg("name")=bp::object() ) )    
        .def( 
            "write"
            , (void (*)( CvStatModel const &,::cv::FileStorage &,char const * ))( &CvKNearest_wrapper::default_write )
            , ( bp::arg("inst"), bp::arg("storage"), bp::arg("name") )
            , "\nArgument 'storage':"\
    "\n    C/C++ type: ::CvFileStorage *."\
    "\n    Python type: FileStorage." )    
        .def("find_nearest", &CvKNearest_wrapper::sd_find_nearest
        , (bp::arg("_samples"), bp::arg("k"), bp::arg("results"), bp::arg("return_neighbors_by_addr")=false, bp::arg("neighbor_response")=cv::Mat(), bp::arg("dist")=cv::Mat() ));

}
