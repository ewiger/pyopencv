// This file has been generated by Py++.

#include "boost/python.hpp"
#include "__call_policies.pypp.hpp"
#include "__convenience.pypp.hpp"
#include "opencv_converters.hpp"
#include "__ctypes_integration.pypp.hpp"
#include "opencv_headers.hpp"
#include "CvNormalBayesClassifier.pypp.hpp"

namespace bp = boost::python;

struct CvNormalBayesClassifier_wrapper : CvNormalBayesClassifier, bp::wrapper< CvNormalBayesClassifier > {

    CvNormalBayesClassifier_wrapper(CvNormalBayesClassifier const & arg )
    : CvNormalBayesClassifier( arg )
      , bp::wrapper< CvNormalBayesClassifier >(){
        // copy constructor
        
    }

    CvNormalBayesClassifier_wrapper( )
    : CvNormalBayesClassifier( )
      , bp::wrapper< CvNormalBayesClassifier >(){
        // null constructor
    
    }

    virtual void clear(  ) {
        if( bp::override func_clear = this->get_override( "clear" ) )
            func_clear(  );
        else{
            this->CvNormalBayesClassifier::clear(  );
        }
    }
    
    void default_clear(  ) {
        CvNormalBayesClassifier::clear( );
    }

    virtual float predict( ::CvMat const * _samples, ::CvMat * results=0 ) const  {
        namespace bpl = boost::python;
        if( bpl::override func_predict = this->get_override( "predict" ) ){
            bpl::object py_result = bpl::call<bpl::object>( func_predict.ptr(), _samples, results );
            return bpl::extract< float >( pyplus_conv::get_out_argument( py_result, 0 ) );
        }
        else{
            return CvNormalBayesClassifier::predict( boost::python::ptr(_samples), boost::python::ptr(results) );
        }
    }
    
    static boost::python::object default_predict_1d36a61abf97d25a0226e18815d76391( ::CvNormalBayesClassifier const & inst, ::cv::Mat & _samples, ::cv::Mat results=cv::Mat() ){
        float result;
        if( dynamic_cast< CvNormalBayesClassifier_wrapper const* >( boost::addressof( inst ) ) ){
            result = inst.::CvNormalBayesClassifier::predict(get_CvMat_ptr(_samples), get_CvMat_ptr(results));
        }
        else{
            result = inst.predict(get_CvMat_ptr(_samples), get_CvMat_ptr(results));
        }
        return bp::object( result );
    }

    virtual float predict( ::cv::Mat const & _samples, ::cv::Mat * results=0 ) const  {
        if( bp::override func_predict = this->get_override( "predict" ) )
            return func_predict( boost::ref(_samples), boost::python::ptr(results) );
        else{
            return this->CvNormalBayesClassifier::predict( boost::ref(_samples), boost::python::ptr(results) );
        }
    }
    
    float default_predict( ::cv::Mat const & _samples, ::cv::Mat * results=0 ) const  {
        return CvNormalBayesClassifier::predict( boost::ref(_samples), boost::python::ptr(results) );
    }

    virtual void read( ::CvFileStorage * storage, ::CvFileNode * node ) {
        namespace bpl = boost::python;
        if( bpl::override func_read = this->get_override( "read" ) ){
            bpl::object py_result = bpl::call<bpl::object>( func_read.ptr(), storage, node );
        }
        else{
            CvNormalBayesClassifier::read( boost::python::ptr(storage), boost::python::ptr(node) );
        }
    }
    
    static void default_read( ::CvNormalBayesClassifier & inst, ::cv::FileStorage & storage, ::cv::FileNode & node ){
        if( dynamic_cast< CvNormalBayesClassifier_wrapper * >( boost::addressof( inst ) ) ){
            inst.::CvNormalBayesClassifier::read(storage.fs, *(node));
        }
        else{
            inst.read(storage.fs, *(node));
        }
    }

    virtual bool train( ::CvMat const * _train_data, ::CvMat const * _responses, ::CvMat const * _var_idx=0, ::CvMat const * _sample_idx=0, bool update=false ) {
        namespace bpl = boost::python;
        if( bpl::override func_train = this->get_override( "train" ) ){
            bpl::object py_result = bpl::call<bpl::object>( func_train.ptr(), _train_data, _responses, _var_idx, _sample_idx, update );
            return bpl::extract< bool >( pyplus_conv::get_out_argument( py_result, 0 ) );
        }
        else{
            return CvNormalBayesClassifier::train( boost::python::ptr(_train_data), boost::python::ptr(_responses), boost::python::ptr(_var_idx), boost::python::ptr(_sample_idx), update );
        }
    }
    
