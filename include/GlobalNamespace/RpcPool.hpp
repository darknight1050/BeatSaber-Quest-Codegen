// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IPacketPool
  class IPacketPool;
  // Forward declaring type: IRemoteProcedureCall
  class IRemoteProcedureCall;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  // Autogenerated type: RpcPool
  // [] Offset: FFFFFFFF
  class RpcPool : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: RpcPool
    RpcPool() noexcept {}
    // [ThreadStaticAttribute] Offset: 0xDAA434
    // Get static field: static private System.Collections.Generic.Dictionary`2<System.Type,IPacketPool> _pools
    static System::Collections::Generic::Dictionary_2<System::Type*, GlobalNamespace::IPacketPool*>* _get__pools();
    // Set static field: static private System.Collections.Generic.Dictionary`2<System.Type,IPacketPool> _pools
    static void _set__pools(System::Collections::Generic::Dictionary_2<System::Type*, GlobalNamespace::IPacketPool*>* value);
    // static private System.Void NoDomainReloadInit()
    // Offset: 0x1E54C84
    static void NoDomainReloadInit();
    // static public T Obtain()
    // Offset: 0xFFFFFFFF
    template<class T>
    static T Obtain() {
      static_assert(std::is_base_of_v<GlobalNamespace::IRemoteProcedureCall, std::remove_pointer_t<T>>);
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::RpcPool::Obtain");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("", "RpcPool", "Obtain", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::il2cpp_utils::ExtractTypes()));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<T, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method);
    }
    // static public System.Void Release(IRemoteProcedureCall t)
    // Offset: 0x1E54988
    static void Release(GlobalNamespace::IRemoteProcedureCall* t);
  }; // RpcPool
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::RpcPool*, "", "RpcPool");
#pragma pack(pop)
