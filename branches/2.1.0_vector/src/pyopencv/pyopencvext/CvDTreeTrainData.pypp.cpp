// This file has been generated by Py++.

#include "boost/python.hpp"
#include "__call_policies.pypp.hpp"
#include "__convenience.pypp.hpp"
#include "opencv_converters.hpp"
#include "__ctypes_integration.pypp.hpp"
#include "opencv_headers.hpp"
#include "boost/python/object.hpp"
#include "CvDTreeTrainData.pypp.hpp"

namespace bp = boost::python;

struct CvDTreeTrainData_wrapper : CvDTreeTrainData, bp::wrapper< CvDTreeTrainData > {

    CvDTreeTrainData_wrapper(CvDTreeTrainData const & arg )
    : CvDTreeTrainData( arg )
      , bp::wrapper< CvDTreeTrainData >(){
        // copy constructor
        
    }

    CvDTreeTrainData_wrapper( )
    : CvDTreeTrainData( )
      , bp::wrapper< CvDTreeTrainData >(){
        // null constructor
    
    }

    CvDTreeTrainData_wrapper(::CvMat const * _train_data, int _tflag, ::CvMat const * _responses, ::CvMat const * _var_idx=0, ::CvMat const * _sample_idx=0, ::CvMat const * _var_type=0, ::CvMat const * _missing_mask=0, ::CvDTreeParams const & _params=::CvDTreeParams( ), bool _shared=false, bool _add_labels=false )
    : CvDTreeTrainData( boost::python::ptr(_train_data), _tflag, boost::python::ptr(_responses), boost::python::ptr(_var_idx), boost::python::ptr(_sample_idx), boost::python::ptr(_var_type), boost::python::ptr(_missing_mask), boost::ref(_params), _shared, _add_labels )
      , bp::wrapper< CvDTreeTrainData >(){
        // constructor
    
    }

    virtual void clear(  ) {
        if( bp::override func_clear = this->get_override( "clear" ) )
            func_clear(  );
        else{
            this->CvDTreeTrainData::clear(  );
        }
    }
    
    void default_clear(  ) {
        CvDTreeTrainData::clear( );
    }

    virtual void do_responses_copy(  ) {
        if( bp::override func_do_responses_copy = this->get_override( "do_responses_copy" ) )
            func_do_responses_copy(  );
        else{
            this->CvDTreeTrainData::do_responses_copy(  );
        }
    }
    
    void default_do_responses_copy(  ) {
        CvDTreeTrainData::do_responses_copy( );
    }

    virtual void free_node( ::CvDTreeNode * node ) {
        if( bp::override func_free_node = this->get_override( "free_node" ) )
            func_free_node( boost::python::ptr(node) );
        else{
            this->CvDTreeTrainData::free_node( boost::python::ptr(node) );
        }
    }
    
    void default_free_node( ::CvDTreeNode * node ) {
        CvDTreeTrainData::free_node( boost::python::ptr(node) );
    }

    virtual void free_node_data( ::CvDTreeNode * node ) {
        if( bp::override func_free_node_data = this->get_override( "free_node_data" ) )
            func_free_node_data( boost::python::ptr(node) );
        else{
            this->CvDTreeTrainData::free_node_data( boost::python::ptr(node) );
        }
    }
    
    void default_free_node_data( ::CvDTreeNode * node ) {
        CvDTreeTrainData::free_node_data( boost::python::ptr(node) );
    }

    virtual void free_train_data(  ) {
        if( bp::override func_free_train_data = this->get_override( "free_train_data" ) )
            func_free_train_data(  );
        else{
            this->CvDTreeTrainData::free_train_data(  );
        }
    }
    
    void default_free_train_data(  ) {
        CvDTreeTrainData::free_train_data( );
    }

    virtual int get_child_buf_idx( ::CvDTreeNode * n ) {
        if( bp::override func_get_child_buf_idx = this->get_override( "get_child_buf_idx" ) )
            return func_get_child_buf_idx( boost::python::ptr(n) );
        else{
            return this->CvDTreeTrainData::get_child_buf_idx( boost::python::ptr(n) );
        }
    }
    
    int default_get_child_buf_idx( ::CvDTreeNode * n ) {
        return CvDTreeTrainData::get_child_buf_idx( boost::python::ptr(n) );
    }

    virtual ::CvDTreeNode * new_node( ::CvDTreeNode * parent, int count, int storage_idx, int offset ) {
        if( bp::override func_new_node = this->get_override( "new_node" ) )
            return func_new_node( boost::python::ptr(parent), count, storage_idx, offset );
        else{
            return this->CvDTreeTrainData::new_node( boost::python::ptr(parent), count, storage_idx, offset );
        }
    }
    
