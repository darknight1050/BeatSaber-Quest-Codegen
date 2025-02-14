// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVRSimpleJSON.JSONNode
#include "OVRSimpleJSON/JSONNode.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: OVRSimpleJSON.JSONNode/Enumerator
#include "OVRSimpleJSON/JSONNode_Enumerator.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: OVRSimpleJSON
namespace OVRSimpleJSON {
  // WARNING Size may be invalid!
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: OVRSimpleJSON.JSONNode/KeyEnumerator
  struct JSONNode::KeyEnumerator/*, public System::ValueType*/ {
    public:
    // private OVRSimpleJSON.JSONNode/Enumerator m_Enumerator
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    OVRSimpleJSON::JSONNode::Enumerator m_Enumerator;
    // Creating value type constructor for type: KeyEnumerator
    constexpr KeyEnumerator(OVRSimpleJSON::JSONNode::Enumerator m_Enumerator_ = {}) noexcept : m_Enumerator{m_Enumerator_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating conversion operator: operator OVRSimpleJSON::JSONNode::Enumerator
    constexpr operator OVRSimpleJSON::JSONNode::Enumerator() const noexcept {
      return m_Enumerator;
    }
    // public System.Void .ctor(System.Collections.Generic.List`1/Enumerator<OVRSimpleJSON.JSONNode> aArrayEnum)
    // Offset: 0xF0E688
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    KeyEnumerator(typename System::Collections::Generic::List_1<OVRSimpleJSON::JSONNode*>::Enumerator aArrayEnum) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVRSimpleJSON::JSONNode::KeyEnumerator::.ctor");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(aArrayEnum)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, aArrayEnum);
    }
    // public System.Void .ctor(System.Collections.Generic.Dictionary`2/Enumerator<System.String,OVRSimpleJSON.JSONNode> aDictEnum)
    // Offset: 0xF0E6D0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    KeyEnumerator(typename System::Collections::Generic::Dictionary_2<::Il2CppString*, OVRSimpleJSON::JSONNode*>::Enumerator aDictEnum) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVRSimpleJSON::JSONNode::KeyEnumerator::.ctor");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(aDictEnum)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, aDictEnum);
    }
    // public System.Void .ctor(OVRSimpleJSON.JSONNode/Enumerator aEnumerator)
    // Offset: 0xF0E704
    // template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    // ABORTED: conflicts with another method.  KeyEnumerator(OVRSimpleJSON::JSONNode::Enumerator aEnumerator)
    // public System.String get_Current()
    // Offset: 0xF0E720
    ::Il2CppString* get_Current();
    // public System.Boolean MoveNext()
    // Offset: 0xF0E728
    bool MoveNext();
    // public OVRSimpleJSON.JSONNode/KeyEnumerator GetEnumerator()
    // Offset: 0xF0E730
    OVRSimpleJSON::JSONNode::KeyEnumerator GetEnumerator();
  }; // OVRSimpleJSON.JSONNode/KeyEnumerator
  // WARNING Not writing size check since size may be invalid!
}
DEFINE_IL2CPP_ARG_TYPE(OVRSimpleJSON::JSONNode::KeyEnumerator, "OVRSimpleJSON", "JSONNode/KeyEnumerator");
