const { app, BrowserWindow, ipcMain } = require('electron');
const path = require('path');
const audioEngine = require('./build/Release/audio_engine.node');

function createWindow() {
  const win = new BrowserWindow({
    width: 1024,
    height: 768,
    webPreferences: {
      preload: path.join(__dirname, 'preload.js'),
      contextIsolation: true,
      nodeIntegration: false,
    }
  });

  win.loadURL('http://localhost:3000');
}

app.whenReady().then(createWindow);

ipcMain.handle('trigger-pad', (event, padIndex) => {
  audioEngine.triggerPad(padIndex);
  return true;
});

// Additional IPC handlers for pitch-shift, record, overdub can be added here
