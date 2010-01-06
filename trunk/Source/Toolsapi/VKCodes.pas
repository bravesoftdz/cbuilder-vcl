{ ********************************************************************** }
{                                                                        }
{ Kylix and Delphi Cross-Platform Open Tools API                         }
{                                                                        }
{ Copyright (C) 2000, 2001 Borland Software Corporation                  }
{                                                                        }
{ All Rights Reserved.                                                   }
{                                                                        }
{ ********************************************************************** }


unit VKCodes;

interface

const
  {$EXTERNALSYM VK_LBUTTON}
  VK_LBUTTON = 1;
  {$EXTERNALSYM VK_RBUTTON}
  VK_RBUTTON = 2;
  {$EXTERNALSYM VK_CANCEL}
  VK_CANCEL = 3;
  {$EXTERNALSYM VK_MBUTTON}
  VK_MBUTTON = 4;  { NOT contiguous with L & RBUTTON }
  {$EXTERNALSYM VK_BACK}
  VK_BACK = 8;
  {$EXTERNALSYM VK_TAB}
  VK_TAB = 9;
  {$EXTERNALSYM VK_CLEAR}
  VK_CLEAR = 12;
  {$EXTERNALSYM VK_RETURN}
  VK_RETURN = 13;
  {$EXTERNALSYM VK_SHIFT}
  VK_SHIFT = $10;
  {$EXTERNALSYM VK_CONTROL}
  VK_CONTROL = 17;
  {$EXTERNALSYM VK_MENU}
  VK_MENU = 18;
  {$EXTERNALSYM VK_PAUSE}
  VK_PAUSE = 19;
  {$EXTERNALSYM VK_CAPITAL}
  VK_CAPITAL = 20;
  {$EXTERNALSYM VK_KANA }
  VK_KANA = 21;
  {$EXTERNALSYM VK_HANGUL }
  VK_HANGUL = 21;
  {$EXTERNALSYM VK_JUNJA }
  VK_JUNJA = 23;
  {$EXTERNALSYM VK_FINAL }
  VK_FINAL = 24;
  {$EXTERNALSYM VK_HANJA }
  VK_HANJA = 25;
  {$EXTERNALSYM VK_KANJI }
  VK_KANJI = 25;
  {$EXTERNALSYM VK_CONVERT }
  VK_CONVERT = 28;
  {$EXTERNALSYM VK_NONCONVERT }
  VK_NONCONVERT = 29;
  {$EXTERNALSYM VK_ACCEPT }
  VK_ACCEPT = 30;
  {$EXTERNALSYM VK_MODECHANGE }
  VK_MODECHANGE = 31;
  {$EXTERNALSYM VK_ESCAPE}
  VK_ESCAPE = 27;
  {$EXTERNALSYM VK_SPACE}
  VK_SPACE = $20;
  {$EXTERNALSYM VK_PRIOR}
  VK_PRIOR = 33;
  {$EXTERNALSYM VK_NEXT}
  VK_NEXT = 34;
  {$EXTERNALSYM VK_END}
  VK_END = 35;
  {$EXTERNALSYM VK_HOME}
  VK_HOME = 36;
  {$EXTERNALSYM VK_LEFT}
  VK_LEFT = 37;
  {$EXTERNALSYM VK_UP}
  VK_UP = 38;
  {$EXTERNALSYM VK_RIGHT}
  VK_RIGHT = 39;
  {$EXTERNALSYM VK_DOWN}
  VK_DOWN = 40;
  {$EXTERNALSYM VK_SELECT}
  VK_SELECT = 41;
  {$EXTERNALSYM VK_PRINT}
  VK_PRINT = 42;
  {$EXTERNALSYM VK_EXECUTE}
  VK_EXECUTE = 43;
  {$EXTERNALSYM VK_SNAPSHOT}
  VK_SNAPSHOT = 44;
  {$EXTERNALSYM VK_INSERT}
  VK_INSERT = 45;
  {$EXTERNALSYM VK_DELETE}
  VK_DELETE = 46;
  {$EXTERNALSYM VK_HELP}
  VK_HELP = 47;
{ VK_0 thru VK_9 are the same as ASCII '0' thru '9' ($30 - $39) }
{ VK_A thru VK_Z are the same as ASCII 'A' thru 'Z' ($41 - $5A) }
  {$EXTERNALSYM VK_LWIN}
  VK_LWIN = 91;
  {$EXTERNALSYM VK_RWIN}
  VK_RWIN = 92;
  {$EXTERNALSYM VK_APPS}
  VK_APPS = 93;
  {$EXTERNALSYM VK_NUMPAD0}
  VK_NUMPAD0 = 96;
  {$EXTERNALSYM VK_NUMPAD1}
  VK_NUMPAD1 = 97;
  {$EXTERNALSYM VK_NUMPAD2}
  VK_NUMPAD2 = 98;
  {$EXTERNALSYM VK_NUMPAD3}
  VK_NUMPAD3 = 99;
  {$EXTERNALSYM VK_NUMPAD4}
  VK_NUMPAD4 = 100;
  {$EXTERNALSYM VK_NUMPAD5}
  VK_NUMPAD5 = 101;
  {$EXTERNALSYM VK_NUMPAD6}
  VK_NUMPAD6 = 102;
  {$EXTERNALSYM VK_NUMPAD7}
  VK_NUMPAD7 = 103;
  {$EXTERNALSYM VK_NUMPAD8}
  VK_NUMPAD8 = 104;
  {$EXTERNALSYM VK_NUMPAD9}
  VK_NUMPAD9 = 105;
  {$EXTERNALSYM VK_MULTIPLY}
  VK_MULTIPLY = 106;
  {$EXTERNALSYM VK_ADD}
  VK_ADD = 107;
  {$EXTERNALSYM VK_SEPARATOR}
  VK_SEPARATOR = 108;
  {$EXTERNALSYM VK_SUBTRACT}
  VK_SUBTRACT = 109;
  {$EXTERNALSYM VK_DECIMAL}
  VK_DECIMAL = 110;
  {$EXTERNALSYM VK_DIVIDE}
  VK_DIVIDE = 111;
  {$EXTERNALSYM VK_F1}
  VK_F1 = 112;
  {$EXTERNALSYM VK_F2}
  VK_F2 = 113;
  {$EXTERNALSYM VK_F3}
  VK_F3 = 114;
  {$EXTERNALSYM VK_F4}
  VK_F4 = 115;
  {$EXTERNALSYM VK_F5}
  VK_F5 = 116;
  {$EXTERNALSYM VK_F6}
  VK_F6 = 117;
  {$EXTERNALSYM VK_F7}
  VK_F7 = 118;
  {$EXTERNALSYM VK_F8}
  VK_F8 = 119;
  {$EXTERNALSYM VK_F9}
  VK_F9 = 120;
  {$EXTERNALSYM VK_F10}
  VK_F10 = 121;
  {$EXTERNALSYM VK_F11}
  VK_F11 = 122;
  {$EXTERNALSYM VK_F12}
  VK_F12 = 123;
  {$EXTERNALSYM VK_F13}
  VK_F13 = 124;
  {$EXTERNALSYM VK_F14}
  VK_F14 = 125;
  {$EXTERNALSYM VK_F15}
  VK_F15 = 126;
  {$EXTERNALSYM VK_F16}
  VK_F16 = 127;
  {$EXTERNALSYM VK_F17}
  VK_F17 = 128;
  {$EXTERNALSYM VK_F18}
  VK_F18 = 129;
  {$EXTERNALSYM VK_F19}
  VK_F19 = 130;
  {$EXTERNALSYM VK_F20}
  VK_F20 = 131;
  {$EXTERNALSYM VK_F21}
  VK_F21 = 132;
  {$EXTERNALSYM VK_F22}
  VK_F22 = 133;
  {$EXTERNALSYM VK_F23}
  VK_F23 = 134;
  {$EXTERNALSYM VK_F24}
  VK_F24 = 135;
  {$EXTERNALSYM VK_NUMLOCK}
  VK_NUMLOCK = 144;
  {$EXTERNALSYM VK_SCROLL}
  VK_SCROLL = 145;
{ VK_L & VK_R - left and right Alt, Ctrl and Shift virtual keys.
  Used only as parameters to GetAsyncKeyState() and GetKeyState().
  No other API or message will distinguish left and right keys in this way. }
  {$EXTERNALSYM VK_LSHIFT}
  VK_LSHIFT = 160;
  {$EXTERNALSYM VK_RSHIFT}
  VK_RSHIFT = 161;
  {$EXTERNALSYM VK_LCONTROL}
  VK_LCONTROL = 162;
  {$EXTERNALSYM VK_RCONTROL}
  VK_RCONTROL = 163;
  {$EXTERNALSYM VK_LMENU}
  VK_LMENU = 164;
  {$EXTERNALSYM VK_RMENU}
  VK_RMENU = 165;
  {$EXTERNALSYM VK_PROCESSKEY}
  VK_PROCESSKEY = 229;
  {$EXTERNALSYM VK_ATTN}
  VK_ATTN = 246;
  {$EXTERNALSYM VK_CRSEL}
  VK_CRSEL = 247;
  {$EXTERNALSYM VK_EXSEL}
  VK_EXSEL = 248;
  {$EXTERNALSYM VK_EREOF}
  VK_EREOF = 249;
  {$EXTERNALSYM VK_PLAY}
  VK_PLAY = 250;
  {$EXTERNALSYM VK_ZOOM}
  VK_ZOOM = 251;
  {$EXTERNALSYM VK_NONAME}
  VK_NONAME = 252;
  {$EXTERNALSYM VK_PA1}
  VK_PA1 = 253;
  {$EXTERNALSYM VK_OEM_CLEAR}
  VK_OEM_CLEAR = 254;

implementation

end.