    ::CvDTreeNode * default_new_node( ::CvDTreeNode * parent, int count, int storage_idx, int offset ) {
        return CvDTreeTrainData::new_node( boost::python::ptr(parent), count, storage_idx, offset );
    }

    virtual ::CvDTreeSplit * new_split_cat( int vi, float quality ) {
        if( bp::override func_new_split_cat = this->get_override( "new_split_cat" ) )
            return func_new_split_cat( vi, quality );
        else{
            return this->CvDTreeTrainData::new_split_cat( vi, quality );
        }
    }
    
    ::CvDTreeSplit * default_new_split_cat( int vi, float quality ) {
        return CvDTreeTrainData::new_split_cat( vi, quality );
    }

    virtual ::CvDTreeSplit * new_split_ord( int vi, float cmp_val, int split_point, int inversed, float quality ) {
        if( bp::override func_new_split_ord = this->get_override( "new_split_ord" ) )
            return func_new_split_ord( vi, cmp_val, split_point, inversed, quality );
        else{
            return this->CvDTreeTrainData::new_split_ord( vi, cmp_val, split_point, inversed, quality );
        }
    }
    
    ::CvDTreeSplit * default_new_split_ord( int vi, float cmp_val, int split_point, int inversed, float quality ) {
        return CvDTreeTrainData::new_split_ord( vi, cmp_val, split_point, inversed, quality );
    }

    virtual void read_params( ::CvFileStorage * fs, ::CvFileNode * node ) {
        namespace bpl = boost::python;
        if( bpl::override func_read_params = this->get_override( "read_params" ) ){
            bpl::object py_result = bpl::call<bpl::object>( func_read_params.ptr(), fs, node );
        }
        else{
            CvDTreeTrainData::read_params( boost::python::ptr(fs), boost::python::ptr(node) );
        }
    }
    
    static void default_read_params( ::CvDTreeTrainData & inst, ::cv::FileStorage & fs, ::cv::FileNode & node ){
        if( dynamic_cast< CvDTreeTrainData_wrapper * >( boost::addressof( inst ) ) ){
            inst.::CvDTreeTrainData::read_params(fs.fs, *(node));
        }
        else{
            inst.read_params(fs.fs, *(node));
        }
    }

    virtual void set_data( ::CvMat const * _train_data, int _tflag, ::CvMat const * _responses, ::CvMat const * _var_idx=0, ::CvMat const * _sample_idx=0, ::CvMat const * _var_type=0, ::CvMat const * _missing_mask=0, ::CvDTreeParams const & _params=::CvDTreeParams( ), bool _shared=false, bool _add_labels=false, bool _update_data=false ) {
        namespace bpl = boost::python;
        if( bpl::override func_set_data = this->get_override( "set_data" ) ){
            bpl::object py_result = bpl::call<bpl::object>( func_set_data.ptr(), _train_data, _tflag, _responses, _var_idx, _sample_idx, _var_type, _missing_mask, _params, _shared, _add_labels, _update_data );
        }
        else{
            CvDTreeTrainData::set_data( boost::python::ptr(_train_data), _tflag, boost::python::ptr(_responses), boost::python::ptr(_var_idx), boost::python::ptr(_sample_idx), boost::python::ptr(_var_type), boost::python::ptr(_missing_mask), boost::ref(_params), _shared, _add_labels, _update_data );
        }
    }
    
    static void default_set_data( ::CvDTreeTrainData & inst, ::cv::Mat & _train_data, int _tflag, ::cv::Mat & _responses, ::cv::Mat _var_idx=cv::Mat(), ::cv::Mat _sample_idx=cv::Mat(), ::cv::Mat _var_type=cv::Mat(), ::cv::Mat _missing_mask=cv::Mat(), ::CvDTreeParams const & _params=::CvDTreeParams( ), bool _shared=false, bool _add_labels=false, bool _update_data=false ){
        if( dynamic_cast< CvDTreeTrainData_wrapper * >( boost::addressof( inst ) ) ){
            inst.::CvDTreeTrainData::set_data(get_CvMat_ptr(_train_data), _tflag, get_CvMat_ptr(_responses), get_CvMat_ptr(_var_idx), get_CvMat_ptr(_sample_idx), get_CvMat_ptr(_var_type), get_CvMat_ptr(_missing_mask), _params, _shared, _add_labels, _update_data);
        }
        else{
            inst.set_data(get_CvMat_ptr(_train_data), _tflag, get_CvMat_ptr(_responses), get_CvMat_ptr(_var_idx), get_CvMat_ptr(_sample_idx), get_CvMat_ptr(_var_type), get_CvMat_ptr(_missing_mask), _params, _shared, _add_labels, _update_data);
        }
    }

