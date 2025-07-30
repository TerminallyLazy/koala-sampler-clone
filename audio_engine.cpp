// audio_engine.cpp
#include <napi.h>
#include "KoalaAudioEngine.h"

// Singleton instance of AudioEngine
static AudioEngine g_audioEngine;

Napi::Value TriggerPad(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  if (info.Length() < 1 || !info[0].IsNumber()) {
    Napi::TypeError::New(env, "Expected pad index as number").ThrowAsJavaScriptException();
    return env.Null();
  }
  int padIndex = info[0].As<Napi::Number>().Int32Value();
  g_audioEngine.triggerPad(padIndex);
  return env.Undefined();
}

Napi::Object Init(Napi::Env env, Napi::Object exports) {
  exports.Set("triggerPad", Napi::Function::New(env, TriggerPad));
  // TODO: Export other functions like pitchShift, record, overdub
  return exports;
}

NODE_API_MODULE(audio_engine, Init)
