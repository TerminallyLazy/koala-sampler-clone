// KoalaAudioEngine.h
#pragma once

#include <vector>
#include <string>
#include <atomic>
#include <mutex>

constexpr int kSampleRate = 44100;
constexpr int kMaxPads = 16;
constexpr int kMaxPolyphony = 4;

class AudioEngine {
public:
    AudioEngine();
    ~AudioEngine();

    bool loadSampleToPad(int padIndex, const std::string& filepath);
    void triggerPad(int padIndex, float pitchRatio = 1.0f, float gain = 1.0f);
    void stopPad(int padIndex);
    void processAudio(float* out, size_t frames);

private:
    // Internal pad and voice management
};
