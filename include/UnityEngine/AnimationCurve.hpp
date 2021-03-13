// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Including type: UnityEngine.Keyframe
#include "UnityEngine/Keyframe.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x18
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.AnimationCurve
  // [] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: CA6258
  // [NativeHeaderAttribute] Offset: CA6258
  // [RequiredByNativeCodeAttribute] Offset: CA6258
  class AnimationCurve : public ::Il2CppObject/*, public System::IEquatable_1<UnityEngine::AnimationCurve*>*/ {
    public:
    // System.IntPtr m_Ptr
    // Size: 0x8
    // Offset: 0x10
    System::IntPtr m_Ptr;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // Creating value type constructor for type: AnimationCurve
    AnimationCurve(System::IntPtr m_Ptr_ = {}) noexcept : m_Ptr{m_Ptr_} {}
    // Creating interface conversion operator: operator System::IEquatable_1<UnityEngine::AnimationCurve*>
    operator System::IEquatable_1<UnityEngine::AnimationCurve*>() noexcept {
      return *reinterpret_cast<System::IEquatable_1<UnityEngine::AnimationCurve*>*>(this);
    }
    // Creating conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept {
      return m_Ptr;
    }
    // static private System.Void Internal_Destroy(System.IntPtr ptr)
    // Offset: 0x19BC664
    static void Internal_Destroy(System::IntPtr ptr);
    // static private System.IntPtr Internal_Create(UnityEngine.Keyframe[] keys)
    // Offset: 0x19BC6A4
    static System::IntPtr Internal_Create(::Array<UnityEngine::Keyframe>* keys);
    // private System.Boolean Internal_Equals(System.IntPtr other)
    // Offset: 0x19BC6E4
    bool Internal_Equals(System::IntPtr other);
    // public System.Single Evaluate(System.Single time)
    // Offset: 0x19BC7D0
    float Evaluate(float time);
    // public UnityEngine.Keyframe[] get_keys()
    // Offset: 0x19BC820
    ::Array<UnityEngine::Keyframe>* get_keys();
    // public System.Void set_keys(UnityEngine.Keyframe[] value)
    // Offset: 0x19BC8A0
    void set_keys(::Array<UnityEngine::Keyframe>* value);
    // public System.Int32 AddKey(System.Single time, System.Single value)
    // Offset: 0x19BC940
    int AddKey(float time, float value);
    // public System.Int32 get_length()
    // Offset: 0x19BC998
    int get_length();
    // private System.Void SetKeys(UnityEngine.Keyframe[] keys)
    // Offset: 0x19BC8F0
    void SetKeys(::Array<UnityEngine::Keyframe>* keys);
    // private UnityEngine.Keyframe[] GetKeys()
    // Offset: 0x19BC860
    ::Array<UnityEngine::Keyframe>* GetKeys();
    // static public UnityEngine.AnimationCurve Linear(System.Single timeStart, System.Single valueStart, System.Single timeEnd, System.Single valueEnd)
    // Offset: 0x19BC9D8
    static UnityEngine::AnimationCurve* Linear(float timeStart, float valueStart, float timeEnd, float valueEnd);
    // static public UnityEngine.AnimationCurve EaseInOut(System.Single timeStart, System.Single valueStart, System.Single timeEnd, System.Single valueEnd)
    // Offset: 0x19BCB98
    static UnityEngine::AnimationCurve* EaseInOut(float timeStart, float valueStart, float timeEnd, float valueEnd);
    // public System.Void .ctor(params UnityEngine.Keyframe[] keys)
    // Offset: 0x19BCB28
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AnimationCurve* New_ctor(::Array<UnityEngine::Keyframe>* keys) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::AnimationCurve::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AnimationCurve*, creationType>(keys)));
    }
    // Creating initializer_list -> params proxy for: System.Void .ctor(params UnityEngine.Keyframe[] keys)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AnimationCurve* New_ctor(std::initializer_list<UnityEngine::Keyframe> keys) {
      return New_ctor<creationType>(::Array<UnityEngine::Keyframe>::New(keys));
    }
    // Creating TArgs -> initializer_list proxy for: System.Void .ctor(params UnityEngine.Keyframe[] keys)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary, class ...TParams>
    static AnimationCurve* New_ctor(TParams&&... keys) {
      return New_ctor<creationType>({keys...});
    }
    // public System.Boolean Equals(UnityEngine.AnimationCurve other)
    // Offset: 0x19BCDF8
    bool Equals_NEW(UnityEngine::AnimationCurve* other);
    // protected override System.Void Finalize()
    // Offset: 0x19BC734
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize_NEW()
    void Finalize();
    // public System.Void .ctor()
    // Offset: 0x19BCCCC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AnimationCurve* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::AnimationCurve::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AnimationCurve*, creationType>()));
    }
    // public override System.Boolean Equals(System.Object o)
    // Offset: 0x19BCD1C
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals_NEW(System.Object o)
    bool Equals(::Il2CppObject* o);
    // public override System.Int32 GetHashCode()
    // Offset: 0x19BCEC8
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode_NEW()
    int GetHashCode();
  }; // UnityEngine.AnimationCurve
  #pragma pack(pop)
  static check_size<sizeof(AnimationCurve), 16 + sizeof(System::IntPtr)> __UnityEngine_AnimationCurveSizeCheck;
  static_assert(sizeof(AnimationCurve) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AnimationCurve*, "UnityEngine", "AnimationCurve");
