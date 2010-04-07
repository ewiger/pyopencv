// This file has been generated by Py++.

#include "boost/python.hpp"
#include "__call_policies.pypp.hpp"
#include "__convenience.pypp.hpp"
#include "__ctypes_integration.pypp.hpp"
#include "opencv_headers.hpp"
#include "CvBoost.pypp.hpp"

namespace bp = boost::python;

struct CvBoost_wrapper : CvBoost, bp::wrapper< CvBoost > {

    CvBoost_wrapper(CvBoost const & arg )
    : CvBoost( arg )
      , bp::wrapper< CvBoost >(){
        // copy constructor
        
    }

    CvBoost_wrapper( )
    : CvBoost( )
      , bp::wrapper< CvBoost >(){
        // null constructor
    
    }

    CvBoost_wrapper(::cv::Mat const & _train_data, int _tflag, ::cv::Mat const & _responses, ::cv::Mat const & _var_idx=cv::Mat(), ::cv::Mat const & _sample_idx=cv::Mat(), ::cv::Mat const & _var_type=cv::Mat(), ::cv::Mat const & _missing_mask=cv::Mat(), ::CvBoostParams params=::CvBoostParams( ) )
    : CvBoost( boost::ref(_train_data), _tflag, boost::ref(_responses), boost::ref(_var_idx), boost::ref(_sample_idx), boost::ref(_var_type), boost::ref(_missing_mask), params )
      , bp::wrapper< CvBoost >(){
        // constructor
    
    }

    virtual void clear(  ) {
        if( bp::override func_clear = this->get_override( "clear" ) )
            func_clear(  );
        else{
            this->CvBoost::clear(  );
        }
    }
    
    void default_clear(  ) {
        CvBoost::clear( );
    }

    virtual void read( ::CvFileStorage * storage, ::CvFileNode * node ) {
        namespace bpl = boost::python;
        if( bpl::override func_read = this->get_override( "read" ) ){
            bpl::object py_result = bpl::call<bpl::object>( func_read.ptr(), storage, node );
        }
        else{
            CvBoost::read( boost::python::ptr(storage), boost::python::ptr(node) );
        }
    }
    
    static void default_read( ::CvBoost & inst, ::cv::FileStorage & storage, ::cv::FileNode & node ){
        if( dynamic_cast< CvBoost_wrapper * >( boost::addressof( inst ) ) ){
            inst.::CvBoost::read(storage.fs, *(node));
        }
        else{
            inst.read(storage.fs, *(node));
        }
    }

    virtual bool train( ::CvMLData * data, ::CvBoostParams params=::CvBoostParams( ), bool update=false ) {
        if( bp::override func_train = this->get_override( "train" ) )
            return func_train( boost::python::ptr(data), params, update );
        else{
            return this->CvBoost::train( boost::python::ptr(data), params, update );
        }
    }
    
    bool default_train( ::CvMLData * data, ::CvBoostParams params=::CvBoostParams( ), bool update=false ) {
        return CvBoost::train( boost::python::ptr(data), params, update );
    }

    virtual bool train( ::cv::Mat const & _train_data, int _tflag, ::cv::Mat const & _responses, ::cv::Mat const & _var_idx=cv::Mat(), ::cv::Mat const & _sample_idx=cv::Mat(), ::cv::Mat const & _var_type=cv::Mat(), ::cv::Mat const & _missing_mask=cv::Mat(), ::CvBoostParams params=::CvBoostParams( ), bool update=false ) {
        if( bp::override func_train = this->get_override( "train" ) )
            return func_train( boost::ref(_train_data), _tflag, boost::ref(_responses), boost::ref(_var_idx), boost::ref(_sample_idx), boost::ref(_var_type), boost::ref(_missing_mask), params, update );
        else{
            return this->CvBoost::train( boost::ref(_train_data), _tflag, boost::ref(_responses), boost::ref(_var_idx), boost::ref(_sample_idx), boost::ref(_var_type), boost::ref(_missing_mask), params, update );
        }
    }
    
