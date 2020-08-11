// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: IBeatmapObjectSpawner
#include "GlobalNamespace/IBeatmapObjectSpawner.hpp"
// Including type: ObstacleData
#include "GlobalNamespace/ObstacleData.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: NoteData
#include "GlobalNamespace/NoteData.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: IBeatmapObjectSpawner.SpawnObstacle
void GlobalNamespace::IBeatmapObjectSpawner::SpawnObstacle(GlobalNamespace::ObstacleData* obstacleData, UnityEngine::Vector3 moveStartPos, UnityEngine::Vector3 moveEndPos, UnityEngine::Vector3 jumpEndPos, float moveDuration, float jumpDuration, float rotation, float noteLinesDistance, float obstacleHeight) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SpawnObstacle", obstacleData, moveStartPos, moveEndPos, jumpEndPos, moveDuration, jumpDuration, rotation, noteLinesDistance, obstacleHeight));
}
// Autogenerated method: IBeatmapObjectSpawner.SpawnBombNote
void GlobalNamespace::IBeatmapObjectSpawner::SpawnBombNote(GlobalNamespace::NoteData* noteData, UnityEngine::Vector3 moveStartPos, UnityEngine::Vector3 moveEndPos, UnityEngine::Vector3 jumpEndPos, float moveDuration, float jumpDuration, float jumpGravity, float rotation) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SpawnBombNote", noteData, moveStartPos, moveEndPos, jumpEndPos, moveDuration, jumpDuration, jumpGravity, rotation));
}
// Autogenerated method: IBeatmapObjectSpawner.SpawnBasicNote
void GlobalNamespace::IBeatmapObjectSpawner::SpawnBasicNote(GlobalNamespace::NoteData* noteData, UnityEngine::Vector3 moveStartPos, UnityEngine::Vector3 moveEndPos, UnityEngine::Vector3 jumpEndPos, float moveDuration, float jumpDuration, float jumpGravity, float rotation, bool disappearingArrow, bool ghostNote, float cutDirectionAngleOffset) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SpawnBasicNote", noteData, moveStartPos, moveEndPos, jumpEndPos, moveDuration, jumpDuration, jumpGravity, rotation, disappearingArrow, ghostNote, cutDirectionAngleOffset));
}
