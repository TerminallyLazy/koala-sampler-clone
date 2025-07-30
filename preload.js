const { contextBridge, ipcRenderer } = require('electron');

contextBridge.exposeInMainWorld('api', {
  triggerPad: (padIndex) => ipcRenderer.invoke('trigger-pad', padIndex),
  // Additional APIs for pitch-shift, record, overdub
});
