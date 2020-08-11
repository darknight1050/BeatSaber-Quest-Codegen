// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: UnityEngine.Timeline.ScheduleRuntimeClip
#include "UnityEngine/Timeline/ScheduleRuntimeClip.hpp"
// Including type: UnityEngine.Timeline.TimelineClip
#include "UnityEngine/Timeline/TimelineClip.hpp"
// Including type: UnityEngine.Playables.FrameData
#include "UnityEngine/Playables/FrameData.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: UnityEngine.Timeline.ScheduleRuntimeClip.SetTime
void UnityEngine::Timeline::ScheduleRuntimeClip::SetTime(double time) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetTime", time));
}
// Autogenerated method: UnityEngine.Timeline.ScheduleRuntimeClip.get_clip
UnityEngine::Timeline::TimelineClip* UnityEngine::Timeline::ScheduleRuntimeClip::get_clip() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Timeline::TimelineClip*>(this, "get_clip"));
}
// Autogenerated method: UnityEngine.Timeline.ScheduleRuntimeClip.get_mixer
UnityEngine::Playables::Playable UnityEngine::Timeline::ScheduleRuntimeClip::get_mixer() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Playables::Playable>(this, "get_mixer"));
}
// Autogenerated method: UnityEngine.Timeline.ScheduleRuntimeClip.get_playable
UnityEngine::Playables::Playable UnityEngine::Timeline::ScheduleRuntimeClip::get_playable() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Playables::Playable>(this, "get_playable"));
}
// Autogenerated method: UnityEngine.Timeline.ScheduleRuntimeClip..ctor
UnityEngine::Timeline::ScheduleRuntimeClip* UnityEngine::Timeline::ScheduleRuntimeClip::New_ctor(UnityEngine::Timeline::TimelineClip* clip, UnityEngine::Playables::Playable clipPlayable, UnityEngine::Playables::Playable parentMixer, double startDelay, double finishTail) {
  return (ScheduleRuntimeClip*)THROW_UNLESS(il2cpp_utils::New("UnityEngine.Timeline", "ScheduleRuntimeClip", clip, clipPlayable, parentMixer, startDelay, finishTail));
}
// Autogenerated method: UnityEngine.Timeline.ScheduleRuntimeClip.Create
void UnityEngine::Timeline::ScheduleRuntimeClip::Create(UnityEngine::Timeline::TimelineClip* clip, UnityEngine::Playables::Playable clipPlayable, UnityEngine::Playables::Playable parentMixer, double startDelay, double finishTail) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Create", clip, clipPlayable, parentMixer, startDelay, finishTail));
}
// Autogenerated method: UnityEngine.Timeline.ScheduleRuntimeClip.get_start
double UnityEngine::Timeline::ScheduleRuntimeClip::get_start() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<double>(this, "get_start"));
}
// Autogenerated method: UnityEngine.Timeline.ScheduleRuntimeClip.get_duration
double UnityEngine::Timeline::ScheduleRuntimeClip::get_duration() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<double>(this, "get_duration"));
}
// Autogenerated method: UnityEngine.Timeline.ScheduleRuntimeClip.set_enable
void UnityEngine::Timeline::ScheduleRuntimeClip::set_enable(bool value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_enable", value));
}
// Autogenerated method: UnityEngine.Timeline.ScheduleRuntimeClip.EvaluateAt
void UnityEngine::Timeline::ScheduleRuntimeClip::EvaluateAt(double localTime, UnityEngine::Playables::FrameData frameData) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "EvaluateAt", localTime, frameData));
}
