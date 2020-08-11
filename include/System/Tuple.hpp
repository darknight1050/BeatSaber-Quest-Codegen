// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Object
#include "System/Object.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Tuple`2<T1, T2>
  template<typename T1, typename T2>
  class Tuple_2;
  // Forward declaring type: Tuple`3<T1, T2, T3>
  template<typename T1, typename T2, typename T3>
  class Tuple_3;
  // Forward declaring type: Tuple`4<T1, T2, T3, T4>
  template<typename T1, typename T2, typename T3, typename T4>
  class Tuple_4;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct CsObject;
// Completed il2cpp-utils forward declares
// Type namespace: System
namespace System {
  // Autogenerated type: System.Tuple
  class Tuple : public ::CsObject {
    public:
    // static public System.Tuple`2<T1,T2> Create(T1 item1, T2 item2)
    // Offset: 0xFFFFFFFF
    template<class T1, class T2>
    static System::Tuple_2<T1, T2>* Create(T1 item1, T2 item2) {
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<System::Tuple_2<T1, T2>*>("System", "Tuple", "Create", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T1>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T2>::get()}, item1, item2)));
    }
    // static public System.Tuple`3<T1,T2,T3> Create(T1 item1, T2 item2, T3 item3)
    // Offset: 0xFFFFFFFF
    template<class T1, class T2, class T3>
    static System::Tuple_3<T1, T2, T3>* Create(T1 item1, T2 item2, T3 item3) {
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<System::Tuple_3<T1, T2, T3>*>("System", "Tuple", "Create", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T1>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T2>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T3>::get()}, item1, item2, item3)));
    }
    // static public System.Tuple`4<T1,T2,T3,T4> Create(T1 item1, T2 item2, T3 item3, T4 item4)
    // Offset: 0xFFFFFFFF
    template<class T1, class T2, class T3, class T4>
    static System::Tuple_4<T1, T2, T3, T4>* Create(T1 item1, T2 item2, T3 item3, T4 item4) {
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<System::Tuple_4<T1, T2, T3, T4>*>("System", "Tuple", "Create", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T1>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T2>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T3>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T4>::get()}, item1, item2, item3, item4)));
    }
    // static System.Int32 CombineHashCodes(System.Int32 h1, System.Int32 h2)
    // Offset: 0x177C0D0
    static int CombineHashCodes(int h1, int h2);
    // static System.Int32 CombineHashCodes(System.Int32 h1, System.Int32 h2, System.Int32 h3)
    // Offset: 0x177C0DC
    static int CombineHashCodes(int h1, int h2, int h3);
    // static System.Int32 CombineHashCodes(System.Int32 h1, System.Int32 h2, System.Int32 h3, System.Int32 h4)
    // Offset: 0x177C0F0
    static int CombineHashCodes(int h1, int h2, int h3, int h4);
  }; // System.Tuple
}
DEFINE_IL2CPP_ARG_TYPE(System::Tuple*, "System", "Tuple");
#pragma pack(pop)
