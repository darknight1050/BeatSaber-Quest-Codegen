// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: ListSettingsController
#include "GlobalNamespace/ListSettingsController.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: FloatSO
  class FloatSO;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: FormattedFloatListSettingsValueController
  class FormattedFloatListSettingsValueController : public GlobalNamespace::ListSettingsController {
    public:
    // Nested type: GlobalNamespace::FormattedFloatListSettingsValueController::ValueType
    struct ValueType;
    // Autogenerated type: FormattedFloatListSettingsValueController/ValueType
    struct ValueType : public System::Enum {
      public:
      // public System.Int32 value__
      // Offset: 0x0
      int value;
      // static field const value: static public FormattedFloatListSettingsValueController/ValueType Normal
      static constexpr const int Normal = 0;
      // Get static field: static public FormattedFloatListSettingsValueController/ValueType Normal
      static GlobalNamespace::FormattedFloatListSettingsValueController::ValueType _get_Normal();
      // Set static field: static public FormattedFloatListSettingsValueController/ValueType Normal
      static void _set_Normal(GlobalNamespace::FormattedFloatListSettingsValueController::ValueType value);
      // static field const value: static public FormattedFloatListSettingsValueController/ValueType Normalized
      static constexpr const int Normalized = 1;
      // Get static field: static public FormattedFloatListSettingsValueController/ValueType Normalized
      static GlobalNamespace::FormattedFloatListSettingsValueController::ValueType _get_Normalized();
      // Set static field: static public FormattedFloatListSettingsValueController/ValueType Normalized
      static void _set_Normalized(GlobalNamespace::FormattedFloatListSettingsValueController::ValueType value);
      // static field const value: static public FormattedFloatListSettingsValueController/ValueType InvertedNormalized
      static constexpr const int InvertedNormalized = 2;
      // Get static field: static public FormattedFloatListSettingsValueController/ValueType InvertedNormalized
      static GlobalNamespace::FormattedFloatListSettingsValueController::ValueType _get_InvertedNormalized();
      // Set static field: static public FormattedFloatListSettingsValueController/ValueType InvertedNormalized
      static void _set_InvertedNormalized(GlobalNamespace::FormattedFloatListSettingsValueController::ValueType value);
      // Creating value type constructor for type: ValueType
      ValueType(int value_ = {}) : value{value_} {}
    }; // FormattedFloatListSettingsValueController/ValueType
    // private FloatSO _settingsValue
    // Offset: 0x38
    GlobalNamespace::FloatSO* settingsValue;
    // private System.Single[] _values
    // Offset: 0x40
    ::Array<float>* values;
    // private System.String _formattingString
    // Offset: 0x48
    ::CsString* formattingString;
    // private FormattedFloatListSettingsValueController/ValueType valueType
    // Offset: 0x50
    GlobalNamespace::FormattedFloatListSettingsValueController::ValueType valueType;
    // private System.Single _min
    // Offset: 0x54
    float min;
    // private System.Single _max
    // Offset: 0x58
    float max;
    // protected override System.Boolean GetInitValues(System.Int32 idx, System.Int32 numberOfElements)
    // Offset: 0xBDC7CC
    // Implemented from: ListSettingsController
    // Base method: System.Boolean ListSettingsController::GetInitValues(System.Int32 idx, System.Int32 numberOfElements)
    bool GetInitValues(int& idx, int& numberOfElements);
    // protected override System.Void ApplyValue(System.Int32 idx)
    // Offset: 0xBDC8F4
    // Implemented from: ListSettingsController
    // Base method: System.Void ListSettingsController::ApplyValue(System.Int32 idx)
    void ApplyValue(int idx);
    // protected override System.String TextForValue(System.Int32 idx)
    // Offset: 0xBDC980
    // Implemented from: ListSettingsController
    // Base method: System.String ListSettingsController::TextForValue(System.Int32 idx)
    ::CsString* TextForValue(int idx);
    // public System.Void .ctor()
    // Offset: 0xBDCA6C
    // Implemented from: ListSettingsController
    // Base method: System.Void ListSettingsController::.ctor()
    // Base method: System.Void IncDecSettingsController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static FormattedFloatListSettingsValueController* New_ctor();
  }; // FormattedFloatListSettingsValueController
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::FormattedFloatListSettingsValueController*, "", "FormattedFloatListSettingsValueController");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::FormattedFloatListSettingsValueController::ValueType, "", "FormattedFloatListSettingsValueController/ValueType");
#pragma pack(pop)
