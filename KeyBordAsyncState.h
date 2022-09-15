#ifndef ONCE
#define ONCE

/*
* 文档参考
* https://docs.microsoft.com/zh-cn/windows/win32/inputdev/virtual-key-codes
* 目的为快速地获取键盘的某个或者任意组合键的状态
*/

typedef struct KeyBoard
{
	bool LButton;		//鼠标左键
	bool RButton;		//鼠标右键
	bool Cancel;		//控制中断处理
	bool MButton;		//鼠标中键
	bool XButton1;		//鼠标按键X1
	bool XButton2;		//鼠标按键X2

	bool Back;			//backspace
	bool Tab;			//tab
	bool Clear;			//Clear
	bool Enter;			//Enter
	bool Shift;			//Shift
	bool Ctrl;			//Ctrl
	bool Alt;			//Alt
	bool Pause;			//Pause
	bool CapsLock;		//CapsLock

	bool IMEKana;		//IME Kana
	bool IMEHanguel;	//IME Hanguel
	bool IMEOn;			//IME On
	bool IMEJunja;		//IME Junja
	bool IMEFinal;		//IME 最终模式
	bool IMEKanji;		//IME Kanja
	bool IMEOff;		//IME Off
	bool Esc;			//esc
	bool IMEConvert;	//IME 转换
	bool IMENoConvert;	//IME 不转换
	bool IMEAccept;		//IME 接受
	bool IMEAModeChange;//IME 模式更改请求

	bool Space;			//空格

	bool PAGEUp;		//pg Up
	bool PAGEDown;		//pg Down

	bool End;			//end
	bool Home;			//home

	bool Left;			//左键
	bool Up;			//上键
	bool Right;			//右键
	bool Down;			//下键

	bool Selct;			//SELECT
	bool Print;			//PRINT
	bool Execute;		//EXECUTE

	bool PrtSc;			//打印屏幕键
	bool InsErt;		//insert
	bool Delete;		//delete
	bool Hellp;			//帮助键

	bool _0_;			//数字0
	bool _1_;			//数字1
	bool _2_;			//数字2
	bool _3_;			//数字3
	bool _4_;			//数字4
	bool _5_;			//数字5
	bool _6_;			//数字6
	bool _7_;			//数字7
	bool _8_;			//数字8
	bool _9_;			//数字9

	bool _A_;			//字母A键
	bool _B_;			//字母B键
	bool _C_;			//字母C键
	bool _D_;			//字母D键
	bool _E_;			//字母E键
	bool _F_;			//字母F键
	bool _G_;			//字母G键
	bool _H_;			//字母H键
	bool _I_;			//字母I键
	bool _J_;			//字母J键
	bool _K_;			//字母K键
	bool _L_;			//字母L键
	bool _M_;			//字母M键
	bool _N_;			//字母N键
	bool _O_;			//字母O键
	bool _P_;			//字母P键
	bool _Q_;			//字母Q键
	bool _R_;			//字母R键
	bool _S_;			//字母S键
	bool _T_;			//字母T键
	bool _U_;			//字母U键
	bool _V_;			//字母V键
	bool _W_;			//字母W键
	bool _X_;			//字母X键
	bool _Y_;			//字母Y键
	bool _Z_;			//字母Z键

	bool LWin;			//左win
	bool RWin;			//右win
	bool AppS;			//应用程序键
	bool Sleep;			//睡眠键

	bool Num_0_;		//数字键盘0
	bool Num_1_;		//数字键盘1
	bool Num_2_;		//数字键盘2
	bool Num_3_;		//数字键盘3
	bool Num_4_;		//数字键盘4
	bool Num_5_;		//数字键盘5
	bool Num_6_;		//数字键盘6
	bool Num_7_;		//数字键盘7
	bool Num_8_;		//数字键盘8
	bool Num_9_;		//数字键盘9

	bool Mul;			// ×键
	bool Add;			// +键
	bool Separator;		// ;键
	bool Sub;			// -键
	bool Div;			// /键

	bool F1;			//F1
	bool F2;			//F2
	bool F3;			//F3
	bool F4;			//F4
	bool F5;			//F5
	bool F6;			//F6
	bool F7;			//F7
	bool F8;			//F8
	bool F9;			//F9
	bool F10;			//F10
	bool F11;			//F11
	bool F12;			//F12
	bool F13;			//F13
	bool F14;			//F14
	bool F15;			//F15
	bool F16;			//F16
	bool F17;			//F17
	bool F18;			//F18
	bool F19;			//F19
	bool F20;			//F20
	bool F21;			//F21
	bool F22;			//F22
	bool F23;			//F23
	bool F24;			//F24

	bool LShift;		//左shift
	bool RShift;		//右shift
	bool LCtrl;			//左Ctrl
	bool RCtrl;			//右Ctrl
	bool LAlt;			//左Alt
	bool RAlt;			//右Alt

	bool BriwseRBreak;		//浏览器后退键
	bool BriwseRForward;	//浏览器前进键
	bool BriwseRRefresh;	//浏览器刷新键
	bool BriwseRStop;		//浏览器停止键
	bool BriwseRSearch;		//浏览器搜索键
	bool BriwseRFavorites;	//浏览器收藏键
	bool BriwseRHome;		//浏览器开始和主页键
	bool BriwseRMute;		//浏览器静音键

	bool VolumeMute;		//静音键
	bool VolumeDown;		//音量减小键
	bool VolumeUp;			//音量增加键

	bool MedaNextTrack;		//下一曲目键
	bool MedaPrevTrack;		//上一曲目键
	bool MedaStop;			//停止媒体键
	bool MedaPlayPause;		//播放暂停媒体键
	bool LaunchMail;		//启动邮件键
	bool LaunchMediaSelect;	//选择媒体键
	bool LaunchApp1;		//启动应用程序1键
	bool LaunchApp2;		//启动应用程序2键

	bool Oem1;			//	;:
	bool OemPlus;		//	+
	bool OemComma;		//	,
	bool OemMinus;		//	-
	bool OemPeriod;		//	.
	bool Oem2;			//	/?
	bool Oem3;			//	~
	bool Oem4;			//	[{
	bool Oem5;			//	\|
	bool Oem6;			//	]}
	bool Oem7;			//	'"
	bool Oem8;			//	;
	bool Oem102;		//	"<>" 或 "\\|"	美国标准键盘或非美国102

	bool Processkey;	//IME Process密钥
	bool Packet;		//用于将 Unicode 字符当作键击传递。
	//该 VK_PACKET 键是用于非键盘输入方法的 32 位虚拟键值的低字。
	//有关详细信息，请参阅“备注”，以及KEYBDINPUTSendInputWM_KEYDOWNWM_KEYUP
	bool Attn;			//Attn键
	bool ExSel;			//ExSel密钥
	bool ErEOF;			//擦除EOF密钥
	bool Play;			//播放键
	bool Zoom;			//缩放键
	bool NoName;		//预留
	bool AP1;			//AP1 键
	bool OemClear;		//清除键
}KeyBoard;

void keyBoardAsyncKeyState(KeyBoard* key1);

#endif