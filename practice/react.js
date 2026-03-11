import { useState, useEffect } from "react";

const modules = [
  {
    id: "input",
    icon: "📷",
    title: "Input Acquisition",
    subtitle: "Camera / Browser Feed",
    desc: "Captures live video frames and converts them for processing",
    color: "#00D4FF",
    glow: "rgba(0,212,255,0.4)",
    x: 50,
    y: 50,
  },
  {
    id: "yolo",
    icon: "🧠",
    title: "YOLOv8n Detection Core",
    subtitle: "Deep Learning Model",
    desc: "Detects objects · Generates bounding boxes · Confidence ≥ 0.5",
    color: "#7C3AED",
    glow: "rgba(124,58,237,0.4)",
    x: 50,
    y: 50,
  },
  {
    id: "spatial",
    icon: "🗺️",
    title: "Spatial Analysis",
    subtitle: "Position Reasoning",
    desc: "Divides frame into Left / Center / Right zones",
    color: "#F59E0B",
    glow: "rgba(245,158,11,0.4)",
    x: 50,
    y: 50,
  },
  {
    id: "text",
    icon: "✍️",
    title: "Text Generation",
    subtitle: "NL Description Builder",
    desc: '"Person on the left" · "Car on the right" · "Chair in front"',
    color: "#10B981",
    glow: "rgba(16,185,129,0.4)",
    x: 50,
    y: 50,
  },
  {
    id: "tts",
    icon: "🔊",
    title: "Text-to-Speech",
    subtitle: "Speech Synthesis Engine",
    desc: "Converts descriptions into clear, real-time audio signals",
    color: "#F43F5E",
    glow: "rgba(244,63,94,0.4)",
    x: 50,
    y: 50,
  },
  {
    id: "audio",
    icon: "🎧",
    title: "Audio Output",
    subtitle: "Earphones / Headset / Speaker",
    desc: "Delivers spoken environmental awareness to the user",
    color: "#06B6D4",
    glow: "rgba(6,182,212,0.4)",
    x: 50,
    y: 50,
  },
];

const outputs = [
  { label: "Object Label", color: "#7C3AED" },
  { label: "Bounding Box", color: "#7C3AED" },
  { label: "Confidence Score", color: "#7C3AED" },
];

