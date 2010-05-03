// This file has been generated by Py++.

#include "boost/python.hpp"
#include "__call_policies.pypp.hpp"
#include "opencv_converters.hpp"
#include "__ctypes_integration.pypp.hpp"
#include "opencv_headers.hpp"
#include "FileStorage.pypp.hpp"

namespace bp = boost::python;

struct FileStorage_wrapper : cv::FileStorage, bp::wrapper< cv::FileStorage > {

    FileStorage_wrapper(cv::FileStorage const & arg )
    : cv::FileStorage( arg )
      , bp::wrapper< cv::FileStorage >(){
        // copy constructor
        
    }

    FileStorage_wrapper( )
    : cv::FileStorage( )
      , bp::wrapper< cv::FileStorage >(){
        // null constructor
    
    }

    FileStorage_wrapper(::std::string const & filename, int flags )
    : cv::FileStorage( boost::ref(filename), flags )
      , bp::wrapper< cv::FileStorage >(){
        // constructor
    
    }

    virtual bool isOpened(  ) const  {
        if( bp::override func_isOpened = this->get_override( "isOpened" ) )
            return func_isOpened(  );
        else{
            return this->cv::FileStorage::isOpened(  );
        }
    }
    
    bool default_isOpened(  ) const  {
        return cv::FileStorage::isOpened( );
    }

    virtual bool open( ::std::string const & filename, int flags ) {
        if( bp::override func_open = this->get_override( "open" ) )
            return func_open( boost::ref(filename), flags );
        else{
            return this->cv::FileStorage::open( boost::ref(filename), flags );
        }
    }
    
    bool default_open( ::std::string const & filename, int flags ) {
        return cv::FileStorage::open( boost::ref(filename), flags );
    }

    virtual void release(  ) {
        if( bp::override func_release = this->get_override( "release" ) )
            func_release(  );
        else{
            this->cv::FileStorage::release(  );
        }
    }
    
    void default_release(  ) {
        cv::FileStorage::release( );
    }

    static void writeRaw( ::cv::FileStorage & inst, ::std::string const & fmt, std::vector<unsigned char> const & vec ){
        inst.writeRaw(fmt, (::uchar const *)(&vec[0]), (int)(vec.size()));
    }

};

