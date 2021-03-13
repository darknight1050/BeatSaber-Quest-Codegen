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
// Forward declaring namespace: ModestTree::Util
namespace ModestTree::Util {
  // Forward declaring type: ValuePair`2<T1, T2>
  template<typename T1, typename T2>
  class ValuePair_2;
  // Forward declaring type: ValuePair`3<T1, T2, T3>
  template<typename T1, typename T2, typename T3>
  class ValuePair_3;
  // Forward declaring type: ValuePair`4<T1, T2, T3, T4>
  template<typename T1, typename T2, typename T3, typename T4>
  class ValuePair_4;
}
// Completed forward declares
// Type namespace: ModestTree.Util
namespace ModestTree::Util {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: ModestTree.Util.ValuePair
  // [] Offset: FFFFFFFF
  class ValuePair : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: ValuePair
    ValuePair() noexcept {}
    // static public ModestTree.Util.ValuePair`2<T1,T2> New(T1 first, T2 second)
    // Offset: 0xFFFFFFFF
    template<class T1, class T2>
    static ModestTree::Util::ValuePair_2<T1, T2>* New(T1 first, T2 second) {
      static auto ___internal__logger = ::Logger::get().WithContext("ModestTree::Util::ValuePair::New");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("ModestTree.Util", "ValuePair", "New", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T1>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T2>::get()}, ::il2cpp_utils::ExtractTypes(first, second))));
      static auto* ___generic__method = THROW_UNLESS((::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T1>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T2>::get()})));
      return ::il2cpp_utils::RunMethodThrow<ModestTree::Util::ValuePair_2<T1, T2>*, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, first, second);
    }
    // static public ModestTree.Util.ValuePair`3<T1,T2,T3> New(T1 first, T2 second, T3 third)
    // Offset: 0xFFFFFFFF
    template<class T1, class T2, class T3>
    static ModestTree::Util::ValuePair_3<T1, T2, T3>* New(T1 first, T2 second, T3 third) {
      static auto ___internal__logger = ::Logger::get().WithContext("ModestTree::Util::ValuePair::New");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("ModestTree.Util", "ValuePair", "New", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T1>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T2>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T3>::get()}, ::il2cpp_utils::ExtractTypes(first, second, third))));
      static auto* ___generic__method = THROW_UNLESS((::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T1>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T2>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T3>::get()})));
      return ::il2cpp_utils::RunMethodThrow<ModestTree::Util::ValuePair_3<T1, T2, T3>*, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, first, second, third);
    }
    // static public ModestTree.Util.ValuePair`4<T1,T2,T3,T4> New(T1 first, T2 second, T3 third, T4 fourth)
    // Offset: 0xFFFFFFFF
    template<class T1, class T2, class T3, class T4>
    static ModestTree::Util::ValuePair_4<T1, T2, T3, T4>* New(T1 first, T2 second, T3 third, T4 fourth) {
      static auto ___internal__logger = ::Logger::get().WithContext("ModestTree::Util::ValuePair::New");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("ModestTree.Util", "ValuePair", "New", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T1>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T2>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T3>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T4>::get()}, ::il2cpp_utils::ExtractTypes(first, second, third, fourth))));
      static auto* ___generic__method = THROW_UNLESS((::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T1>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T2>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T3>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T4>::get()})));
      return ::il2cpp_utils::RunMethodThrow<ModestTree::Util::ValuePair_4<T1, T2, T3, T4>*, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, first, second, third, fourth);
    }
  }; // ModestTree.Util.ValuePair
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(ModestTree::Util::ValuePair*, "ModestTree.Util", "ValuePair");
