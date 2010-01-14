// This file has been generated by Py++.

#include "boost/python.hpp"
#include "__ctypes_integration.pypp.hpp"
#include "opencv_headers.hpp"
#include "termcriteria.pypp.hpp"

namespace bp = boost::python;

void register_TermCriteria_class(){

    { //::cv::TermCriteria
        typedef bp::class_< cv::TermCriteria > TermCriteria_exposer_t;
        TermCriteria_exposer_t TermCriteria_exposer = TermCriteria_exposer_t( "TermCriteria", bp::init< >() );
        bp::scope TermCriteria_scope( TermCriteria_exposer );
        TermCriteria_exposer.add_property( "this", pyplus_conv::make_addressof_inst_getter< cv::TermCriteria >() );
        bp::scope().attr("COUNT") = (int)cv::TermCriteria::COUNT;
        bp::scope().attr("MAX_ITER") = (int)cv::TermCriteria::MAX_ITER;
        bp::scope().attr("EPS") = (int)cv::TermCriteria::EPS;
        TermCriteria_exposer.def( bp::init< int, int, double >(( bp::arg("_type"), bp::arg("_maxCount"), bp::arg("_epsilon") )) );
        TermCriteria_exposer.def( bp::init< CvTermCriteria const & >(( bp::arg("criteria") )) );
        bp::implicitly_convertible< CvTermCriteria const &, cv::TermCriteria >();
        TermCriteria_exposer.def( "as__scope_CvTermCriteria", &cv::TermCriteria::operator ::CvTermCriteria  );
        TermCriteria_exposer.def_readwrite( "epsilon", &cv::TermCriteria::epsilon );
        TermCriteria_exposer.def_readwrite( "maxCount", &cv::TermCriteria::maxCount );
        TermCriteria_exposer.def_readwrite( "type", &cv::TermCriteria::type );
    }

}