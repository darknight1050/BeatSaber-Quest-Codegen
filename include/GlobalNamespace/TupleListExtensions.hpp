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
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
}
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
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: TupleListExtensions
  // [] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  class TupleListExtensions : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: TupleListExtensions
    TupleListExtensions() noexcept {}
    // static public System.Void Add(System.Collections.Generic.IList`1<System.Tuple`2<T1,T2>> list, T1 item1, T2 item2)
    // Offset: 0xFFFFFFFF
    template<class T1, class T2>
    static void Add(System::Collections::Generic::IList_1<System::Tuple_2<T1, T2>*>* list, T1 item1, T2 item2) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::TupleListExtensions::Add");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("", "TupleListExtensions", "Add", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T1>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T2>::get()}, ::il2cpp_utils::ExtractTypes(list, item1, item2))));
      static auto* ___generic__method = THROW_UNLESS((::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T1>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T2>::get()})));
      ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, list, item1, item2);
    }
    // static public System.Void Add(System.Collections.Generic.IList`1<System.Tuple`3<T1,T2,T3>> list, T1 item1, T2 item2, T3 item3)
    // Offset: 0xFFFFFFFF
    template<class T1, class T2, class T3>
    static void Add(System::Collections::Generic::IList_1<System::Tuple_3<T1, T2, T3>*>* list, T1 item1, T2 item2, T3 item3) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::TupleListExtensions::Add");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("", "TupleListExtensions", "Add", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T1>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T2>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T3>::get()}, ::il2cpp_utils::ExtractTypes(list, item1, item2, item3))));
      static auto* ___generic__method = THROW_UNLESS((::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T1>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T2>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T3>::get()})));
      ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, list, item1, item2, item3);
    }
    // static public System.Void Add(System.Collections.Generic.IList`1<System.Tuple`4<T1,T2,T3,T4>> list, T1 item1, T2 item2, T3 item3, T4 item4)
    // Offset: 0xFFFFFFFF
    template<class T1, class T2, class T3, class T4>
    static void Add(System::Collections::Generic::IList_1<System::Tuple_4<T1, T2, T3, T4>*>* list, T1 item1, T2 item2, T3 item3, T4 item4) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::TupleListExtensions::Add");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("", "TupleListExtensions", "Add", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T1>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T2>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T3>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T4>::get()}, ::il2cpp_utils::ExtractTypes(list, item1, item2, item3, item4))));
      static auto* ___generic__method = THROW_UNLESS((::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T1>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T2>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T3>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T4>::get()})));
      ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, list, item1, item2, item3, item4);
    }
  }; // TupleListExtensions
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::TupleListExtensions*, "", "TupleListExtensions");