    static boost::python::object default_train_6a363548a0937608c0ae8843b948b178( ::CvNormalBayesClassifier & inst, ::cv::Mat & _train_data, ::cv::Mat & _responses, ::cv::Mat _var_idx=cv::Mat(), ::cv::Mat _sample_idx=cv::Mat(), bool update=false ){
        bool result;
        if( dynamic_cast< CvNormalBayesClassifier_wrapper * >( boost::addressof( inst ) ) ){
            result = inst.::CvNormalBayesClassifier::train(get_CvMat_ptr(_train_data), get_CvMat_ptr(_responses), get_CvMat_ptr(_var_idx), get_CvMat_ptr(_sample_idx), update);
        }
        else{
            result = inst.train(get_CvMat_ptr(_train_data), get_CvMat_ptr(_responses), get_CvMat_ptr(_var_idx), get_CvMat_ptr(_sample_idx), update);
        }
        return bp::object( result );
    }

    virtual bool train( ::cv::Mat const & _train_data, ::cv::Mat const & _responses, ::cv::Mat const & _var_idx=cv::Mat(), ::cv::Mat const & _sample_idx=cv::Mat(), bool update=false ) {
        if( bp::override func_train = this->get_override( "train" ) )
            return func_train( boost::ref(_train_data), boost::ref(_responses), boost::ref(_var_idx), boost::ref(_sample_idx), update );
        else{
            return this->CvNormalBayesClassifier::train( boost::ref(_train_data), boost::ref(_responses), boost::ref(_var_idx), boost::ref(_sample_idx), update );
        }
    }
    
    bool default_train( ::cv::Mat const & _train_data, ::cv::Mat const & _responses, ::cv::Mat const & _var_idx=cv::Mat(), ::cv::Mat const & _sample_idx=cv::Mat(), bool update=false ) {
        return CvNormalBayesClassifier::train( boost::ref(_train_data), boost::ref(_responses), boost::ref(_var_idx), boost::ref(_sample_idx), update );
    }

    virtual void write( ::CvFileStorage * storage, char const * name ) const  {
        namespace bpl = boost::python;
        if( bpl::override func_write = this->get_override( "write" ) ){
            bpl::object py_result = bpl::call<bpl::object>( func_write.ptr(), storage, name );
        }
        else{
            CvNormalBayesClassifier::write( boost::python::ptr(storage), name );
        }
    }
    
