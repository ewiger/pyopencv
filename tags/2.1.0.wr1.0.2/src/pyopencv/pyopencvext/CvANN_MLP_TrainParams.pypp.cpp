// This file has been generated by Py++.

#include "boost/python.hpp"
#include "__ctypes_integration.pypp.hpp"
#include "opencv_headers.hpp"
#include "CvANN_MLP_TrainParams.pypp.hpp"

namespace bp = boost::python;

static cv::TermCriteria *get_term_crit(CvANN_MLP_TrainParams const &inst) { return (cv::TermCriteria *)(&inst.term_crit); }

void register_CvANN_MLP_TrainParams_class(){

    { //::CvANN_MLP_TrainParams
        typedef bp::class_< CvANN_MLP_TrainParams > CvANN_MLP_TrainParams_exposer_t;
        CvANN_MLP_TrainParams_exposer_t CvANN_MLP_TrainParams_exposer = CvANN_MLP_TrainParams_exposer_t( "CvANN_MLP_TrainParams", bp::init< >() );
        bp::scope CvANN_MLP_TrainParams_scope( CvANN_MLP_TrainParams_exposer );
        CvANN_MLP_TrainParams_exposer.add_property( "this", pyplus_conv::make_addressof_inst_getter< CvANN_MLP_TrainParams >() );
        bp::scope().attr("BACKPROP") = (int)CvANN_MLP_TrainParams::BACKPROP;
        bp::scope().attr("RPROP") = (int)CvANN_MLP_TrainParams::RPROP;
        CvANN_MLP_TrainParams_exposer.def( bp::init< CvTermCriteria, int, double, bp::optional< double > >(( bp::arg("term_crit"), bp::arg("train_method"), bp::arg("param1"), bp::arg("param2")=0 ), "\nWrapped function:"
    "\n    CvANN_MLP_TrainParams"
    "\nArgument 'term_crit':"\
    "\n    C/C++ type: ::CvTermCriteria."\
    "\n    Python type: TermCriteria.") );
        CvANN_MLP_TrainParams_exposer.def_readwrite( "bp_dw_scale", &CvANN_MLP_TrainParams::bp_dw_scale );
        CvANN_MLP_TrainParams_exposer.def_readwrite( "bp_moment_scale", &CvANN_MLP_TrainParams::bp_moment_scale );
        CvANN_MLP_TrainParams_exposer.def_readwrite( "rp_dw0", &CvANN_MLP_TrainParams::rp_dw0 );
        CvANN_MLP_TrainParams_exposer.def_readwrite( "rp_dw_max", &CvANN_MLP_TrainParams::rp_dw_max );
        CvANN_MLP_TrainParams_exposer.def_readwrite( "rp_dw_min", &CvANN_MLP_TrainParams::rp_dw_min );
        CvANN_MLP_TrainParams_exposer.def_readwrite( "rp_dw_minus", &CvANN_MLP_TrainParams::rp_dw_minus );
        CvANN_MLP_TrainParams_exposer.def_readwrite( "rp_dw_plus", &CvANN_MLP_TrainParams::rp_dw_plus );
        CvANN_MLP_TrainParams_exposer.def_readwrite( "train_method", &CvANN_MLP_TrainParams::train_method );
        CvANN_MLP_TrainParams_exposer.add_property( "term_crit", bp::make_function(&::get_term_crit, bp::return_internal_reference<>()) );
    }

}
