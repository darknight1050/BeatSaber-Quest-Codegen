// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: HashSet`1<T>
  template<typename T>
  class HashSet_1;
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MissionNode
  class MissionNode;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: MissionNodesHelper
  class MissionNodesHelper : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: MissionNodesHelper
    MissionNodesHelper() noexcept {}
    // static public System.Collections.Generic.HashSet`1<MissionNode> GetAllNodesFromRoot(MissionNode root)
    // Offset: 0x1054A4C
    static System::Collections::Generic::HashSet_1<GlobalNamespace::MissionNode*>* GetAllNodesFromRoot(GlobalNamespace::MissionNode* root);
    // static private System.Void VisitAllTree(MissionNode node, System.Collections.Generic.HashSet`1<MissionNode> visitedNodes)
    // Offset: 0x1054AC0
    static void VisitAllTree(GlobalNamespace::MissionNode* node, System::Collections::Generic::HashSet_1<GlobalNamespace::MissionNode*>* visitedNodes);
    // static public System.Boolean CycleDetection(MissionNode node)
    // Offset: 0x1054B9C
    static bool CycleDetection(GlobalNamespace::MissionNode* node);
    // static private System.Boolean CycleDetection(MissionNode node, System.Int32 layer, System.Collections.Generic.Dictionary`2<MissionNode,System.Int32> layers)
    // Offset: 0x1054C0C
    static bool CycleDetection(GlobalNamespace::MissionNode* node, int layer, System::Collections::Generic::Dictionary_2<GlobalNamespace::MissionNode*, int>* layers);
    // static public System.Boolean FinalNodeIsFinal(MissionNode finalNode, MissionNode rootNode)
    // Offset: 0x1054D4C
    static bool FinalNodeIsFinal(GlobalNamespace::MissionNode* finalNode, GlobalNamespace::MissionNode* rootNode);
    // static private System.Boolean FinalNodeIsFinal(MissionNode finalNode, MissionNode node, System.Collections.Generic.HashSet`1<MissionNode> visitedNodes)
    // Offset: 0x1054DC8
    static bool FinalNodeIsFinal(GlobalNamespace::MissionNode* finalNode, GlobalNamespace::MissionNode* node, System::Collections::Generic::HashSet_1<GlobalNamespace::MissionNode*>* visitedNodes);
    // public System.Void .ctor()
    // Offset: 0x1054EF0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MissionNodesHelper* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MissionNodesHelper::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MissionNodesHelper*, creationType>()));
    }
  }; // MissionNodesHelper
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MissionNodesHelper*, "", "MissionNodesHelper");