    static void default_write( ::CvNormalBayesClassifier const & inst, ::cv::FileStorage & storage, char const * name ){
        if( dynamic_cast< CvNormalBayesClassifier_wrapper const* >( boost::addressof( inst ) ) ){
            inst.::CvNormalBayesClassifier::write(storage.fs, name);
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

    CvNormalBayesClassifier_wrapper(::cv::Mat const & _train_data, ::cv::Mat const & _responses, ::cv::Mat const & _var_idx=cv::Mat(), ::cv::Mat const & _sample_idx=cv::Mat() )
    : CvNormalBayesClassifier()
      , bp::wrapper< CvNormalBayesClassifier >(){
        // constructor
        train( _train_data, _responses, _var_idx, _sample_idx );
    }

};

void register_CvNormalBayesClassifier_class(){

    bp::class_< CvNormalBayesClassifier_wrapper, bp::bases< CvStatModel > >( "CvNormalBayesClassifier", bp::init< >() )    
        .add_property( "this", pyplus_conv::make_addressof_inst_getter< CvNormalBayesClassifier >() )    
        .def( 
            "clear"
            , (void ( ::CvNormalBayesClassifier::* )(  ) )(&::CvNormalBayesClassifier::clear)
            , (void ( CvNormalBayesClassifier_wrapper::* )(  ) )(&CvNormalBayesClassifier_wrapper::default_clear) )    
        .def( 
            "predict"
            , (boost::python::object (*)( ::CvNormalBayesClassifier const &,::cv::Mat &,::cv::Mat ))( &CvNormalBayesClassifier_wrapper::default_predict_1d36a61abf97d25a0226e18815d76391 )
            , ( bp::arg("inst"), bp::arg("_samples"), bp::arg("results")=cv::Mat() )
            , "\nArgument '_samples':"\
    "\n    C/C++ type: ::CvMat const *."\
    "\n    Python type: Mat."\
    "\nArgument 'results':"\
    "\n    C/C++ type: ::CvMat *."\
    "\n    Python type: Mat." )    
        .def( 
            "predict"
            , (float ( ::CvNormalBayesClassifier::* )( ::cv::Mat const &,::cv::Mat * ) const)(&::CvNormalBayesClassifier::predict)
            , (float ( CvNormalBayesClassifier_wrapper::* )( ::cv::Mat const &,::cv::Mat * ) const)(&CvNormalBayesClassifier_wrapper::default_predict)
            , ( bp::arg("_samples"), bp::arg("results")=bp::object() ) )    
        .def( 
            "read"
            , (void (*)( ::CvNormalBayesClassifier &,::cv::FileStorage &,::cv::FileNode & ))( &CvNormalBayesClassifier_wrapper::default_read )
            , ( bp::arg("inst"), bp::arg("storage"), bp::arg("node") )
            , "\nArgument 'node':"\
    "\n    C/C++ type: ::CvFileNode *."\
    "\n    Python type: FileNode."\
    "\nArgument 'storage':"\
    "\n    C/C++ type: ::CvFileStorage *."\
    "\n    Python type: FileStorage." )    
        .def( 
            "train"
            , (boost::python::object (*)( ::CvNormalBayesClassifier &,::cv::Mat &,::cv::Mat &,::cv::Mat,::cv::Mat,bool ))( &CvNormalBayesClassifier_wrapper::default_train_6a363548a0937608c0ae8843b948b178 )
            , ( bp::arg("inst"), bp::arg("_train_data"), bp::arg("_responses"), bp::arg("_var_idx")=cv::Mat(), bp::arg("_sample_idx")=cv::Mat(), bp::arg("update")=(bool)(false) )
            , "\nArgument '_sample_idx':"\
    "\n    C/C++ type: ::CvMat const *."\
    "\n    Python type: Mat."\
    "\nArgument '_train_data':"\
    "\n    C/C++ type: ::CvMat const *."\
    "\n    Python type: Mat."\
    "\nArgument '_var_idx':"\
    "\n    C/C++ type: ::CvMat const *."\
    "\n    Python type: Mat."\
    "\nArgument '_responses':"\
    "\n    C/C++ type: ::CvMat const *."\
    "\n    Python type: Mat." )    
        .def( 
            "train"
            , (bool ( ::CvNormalBayesClassifier::* )( ::cv::Mat const &,::cv::Mat const &,::cv::Mat const &,::cv::Mat const &,bool ) )(&::CvNormalBayesClassifier::train)
            , (bool ( CvNormalBayesClassifier_wrapper::* )( ::cv::Mat const &,::cv::Mat const &,::cv::Mat const &,::cv::Mat const &,bool ) )(&CvNormalBayesClassifier_wrapper::default_train)
            , ( bp::arg("_train_data"), bp::arg("_responses"), bp::arg("_var_idx")=cv::Mat(), bp::arg("_sample_idx")=cv::Mat(), bp::arg("update")=(bool)(false) ) )    
        .def( 
            "write"
            , (void (*)( ::CvNormalBayesClassifier const &,::cv::FileStorage &,char const * ))( &CvNormalBayesClassifier_wrapper::default_write )
            , ( bp::arg("inst"), bp::arg("storage"), bp::arg("name") )
            , "\nArgument 'storage':"\
    "\n    C/C++ type: ::CvFileStorage *."\
    "\n    Python type: FileStorage." )    
        .def( 
            "load"
            , (void ( ::CvStatModel::* )( char const *,char const * ) )(&::CvStatModel::load)
            , (void ( CvNormalBayesClassifier_wrapper::* )( char const *,char const * ) )(&CvNormalBayesClassifier_wrapper::default_load)
            , ( bp::arg("filename"), bp::arg("name")=bp::object() ) )    
        .def( 
            "save"
            , (void ( ::CvStatModel::* )( char const *,char const * ) const)(&::CvStatModel::save)
            , (void ( CvNormalBayesClassifier_wrapper::* )( char const *,char const * ) const)(&CvNormalBayesClassifier_wrapper::default_save)
            , ( bp::arg("filename"), bp::arg("name")=bp::object() ) )    
        .def( bp::init< cv::Mat const &, cv::Mat const &, bp::optional< cv::Mat const &, cv::Mat const & > >(( bp::arg("_train_data"), bp::arg("_responses"), bp::arg("_var_idx")=cv::Mat(), bp::arg("_sample_idx")=cv::Mat() )) );

}