void register_FileStorage_class(){

    { //::cv::FileStorage
        typedef bp::class_< FileStorage_wrapper > FileStorage_exposer_t;
        FileStorage_exposer_t FileStorage_exposer = FileStorage_exposer_t( "FileStorage", "\nThe XML/YAML file storage class."
    "\n"
    "\nReference:"
    "\n    http://opencv.willowgarage.com/documentation/cpp/xml_yaml_persistence.html#filestorage", bp::init< >("\nConstructor."
    "\nReference:"
    "\n    http://opencv.willowgarage.com/documentation/cpp/xml_yaml_persistence.html#filestorage") );
        bp::scope FileStorage_scope( FileStorage_exposer );
        FileStorage_exposer.add_property( "this", pyplus_conv::make_addressof_inst_getter< cv::FileStorage >(), "\nThe XML/YAML file storage class."
    "\n"
    "\nReference:"
    "\n    http://opencv.willowgarage.com/documentation/cpp/xml_yaml_persistence.html#filestorage" );
        bp::scope().attr("READ") = (int)cv::FileStorage::READ;
        bp::scope().attr("WRITE") = (int)cv::FileStorage::WRITE;
        bp::scope().attr("APPEND") = (int)cv::FileStorage::APPEND;
        bp::scope().attr("UNDEFINED") = (int)cv::FileStorage::UNDEFINED;
        bp::scope().attr("VALUE_EXPECTED") = (int)cv::FileStorage::VALUE_EXPECTED;
        bp::scope().attr("NAME_EXPECTED") = (int)cv::FileStorage::NAME_EXPECTED;
        bp::scope().attr("INSIDE_MAP") = (int)cv::FileStorage::INSIDE_MAP;
        FileStorage_exposer.def( bp::init< std::string const &, int >(( bp::arg("filename"), bp::arg("flags") ), "\nConstructor."
    "\nReference:"
    "\n    http://opencv.willowgarage.com/documentation/cpp/xml_yaml_persistence.html#filestorage") );
        { //::cv::FileStorage::getDefaultObjectName
        
            typedef ::std::string ( *getDefaultObjectName_function_type )( ::std::string const & );
            
            FileStorage_exposer.def( 
                "getDefaultObjectName"
                , getDefaultObjectName_function_type( &::cv::FileStorage::getDefaultObjectName )
                , ( bp::arg("filename") )
                , "\nReturns the default object name from the filename (used by cvSave() "
    "\nwith the default object name etc.)."
    "\nReference:"
    "\n    http://opencv.willowgarage.com/documentation/cpp/xml_yaml_persistence.html#filestorage" );
        
        }
        { //::cv::FileStorage::getFirstTopLevelNode
        
            typedef ::cv::FileNode ( ::cv::FileStorage::*getFirstTopLevelNode_function_type )(  ) const;
            
            FileStorage_exposer.def( 
                "getFirstTopLevelNode"
                , getFirstTopLevelNode_function_type( &::cv::FileStorage::getFirstTopLevelNode )
                , "\nReturns the first top-level node."
    "\nReference:"
    "\n    http://opencv.willowgarage.com/documentation/cpp/xml_yaml_persistence.html#filestorage" );
        
        }
        { //::cv::FileStorage::isOpened
        
            typedef bool ( ::cv::FileStorage::*isOpened_function_type )(  ) const;
            typedef bool ( FileStorage_wrapper::*default_isOpened_function_type )(  ) const;
            
            FileStorage_exposer.def( 
                "isOpened"
                , isOpened_function_type(&::cv::FileStorage::isOpened)
                , default_isOpened_function_type(&FileStorage_wrapper::default_isOpened) );
        
        }
        { //::cv::FileStorage::open
        
            typedef bool ( ::cv::FileStorage::*open_function_type )( ::std::string const &,int ) ;
            typedef bool ( FileStorage_wrapper::*default_open_function_type )( ::std::string const &,int ) ;
            
            FileStorage_exposer.def( 
                "open"
                , open_function_type(&::cv::FileStorage::open)
                , default_open_function_type(&FileStorage_wrapper::default_open)
                , ( bp::arg("filename"), bp::arg("flags") ) );
        
        }
        { //::cv::FileStorage::operator[]
        
            typedef ::cv::FileNode ( ::cv::FileStorage::*__getitem___function_type )( ::std::string const & ) const;
            
            FileStorage_exposer.def( 
                "__getitem__"
                , __getitem___function_type( &::cv::FileStorage::operator[] )
                , ( bp::arg("nodename") )
                , "\nReturns the top-level node by name."
    "\nWrapped function:"
    "\n    operator[]"
    "\nReference:"
    "\n    http://opencv.willowgarage.com/documentation/cpp/xml_yaml_persistence.html#filestorage" );
        
        }
        { //::cv::FileStorage::release
        
            typedef void ( ::cv::FileStorage::*release_function_type )(  ) ;
            typedef void ( FileStorage_wrapper::*default_release_function_type )(  ) ;
            
            FileStorage_exposer.def( 
                "release"
                , release_function_type(&::cv::FileStorage::release)
                , default_release_function_type(&FileStorage_wrapper::default_release) );
        
        }
        { //::cv::FileStorage::root
        
            typedef ::cv::FileNode ( ::cv::FileStorage::*root_function_type )( int ) const;
            
            FileStorage_exposer.def( 
                "root"
                , root_function_type( &::cv::FileStorage::root )
                , ( bp::arg("streamidx")=(int)(0) )
                , "\nReturns the root file node (it's the parent of the first top-level "
    "\nnode)."
    "\nReference:"
    "\n    http://opencv.willowgarage.com/documentation/cpp/xml_yaml_persistence.html#filestorage" );
        
        }
        { //::cv::FileStorage::writeRaw
        
            typedef void ( *writeRaw_function_type )( cv::FileStorage &,::std::string const &,std::vector<unsigned char> const & );
            
            FileStorage_exposer.def( 
                "writeRaw"
                , writeRaw_function_type( &FileStorage_wrapper::writeRaw )
                , ( bp::arg("inst"), bp::arg("fmt"), bp::arg("vec") )
                , "\nWrites the certain number of elements of the specified format."
    "\nReference:"
    "\n    http://opencv.willowgarage.com/documentation/cpp/xml_yaml_persistence.html#filestorage"
    "\nArgument 'vec':"\
    "\n    C/C++ type: ::uchar const *."\
    "\n    Python type: vector_uint8."\
    "\nArgument 'len':"\
    "\n    Dependent argument: omitted from the calling sequence. Its value is "\
    "\n    derived from argument 'vec'." );
        
        }
        FileStorage_exposer.def_readwrite( "elname", &cv::FileStorage::elname );
        FileStorage_exposer.def_readwrite( "state", &cv::FileStorage::state );
        FileStorage_exposer.staticmethod( "getDefaultObjectName" );
    }

}