    virtual bool set_params( ::CvDTreeParams const & params ) {
        if( bp::override func_set_params = this->get_override( "set_params" ) )
            return func_set_params( boost::ref(params) );
        else{
            return this->CvDTreeTrainData::set_params( boost::ref(params) );
        }
    }
    
    bool default_set_params( ::CvDTreeParams const & params ) {
        return CvDTreeTrainData::set_params( boost::ref(params) );
    }

    virtual CvDTreeNode * subsample_data( ::CvMat const * _subsample_idx ) {
        namespace bpl = boost::python;
        if( bpl::override func_subsample_data = this->get_override( "subsample_data" ) ){
            bpl::object py_result = bpl::call<bpl::object>( func_subsample_data.ptr(), _subsample_idx );
            return bpl::extract< CvDTreeNode * >( pyplus_conv::get_out_argument( py_result, 0 ) );
        }
        else{
            return CvDTreeTrainData::subsample_data( boost::python::ptr(_subsample_idx) );
        }
    }
    
    static boost::python::object default_subsample_data( ::CvDTreeTrainData & inst, ::cv::Mat & _subsample_idx ){
        CvDTreeNode * result;
        if( dynamic_cast< CvDTreeTrainData_wrapper * >( boost::addressof( inst ) ) ){
            result = inst.::CvDTreeTrainData::subsample_data(get_CvMat_ptr(_subsample_idx));
        }
        else{
            result = inst.subsample_data(get_CvMat_ptr(_subsample_idx));
        }
        typedef bp::return_internal_reference< > call_policies_t;
        return bp::object( pyplusplus::call_policies::make_object< call_policies_t, CvDTreeNode * >( result ) );
    }

    virtual void write_params( ::CvFileStorage * fs ) const  {
        namespace bpl = boost::python;
        if( bpl::override func_write_params = this->get_override( "write_params" ) ){
            bpl::object py_result = bpl::call<bpl::object>( func_write_params.ptr(), fs );
        }
        else{
            CvDTreeTrainData::write_params( boost::python::ptr(fs) );
        }
    }
    
    static void default_write_params( ::CvDTreeTrainData const & inst, ::cv::FileStorage & fs ){
        if( dynamic_cast< CvDTreeTrainData_wrapper const* >( boost::addressof( inst ) ) ){
            inst.::CvDTreeTrainData::write_params(fs.fs);
        }
        else{
            inst.write_params(fs.fs);
        }
    }

    static CvDTreeNode * get_data_root(CvDTreeTrainData const & inst ){
        return inst.data_root;
    }
    
    static void set_data_root( CvDTreeTrainData & inst, CvDTreeNode * new_value ){ 
        inst.data_root = new_value;
    }

    cv::Mat train_data_as_Mat;
    CvMat train_data_as_CvMat;
    void set_train_data(cv::Mat const &new_train_data)
    {
        train_data_as_Mat = new_train_data; // to keep a reference to train_data
        train_data_as_CvMat = train_data_as_Mat; // to ensure train_data points to a valid CvMat
        train_data = &train_data_as_CvMat;
    }
    cv::Mat & get_train_data()
    {
        if(train_data != &train_data_as_CvMat) set_train_data(cv::Mat(train_data));
        return train_data_as_Mat;
    }

    cv::Mat responses_as_Mat;
    CvMat responses_as_CvMat;
    void set_responses(cv::Mat const &new_responses)
    {
        responses_as_Mat = new_responses; // to keep a reference to responses
        responses_as_CvMat = responses_as_Mat; // to ensure responses points to a valid CvMat
        responses = &responses_as_CvMat;
    }
    cv::Mat & get_responses()
    {
        if(responses != &responses_as_CvMat) set_responses(cv::Mat(responses));
        return responses_as_Mat;
    }

    cv::Mat responses_copy_as_Mat;
    CvMat responses_copy_as_CvMat;
    void set_responses_copy(cv::Mat const &new_responses_copy)
    {
        responses_copy_as_Mat = new_responses_copy; // to keep a reference to responses_copy
        responses_copy_as_CvMat = responses_copy_as_Mat; // to ensure responses_copy points to a valid CvMat
        responses_copy = &responses_copy_as_CvMat;
    }
    cv::Mat & get_responses_copy()
    {
        if(responses_copy != &responses_copy_as_CvMat) set_responses_copy(cv::Mat(responses_copy));
        return responses_copy_as_Mat;
    }

