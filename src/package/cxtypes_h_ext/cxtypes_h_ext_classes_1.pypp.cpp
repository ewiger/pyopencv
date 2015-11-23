// This file has been generated by Py++.

#include "boost/python.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "cxtypes_h_wrapper.hpp"
#include "opencv_headers.hpp"
#include "cxtypes_h_ext_classes_1.pypp.hpp"

namespace bp = boost::python;

static inline void vector_uint16_resize(::std::vector< unsigned short > &inst, size_t num) { inst.resize(num); }

static inline void vector_ulong_resize(::std::vector< unsigned long > &inst, size_t num) { inst.resize(num); }

static inline void vector_uint64_resize(::std::vector< unsigned long long > &inst, size_t num) { inst.resize(num); }

static inline void vector_uint_resize(::std::vector< unsigned int > &inst, size_t num) { inst.resize(num); }

static inline void vector_uint8_resize(::std::vector< unsigned char > &inst, size_t num) { inst.resize(num); }

static inline void vector_vector_int_resize(::std::vector< std::vector< int > > &inst, size_t num) { inst.resize(num); }

static inline void vector_vector_float32_resize(::std::vector< std::vector< float > > &inst, size_t num) { inst.resize(num); }

static inline void vector_int16_resize(::std::vector< short > &inst, size_t num) { inst.resize(num); }

static inline void vector_long_resize(::std::vector< long > &inst, size_t num) { inst.resize(num); }

static inline void vector_int64_resize(::std::vector< long long > &inst, size_t num) { inst.resize(num); }

static inline void vector_int_resize(::std::vector< int > &inst, size_t num) { inst.resize(num); }

static inline void vector_float32_resize(::std::vector< float > &inst, size_t num) { inst.resize(num); }

static inline void vector_float64_resize(::std::vector< double > &inst, size_t num) { inst.resize(num); }

static inline void vector_int8_resize(::std::vector< char > &inst, size_t num) { inst.resize(num); }

