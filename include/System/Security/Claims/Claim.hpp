// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: IDictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class IDictionary_2;
}
// Forward declaring namespace: System::Security::Claims
namespace System::Security::Claims {
  // Forward declaring type: ClaimsIdentity
  class ClaimsIdentity;
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: StreamingContext
  struct StreamingContext;
}
// Completed forward declares
// Type namespace: System.Security.Claims
namespace System::Security::Claims {
  // Autogenerated type: System.Security.Claims.Claim
  class Claim : public ::Il2CppObject {
    public:
    // private System.String m_issuer
    // Offset: 0x10
    ::Il2CppString* m_issuer;
    // private System.String m_originalIssuer
    // Offset: 0x18
    ::Il2CppString* m_originalIssuer;
    // private System.String m_type
    // Offset: 0x20
    ::Il2CppString* m_type;
    // private System.String m_value
    // Offset: 0x28
    ::Il2CppString* m_value;
    // private System.String m_valueType
    // Offset: 0x30
    ::Il2CppString* m_valueType;
    // private System.Byte[] m_userSerializationData
    // Offset: 0x38
    ::Array<uint8_t>* m_userSerializationData;
    // private System.Collections.Generic.Dictionary`2<System.String,System.String> m_properties
    // Offset: 0x40
    System::Collections::Generic::Dictionary_2<::Il2CppString*, ::Il2CppString*>* m_properties;
    // private System.Object m_propertyLock
    // Offset: 0x48
    ::Il2CppObject* m_propertyLock;
    // private System.Security.Claims.ClaimsIdentity m_subject
    // Offset: 0x50
    System::Security::Claims::ClaimsIdentity* m_subject;
    // public System.Void .ctor(System.String type, System.String value, System.String valueType, System.String issuer, System.String originalIssuer, System.Security.Claims.ClaimsIdentity subject)
    // Offset: 0xD41B0C
    static Claim* New_ctor(::Il2CppString* type, ::Il2CppString* value, ::Il2CppString* valueType, ::Il2CppString* issuer, ::Il2CppString* originalIssuer, System::Security::Claims::ClaimsIdentity* subject);
    // System.Void .ctor(System.String type, System.String value, System.String valueType, System.String issuer, System.String originalIssuer, System.Security.Claims.ClaimsIdentity subject, System.String propertyKey, System.String propertyValue)
    // Offset: 0xD41B30
    static Claim* New_ctor(::Il2CppString* type, ::Il2CppString* value, ::Il2CppString* valueType, ::Il2CppString* issuer, ::Il2CppString* originalIssuer, System::Security::Claims::ClaimsIdentity* subject, ::Il2CppString* propertyKey, ::Il2CppString* propertyValue);
    // protected System.Void .ctor(System.Security.Claims.Claim other, System.Security.Claims.ClaimsIdentity subject)
    // Offset: 0xD41EDC
    static Claim* New_ctor(System::Security::Claims::Claim* other, System::Security::Claims::ClaimsIdentity* subject);
    // private System.Void OnDeserializedMethod(System.Runtime.Serialization.StreamingContext context)
    // Offset: 0xD42190
    void OnDeserializedMethod(System::Runtime::Serialization::StreamingContext context);
    // public System.Collections.Generic.IDictionary`2<System.String,System.String> get_Properties()
    // Offset: 0xD41DCC
    System::Collections::Generic::IDictionary_2<::Il2CppString*, ::Il2CppString*>* get_Properties();
    // public System.Security.Claims.ClaimsIdentity get_Subject()
    // Offset: 0xD421F8
    System::Security::Claims::ClaimsIdentity* get_Subject();
    // System.Void set_Subject(System.Security.Claims.ClaimsIdentity value)
    // Offset: 0xD42200
    void set_Subject(System::Security::Claims::ClaimsIdentity* value);
    // public System.String get_Type()
    // Offset: 0xD42208
    ::Il2CppString* get_Type();
    // public System.String get_Value()
    // Offset: 0xD42210
    ::Il2CppString* get_Value();
    // public System.Security.Claims.Claim Clone(System.Security.Claims.ClaimsIdentity identity)
    // Offset: 0xD42218
    System::Security::Claims::Claim* Clone(System::Security::Claims::ClaimsIdentity* identity);
    // public override System.String ToString()
    // Offset: 0xD42288
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // System.Security.Claims.Claim
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Security::Claims::Claim*, "System.Security.Claims", "Claim");
#pragma pack(pop)
