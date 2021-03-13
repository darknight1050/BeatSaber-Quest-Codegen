// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
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
// Type namespace: System
namespace System {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Tuple
  // [] Offset: FFFFFFFF
  class Tuple : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: Tuple
    Tuple() noexcept {}
    // static public System.Tuple`2<T1,T2> Create(T1 item1, T2 item2)
    // Offset: 0xFFFFFFFF
    template<class T1, class T2>
    static System::Tuple_2<T1, T2>* Create(T1 item1, T2 item2) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Tuple::Create");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("System", "Tuple", "Create", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T1>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T2>::get()}, ::il2cpp_utils::ExtractTypes(item1, item2))));
      static auto* ___generic__method = THROW_UNLESS((::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T1>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T2>::get()})));
      return ::il2cpp_utils::RunMethodThrow<System::Tuple_2<T1, T2>*, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, item1, item2);
    }
    // static public System.Tuple`3<T1,T2,T3> Create(T1 item1, T2 item2, T3 item3)
    // Offset: 0xFFFFFFFF
    template<class T1, class T2, class T3>
    static System::Tuple_3<T1, T2, T3>* Create(T1 item1, T2 item2, T3 item3) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Tuple::Create");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("System", "Tuple", "Create", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T1>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T2>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T3>::get()}, ::il2cpp_utils::ExtractTypes(item1, item2, item3))));
      static auto* ___generic__method = THROW_UNLESS((::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T1>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T2>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T3>::get()})));
      return ::il2cpp_utils::RunMethodThrow<System::Tuple_3<T1, T2, T3>*, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, item1, item2, item3);
    }
    // static public System.Tuple`4<T1,T2,T3,T4> Create(T1 item1, T2 item2, T3 item3, T4 item4)
    // Offset: 0xFFFFFFFF
    template<class T1, class T2, class T3, class T4>
    static System::Tuple_4<T1, T2, T3, T4>* Create(T1 item1, T2 item2, T3 item3, T4 item4) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Tuple::Create");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("System", "Tuple", "Create", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T1>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T2>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T3>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T4>::get()}, ::il2cpp_utils::ExtractTypes(item1, item2, item3, item4))));
      static auto* ___generic__method = THROW_UNLESS((::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T1>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T2>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T3>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T4>::get()})));
      return ::il2cpp_utils::RunMethodThrow<System::Tuple_4<T1, T2, T3, T4>*, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, item1, item2, item3, item4);
    }
    // static System.Int32 CombineHashCodes(System.Int32 h1, System.Int32 h2)
    // Offset: 0x20D0B60
    static int CombineHashCodes(int h1, int h2);
    // static System.Int32 CombineHashCodes(System.Int32 h1, System.Int32 h2, System.Int32 h3)
    // Offset: 0x20D0B6C
    static int CombineHashCodes(int h1, int h2, int h3);
    // static System.Int32 CombineHashCodes(System.Int32 h1, System.Int32 h2, System.Int32 h3, System.Int32 h4)
    // Offset: 0x20D0B80
    static int CombineHashCodes(int h1, int h2, int h3, int h4);
  }; // System.Tuple
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::Tuple*, "System", "Tuple");
