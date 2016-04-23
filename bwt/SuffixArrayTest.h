#ifndef __BWT_SUFFIXARRAYTEST_H
#define __BWT_SUFFIXARRAYTEST_H

#include <x10rt.h>


namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace x10 { namespace lang { 
class String;
} } 
namespace bwt { 
class SuffixArray;
} 
namespace x10 { namespace lang { 
class Unsafe;
} } 
namespace x10 { namespace io { 
class Printer;
} } 
namespace x10 { namespace io { 
class Console;
} } 
namespace x10 { namespace lang { 
class Any;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace bwt { 

class SuffixArrayTest : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    static void main(::x10::lang::Rail< ::x10::lang::String* >* args);
    virtual ::bwt::SuffixArrayTest* bwt__SuffixArrayTest____this__bwt__SuffixArrayTest(
      );
    void _constructor();
    
    static ::bwt::SuffixArrayTest* _make();
    
    virtual void __fieldInitializers_bwt_SuffixArrayTest();
    
    // Serialization
    public: static const ::x10aux::serialization_id_t _serialization_id;
    
    public: virtual ::x10aux::serialization_id_t _get_serialization_id() {
         return _serialization_id;
    }
    
    public: virtual void _serialize_body(::x10aux::serialization_buffer& buf);
    
    public: static ::x10::lang::Reference* _deserializer(::x10aux::deserialization_buffer& buf);
    
    public: void _deserialize_body(::x10aux::deserialization_buffer& buf);
    
};


} 
#endif // BWT_SUFFIXARRAYTEST_H

namespace bwt { 
class SuffixArrayTest;
} 

#ifndef BWT_SUFFIXARRAYTEST_H_NODEPS
#define BWT_SUFFIXARRAYTEST_H_NODEPS
#ifndef BWT_SUFFIXARRAYTEST_H_GENERICS
#define BWT_SUFFIXARRAYTEST_H_GENERICS
#endif // BWT_SUFFIXARRAYTEST_H_GENERICS
#endif // __BWT_SUFFIXARRAYTEST_H_NODEPS
