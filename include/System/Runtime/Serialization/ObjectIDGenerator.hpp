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
// Type namespace: System.Runtime.Serialization
namespace System::Runtime::Serialization {
  // Size: 0x28
  // Autogenerated type: System.Runtime.Serialization.ObjectIDGenerator
  // [] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: D3A870
  class ObjectIDGenerator : public ::Il2CppObject {
    public:
    // System.Int32 m_currentCount
    // Size: 0x4
    // Offset: 0x10
    int m_currentCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 m_currentSize
    // Size: 0x4
    // Offset: 0x14
    int m_currentSize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int64[] m_ids
    // Size: 0x8
    // Offset: 0x18
    ::Array<int64_t>* m_ids;
    // Field size check
    static_assert(sizeof(::Array<int64_t>*) == 0x8);
    // System.Object[] m_objs
    // Size: 0x8
    // Offset: 0x20
    ::Array<::Il2CppObject*>* m_objs;
    // Field size check
    static_assert(sizeof(::Array<::Il2CppObject*>*) == 0x8);
    // Creating value type constructor for type: ObjectIDGenerator
    ObjectIDGenerator(int m_currentCount_ = {}, int m_currentSize_ = {}, ::Array<int64_t>* m_ids_ = {}, ::Array<::Il2CppObject*>* m_objs_ = {}) noexcept : m_currentCount{m_currentCount_}, m_currentSize{m_currentSize_}, m_ids{m_ids_}, m_objs{m_objs_} {}
    // Get static field: static private readonly System.Int32[] sizes
    static ::Array<int>* _get_sizes();
    // Set static field: static private readonly System.Int32[] sizes
    static void _set_sizes(::Array<int>* value);
    // private System.Int32 FindElement(System.Object obj, out System.Boolean found)
    // Offset: 0x13061D4
    int FindElement(::Il2CppObject* obj, bool& found);
    // public System.Int64 GetId(System.Object obj, out System.Boolean firstTime)
    // Offset: 0x13062AC
    int64_t GetId(::Il2CppObject* obj, bool& firstTime);
    // public System.Int64 HasId(System.Object obj, out System.Boolean firstTime)
    // Offset: 0x1306788
    int64_t HasId(::Il2CppObject* obj, bool& firstTime);
    // private System.Void Rehash()
    // Offset: 0x130647C
    void Rehash();
    // static private System.Void .cctor()
    // Offset: 0x130689C
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x12FA5B0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ObjectIDGenerator* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::Serialization::ObjectIDGenerator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ObjectIDGenerator*, creationType>()));
    }
  }; // System.Runtime.Serialization.ObjectIDGenerator
  static check_size<sizeof(ObjectIDGenerator), 32 + sizeof(::Array<::Il2CppObject*>*)> __System_Runtime_Serialization_ObjectIDGeneratorSizeCheck;
  static_assert(sizeof(ObjectIDGenerator) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::ObjectIDGenerator*, "System.Runtime.Serialization", "ObjectIDGenerator");
#pragma pack(pop)