    cv::Mat cat_count_as_Mat;
    CvMat cat_count_as_CvMat;
    void set_cat_count(cv::Mat const &new_cat_count)
    {
        cat_count_as_Mat = new_cat_count; // to keep a reference to cat_count
        cat_count_as_CvMat = cat_count_as_Mat; // to ensure cat_count points to a valid CvMat
        cat_count = &cat_count_as_CvMat;
    }
    cv::Mat & get_cat_count()
    {
        if(cat_count != &cat_count_as_CvMat) set_cat_count(cv::Mat(cat_count));
        return cat_count_as_Mat;
    }

    cv::Mat cat_ofs_as_Mat;
    CvMat cat_ofs_as_CvMat;
    void set_cat_ofs(cv::Mat const &new_cat_ofs)
    {
        cat_ofs_as_Mat = new_cat_ofs; // to keep a reference to cat_ofs
        cat_ofs_as_CvMat = cat_ofs_as_Mat; // to ensure cat_ofs points to a valid CvMat
        cat_ofs = &cat_ofs_as_CvMat;
    }
    cv::Mat & get_cat_ofs()
    {
        if(cat_ofs != &cat_ofs_as_CvMat) set_cat_ofs(cv::Mat(cat_ofs));
        return cat_ofs_as_Mat;
    }

    cv::Mat cat_map_as_Mat;
    CvMat cat_map_as_CvMat;
    void set_cat_map(cv::Mat const &new_cat_map)
    {
        cat_map_as_Mat = new_cat_map; // to keep a reference to cat_map
        cat_map_as_CvMat = cat_map_as_Mat; // to ensure cat_map points to a valid CvMat
        cat_map = &cat_map_as_CvMat;
    }
    cv::Mat & get_cat_map()
    {
        if(cat_map != &cat_map_as_CvMat) set_cat_map(cv::Mat(cat_map));
        return cat_map_as_Mat;
    }

    cv::Mat counts_as_Mat;
    CvMat counts_as_CvMat;
    void set_counts(cv::Mat const &new_counts)
    {
        counts_as_Mat = new_counts; // to keep a reference to counts
        counts_as_CvMat = counts_as_Mat; // to ensure counts points to a valid CvMat
        counts = &counts_as_CvMat;
    }
    cv::Mat & get_counts()
    {
        if(counts != &counts_as_CvMat) set_counts(cv::Mat(counts));
        return counts_as_Mat;
    }

    cv::Mat buf_as_Mat;
    CvMat buf_as_CvMat;
    void set_buf(cv::Mat const &new_buf)
    {
        buf_as_Mat = new_buf; // to keep a reference to buf
        buf_as_CvMat = buf_as_Mat; // to ensure buf points to a valid CvMat
        buf = &buf_as_CvMat;
    }
    cv::Mat & get_buf()
    {
        if(buf != &buf_as_CvMat) set_buf(cv::Mat(buf));
        return buf_as_Mat;
    }

    cv::Mat direction_as_Mat;
    CvMat direction_as_CvMat;
    void set_direction(cv::Mat const &new_direction)
    {
        direction_as_Mat = new_direction; // to keep a reference to direction
        direction_as_CvMat = direction_as_Mat; // to ensure direction points to a valid CvMat
        direction = &direction_as_CvMat;
    }
    cv::Mat & get_direction()
    {
        if(direction != &direction_as_CvMat) set_direction(cv::Mat(direction));
        return direction_as_Mat;
    }

    cv::Mat split_buf_as_Mat;
    CvMat split_buf_as_CvMat;
    void set_split_buf(cv::Mat const &new_split_buf)
    {
        split_buf_as_Mat = new_split_buf; // to keep a reference to split_buf
        split_buf_as_CvMat = split_buf_as_Mat; // to ensure split_buf points to a valid CvMat
        split_buf = &split_buf_as_CvMat;
    }
    cv::Mat & get_split_buf()
    {
        if(split_buf != &split_buf_as_CvMat) set_split_buf(cv::Mat(split_buf));
        return split_buf_as_Mat;
    }

