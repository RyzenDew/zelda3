#pragma once
#include "types.h"
#include <SDL_keycode.h>

enum {
  kKeys_Controls = 0,
  kKeys_Controls_Last = kKeys_Controls + 11,
  kKeys_Load,
  kKeys_Load_Last = kKeys_Load + 19,
  kKeys_Save,
  kKeys_Save_Last = kKeys_Save + 19,
  kKeys_Replay,
  kKeys_Replay_Last = kKeys_Replay + 19,
  kKeys_LoadRef,
  kKeys_LoadRef_Last = kKeys_LoadRef + 19,
  kKeys_ReplayRef,
  kKeys_ReplayRef_Last = kKeys_ReplayRef + 19,
  kKeys_CheatLife,
  kKeys_CheatKeys,
  kKeys_CheatEquipment,
  kKeys_ClearKeyLog,
  kKeys_StopReplay,
  kKeys_Fullscreen,
  kKeys_Reset,
  kKeys_Pause,
  kKeys_PauseDimmed,
  kKeys_Turbo,
  kKeys_ReplayTurbo,
  kKeys_WindowBigger,
  kKeys_WindowSmaller,
  kKeys_DisplayPerf,
  kKeys_ToggleRenderer,
  kKeys_Total,
};

typedef struct Config {
  bool enhanced_mode7;
  bool new_renderer;
  bool ignore_aspect_ratio;
  uint8 fullscreen;
  uint8 window_scale;
  bool enable_audio;
  uint16 audio_freq;
  uint8 audio_channels;
  uint16 audio_samples;
  bool autosave;
  uint8 extended_aspect_ratio;
  bool extend_y, extended_aspect_ratio_nospr, extended_aspect_ratio_novis;
  bool no_sprite_limits;
  bool display_perf_title;
  bool enable_msu;
  bool item_switch_lr;
  bool turn_while_dashing;
  bool mirror_to_darkworld;
  bool collect_items_with_sword;
  bool break_pots_with_sword;
  bool disable_low_health_beep;
  bool skip_intro_on_keypress;
  bool show_max_items_in_yellow;
  bool more_active_bombs;
} Config;

extern Config g_config;

uint8 *ReadFile(const char *name, size_t *length);
void ParseConfigFile();
void AfterConfigParse();

int FindCmdForSdlKey(SDL_Keycode code, SDL_Keymod mod);