void register_classes_1(){

    { //::std::vector< unsigned short >
        typedef bp::class_< std::vector< unsigned short > > vector_uint16_exposer_t;
        vector_uint16_exposer_t vector_uint16_exposer = vector_uint16_exposer_t( "vector_uint16" );
        bp::scope vector_uint16_scope( vector_uint16_exposer );
        vector_uint16_exposer.def( bp::vector_indexing_suite< ::std::vector< unsigned short >, true >() );
        vector_uint16_exposer.def("resize", &::vector_uint16_resize, ( bp::arg("num") ));
    }

    { //::std::vector< unsigned long >
        typedef bp::class_< std::vector< unsigned long > > vector_ulong_exposer_t;
        vector_ulong_exposer_t vector_ulong_exposer = vector_ulong_exposer_t( "vector_ulong" );
        bp::scope vector_ulong_scope( vector_ulong_exposer );
        vector_ulong_exposer.def( bp::vector_indexing_suite< ::std::vector< unsigned long >, true >() );
        vector_ulong_exposer.def("resize", &::vector_ulong_resize, ( bp::arg("num") ));
    }

    { //::std::vector< unsigned long long >
        typedef bp::class_< std::vector< unsigned long long > > vector_uint64_exposer_t;
        vector_uint64_exposer_t vector_uint64_exposer = vector_uint64_exposer_t( "vector_uint64" );
        bp::scope vector_uint64_scope( vector_uint64_exposer );
        vector_uint64_exposer.def( bp::vector_indexing_suite< ::std::vector< unsigned long long >, true >() );
        vector_uint64_exposer.def("resize", &::vector_uint64_resize, ( bp::arg("num") ));
    }

    { //::std::vector< unsigned int >
        typedef bp::class_< std::vector< unsigned int > > vector_uint_exposer_t;
        vector_uint_exposer_t vector_uint_exposer = vector_uint_exposer_t( "vector_uint" );
        bp::scope vector_uint_scope( vector_uint_exposer );
        vector_uint_exposer.def( bp::vector_indexing_suite< ::std::vector< unsigned int >, true >() );
        vector_uint_exposer.def("resize", &::vector_uint_resize, ( bp::arg("num") ));
    }

    { //::std::vector< unsigned char >
        typedef bp::class_< std::vector< unsigned char > > vector_uint8_exposer_t;
        vector_uint8_exposer_t vector_uint8_exposer = vector_uint8_exposer_t( "vector_uint8" );
        bp::scope vector_uint8_scope( vector_uint8_exposer );
        vector_uint8_exposer.def( bp::vector_indexing_suite< ::std::vector< unsigned char >, true >() );
        vector_uint8_exposer.def("resize", &::vector_uint8_resize, ( bp::arg("num") ));
    }

    { //::std::vector< std::vector< int > >
        typedef bp::class_< std::vector< std::vector< int > > > vector_vector_int_exposer_t;
        vector_vector_int_exposer_t vector_vector_int_exposer = vector_vector_int_exposer_t( "vector_vector_int" );
        bp::scope vector_vector_int_scope( vector_vector_int_exposer );
        //WARNING: the next line of code will not compile, because "std::vector<int>" does not have operator== !
        vector_vector_int_exposer.def( bp::vector_indexing_suite< ::std::vector< std::vector< int > > >() );
        vector_vector_int_exposer.def("resize", &::vector_vector_int_resize, ( bp::arg("num") ));
    }

    { //::std::vector< std::vector< float > >
        typedef bp::class_< std::vector< std::vector< float > > > vector_vector_float32_exposer_t;
        vector_vector_float32_exposer_t vector_vector_float32_exposer = vector_vector_float32_exposer_t( "vector_vector_float32" );
        bp::scope vector_vector_float32_scope( vector_vector_float32_exposer );
        //WARNING: the next line of code will not compile, because "std::vector<float>" does not have operator== !
        vector_vector_float32_exposer.def( bp::vector_indexing_suite< ::std::vector< std::vector< float > > >() );
        vector_vector_float32_exposer.def("resize", &::vector_vector_float32_resize, ( bp::arg("num") ));
    }

    { //::std::vector< short >
        typedef bp::class_< std::vector< short > > vector_int16_exposer_t;
        vector_int16_exposer_t vector_int16_exposer = vector_int16_exposer_t( "vector_int16" );
        bp::scope vector_int16_scope( vector_int16_exposer );
        vector_int16_exposer.def( bp::vector_indexing_suite< ::std::vector< short >, true >() );
        vector_int16_exposer.def("resize", &::vector_int16_resize, ( bp::arg("num") ));
    }

    { //::std::vector< long >
        typedef bp::class_< std::vector< long > > vector_long_exposer_t;
        vector_long_exposer_t vector_long_exposer = vector_long_exposer_t( "vector_long" );
        bp::scope vector_long_scope( vector_long_exposer );
        vector_long_exposer.def( bp::vector_indexing_suite< ::std::vector< long >, true >() );
        vector_long_exposer.def("resize", &::vector_long_resize, ( bp::arg("num") ));
    }

    { //::std::vector< long long >
        typedef bp::class_< std::vector< long long > > vector_int64_exposer_t;
        vector_int64_exposer_t vector_int64_exposer = vector_int64_exposer_t( "vector_int64" );
        bp::scope vector_int64_scope( vector_int64_exposer );
        vector_int64_exposer.def( bp::vector_indexing_suite< ::std::vector< long long >, true >() );
        vector_int64_exposer.def("resize", &::vector_int64_resize, ( bp::arg("num") ));
    }

    { //::std::vector< int >
        typedef bp::class_< std::vector< int > > vector_int_exposer_t;
        vector_int_exposer_t vector_int_exposer = vector_int_exposer_t( "vector_int" );
        bp::scope vector_int_scope( vector_int_exposer );
        vector_int_exposer.def( bp::vector_indexing_suite< ::std::vector< int >, true >() );
        vector_int_exposer.def("resize", &::vector_int_resize, ( bp::arg("num") ));
    }

    { //::std::vector< float >
        typedef bp::class_< std::vector< float > > vector_float32_exposer_t;
        vector_float32_exposer_t vector_float32_exposer = vector_float32_exposer_t( "vector_float32" );
        bp::scope vector_float32_scope( vector_float32_exposer );
        vector_float32_exposer.def( bp::vector_indexing_suite< ::std::vector< float >, true >() );
        vector_float32_exposer.def("resize", &::vector_float32_resize, ( bp::arg("num") ));
    }

    { //::std::vector< double >
        typedef bp::class_< std::vector< double > > vector_float64_exposer_t;
        vector_float64_exposer_t vector_float64_exposer = vector_float64_exposer_t( "vector_float64" );
        bp::scope vector_float64_scope( vector_float64_exposer );
        vector_float64_exposer.def( bp::vector_indexing_suite< ::std::vector< double >, true >() );
        vector_float64_exposer.def("resize", &::vector_float64_resize, ( bp::arg("num") ));
    }

    { //::std::vector< char >
        typedef bp::class_< std::vector< char > > vector_int8_exposer_t;
        vector_int8_exposer_t vector_int8_exposer = vector_int8_exposer_t( "vector_int8" );
        bp::scope vector_int8_scope( vector_int8_exposer );
        vector_int8_exposer.def( bp::vector_indexing_suite< ::std::vector< char >, true >() );
        vector_int8_exposer.def("resize", &::vector_int8_resize, ( bp::arg("num") ));
    }

}