    cv::Mat var_idx_as_Mat;
    CvMat var_idx_as_CvMat;
    void set_var_idx(cv::Mat const &new_var_idx)
    {
        var_idx_as_Mat = new_var_idx; // to keep a reference to var_idx
        var_idx_as_CvMat = var_idx_as_Mat; // to ensure var_idx points to a valid CvMat
        var_idx = &var_idx_as_CvMat;
    }
    cv::Mat & get_var_idx()
    {
        if(var_idx != &var_idx_as_CvMat) set_var_idx(cv::Mat(var_idx));
        return var_idx_as_Mat;
    }

    cv::Mat var_type_as_Mat;
    CvMat var_type_as_CvMat;
    void set_var_type(cv::Mat const &new_var_type)
    {
        var_type_as_Mat = new_var_type; // to keep a reference to var_type
        var_type_as_CvMat = var_type_as_Mat; // to ensure var_type points to a valid CvMat
        var_type = &var_type_as_CvMat;
    }
    cv::Mat & get_var_type()
    {
        if(var_type != &var_type_as_CvMat) set_var_type(cv::Mat(var_type));
        return var_type_as_Mat;
    }

    cv::Mat priors_as_Mat;
    CvMat priors_as_CvMat;
    void set_priors(cv::Mat const &new_priors)
    {
        priors_as_Mat = new_priors; // to keep a reference to priors
        priors_as_CvMat = priors_as_Mat; // to ensure priors points to a valid CvMat
        priors = &priors_as_CvMat;
    }
    cv::Mat & get_priors()
    {
        if(priors != &priors_as_CvMat) set_priors(cv::Mat(priors));
        return priors_as_Mat;
    }

    cv::Mat priors_mult_as_Mat;
    CvMat priors_mult_as_CvMat;
    void set_priors_mult(cv::Mat const &new_priors_mult)
    {
        priors_mult_as_Mat = new_priors_mult; // to keep a reference to priors_mult
        priors_mult_as_CvMat = priors_mult_as_Mat; // to ensure priors_mult points to a valid CvMat
        priors_mult = &priors_mult_as_CvMat;
    }
    cv::Mat & get_priors_mult()
    {
        if(priors_mult != &priors_mult_as_CvMat) set_priors_mult(cv::Mat(priors_mult));
        return priors_mult_as_Mat;
    }

};

static cv::MemStorage get_tree_storage(CvDTreeTrainData const &inst) { return cv::MemStorage(inst.tree_storage); }

static cv::MemStorage get_temp_storage(CvDTreeTrainData const &inst) { return cv::MemStorage(inst.temp_storage); }

static ::CvSet * get_node_heap( ::CvDTreeTrainData const & inst ) { return inst.node_heap; }

static ::CvSet * get_split_heap( ::CvDTreeTrainData const & inst ) { return inst.split_heap; }

static ::CvSet * get_cv_heap( ::CvDTreeTrainData const & inst ) { return inst.cv_heap; }

static ::CvSet * get_nv_heap( ::CvDTreeTrainData const & inst ) { return inst.nv_heap; }

static cv::RNG *get_rng(CvDTreeTrainData const &inst) { return (cv::RNG *)(&inst.rng); }

