import React from 'react';

function Pad({ index }) {
  const handleClick = () => {
    window.api.triggerPad(index);
  };

  return (
    <button onClick={handleClick} style={{ width: 100, height: 100, margin: 5 }}>
      Pad {index + 1}
    </button>
  );
}

export default function App() {
  const pads = Array.from({ length: 16 }, (_, i) => i);
  return (
    <div style={{ display: 'flex', flexWrap: 'wrap', width: 440 }}>
      {pads.map(i => <Pad key={i} index={i} />)}
    </div>
  );
}