    bool default_train( ::cv::Mat const & _train_data, int _tflag, ::cv::Mat const & _responses, ::cv::Mat const & _var_idx=cv::Mat(), ::cv::Mat const & _sample_idx=cv::Mat(), ::cv::Mat const & _var_type=cv::Mat(), ::cv::Mat const & _missing_mask=cv::Mat(), ::CvBoostParams params=::CvBoostParams( ), bool update=false ) {
        return CvBoost::train( boost::ref(_train_data), _tflag, boost::ref(_responses), boost::ref(_var_idx), boost::ref(_sample_idx), boost::ref(_var_type), boost::ref(_missing_mask), params, update );
    }

    virtual void write( ::CvFileStorage * storage, char const * name ) const  {
        namespace bpl = boost::python;
        if( bpl::override func_write = this->get_override( "write" ) ){
            bpl::object py_result = bpl::call<bpl::object>( func_write.ptr(), storage, name );
        }
        else{
            CvBoost::write( boost::python::ptr(storage), name );
        }
    }
    
    static void default_write( ::CvBoost const & inst, ::cv::FileStorage & storage, char const * name ){
        if( dynamic_cast< CvBoost_wrapper const* >( boost::addressof( inst ) ) ){
            inst.::CvBoost::write(storage.fs, name);
        }
        else{
            inst.write(storage.fs, name);
        }
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

};

void register_CvBoost_class(){

    { //::CvBoost
        typedef bp::class_< CvBoost_wrapper, bp::bases< CvStatModel > > CvBoost_exposer_t;
        CvBoost_exposer_t CvBoost_exposer = CvBoost_exposer_t( "CvBoost", bp::init< >() );
        bp::scope CvBoost_scope( CvBoost_exposer );
        CvBoost_exposer.add_property( "this", pyplus_conv::make_addressof_inst_getter< CvBoost >() );
        bp::scope().attr("DISCRETE") = (int)CvBoost::DISCRETE;
        bp::scope().attr("REAL") = (int)CvBoost::REAL;
        bp::scope().attr("LOGIT") = (int)CvBoost::LOGIT;
        bp::scope().attr("GENTLE") = (int)CvBoost::GENTLE;
        bp::scope().attr("DEFAULT") = (int)CvBoost::DEFAULT;
        bp::scope().attr("GINI") = (int)CvBoost::GINI;
        bp::scope().attr("MISCLASS") = (int)CvBoost::MISCLASS;
        bp::scope().attr("SQERR") = (int)CvBoost::SQERR;
        CvBoost_exposer.def( bp::init< cv::Mat const &, int, cv::Mat const &, bp::optional< cv::Mat const &, cv::Mat const &, cv::Mat const &, cv::Mat const &, CvBoostParams > >(( bp::arg("_train_data"), bp::arg("_tflag"), bp::arg("_responses"), bp::arg("_var_idx")=cv::Mat(), bp::arg("_sample_idx")=cv::Mat(), bp::arg("_var_type")=cv::Mat(), bp::arg("_missing_mask")=cv::Mat(), bp::arg("params")=::CvBoostParams( ) )) );
        { //::CvBoost::clear
        
            typedef void ( ::CvBoost::*clear_function_type )(  ) ;
            typedef void ( CvBoost_wrapper::*default_clear_function_type )(  ) ;
            
            CvBoost_exposer.def( 
                "clear"
                , clear_function_type(&::CvBoost::clear)
                , default_clear_function_type(&CvBoost_wrapper::default_clear) );
        
        }
        { //::CvBoost::get_data
        
            typedef ::CvDTreeTrainData const * ( ::CvBoost::*get_data_function_type )(  ) const;
            
            CvBoost_exposer.def( 
                "get_data"
                , get_data_function_type( &::CvBoost::get_data )
                , bp::return_internal_reference< >() );
        
        }
        { //::CvBoost::get_params
        
            typedef ::CvBoostParams const & ( ::CvBoost::*get_params_function_type )(  ) const;
            
            CvBoost_exposer.def( 
                "get_params"
                , get_params_function_type( &::CvBoost::get_params )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::CvBoost::read
        
            typedef void ( *default_read_function_type )( ::CvBoost &,::cv::FileStorage &,::cv::FileNode & );
            
            CvBoost_exposer.def( 
                "read"
                , default_read_function_type( &CvBoost_wrapper::default_read )
                , ( bp::arg("inst"), bp::arg("storage"), bp::arg("node") )
                , "\nArgument 'node':"\
    "\n    C/C++ type: ::CvFileNode *."\
    "\n    Python type: FileNode."\
    "\nArgument 'storage':"\
    "\n    C/C++ type: ::CvFileStorage *."\
    "\n    Python type: FileStorage." );
        
        }
        { //::CvBoost::train
        
            typedef bool ( ::CvBoost::*train_function_type )( ::CvMLData *,::CvBoostParams,bool ) ;
            typedef bool ( CvBoost_wrapper::*default_train_function_type )( ::CvMLData *,::CvBoostParams,bool ) ;
            
            CvBoost_exposer.def( 
                "train"
                , train_function_type(&::CvBoost::train)
                , default_train_function_type(&CvBoost_wrapper::default_train)
                , ( bp::arg("data"), bp::arg("params")=::CvBoostParams( ), bp::arg("update")=(bool)(false) ) );
        
        }
        { //::CvBoost::train
        
            typedef bool ( ::CvBoost::*train_function_type )( ::cv::Mat const &,int,::cv::Mat const &,::cv::Mat const &,::cv::Mat const &,::cv::Mat const &,::cv::Mat const &,::CvBoostParams,bool ) ;
            typedef bool ( CvBoost_wrapper::*default_train_function_type )( ::cv::Mat const &,int,::cv::Mat const &,::cv::Mat const &,::cv::Mat const &,::cv::Mat const &,::cv::Mat const &,::CvBoostParams,bool ) ;
            
            CvBoost_exposer.def( 
                "train"
                , train_function_type(&::CvBoost::train)
                , default_train_function_type(&CvBoost_wrapper::default_train)
                , ( bp::arg("_train_data"), bp::arg("_tflag"), bp::arg("_responses"), bp::arg("_var_idx")=cv::Mat(), bp::arg("_sample_idx")=cv::Mat(), bp::arg("_var_type")=cv::Mat(), bp::arg("_missing_mask")=cv::Mat(), bp::arg("params")=::CvBoostParams( ), bp::arg("update")=(bool)(false) ) );
        
        }
        { //::CvBoost::write
        
            typedef void ( *default_write_function_type )( ::CvBoost const &,::cv::FileStorage &,char const * );
            
            CvBoost_exposer.def( 
                "write"
                , default_write_function_type( &CvBoost_wrapper::default_write )
                , ( bp::arg("inst"), bp::arg("storage"), bp::arg("name") )
                , "\nArgument 'storage':"\
    "\n    C/C++ type: ::CvFileStorage *."\
    "\n    Python type: FileStorage." );
        
        }
        { //::CvStatModel::load
        
            typedef void ( ::CvStatModel::*load_function_type )( char const *,char const * ) ;
            typedef void ( CvBoost_wrapper::*default_load_function_type )( char const *,char const * ) ;
            
            CvBoost_exposer.def( 
                "load"
                , load_function_type(&::CvStatModel::load)
                , default_load_function_type(&CvBoost_wrapper::default_load)
                , ( bp::arg("filename"), bp::arg("name")=bp::object() ) );
        
        }
        { //::CvStatModel::save
        
            typedef void ( ::CvStatModel::*save_function_type )( char const *,char const * ) const;
            typedef void ( CvBoost_wrapper::*default_save_function_type )( char const *,char const * ) const;
            
            CvBoost_exposer.def( 
                "save"
                , save_function_type(&::CvStatModel::save)
                , default_save_function_type(&CvBoost_wrapper::default_save)
                , ( bp::arg("filename"), bp::arg("name")=bp::object() ) );
        
        }
    }

}
