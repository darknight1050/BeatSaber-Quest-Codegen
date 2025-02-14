// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.ResourceManagement.Util.SerializedType
#include "UnityEngine/ResourceManagement/Util/SerializedType.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::ResourceManagement::AsyncOperations
namespace UnityEngine::ResourceManagement::AsyncOperations {
  // Forward declaring type: AsyncOperationHandle
  struct AsyncOperationHandle;
}
// Forward declaring namespace: UnityEngine::ResourceManagement
namespace UnityEngine::ResourceManagement {
  // Forward declaring type: ResourceManager
  class ResourceManager;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppString;
// Completed il2cpp-utils forward declares
// Type namespace: UnityEngine.ResourceManagement.Util
namespace UnityEngine::ResourceManagement::Util {
  // Size: 0x30
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.ResourceManagement.Util.ObjectInitializationData
  struct ObjectInitializationData/*, public System::ValueType*/ {
    public:
    // [FormerlySerializedAsAttribute] Offset: 0xDFAED4
    // private System.String m_Id
    // Size: 0x8
    // Offset: 0x0
    ::Il2CppString* m_Id;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // [FormerlySerializedAsAttribute] Offset: 0xDFAF20
    // private UnityEngine.ResourceManagement.Util.SerializedType m_ObjectType
    // Size: 0x19
    // Offset: 0x8
    UnityEngine::ResourceManagement::Util::SerializedType m_ObjectType;
    // Field size check
    static_assert(sizeof(UnityEngine::ResourceManagement::Util::SerializedType) == 0x19);
    // Padding between fields: m_ObjectType and: m_Data
    char __padding1[0x7] = {};
    // [FormerlySerializedAsAttribute] Offset: 0xDFAF6C
    // private System.String m_Data
    // Size: 0x8
    // Offset: 0x28
    ::Il2CppString* m_Data;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: ObjectInitializationData
    constexpr ObjectInitializationData(::Il2CppString* m_Id_ = {}, UnityEngine::ResourceManagement::Util::SerializedType m_ObjectType_ = {}, ::Il2CppString* m_Data_ = {}) noexcept : m_Id{m_Id_}, m_ObjectType{m_ObjectType_}, m_Data{m_Data_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // public System.String get_Id()
    // Offset: 0xF02154
    ::Il2CppString* get_Id();
    // public UnityEngine.ResourceManagement.Util.SerializedType get_ObjectType()
    // Offset: 0xF0215C
    UnityEngine::ResourceManagement::Util::SerializedType get_ObjectType();
    // public System.String get_Data()
    // Offset: 0xF0216C
    ::Il2CppString* get_Data();
    // public TObject CreateInstance(System.String idOverride)
    // Offset: 0xFFFFFFFF
    template<class TObject>
    TObject CreateInstance(::Il2CppString* idOverride) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ResourceManagement::Util::ObjectInitializationData::CreateInstance");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "CreateInstance", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObject>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(idOverride)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObject>::get()}));
      return ::il2cpp_utils::RunMethodThrow<TObject, false>(*this, ___generic__method, idOverride);
    }
    // public UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle GetAsyncInitHandle(UnityEngine.ResourceManagement.ResourceManager rm, System.String idOverride)
    // Offset: 0xF0217C
    UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle GetAsyncInitHandle(UnityEngine::ResourceManagement::ResourceManager* rm, ::Il2CppString* idOverride);
    // public override System.String ToString()
    // Offset: 0xF02174
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::Il2CppString* ToString();
  }; // UnityEngine.ResourceManagement.Util.ObjectInitializationData
  #pragma pack(pop)
  static check_size<sizeof(ObjectInitializationData), 40 + sizeof(::Il2CppString*)> __UnityEngine_ResourceManagement_Util_ObjectInitializationDataSizeCheck;
  static_assert(sizeof(ObjectInitializationData) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ResourceManagement::Util::ObjectInitializationData, "UnityEngine.ResourceManagement.Util", "ObjectInitializationData");
