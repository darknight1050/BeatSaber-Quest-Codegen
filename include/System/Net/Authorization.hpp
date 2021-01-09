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
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x28
  // Autogenerated type: System.Net.Authorization
  // [] Offset: FFFFFFFF
  class Authorization : public ::Il2CppObject {
    public:
    // private System.String m_Message
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* m_Message;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Boolean m_Complete
    // Size: 0x1
    // Offset: 0x18
    bool m_Complete;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_Complete and: ModuleAuthenticationType
    char __padding1[0x7] = {};
    // System.String ModuleAuthenticationType
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppString* ModuleAuthenticationType;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: Authorization
    Authorization(::Il2CppString* m_Message_ = {}, bool m_Complete_ = {}, ::Il2CppString* ModuleAuthenticationType_ = {}) noexcept : m_Message{m_Message_}, m_Complete{m_Complete_}, ModuleAuthenticationType{ModuleAuthenticationType_} {}
    // public System.Void .ctor(System.String token)
    // Offset: 0x130AB24
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Authorization* New_ctor(::Il2CppString* token) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::Authorization::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Authorization*, creationType>(token)));
    }
    // public System.Void .ctor(System.String token, System.Boolean finished)
    // Offset: 0x130ABC0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Authorization* New_ctor(::Il2CppString* token, bool finished) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::Authorization::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Authorization*, creationType>(token, finished)));
    }
    // public System.String get_Message()
    // Offset: 0x130AC60
    ::Il2CppString* get_Message();
    // public System.Boolean get_Complete()
    // Offset: 0x130AC68
    bool get_Complete();
  }; // System.Net.Authorization
  static check_size<sizeof(Authorization), 32 + sizeof(::Il2CppString*)> __System_Net_AuthorizationSizeCheck;
  static_assert(sizeof(Authorization) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::Authorization*, "System.Net", "Authorization");
#pragma pack(pop)
