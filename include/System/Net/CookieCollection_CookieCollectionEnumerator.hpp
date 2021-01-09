// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Net.CookieCollection
#include "System/Net/CookieCollection.hpp"
// Including type: System.Collections.IEnumerator
#include "System/Collections/IEnumerator.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x24
  // Autogenerated type: System.Net.CookieCollection/CookieCollectionEnumerator
  // [] Offset: FFFFFFFF
  class CookieCollection::CookieCollectionEnumerator : public ::Il2CppObject/*, public System::Collections::IEnumerator*/ {
    public:
    // private System.Net.CookieCollection m_cookies
    // Size: 0x8
    // Offset: 0x10
    System::Net::CookieCollection* m_cookies;
    // Field size check
    static_assert(sizeof(System::Net::CookieCollection*) == 0x8);
    // private System.Int32 m_count
    // Size: 0x4
    // Offset: 0x18
    int m_count;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 m_index
    // Size: 0x4
    // Offset: 0x1C
    int m_index;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 m_version
    // Size: 0x4
    // Offset: 0x20
    int m_version;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: CookieCollectionEnumerator
    CookieCollectionEnumerator(System::Net::CookieCollection* m_cookies_ = {}, int m_count_ = {}, int m_index_ = {}, int m_version_ = {}) noexcept : m_cookies{m_cookies_}, m_count{m_count_}, m_index{m_index_}, m_version{m_version_} {}
    // Creating interface conversion operator: operator System::Collections::IEnumerator
    operator System::Collections::IEnumerator() noexcept {
      return *reinterpret_cast<System::Collections::IEnumerator*>(this);
    }
    // System.Void .ctor(System.Net.CookieCollection cookies)
    // Offset: 0x1310484
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CookieCollection::CookieCollectionEnumerator* New_ctor(System::Net::CookieCollection* cookies) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::CookieCollection::CookieCollectionEnumerator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CookieCollection::CookieCollectionEnumerator*, creationType>(cookies)));
    }
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x13104F0
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Object IEnumerator::get_Current()
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // private System.Boolean System.Collections.IEnumerator.MoveNext()
    // Offset: 0x13105BC
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Boolean IEnumerator::MoveNext()
    bool System_Collections_IEnumerator_MoveNext();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x1310680
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Void IEnumerator::Reset()
    void System_Collections_IEnumerator_Reset();
  }; // System.Net.CookieCollection/CookieCollectionEnumerator
  static check_size<sizeof(CookieCollection::CookieCollectionEnumerator), 32 + sizeof(int)> __System_Net_CookieCollection_CookieCollectionEnumeratorSizeCheck;
  static_assert(sizeof(CookieCollection::CookieCollectionEnumerator) == 0x24);
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::CookieCollection::CookieCollectionEnumerator*, "System.Net", "CookieCollection/CookieCollectionEnumerator");
#pragma pack(pop)