void register_CvDTreeTrainData_class(){

    bp::class_< CvDTreeTrainData_wrapper >( "CvDTreeTrainData", bp::init< >() )    
        .add_property( "this", pyplus_conv::make_addressof_inst_getter< CvDTreeTrainData >() )    
        .def( bp::init< CvMat const *, int, CvMat const *, bp::optional< CvMat const *, CvMat const *, CvMat const *, CvMat const *, CvDTreeParams const &, bool, bool > >(( bp::arg("_train_data"), bp::arg("_tflag"), bp::arg("_responses"), bp::arg("_var_idx")=bp::object(), bp::arg("_sample_idx")=bp::object(), bp::arg("_var_type")=bp::object(), bp::arg("_missing_mask")=bp::object(), bp::arg("_params")=::CvDTreeParams( ), bp::arg("_shared")=(bool)(false), bp::arg("_add_labels")=(bool)(false) ), "\nWrapped function:"
    "\n    CvDTreeTrainData"
    "\nArgument '_missing_mask':"\
    "\n    C/C++ type: ::CvMat const *."\
    "\n    Python type: Mat."\
    "\nArgument '_var_idx':"\
    "\n    C/C++ type: ::CvMat const *."\
    "\n    Python type: Mat."\
    "\nArgument '_var_type':"\
    "\n    C/C++ type: ::CvMat const *."\
    "\n    Python type: Mat."\
    "\nArgument '_sample_idx':"\
    "\n    C/C++ type: ::CvMat const *."\
    "\n    Python type: Mat."\
    "\nArgument '_responses':"\
    "\n    C/C++ type: ::CvMat const *."\
    "\n    Python type: Mat."\
    "\nArgument '_train_data':"\
    "\n    C/C++ type: ::CvMat const *."\
    "\n    Python type: Mat.") )    
        .def( 
            "clear"
            , (void ( CvDTreeTrainData::* )(  ) )(&::CvDTreeTrainData::clear)
            , (void ( CvDTreeTrainData_wrapper::* )(  ) )(&CvDTreeTrainData_wrapper::default_clear) )    
        .def( 
            "do_responses_copy"
            , (void ( CvDTreeTrainData::* )(  ) )(&::CvDTreeTrainData::do_responses_copy)
            , (void ( CvDTreeTrainData_wrapper::* )(  ) )(&CvDTreeTrainData_wrapper::default_do_responses_copy) )    
        .def( 
            "free_node"
            , (void ( CvDTreeTrainData::* )( ::CvDTreeNode * ) )(&::CvDTreeTrainData::free_node)
            , (void ( CvDTreeTrainData_wrapper::* )( ::CvDTreeNode * ) )(&CvDTreeTrainData_wrapper::default_free_node)
            , ( bp::arg("node") ) )    
        .def( 
            "free_node_data"
            , (void ( CvDTreeTrainData::* )( ::CvDTreeNode * ) )(&::CvDTreeTrainData::free_node_data)
            , (void ( CvDTreeTrainData_wrapper::* )( ::CvDTreeNode * ) )(&CvDTreeTrainData_wrapper::default_free_node_data)
            , ( bp::arg("node") ) )    
        .def( 
            "free_train_data"
            , (void ( CvDTreeTrainData::* )(  ) )(&::CvDTreeTrainData::free_train_data)
            , (void ( CvDTreeTrainData_wrapper::* )(  ) )(&CvDTreeTrainData_wrapper::default_free_train_data) )    
        .def( 
            "get_child_buf_idx"
            , (int ( CvDTreeTrainData::* )( ::CvDTreeNode * ) )(&::CvDTreeTrainData::get_child_buf_idx)
            , (int ( CvDTreeTrainData_wrapper::* )( ::CvDTreeNode * ) )(&CvDTreeTrainData_wrapper::default_get_child_buf_idx)
            , ( bp::arg("n") ) )    
        .def( 
            "get_num_classes"
            , (int ( CvDTreeTrainData::* )(  ) const)( &::CvDTreeTrainData::get_num_classes ) )    
        .def( 
            "get_var_type"
            , (int ( CvDTreeTrainData::* )( int ) const)( &::CvDTreeTrainData::get_var_type )
            , ( bp::arg("vi") ) )    
        .def( 
            "get_work_var_count"
            , (int ( CvDTreeTrainData::* )(  ) const)( &::CvDTreeTrainData::get_work_var_count ) )    
        .def( 
            "new_node"
            , (::CvDTreeNode * ( CvDTreeTrainData::* )( ::CvDTreeNode *,int,int,int ) )(&::CvDTreeTrainData::new_node)
            , (::CvDTreeNode * ( CvDTreeTrainData_wrapper::* )( ::CvDTreeNode *,int,int,int ) )(&CvDTreeTrainData_wrapper::default_new_node)
            , ( bp::arg("parent"), bp::arg("count"), bp::arg("storage_idx"), bp::arg("offset") )
            , bp::return_internal_reference< >() )    
        .def( 
            "new_split_cat"
            , (::CvDTreeSplit * ( CvDTreeTrainData::* )( int,float ) )(&::CvDTreeTrainData::new_split_cat)
            , (::CvDTreeSplit * ( CvDTreeTrainData_wrapper::* )( int,float ) )(&CvDTreeTrainData_wrapper::default_new_split_cat)
            , ( bp::arg("vi"), bp::arg("quality") )
            , bp::return_internal_reference< >() )    
        .def( 
            "new_split_ord"
            , (::CvDTreeSplit * ( CvDTreeTrainData::* )( int,float,int,int,float ) )(&::CvDTreeTrainData::new_split_ord)
            , (::CvDTreeSplit * ( CvDTreeTrainData_wrapper::* )( int,float,int,int,float ) )(&CvDTreeTrainData_wrapper::default_new_split_ord)
            , ( bp::arg("vi"), bp::arg("cmp_val"), bp::arg("split_point"), bp::arg("inversed"), bp::arg("quality") )
            , bp::return_internal_reference< >() )    
        .def( 
            "read_params"
            , (void (*)( CvDTreeTrainData &,::cv::FileStorage &,::cv::FileNode & ))( &CvDTreeTrainData_wrapper::default_read_params )
            , ( bp::arg("inst"), bp::arg("fs"), bp::arg("node") )
            , "\nArgument 'node':"\
    "\n    C/C++ type: ::CvFileNode *."\
    "\n    Python type: FileNode."\
    "\nArgument 'fs':"\
    "\n    C/C++ type: ::CvFileStorage *."\
    "\n    Python type: FileStorage." )    
        .def( 
            "set_data"
            , (void (*)( CvDTreeTrainData &,::cv::Mat &,int,::cv::Mat &,::cv::Mat,::cv::Mat,::cv::Mat,::cv::Mat,CvDTreeParams const &,bool,bool,bool ))( &CvDTreeTrainData_wrapper::default_set_data )
            , ( bp::arg("inst"), bp::arg("_train_data"), bp::arg("_tflag"), bp::arg("_responses"), bp::arg("_var_idx")=cv::Mat(), bp::arg("_sample_idx")=cv::Mat(), bp::arg("_var_type")=cv::Mat(), bp::arg("_missing_mask")=cv::Mat(), bp::arg("_params")=::CvDTreeParams( ), bp::arg("_shared")=(bool)(false), bp::arg("_add_labels")=(bool)(false), bp::arg("_update_data")=(bool)(false) )
            , "\nArgument '_missing_mask':"\
    "\n    C/C++ type: ::CvMat const *."\
    "\n    Python type: Mat."\
    "\nArgument '_var_idx':"\
    "\n    C/C++ type: ::CvMat const *."\
    "\n    Python type: Mat."\
    "\nArgument '_var_type':"\
    "\n    C/C++ type: ::CvMat const *."\
    "\n    Python type: Mat."\
    "\nArgument '_sample_idx':"\
    "\n    C/C++ type: ::CvMat const *."\
    "\n    Python type: Mat."\
    "\nArgument '_responses':"\
    "\n    C/C++ type: ::CvMat const *."\
    "\n    Python type: Mat."\
    "\nArgument '_train_data':"\
    "\n    C/C++ type: ::CvMat const *."\
    "\n    Python type: Mat." )    
        .def( 
            "set_params"
            , (bool ( CvDTreeTrainData::* )( ::CvDTreeParams const & ) )(&::CvDTreeTrainData::set_params)
            , (bool ( CvDTreeTrainData_wrapper::* )( ::CvDTreeParams const & ) )(&CvDTreeTrainData_wrapper::default_set_params)
            , ( bp::arg("params") ) )    
        .def( 
            "subsample_data"
            , (boost::python::object (*)( CvDTreeTrainData &,::cv::Mat & ))( &CvDTreeTrainData_wrapper::default_subsample_data )
            , ( bp::arg("inst"), bp::arg("_subsample_idx") )
            , "\nArgument '_subsample_idx':"\
    "\n    C/C++ type: ::CvMat const *."\
    "\n    Python type: Mat." )    
        .def( 
            "write_params"
            , (void (*)( CvDTreeTrainData const &,::cv::FileStorage & ))( &CvDTreeTrainData_wrapper::default_write_params )
            , ( bp::arg("inst"), bp::arg("fs") )
            , "\nArgument 'fs':"\
    "\n    C/C++ type: ::CvFileStorage *."\
    "\n    Python type: FileStorage." )    
        .def_readwrite( "buf_count", &CvDTreeTrainData::buf_count )    
        .def_readwrite( "buf_size", &CvDTreeTrainData::buf_size )    
        .def_readwrite( "cat_var_count", &CvDTreeTrainData::cat_var_count )    
        .add_property( "data_root"
                    , bp::make_function( (::CvDTreeNode * (*)( ::CvDTreeTrainData const & ))(&CvDTreeTrainData_wrapper::get_data_root), bp::return_internal_reference< >() )
                    , bp::make_function( (void (*)( ::CvDTreeTrainData &,::CvDTreeNode * ))(&CvDTreeTrainData_wrapper::set_data_root), bp::with_custodian_and_ward_postcall< 1, 2 >() ) )    
        .def_readwrite( "have_labels", &CvDTreeTrainData::have_labels )    
        .def_readwrite( "have_priors", &CvDTreeTrainData::have_priors )    
        .def_readwrite( "is_buf_16u", &CvDTreeTrainData::is_buf_16u )    
        .def_readwrite( "is_classifier", &CvDTreeTrainData::is_classifier )    
        .def_readwrite( "max_c_count", &CvDTreeTrainData::max_c_count )    
        .def_readwrite( "ord_var_count", &CvDTreeTrainData::ord_var_count )    
        .def_readwrite( "params", &CvDTreeTrainData::params )    
        .def_readwrite( "sample_count", &CvDTreeTrainData::sample_count )    
        .def_readwrite( "shared", &CvDTreeTrainData::shared )    
        .def_readwrite( "tflag", &CvDTreeTrainData::tflag )    
        .def_readwrite( "var_all", &CvDTreeTrainData::var_all )    
        .def_readwrite( "var_count", &CvDTreeTrainData::var_count )    
        .def_readwrite( "work_var_count", &CvDTreeTrainData::work_var_count )    
        .add_property( "train_data", bp::make_function(&::CvDTreeTrainData_wrapper::get_train_data, bp::return_internal_reference<>()),
        &::CvDTreeTrainData_wrapper::set_train_data)    
        .add_property( "responses", bp::make_function(&::CvDTreeTrainData_wrapper::get_responses, bp::return_internal_reference<>()),
        &::CvDTreeTrainData_wrapper::set_responses)    
        .add_property( "responses_copy", bp::make_function(&::CvDTreeTrainData_wrapper::get_responses_copy, bp::return_internal_reference<>()),
        &::CvDTreeTrainData_wrapper::set_responses_copy)    
        .add_property( "cat_count", bp::make_function(&::CvDTreeTrainData_wrapper::get_cat_count, bp::return_internal_reference<>()),
        &::CvDTreeTrainData_wrapper::set_cat_count)    
        .add_property( "cat_ofs", bp::make_function(&::CvDTreeTrainData_wrapper::get_cat_ofs, bp::return_internal_reference<>()),
        &::CvDTreeTrainData_wrapper::set_cat_ofs)    
        .add_property( "cat_map", bp::make_function(&::CvDTreeTrainData_wrapper::get_cat_map, bp::return_internal_reference<>()),
        &::CvDTreeTrainData_wrapper::set_cat_map)    
        .add_property( "counts", bp::make_function(&::CvDTreeTrainData_wrapper::get_counts, bp::return_internal_reference<>()),
        &::CvDTreeTrainData_wrapper::set_counts)    
        .add_property( "buf", bp::make_function(&::CvDTreeTrainData_wrapper::get_buf, bp::return_internal_reference<>()),
        &::CvDTreeTrainData_wrapper::set_buf)    
        .add_property( "direction", bp::make_function(&::CvDTreeTrainData_wrapper::get_direction, bp::return_internal_reference<>()),
        &::CvDTreeTrainData_wrapper::set_direction)    
        .add_property( "split_buf", bp::make_function(&::CvDTreeTrainData_wrapper::get_split_buf, bp::return_internal_reference<>()),
        &::CvDTreeTrainData_wrapper::set_split_buf)    
        .add_property( "var_idx", bp::make_function(&::CvDTreeTrainData_wrapper::get_var_idx, bp::return_internal_reference<>()),
        &::CvDTreeTrainData_wrapper::set_var_idx)    
        .add_property( "var_type", bp::make_function(&::CvDTreeTrainData_wrapper::get_var_type, bp::return_internal_reference<>()),
        &::CvDTreeTrainData_wrapper::set_var_type)    
        .add_property( "priors", bp::make_function(&::CvDTreeTrainData_wrapper::get_priors, bp::return_internal_reference<>()),
        &::CvDTreeTrainData_wrapper::set_priors)    
        .add_property( "priors_mult", bp::make_function(&::CvDTreeTrainData_wrapper::get_priors_mult, bp::return_internal_reference<>()),
        &::CvDTreeTrainData_wrapper::set_priors_mult)    
        .add_property( "tree_storage", bp::make_function(&::get_tree_storage, bp::with_custodian_and_ward_postcall<0, 1>()) )    
        .add_property( "temp_storage", bp::make_function(&::get_temp_storage, bp::with_custodian_and_ward_postcall<0, 1>()) )    
        .add_property( "node_heap", bp::make_function(&::get_node_heap, bp::return_internal_reference<>()) )    
        .add_property( "split_heap", bp::make_function(&::get_split_heap, bp::return_internal_reference<>()) )    
        .add_property( "cv_heap", bp::make_function(&::get_cv_heap, bp::return_internal_reference<>()) )    
        .add_property( "nv_heap", bp::make_function(&::get_nv_heap, bp::return_internal_reference<>()) )    
        .add_property( "rng", bp::make_function(&::get_rng, bp::return_internal_reference<>()) );

}
