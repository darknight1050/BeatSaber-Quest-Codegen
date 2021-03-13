// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector3
  struct Vector3;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Rect
  // [] Offset: FFFFFFFF
  // [NativeClassAttribute] Offset: CA6954
  // [RequiredByNativeCodeAttribute] Offset: CA6954
  // [NativeHeaderAttribute] Offset: CA6954
  struct Rect/*, public System::ValueType, public System::IEquatable_1<UnityEngine::Rect>*/ {
    public:
    // [NativeNameAttribute] Offset: 0xCAB1AC
    // private System.Single m_XMin
    // Size: 0x4
    // Offset: 0x0
    float m_XMin;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [NativeNameAttribute] Offset: 0xCAB1E4
    // private System.Single m_YMin
    // Size: 0x4
    // Offset: 0x4
    float m_YMin;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [NativeNameAttribute] Offset: 0xCAB21C
    // private System.Single m_Width
    // Size: 0x4
    // Offset: 0x8
    float m_Width;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [NativeNameAttribute] Offset: 0xCAB254
    // private System.Single m_Height
    // Size: 0x4
    // Offset: 0xC
    float m_Height;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: Rect
    constexpr Rect(float m_XMin_ = {}, float m_YMin_ = {}, float m_Width_ = {}, float m_Height_ = {}) noexcept : m_XMin{m_XMin_}, m_YMin{m_YMin_}, m_Width{m_Width_}, m_Height{m_Height_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator System::IEquatable_1<UnityEngine::Rect>
    operator System::IEquatable_1<UnityEngine::Rect>() noexcept {
      return *reinterpret_cast<System::IEquatable_1<UnityEngine::Rect>*>(this);
    }
    // public System.Void .ctor(System.Single x, System.Single y, System.Single width, System.Single height)
    // Offset: 0xDFE6F4
    // template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    // ABORTED: conflicts with another method.  Rect(float x, float y, float width, float height)
    // public System.Void .ctor(UnityEngine.Vector2 position, UnityEngine.Vector2 size)
    // Offset: 0xDFE700
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    Rect(UnityEngine::Vector2 position, UnityEngine::Vector2 size) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Rect::.ctor");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(*this, ".ctor", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(position, size)));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, position, size);
    }
    // public System.Void .ctor(UnityEngine.Rect source)
    // Offset: 0xDFE70C
    // template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    // ABORTED: is copy constructor.  Rect(UnityEngine::Rect source)
    // static public UnityEngine.Rect get_zero()
    // Offset: 0x1A7FC08
    static UnityEngine::Rect get_zero();
    // static public UnityEngine.Rect MinMaxRect(System.Single xmin, System.Single ymin, System.Single xmax, System.Single ymax)
    // Offset: 0x1A7FC1C
    static UnityEngine::Rect MinMaxRect(float xmin, float ymin, float xmax, float ymax);
    // public System.Single get_x()
    // Offset: 0xDFE718
    float get_x();
    // public System.Void set_x(System.Single value)
    // Offset: 0xDFE720
    void set_x(float value);
    // public System.Single get_y()
    // Offset: 0xDFE728
    float get_y();
    // public System.Void set_y(System.Single value)
    // Offset: 0xDFE730
    void set_y(float value);
    // public UnityEngine.Vector2 get_position()
    // Offset: 0xDFE738
    UnityEngine::Vector2 get_position();
    // public System.Void set_position(UnityEngine.Vector2 value)
    // Offset: 0xDFE768
    void set_position(UnityEngine::Vector2 value);
    // public UnityEngine.Vector2 get_center()
    // Offset: 0xDFE770
    UnityEngine::Vector2 get_center();
    // public System.Void set_center(UnityEngine.Vector2 value)
    // Offset: 0xDFE778
    void set_center(UnityEngine::Vector2 value);
    // public UnityEngine.Vector2 get_min()
    // Offset: 0xDFE794
    UnityEngine::Vector2 get_min();
    // public UnityEngine.Vector2 get_max()
    // Offset: 0xDFE7C4
    UnityEngine::Vector2 get_max();
    // public System.Single get_width()
    // Offset: 0xDFE800
    float get_width();
    // public System.Void set_width(System.Single value)
    // Offset: 0xDFE808
    void set_width(float value);
    // public System.Single get_height()
    // Offset: 0xDFE810
    float get_height();
    // public System.Void set_height(System.Single value)
    // Offset: 0xDFE818
    void set_height(float value);
    // public UnityEngine.Vector2 get_size()
    // Offset: 0xDFE820
    UnityEngine::Vector2 get_size();
    // public System.Void set_size(UnityEngine.Vector2 value)
    // Offset: 0xDFE850
    void set_size(UnityEngine::Vector2 value);
    // public System.Single get_xMin()
    // Offset: 0xDFE858
    float get_xMin();
    // public System.Void set_xMin(System.Single value)
    // Offset: 0xDFE860
    void set_xMin(float value);
    // public System.Single get_yMin()
    // Offset: 0xDFE87C
    float get_yMin();
    // public System.Void set_yMin(System.Single value)
    // Offset: 0xDFE884
    void set_yMin(float value);
    // public System.Single get_xMax()
    // Offset: 0xDFE8A0
    float get_xMax();
    // public System.Void set_xMax(System.Single value)
    // Offset: 0xDFE8B0
    void set_xMax(float value);
    // public System.Single get_yMax()
    // Offset: 0xDFE8C0
    float get_yMax();
    // public System.Void set_yMax(System.Single value)
    // Offset: 0xDFE8D0
    void set_yMax(float value);
    // public System.Boolean Contains(UnityEngine.Vector2 point)
    // Offset: 0xDFE8E0
    bool Contains(UnityEngine::Vector2 point);
    // public System.Boolean Contains(UnityEngine.Vector3 point)
    // Offset: 0xDFE924
    bool Contains(UnityEngine::Vector3 point);
    // static private UnityEngine.Rect OrderMinMax(UnityEngine.Rect rect)
    // Offset: 0x1A7FEB8
    static UnityEngine::Rect OrderMinMax(UnityEngine::Rect rect);
    // public System.Boolean Overlaps(UnityEngine.Rect other)
    // Offset: 0xDFE968
    bool Overlaps(UnityEngine::Rect other);
    // public System.Boolean Overlaps(UnityEngine.Rect other, System.Boolean allowInverse)
    // Offset: 0xDFE970
    bool Overlaps(UnityEngine::Rect other, bool allowInverse);
    // public System.Boolean Equals(UnityEngine.Rect other)
    // Offset: 0xDFE98C
    bool Equals_NEW(UnityEngine::Rect other);
    // public override System.Int32 GetHashCode()
    // Offset: 0xDFE97C
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // public override System.Boolean Equals(System.Object other)
    // Offset: 0xDFE984
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object other)
    bool Equals(::Il2CppObject* other);
    // public override System.String ToString()
    // Offset: 0xDFE994
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::Il2CppString* ToString();
  }; // UnityEngine.Rect
  #pragma pack(pop)
  static check_size<sizeof(Rect), 12 + sizeof(float)> __UnityEngine_RectSizeCheck;
  static_assert(sizeof(Rect) == 0x10);
  // static public System.Boolean op_Inequality(UnityEngine.Rect lhs, UnityEngine.Rect rhs)
  // Offset: 0x1A7FFC4
  bool operator !=(const UnityEngine::Rect& lhs, const UnityEngine::Rect& rhs);
  // static public System.Boolean op_Equality(UnityEngine.Rect lhs, UnityEngine.Rect rhs)
  // Offset: 0x1A7FFF8
  bool operator ==(const UnityEngine::Rect& lhs, const UnityEngine::Rect& rhs);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Rect, "UnityEngine", "Rect");
