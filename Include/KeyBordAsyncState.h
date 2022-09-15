#ifndef ONCE
#define ONCE

/*
* ÎÄµµ²Î¿¼
* https://docs.microsoft.com/zh-cn/windows/win32/inputdev/virtual-key-codes
* Ä¿µÄÎª¿ìËÙµØ»ñÈ¡¼üÅÌµÄÄ³¸ö»òÕßÈÎÒâ×éºÏ¼üµÄ×´Ì¬
*/

typedef struct KeyBoard
{
	unsigned int LButton;		//Êó±ê×ó¼ü
	unsigned int RButton;		//Êó±êÓÒ¼ü
	unsigned int Cancel;		//¿ØÖÆÖĞ¶Ï´¦Àí
	unsigned int MButton;		//Êó±êÖĞ¼ü
	unsigned int XButton1;		//Êó±ê°´¼üX1
	unsigned int XButton2;		//Êó±ê°´¼üX2

	unsigned int Back;			//backspace
	unsigned int Tab;			//tab
	unsigned int Clear;			//Clear
	unsigned int Enter;			//Enter
	unsigned int Shift;			//Shift
	unsigned int Ctrl;			//Ctrl
	unsigned int Alt;			//Alt
	unsigned int Pause;			//Pause
	unsigned int CapsLock;		//CapsLock

	unsigned int IMEKana;		//IME Kana
	unsigned int IMEHanguel;	//IME Hanguel
	unsigned int IMEOn;			//IME On
	unsigned int IMEJunja;		//IME Junja
	unsigned int IMEFinal;		//IME ×îÖÕÄ£Ê½
	unsigned int IMEKanji;		//IME Kanja
	unsigned int IMEOff;		//IME Off
	unsigned int Esc;			//esc
	unsigned int IMEConvert;	//IME ×ª»»
	unsigned int IMENoConvert;	//IME ²»×ª»»
	unsigned int IMEAccept;		//IME ½ÓÊÜ
	unsigned int IMEAModeChange;//IME Ä£Ê½¸ü¸ÄÇëÇó

	unsigned int Space;			//¿Õ¸ñ

	unsigned int PAGEUp;		//pg Up
	unsigned int PAGEDown;		//pg Down

	unsigned int End;			//end
	unsigned int Home;			//home

	unsigned int Left;			//×ó¼ü
	unsigned int Up;			//ÉÏ¼ü
	unsigned int Right;			//ÓÒ¼ü
	unsigned int Down;			//ÏÂ¼ü

	unsigned int Selct;			//SELECT
	unsigned int Print;			//PRINT
	unsigned int Execute;		//EXECUTE

	unsigned int PrtSc;			//´òÓ¡ÆÁÄ»¼ü
	unsigned int InsErt;		//insert
	unsigned int Delete;		//delete
	unsigned int Hellp;			//°ïÖú¼ü

	unsigned int _0_;			//Êı×Ö0
	unsigned int _1_;			//Êı×Ö1
	unsigned int _2_;			//Êı×Ö2
	unsigned int _3_;			//Êı×Ö3
	unsigned int _4_;			//Êı×Ö4
	unsigned int _5_;			//Êı×Ö5
	unsigned int _6_;			//Êı×Ö6
	unsigned int _7_;			//Êı×Ö7
	unsigned int _8_;			//Êı×Ö8
	unsigned int _9_;			//Êı×Ö9

	unsigned int _A_;			//×ÖÄ¸A¼ü
	unsigned int _B_;			//×ÖÄ¸B¼ü
	unsigned int _C_;			//×ÖÄ¸C¼ü
	unsigned int _D_;			//×ÖÄ¸D¼ü
	unsigned int _E_;			//×ÖÄ¸E¼ü
	unsigned int _F_;			//×ÖÄ¸F¼ü
	unsigned int _G_;			//×ÖÄ¸G¼ü
	unsigned int _H_;			//×ÖÄ¸H¼ü
	unsigned int _I_;			//×ÖÄ¸I¼ü
	unsigned int _J_;			//×ÖÄ¸J¼ü
	unsigned int _K_;			//×ÖÄ¸K¼ü
	unsigned int _L_;			//×ÖÄ¸L¼ü
	unsigned int _M_;			//×ÖÄ¸M¼ü
	unsigned int _N_;			//×ÖÄ¸N¼ü
	unsigned int _O_;			//×ÖÄ¸O¼ü
	unsigned int _P_;			//×ÖÄ¸P¼ü
	unsigned int _Q_;			//×ÖÄ¸Q¼ü
	unsigned int _R_;			//×ÖÄ¸R¼ü
	unsigned int _S_;			//×ÖÄ¸S¼ü
	unsigned int _T_;			//×ÖÄ¸T¼ü
	unsigned int _U_;			//×ÖÄ¸U¼ü
	unsigned int _V_;			//×ÖÄ¸V¼ü
	unsigned int _W_;			//×ÖÄ¸W¼ü
	unsigned int _X_;			//×ÖÄ¸X¼ü
	unsigned int _Y_;			//×ÖÄ¸Y¼ü
	unsigned int _Z_;			//×ÖÄ¸Z¼ü

	unsigned int LWin;			//×ówin
	unsigned int RWin;			//ÓÒwin
	unsigned int AppS;			//Ó¦ÓÃ³ÌĞò¼ü
	unsigned int Sleep;			//Ë¯Ãß¼ü

	unsigned int Num_0_;		//Êı×Ö¼üÅÌ0
	unsigned int Num_1_;		//Êı×Ö¼üÅÌ1
	unsigned int Num_2_;		//Êı×Ö¼üÅÌ2
	unsigned int Num_3_;		//Êı×Ö¼üÅÌ3
	unsigned int Num_4_;		//Êı×Ö¼üÅÌ4
	unsigned int Num_5_;		//Êı×Ö¼üÅÌ5
	unsigned int Num_6_;		//Êı×Ö¼üÅÌ6
	unsigned int Num_7_;		//Êı×Ö¼üÅÌ7
	unsigned int Num_8_;		//Êı×Ö¼üÅÌ8
	unsigned int Num_9_;		//Êı×Ö¼üÅÌ9

	unsigned int Mul;			// ¡Á¼ü
	unsigned int Add;			// +¼ü
	unsigned int Separator;		// ;¼ü
	unsigned int Sub;			// -¼ü
	unsigned int Div;			// /¼ü

	unsigned int F1;			//F1
	unsigned int F2;			//F2
	unsigned int F3;			//F3
	unsigned int F4;			//F4
	unsigned int F5;			//F5
	unsigned int F6;			//F6
	unsigned int F7;			//F7
	unsigned int F8;			//F8
	unsigned int F9;			//F9
	unsigned int F10;			//F10
	unsigned int F11;			//F11
	unsigned int F12;			//F12
	unsigned int F13;			//F13
	unsigned int F14;			//F14
	unsigned int F15;			//F15
	unsigned int F16;			//F16
	unsigned int F17;			//F17
	unsigned int F18;			//F18
	unsigned int F19;			//F19
	unsigned int F20;			//F20
	unsigned int F21;			//F21
	unsigned int F22;			//F22
	unsigned int F23;			//F23
	unsigned int F24;			//F24

	unsigned int LShift;		//×óshift
	unsigned int RShift;		//ÓÒshift
	unsigned int LCtrl;			//×óCtrl
	unsigned int RCtrl;			//ÓÒCtrl
	unsigned int LAlt;			//×óAlt
	unsigned int RAlt;			//ÓÒAlt

	unsigned int BriwseRBreak;		//ä¯ÀÀÆ÷ºóÍË¼ü
	unsigned int BriwseRForward;	//ä¯ÀÀÆ÷Ç°½ø¼ü
	unsigned int BriwseRRefresh;	//ä¯ÀÀÆ÷Ë¢ĞÂ¼ü
	unsigned int BriwseRStop;		//ä¯ÀÀÆ÷Í£Ö¹¼ü
	unsigned int BriwseRSearch;		//ä¯ÀÀÆ÷ËÑË÷¼ü
	unsigned int BriwseRFavorites;	//ä¯ÀÀÆ÷ÊÕ²Ø¼ü
	unsigned int BriwseRHome;		//ä¯ÀÀÆ÷¿ªÊ¼ºÍÖ÷Ò³¼ü
	unsigned int BriwseRMute;		//ä¯ÀÀÆ÷¾²Òô¼ü

	unsigned int VolumeMute;		//¾²Òô¼ü
	unsigned int VolumeDown;		//ÒôÁ¿¼õĞ¡¼ü
	unsigned int VolumeUp;			//ÒôÁ¿Ôö¼Ó¼ü

	unsigned int MedaNextTrack;		//ÏÂÒ»ÇúÄ¿¼ü
	unsigned int MedaPrevTrack;		//ÉÏÒ»ÇúÄ¿¼ü
	unsigned int MedaStop;			//Í£Ö¹Ã½Ìå¼ü
	unsigned int MedaPlayPause;		//²¥·ÅÔİÍ£Ã½Ìå¼ü
	unsigned int LaunchMail;		//Æô¶¯ÓÊ¼ş¼ü
	unsigned int LaunchMediaSelect;	//Ñ¡ÔñÃ½Ìå¼ü
	unsigned int LaunchApp1;		//Æô¶¯Ó¦ÓÃ³ÌĞò1¼ü
	unsigned int LaunchApp2;		//Æô¶¯Ó¦ÓÃ³ÌĞò2¼ü

	unsigned int Oem1;			//	;:
	unsigned int OemPlus;		//	+
	unsigned int OemComma;		//	,
	unsigned int OemMinus;		//	-
	unsigned int OemPeriod;		//	.
	unsigned int Oem2;			//	/?
	unsigned int Oem3;			//	~
	unsigned int Oem4;			//	[{
	unsigned int Oem5;			//	\|
	unsigned int Oem6;			//	]}
	unsigned int Oem7;			//	'"
	unsigned int Oem8;			//	;
	unsigned int Oem102;		//	"<>" »ò "\\|"	ÃÀ¹ú±ê×¼¼üÅÌ»ò·ÇÃÀ¹ú102

	unsigned int Processkey;	//IME ProcessÃÜÔ¿
	unsigned int Packet;		//ÓÃÓÚ½« Unicode ×Ö·ûµ±×÷¼ü»÷´«µİ¡£
	//¸Ã VK_PACKET ¼üÊÇÓÃÓÚ·Ç¼üÅÌÊäÈë·½·¨µÄ 32 Î»ĞéÄâ¼üÖµµÄµÍ×Ö¡£
	//ÓĞ¹ØÏêÏ¸ĞÅÏ¢£¬Çë²ÎÔÄ¡°±¸×¢¡±£¬ÒÔ¼°KEYBDINPUTSendInputWM_KEYDOWNWM_KEYUP
	unsigned int Attn;			//Attn¼ü
	unsigned int ExSel;			//ExSelÃÜÔ¿
	unsigned int ErEOF;			//²Á³ıEOFÃÜÔ¿
	unsigned int Play;			//²¥·Å¼ü
	unsigned int Zoom;			//Ëõ·Å¼ü
	unsigned int NoName;		//Ô¤Áô
	unsigned int AP1;			//AP1 ¼ü
	unsigned int OemClear;		//Çå³ı¼ü
}KeyBoard;

void keyBoardAsyncKeyState(KeyBoard* key1);

#endif