export default function ArchDiagram() {
  const [active, setActive] = useState(null);
  const [animated, setAnimated] = useState(false);

  useEffect(() => {
    setTimeout(() => setAnimated(true), 100);
    const interval = setInterval(() => {
      setActive((a) => {
        if (a === null) return 0;
        return (a + 1) % modules.length;
      });
    }, 1800);
    return () => clearInterval(interval);
  }, []);

  return (
    <div style={{
      minHeight: "100vh",
      background: "#080B14",
      fontFamily: "'Courier New', monospace",
      padding: "32px 24px",
      position: "relative",
      overflow: "hidden",
    }}>
      {/* Background grid */}
      <div style={{
        position: "absolute", inset: 0,
        backgroundImage: "linear-gradient(rgba(0,212,255,0.04) 1px, transparent 1px), linear-gradient(90deg, rgba(0,212,255,0.04) 1px, transparent 1px)",
        backgroundSize: "40px 40px",
        pointerEvents: "none",
      }} />

      {/* Title */}
      <div style={{ textAlign: "center", marginBottom: 36, position: "relative" }}>
        <div style={{
          display: "inline-block",
          border: "1px solid rgba(0,212,255,0.3)",
          padding: "4px 16px",
          borderRadius: 4,
          fontSize: 11,
          color: "#00D4FF",
          letterSpacing: 4,
          marginBottom: 12,
          textTransform: "uppercase",
        }}>System Architecture</div>
        <h1 style={{
          margin: 0,
          fontSize: "clamp(18px, 3vw, 28px)",
          fontWeight: 700,
          color: "#fff",
          letterSpacing: 1,
          lineHeight: 1.3,
        }}>
          AI-Based Assistive System
        </h1>
        <p style={{ color: "#4B6280", fontSize: 13, marginTop: 6, letterSpacing: 2 }}>
          FOR VISUALLY IMPAIRED INDIVIDUALS
        </p>
      </div>

      {/* Pipeline */}
      <div style={{
        display: "flex",
        flexDirection: "column",
        alignItems: "center",
        gap: 0,
        maxWidth: 660,
        margin: "0 auto",
        position: "relative",
      }}>
        {modules.map((mod, i) => {
          const isActive = active === i;
          return (
            <div key={mod.id} style={{ width: "100%", display: "flex", flexDirection: "column", alignItems: "center" }}>
              {/* Card */}
              <div
                onClick={() => setActive(i)}
                style={{
                  width: "100%",
                  background: isActive
                    ? `linear-gradient(135deg, rgba(${hexToRgb(mod.color)},0.15), rgba(${hexToRgb(mod.color)},0.05))`
                    : "rgba(255,255,255,0.03)",
                  border: `1px solid ${isActive ? mod.color : "rgba(255,255,255,0.08)"}`,
                  borderRadius: 12,
                  padding: "18px 24px",
                  cursor: "pointer",
                  transition: "all 0.4s cubic-bezier(0.4,0,0.2,1)",
                  boxShadow: isActive ? `0 0 30px ${mod.glow}, 0 0 60px ${mod.glow.replace("0.4", "0.1")}` : "none",
                  display: "flex",
                  alignItems: "center",
                  gap: 16,
                  opacity: animated ? 1 : 0,
                  transform: animated ? "translateY(0)" : "translateY(20px)",
                  transitionDelay: `${i * 0.08}s`,
                  position: "relative",
                  overflow: "hidden",
                }}
              >
                {/* Sweep line */}
                {isActive && (
                  <div style={{
                    position: "absolute",
                    top: 0, left: "-100%",
                    width: "60%",
                    height: "100%",
                    background: `linear-gradient(90deg, transparent, rgba(${hexToRgb(mod.color)},0.12), transparent)`,
                    animation: "sweep 1.5s ease-in-out infinite",
                  }} />
                )}

                {/* Step number */}
                <div style={{
                  width: 28,
                  height: 28,
                  borderRadius: "50%",
                  border: `2px solid ${mod.color}`,
                  display: "flex",
                  alignItems: "center",
                  justifyContent: "center",
                  fontSize: 11,
                  fontWeight: 700,
                  color: mod.color,
                  flexShrink: 0,
                  background: isActive ? `rgba(${hexToRgb(mod.color)},0.15)` : "transparent",
                }}>{i + 1}</div>

                {/* Icon */}
                <div style={{ fontSize: 28, flexShrink: 0 }}>{mod.icon}</div>

                {/* Text */}
                <div style={{ flex: 1 }}>
                  <div style={{
                    color: isActive ? mod.color : "#CBD5E1",
                    fontWeight: 700,
                    fontSize: 14,
                    letterSpacing: 0.5,
                    transition: "color 0.3s",
                  }}>{mod.title}</div>
                  <div style={{ color: "#64748B", fontSize: 11, letterSpacing: 1, marginTop: 2 }}>{mod.subtitle}</div>
                  {isActive && (
                    <div style={{
                      color: "#94A3B8",
                      fontSize: 12,
                      marginTop: 6,
                      lineHeight: 1.5,
                      animation: "fadeIn 0.3s ease",
                    }}>{mod.desc}</div>
                  )}
                </div>

                {/* YOLO badges */}
                {mod.id === "yolo" && (
                  <div style={{ display: "flex", flexDirection: "column", gap: 4, flexShrink: 0 }}>
                    {outputs.map((o) => (
                      <div key={o.label} style={{
                        fontSize: 9,
                        padding: "2px 8px",
                        borderRadius: 3,
                        border: `1px solid ${o.color}`,
                        color: o.color,
                        letterSpacing: 0.5,
                        whiteSpace: "nowrap",
                      }}>{o.label}</div>
                    ))}
                  </div>
                )}

                {/* Spatial badges */}
                {mod.id === "spatial" && (
                  <div style={{ display: "flex", gap: 6, flexShrink: 0 }}>
                    {["◀ LEFT", "■ CENTER", "▶ RIGHT"].map((z) => (
                      <div key={z} style={{
                        fontSize: 9,
                        padding: "3px 6px",
                        borderRadius: 3,
                        background: "rgba(245,158,11,0.1)",
                        border: "1px solid rgba(245,158,11,0.3)",
                        color: "#F59E0B",
                        letterSpacing: 0.5,
                      }}>{z}</div>
                    ))}
                  </div>
                )}

                {/* Status dot */}
                <div style={{
                  width: 8,
                  height: 8,
                  borderRadius: "50%",
                  background: isActive ? mod.color : "#1E293B",
                  flexShrink: 0,
                  boxShadow: isActive ? `0 0 8px ${mod.color}` : "none",
                  transition: "all 0.3s",
                }} />
              </div>

              {/* Arrow connector */}
              {i < modules.length - 1 && (
                <div style={{
                  display: "flex",
                  flexDirection: "column",
                  alignItems: "center",
                  height: 36,
                  position: "relative",
                }}>
                  <div style={{
                    width: 2,
                    flex: 1,
                    background: `linear-gradient(to bottom, ${modules[i].color}, ${modules[i + 1].color})`,
                    opacity: 0.5,
                  }} />
                  <div style={{
                    width: 0, height: 0,
                    borderLeft: "6px solid transparent",
                    borderRight: "6px solid transparent",
                    borderTop: `8px solid ${modules[i + 1].color}`,
                    opacity: 0.8,
                  }} />
                </div>
              )}
            </div>
          );
        })}
      </div>

      {/* Footer */}
      <div style={{
        textAlign: "center",
        marginTop: 36,
        color: "#1E3A5F",
        fontSize: 11,
        letterSpacing: 3,
      }}>
        ● REAL-TIME PROCESSING PIPELINE ●
      </div>

      <style>{`
        @keyframes sweep {
          0% { left: -100% }
          100% { left: 200% }
        }
        @keyframes fadeIn {
          from { opacity: 0; transform: translateY(-4px); }
          to { opacity: 1; transform: translateY(0); }
        }
      `}</style>
    </div>
  );
}

function hexToRgb(hex) {
  const r = parseInt(hex.slice(1, 3), 16);
  const g = parseInt(hex.slice(3, 5), 16);
  const b = parseInt(hex.slice(5, 7), 16);
  return `${r},${g},${b}`;
}