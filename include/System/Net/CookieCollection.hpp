// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Collections.ICollection
#include "System/Collections/ICollection.hpp"
// Including type: System.DateTime
#include "System/DateTime.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: Cookie
  class Cookie;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: ArrayList
  class ArrayList;
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Array
  class Array;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x2A
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.CookieCollection
  // [] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: CA08C4
  class CookieCollection : public ::Il2CppObject/*, public System::Collections::ICollection*/ {
    public:
    // Nested type: System::Net::CookieCollection::Stamp
    struct Stamp;
    // Nested type: System::Net::CookieCollection::CookieCollectionEnumerator
    class CookieCollectionEnumerator;
    // System.Int32 m_version
    // Size: 0x4
    // Offset: 0x10
    int m_version;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: m_version and: m_list
    char __padding0[0x4] = {};
    // private System.Collections.ArrayList m_list
    // Size: 0x8
    // Offset: 0x18
    System::Collections::ArrayList* m_list;
    // Field size check
    static_assert(sizeof(System::Collections::ArrayList*) == 0x8);
    // private System.DateTime m_TimeStamp
    // Size: 0x8
    // Offset: 0x20
    System::DateTime m_TimeStamp;
    // Field size check
    static_assert(sizeof(System::DateTime) == 0x8);
    // private System.Boolean m_has_other_versions
    // Size: 0x1
    // Offset: 0x28
    bool m_has_other_versions;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [OptionalFieldAttribute] Offset: 0xCA10FC
    // private System.Boolean m_IsReadOnly
    // Size: 0x1
    // Offset: 0x29
    bool m_IsReadOnly;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: CookieCollection
    CookieCollection(int m_version_ = {}, System::Collections::ArrayList* m_list_ = {}, System::DateTime m_TimeStamp_ = {}, bool m_has_other_versions_ = {}, bool m_IsReadOnly_ = {}) noexcept : m_version{m_version_}, m_list{m_list_}, m_TimeStamp{m_TimeStamp_}, m_has_other_versions{m_has_other_versions_}, m_IsReadOnly{m_IsReadOnly_} {}
    // Creating interface conversion operator: operator System::Collections::ICollection
    operator System::Collections::ICollection() noexcept {
      return *reinterpret_cast<System::Collections::ICollection*>(this);
    }
    // public System.Net.Cookie get_Item(System.Int32 index)
    // Offset: 0x14C6F74
    System::Net::Cookie* get_Item(int index);
    // public System.Void Add(System.Net.Cookie cookie)
    // Offset: 0x14C7060
    void Add(System::Net::Cookie* cookie);
    // public System.Void Add(System.Net.CookieCollection cookies)
    // Offset: 0x14C74D0
    void Add(System::Net::CookieCollection* cookies);
    // public System.Int32 get_Count()
    // Offset: 0x14C7794
    int get_Count_NEW();
    // public System.Void CopyTo(System.Array array, System.Int32 index)
    // Offset: 0x14C77B8
    void CopyTo_NEW(System::Array* array, int index);
    // System.DateTime TimeStamp(System.Net.CookieCollection/Stamp how)
    // Offset: 0x14C77DC
    System::DateTime TimeStamp(System::Net::CookieCollection::Stamp how);
    // System.Boolean get_IsOtherVersionSeen()
    // Offset: 0x14C78D4
    bool get_IsOtherVersionSeen();
    // System.Int32 InternalAdd(System.Net.Cookie cookie, System.Boolean isStrict)
    // Offset: 0x14C78DC
    int InternalAdd(System::Net::Cookie* cookie, bool isStrict);
    // System.Int32 IndexOf(System.Net.Cookie cookie)
    // Offset: 0x14C7150
    int IndexOf(System::Net::Cookie* cookie);
    // System.Void RemoveAt(System.Int32 idx)
    // Offset: 0x14C7D00
    void RemoveAt(int idx);
    // public System.Collections.IEnumerator GetEnumerator()
    // Offset: 0x14C7734
    System::Collections::IEnumerator* GetEnumerator_NEW();
    // public System.Void .ctor()
    // Offset: 0x14C6ED0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CookieCollection* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::CookieCollection::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CookieCollection*, creationType>()));
    }
  }; // System.Net.CookieCollection
  #pragma pack(pop)
  static check_size<sizeof(CookieCollection), 41 + sizeof(bool)> __System_Net_CookieCollectionSizeCheck;
  static_assert(sizeof(CookieCollection) == 0x2A);
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::CookieCollection*, "System.Net", "CookieCollection");
