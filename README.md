# Koala Sampler Clone

This repository contains the Koala Sampler clone desktop app built with Electron, React, and a C++ audio engine native addon.

## Features
- Real-time audio processing
- Pad triggering with polyphony
- Pitch-shifting and waveform manipulation
- Recording and overdubbing support

## Setup

1. Clone the repository
2. Install dependencies:
   ```bash
   npm install
   npx node-gyp configure build
   ```
3. Start development:
   ```bash
   npm run start
   ```
4. Build production app:
   ```bash
   npm run build
   ```

## Usage

- Use the React UI to trigger pads and control audio features.
- The C++ native addon handles low-latency audio processing.

## Troubleshooting

- Ensure build tools and dependencies are installed.
- For issues, check the logs and open an issue.
