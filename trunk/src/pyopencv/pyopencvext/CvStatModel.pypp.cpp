// This file has been generated by Py++.

#include "boost/python.hpp"
#include "__call_policies.pypp.hpp"
#include "__convenience.pypp.hpp"
#include "__ctypes_integration.pypp.hpp"
#include "opencv_headers.hpp"
#include "CvStatModel.pypp.hpp"

namespace bp = boost::python;

struct CvStatModel_wrapper : CvStatModel, bp::wrapper< CvStatModel > {

    CvStatModel_wrapper(CvStatModel const & arg )
    : CvStatModel( arg )
      , bp::wrapper< CvStatModel >(){
        // copy constructor
        
    }

    CvStatModel_wrapper( )
    : CvStatModel( )
      , bp::wrapper< CvStatModel >(){
        // null constructor
    
    }

    virtual void clear(  ) {
        if( bp::override func_clear = this->get_override( "clear" ) )
            func_clear(  );
        else{
            this->CvStatModel::clear(  );
        }
    }
    
    void default_clear(  ) {
        CvStatModel::clear( );
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
        if( dynamic_cast< CvStatModel_wrapper * >( boost::addressof( inst ) ) ){
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
        if( dynamic_cast< CvStatModel_wrapper const* >( boost::addressof( inst ) ) ){
            inst.::CvStatModel::write(storage.fs, name);
        }
        else{
            inst.write(storage.fs, name);
        }
    }

};

void register_CvStatModel_class(){

    bp::class_< CvStatModel_wrapper >( "CvStatModel", bp::init< >() )    
        .add_property( "this", pyplus_conv::make_addressof_inst_getter< CvStatModel >() )    
        .def( 
            "clear"
            , (void ( ::CvStatModel::* )(  ) )(&::CvStatModel::clear)
            , (void ( CvStatModel_wrapper::* )(  ) )(&CvStatModel_wrapper::default_clear) )    
        .def( 
            "load"
            , (void ( ::CvStatModel::* )( char const *,char const * ) )(&::CvStatModel::load)
            , (void ( CvStatModel_wrapper::* )( char const *,char const * ) )(&CvStatModel_wrapper::default_load)
            , ( bp::arg("filename"), bp::arg("name")=bp::object() ) )    
        .def( 
            "read"
            , (void (*)( ::CvStatModel &,::cv::FileStorage &,::cv::FileNode & ))( &CvStatModel_wrapper::default_read )
            , ( bp::arg("inst"), bp::arg("storage"), bp::arg("node") ) )    
        .def( 
            "save"
            , (void ( ::CvStatModel::* )( char const *,char const * ) const)(&::CvStatModel::save)
            , (void ( CvStatModel_wrapper::* )( char const *,char const * ) const)(&CvStatModel_wrapper::default_save)
            , ( bp::arg("filename"), bp::arg("name")=bp::object() ) )    
        .def( 
            "write"
            , (void (*)( ::CvStatModel const &,::cv::FileStorage &,char const * ))( &CvStatModel_wrapper::default_write )
            , ( bp::arg("inst"), bp::arg("storage"), bp::arg("name") ) );

}
