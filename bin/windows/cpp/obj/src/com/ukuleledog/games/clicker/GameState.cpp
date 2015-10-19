#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_com_ukuleledog_games_clicker_GameState
#include <com/ukuleledog/games/clicker/GameState.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_openfl__v2_display_DisplayObject
#include <openfl/_v2/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__v2_display_DisplayObjectContainer
#include <openfl/_v2/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl__v2_display_Graphics
#include <openfl/_v2/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl__v2_display_IBitmapDrawable
#include <openfl/_v2/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__v2_display_InteractiveObject
#include <openfl/_v2/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl__v2_display_Sprite
#include <openfl/_v2/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__v2_display_Stage
#include <openfl/_v2/display/Stage.h>
#endif
#ifndef INCLUDED_openfl__v2_events_Event
#include <openfl/_v2/events/Event.h>
#endif
#ifndef INCLUDED_openfl__v2_events_EventDispatcher
#include <openfl/_v2/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__v2_events_IEventDispatcher
#include <openfl/_v2/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__v2_events_MouseEvent
#include <openfl/_v2/events/MouseEvent.h>
#endif
#ifndef INCLUDED_openfl__v2_text_TextField
#include <openfl/_v2/text/TextField.h>
#endif
#ifndef INCLUDED_openfl__v2_utils_Timer
#include <openfl/_v2/utils/Timer.h>
#endif
#ifndef INCLUDED_openfl_events_TimerEvent
#include <openfl/events/TimerEvent.h>
#endif
namespace com{
namespace ukuleledog{
namespace games{
namespace clicker{

Void GameState_obj::__construct()
{
HX_STACK_FRAME("com.ukuleledog.games.clicker.GameState","new",0x85983655,"com.ukuleledog.games.clicker.GameState.new","com/ukuleledog/games/clicker/GameState.hx",14,0xf057845d)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(41)
	this->exploderBoostValue = (int)0;
	HX_STACK_LINE(40)
	this->moneyBoostValue = (int)1;
	HX_STACK_LINE(38)
	this->exploderBoostPrice = (int)100;
	HX_STACK_LINE(37)
	this->moneyBoostPrice = (int)50;
	HX_STACK_LINE(36)
	this->clickBoostPrice = (int)10;
	HX_STACK_LINE(21)
	this->currentPointsNeeded = (int)10;
	HX_STACK_LINE(20)
	this->currentPointValue = (int)1;
	HX_STACK_LINE(19)
	this->money = (int)0;
	HX_STACK_LINE(18)
	this->level = (int)1;
	HX_STACK_LINE(46)
	super::__construct();
	HX_STACK_LINE(48)
	this->points = (int)0;
	HX_STACK_LINE(49)
	this->level = (int)1;
	HX_STACK_LINE(50)
	this->currentPointValue = (int)1;
	HX_STACK_LINE(51)
	this->currentPointsNeeded = (int)10;
	HX_STACK_LINE(52)
	this->money = (int)0;
	HX_STACK_LINE(54)
	::openfl::_v2::text::TextField _g = ::openfl::_v2::text::TextField_obj::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(54)
	this->lblLevel = _g;
	HX_STACK_LINE(55)
	this->lblLevel->set_x((int)10);
	HX_STACK_LINE(56)
	this->lblLevel->set_y((int)10);
	HX_STACK_LINE(57)
	this->lblLevel->set_width((int)900);
	HX_STACK_LINE(58)
	this->lblLevel->set_selectable(false);
	HX_STACK_LINE(60)
	::openfl::_v2::text::TextField _g1 = ::openfl::_v2::text::TextField_obj::__new();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(60)
	this->lblCurrentPoints = _g1;
	HX_STACK_LINE(61)
	this->lblCurrentPoints->set_x((int)10);
	HX_STACK_LINE(62)
	this->lblCurrentPoints->set_y((int)25);
	HX_STACK_LINE(63)
	this->lblCurrentPoints->set_width((int)900);
	HX_STACK_LINE(64)
	this->lblCurrentPoints->set_selectable(false);
	HX_STACK_LINE(66)
	::openfl::_v2::text::TextField _g2 = ::openfl::_v2::text::TextField_obj::__new();		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(66)
	this->lblNeededPoints = _g2;
	HX_STACK_LINE(67)
	this->lblNeededPoints->set_x((int)10);
	HX_STACK_LINE(68)
	this->lblNeededPoints->set_y((int)40);
	HX_STACK_LINE(69)
	this->lblNeededPoints->set_width((int)900);
	HX_STACK_LINE(70)
	this->lblNeededPoints->set_selectable(false);
	HX_STACK_LINE(72)
	::openfl::_v2::text::TextField _g3 = ::openfl::_v2::text::TextField_obj::__new();		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(72)
	this->lblMoney = _g3;
	HX_STACK_LINE(73)
	this->lblMoney->set_x((int)10);
	HX_STACK_LINE(74)
	this->lblMoney->set_y((int)55);
	HX_STACK_LINE(75)
	this->lblMoney->set_width((int)900);
	HX_STACK_LINE(76)
	this->lblMoney->set_selectable(false);
	HX_STACK_LINE(78)
	::openfl::_v2::display::Sprite _g4 = ::openfl::_v2::display::Sprite_obj::__new();		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(78)
	this->clickBoost = _g4;
	HX_STACK_LINE(79)
	this->clickBoost->get_graphics()->beginFill((int)16711680,null());
	HX_STACK_LINE(80)
	this->clickBoost->get_graphics()->drawRect((int)0,(int)0,(int)64,(int)64);
	HX_STACK_LINE(81)
	this->clickBoost->get_graphics()->endFill();
	HX_STACK_LINE(82)
	this->clickBoost->set_x((int)10);
	HX_STACK_LINE(83)
	this->clickBoost->set_y((int)200);
	HX_STACK_LINE(84)
	this->clickBoost->buttonMode = true;
	HX_STACK_LINE(85)
	this->clickBoost->addEventListener(::openfl::_v2::events::MouseEvent_obj::MOUSE_UP,this->clickBoostHandler_dyn(),null(),null(),null());
	HX_STACK_LINE(87)
	::openfl::_v2::text::TextField _g5 = ::openfl::_v2::text::TextField_obj::__new();		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(87)
	this->lblClickBoost = _g5;
	HX_STACK_LINE(88)
	this->lblClickBoost->set_mouseEnabled(false);
	HX_STACK_LINE(89)
	this->lblClickBoost->set_selectable(false);
	HX_STACK_LINE(90)
	this->clickBoost->addChild(this->lblClickBoost);
	HX_STACK_LINE(92)
	::openfl::_v2::display::Sprite _g6 = ::openfl::_v2::display::Sprite_obj::__new();		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(92)
	this->moneyBoost = _g6;
	HX_STACK_LINE(93)
	this->moneyBoost->get_graphics()->beginFill((int)65280,null());
	HX_STACK_LINE(94)
	this->moneyBoost->get_graphics()->drawRect((int)0,(int)0,(int)64,(int)64);
	HX_STACK_LINE(95)
	this->moneyBoost->get_graphics()->endFill();
	HX_STACK_LINE(96)
	this->moneyBoost->set_x((int)10);
	HX_STACK_LINE(97)
	this->moneyBoost->set_y((int)300);
	HX_STACK_LINE(98)
	this->moneyBoost->buttonMode = true;
	HX_STACK_LINE(99)
	this->moneyBoost->addEventListener(::openfl::_v2::events::MouseEvent_obj::MOUSE_UP,this->moneyBoostHandler_dyn(),null(),null(),null());
	HX_STACK_LINE(101)
	::openfl::_v2::text::TextField _g7 = ::openfl::_v2::text::TextField_obj::__new();		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(101)
	this->lblMoneyBoost = _g7;
	HX_STACK_LINE(102)
	this->lblMoneyBoost->set_mouseEnabled(false);
	HX_STACK_LINE(103)
	this->lblMoneyBoost->set_selectable(false);
	HX_STACK_LINE(104)
	this->moneyBoost->addChild(this->lblMoneyBoost);
	HX_STACK_LINE(106)
	::openfl::_v2::display::Sprite _g8 = ::openfl::_v2::display::Sprite_obj::__new();		HX_STACK_VAR(_g8,"_g8");
	HX_STACK_LINE(106)
	this->exploderBoost = _g8;
	HX_STACK_LINE(107)
	this->exploderBoost->get_graphics()->beginFill((int)255,null());
	HX_STACK_LINE(108)
	this->exploderBoost->get_graphics()->drawRect((int)0,(int)0,(int)64,(int)64);
	HX_STACK_LINE(109)
	this->exploderBoost->get_graphics()->endFill();
	HX_STACK_LINE(110)
	this->exploderBoost->set_x((int)10);
	HX_STACK_LINE(111)
	this->exploderBoost->set_y((int)400);
	HX_STACK_LINE(112)
	this->exploderBoost->buttonMode = true;
	HX_STACK_LINE(113)
	this->exploderBoost->addEventListener(::openfl::_v2::events::MouseEvent_obj::MOUSE_UP,this->exploderBoostHandler_dyn(),null(),null(),null());
	HX_STACK_LINE(115)
	::openfl::_v2::text::TextField _g9 = ::openfl::_v2::text::TextField_obj::__new();		HX_STACK_VAR(_g9,"_g9");
	HX_STACK_LINE(115)
	this->lblExploderBoost = _g9;
	HX_STACK_LINE(116)
	this->lblExploderBoost->set_mouseEnabled(false);
	HX_STACK_LINE(117)
	this->lblExploderBoost->set_selectable(false);
	HX_STACK_LINE(118)
	this->exploderBoost->addChild(this->lblExploderBoost);
	HX_STACK_LINE(120)
	::openfl::_v2::utils::Timer _g10 = ::openfl::_v2::utils::Timer_obj::__new((int)1000,null());		HX_STACK_VAR(_g10,"_g10");
	HX_STACK_LINE(120)
	this->exploderTimer = _g10;
	HX_STACK_LINE(121)
	this->exploderTimer->addEventListener(::openfl::events::TimerEvent_obj::TIMER,this->exploderHandler_dyn(),null(),null(),null());
	HX_STACK_LINE(122)
	this->exploderTimer->start();
	HX_STACK_LINE(124)
	this->addEventListener(::openfl::_v2::events::Event_obj::ADDED_TO_STAGE,this->init_dyn(),null(),null(),null());
}
;
	return null();
}

//GameState_obj::~GameState_obj() { }

Dynamic GameState_obj::__CreateEmpty() { return  new GameState_obj; }
hx::ObjectPtr< GameState_obj > GameState_obj::__new()
{  hx::ObjectPtr< GameState_obj > result = new GameState_obj();
	result->__construct();
	return result;}

Dynamic GameState_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GameState_obj > result = new GameState_obj();
	result->__construct();
	return result;}

Void GameState_obj::init( ::openfl::_v2::events::Event e){
{
		HX_STACK_FRAME("com.ukuleledog.games.clicker.GameState","init",0x5c500b7b,"com.ukuleledog.games.clicker.GameState.init","com/ukuleledog/games/clicker/GameState.hx",128,0xf057845d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(129)
		this->removeEventListener(::openfl::_v2::events::Event_obj::ADDED_TO_STAGE,this->init_dyn(),null());
		HX_STACK_LINE(130)
		this->addEventListener(::openfl::_v2::events::Event_obj::ENTER_FRAME,this->loop_dyn(),null(),null(),null());
		HX_STACK_LINE(132)
		this->addChild(this->lblLevel);
		HX_STACK_LINE(133)
		this->addChild(this->lblCurrentPoints);
		HX_STACK_LINE(134)
		this->addChild(this->lblNeededPoints);
		HX_STACK_LINE(135)
		this->addChild(this->lblMoney);
		HX_STACK_LINE(137)
		this->addChild(this->clickBoost);
		HX_STACK_LINE(138)
		this->addChild(this->moneyBoost);
		HX_STACK_LINE(139)
		this->addChild(this->exploderBoost);
		HX_STACK_LINE(141)
		this->get_stage()->addEventListener(::openfl::_v2::events::MouseEvent_obj::MOUSE_UP,this->mouseUpHandler_dyn(),null(),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GameState_obj,init,(void))

Void GameState_obj::mouseUpHandler( ::openfl::_v2::events::MouseEvent e){
{
		HX_STACK_FRAME("com.ukuleledog.games.clicker.GameState","mouseUpHandler",0x3f1bc3f5,"com.ukuleledog.games.clicker.GameState.mouseUpHandler","com/ukuleledog/games/clicker/GameState.hx",145,0xf057845d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(146)
		this->points = (this->points + this->currentPointValue);
		struct _Function_1_1{
			inline static bool Block( hx::ObjectPtr< ::com::ukuleledog::games::clicker::GameState_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/clicker/GameState.hx",148,0xf057845d)
				{
					HX_STACK_LINE(148)
					int a = __this->points;		HX_STACK_VAR(a,"a");
					HX_STACK_LINE(148)
					int b = __this->currentPointsNeeded;		HX_STACK_VAR(b,"b");
					HX_STACK_LINE(148)
					bool aNeg = (a < (int)0);		HX_STACK_VAR(aNeg,"aNeg");
					HX_STACK_LINE(148)
					bool bNeg = (b < (int)0);		HX_STACK_VAR(bNeg,"bNeg");
					HX_STACK_LINE(148)
					return (  (((aNeg != bNeg))) ? bool(aNeg) : bool((a >= b)) );
				}
				return null();
			}
		};
		HX_STACK_LINE(148)
		if ((_Function_1_1::Block(this))){
			HX_STACK_LINE(150)
			(this->level)++;
			HX_STACK_LINE(151)
			this->currentPointsNeeded = (this->currentPointsNeeded * (int)2);
			HX_STACK_LINE(152)
			int _g2;		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(152)
			{
				HX_STACK_LINE(152)
				int b;		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(152)
				{
					HX_STACK_LINE(152)
					int a;		HX_STACK_VAR(a,"a");
					HX_STACK_LINE(152)
					{
						HX_STACK_LINE(152)
						Float _g = ::Math_obj::random();		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(152)
						Float _g1 = (_g * (int)10);		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(152)
						int a1 = ::Math_obj::round(_g1);		HX_STACK_VAR(a1,"a1");
						HX_STACK_LINE(152)
						a = (a1 * this->level);
					}
					HX_STACK_LINE(152)
					b = (a * this->moneyBoostValue);
				}
				HX_STACK_LINE(152)
				_g2 = (this->money + b);
			}
			HX_STACK_LINE(152)
			this->money = _g2;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GameState_obj,mouseUpHandler,(void))

Void GameState_obj::loop( ::openfl::_v2::events::Event e){
{
		HX_STACK_FRAME("com.ukuleledog.games.clicker.GameState","loop",0x5e4c76cf,"com.ukuleledog.games.clicker.GameState.loop","com/ukuleledog/games/clicker/GameState.hx",158,0xf057845d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		struct _Function_1_1{
			inline static Float Block( hx::ObjectPtr< ::com::ukuleledog::games::clicker::GameState_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/clicker/GameState.hx",159,0xf057845d)
				{
					HX_STACK_LINE(159)
					int _int = __this->level;		HX_STACK_VAR(_int,"int");
					HX_STACK_LINE(159)
					return (  (((_int < (int)0))) ? Float((4294967296.0 + _int)) : Float((_int + 0.0)) );
				}
				return null();
			}
		};
		HX_STACK_LINE(159)
		::String _g = ::Std_obj::string(_Function_1_1::Block(this));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(159)
		::String _g1 = (HX_CSTRING("Level: ") + _g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(159)
		this->lblLevel->set_text(_g1);
		struct _Function_1_2{
			inline static Float Block( hx::ObjectPtr< ::com::ukuleledog::games::clicker::GameState_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/clicker/GameState.hx",160,0xf057845d)
				{
					HX_STACK_LINE(160)
					int _int = __this->currentPointValue;		HX_STACK_VAR(_int,"int");
					HX_STACK_LINE(160)
					return (  (((_int < (int)0))) ? Float((4294967296.0 + _int)) : Float((_int + 0.0)) );
				}
				return null();
			}
		};
		HX_STACK_LINE(160)
		::String _g2 = ::Std_obj::string(_Function_1_2::Block(this));		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(160)
		::String _g3 = (HX_CSTRING("Click value: ") + _g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(160)
		this->lblCurrentPoints->set_text(_g3);
		struct _Function_1_3{
			inline static Float Block( hx::ObjectPtr< ::com::ukuleledog::games::clicker::GameState_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/clicker/GameState.hx",161,0xf057845d)
				{
					HX_STACK_LINE(161)
					int _int = (__this->currentPointsNeeded - __this->points);		HX_STACK_VAR(_int,"int");
					HX_STACK_LINE(161)
					return (  (((_int < (int)0))) ? Float((4294967296.0 + _int)) : Float((_int + 0.0)) );
				}
				return null();
			}
		};
		HX_STACK_LINE(161)
		::String _g4 = ::Std_obj::string(_Function_1_3::Block(this));		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(161)
		::String _g5 = (HX_CSTRING("Needed points: ") + _g4);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(161)
		this->lblNeededPoints->set_text(_g5);
		struct _Function_1_4{
			inline static Float Block( hx::ObjectPtr< ::com::ukuleledog::games::clicker::GameState_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/clicker/GameState.hx",162,0xf057845d)
				{
					HX_STACK_LINE(162)
					int _int = __this->money;		HX_STACK_VAR(_int,"int");
					HX_STACK_LINE(162)
					return (  (((_int < (int)0))) ? Float((4294967296.0 + _int)) : Float((_int + 0.0)) );
				}
				return null();
			}
		};
		HX_STACK_LINE(162)
		::String _g6 = ::Std_obj::string(_Function_1_4::Block(this));		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(162)
		::String _g7 = (HX_CSTRING("Money: $") + _g6);		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(162)
		this->lblMoney->set_text(_g7);
		struct _Function_1_5{
			inline static Float Block( hx::ObjectPtr< ::com::ukuleledog::games::clicker::GameState_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/clicker/GameState.hx",164,0xf057845d)
				{
					HX_STACK_LINE(164)
					int _int = __this->clickBoostPrice;		HX_STACK_VAR(_int,"int");
					HX_STACK_LINE(164)
					return (  (((_int < (int)0))) ? Float((4294967296.0 + _int)) : Float((_int + 0.0)) );
				}
				return null();
			}
		};
		HX_STACK_LINE(164)
		::String _g8 = ::Std_obj::string(_Function_1_5::Block(this));		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(164)
		::String _g9 = (HX_CSTRING("$") + _g8);		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(164)
		this->lblClickBoost->set_text(_g9);
		struct _Function_1_6{
			inline static Float Block( hx::ObjectPtr< ::com::ukuleledog::games::clicker::GameState_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/clicker/GameState.hx",165,0xf057845d)
				{
					HX_STACK_LINE(165)
					int _int = __this->moneyBoostPrice;		HX_STACK_VAR(_int,"int");
					HX_STACK_LINE(165)
					return (  (((_int < (int)0))) ? Float((4294967296.0 + _int)) : Float((_int + 0.0)) );
				}
				return null();
			}
		};
		HX_STACK_LINE(165)
		::String _g10 = ::Std_obj::string(_Function_1_6::Block(this));		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(165)
		::String _g11 = (HX_CSTRING("$") + _g10);		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(165)
		this->lblMoneyBoost->set_text(_g11);
		struct _Function_1_7{
			inline static Float Block( hx::ObjectPtr< ::com::ukuleledog::games::clicker::GameState_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/clicker/GameState.hx",166,0xf057845d)
				{
					HX_STACK_LINE(166)
					int _int = __this->exploderBoostPrice;		HX_STACK_VAR(_int,"int");
					HX_STACK_LINE(166)
					return (  (((_int < (int)0))) ? Float((4294967296.0 + _int)) : Float((_int + 0.0)) );
				}
				return null();
			}
		};
		HX_STACK_LINE(166)
		::String _g12 = ::Std_obj::string(_Function_1_7::Block(this));		HX_STACK_VAR(_g12,"_g12");
		HX_STACK_LINE(166)
		::String _g13 = (HX_CSTRING("$") + _g12);		HX_STACK_VAR(_g13,"_g13");
		HX_STACK_LINE(166)
		this->lblExploderBoost->set_text(_g13);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GameState_obj,loop,(void))

Void GameState_obj::exploderHandler( ::openfl::events::TimerEvent e){
{
		HX_STACK_FRAME("com.ukuleledog.games.clicker.GameState","exploderHandler",0x19e1afce,"com.ukuleledog.games.clicker.GameState.exploderHandler","com/ukuleledog/games/clicker/GameState.hx",171,0xf057845d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(171)
		this->currentPointsNeeded = (this->currentPointsNeeded - this->exploderBoostValue);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GameState_obj,exploderHandler,(void))

Void GameState_obj::clickBoostHandler( ::openfl::_v2::events::MouseEvent e){
{
		HX_STACK_FRAME("com.ukuleledog.games.clicker.GameState","clickBoostHandler",0xbbf04804,"com.ukuleledog.games.clicker.GameState.clickBoostHandler","com/ukuleledog/games/clicker/GameState.hx",176,0xf057845d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		struct _Function_1_1{
			inline static bool Block( hx::ObjectPtr< ::com::ukuleledog::games::clicker::GameState_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/clicker/GameState.hx",176,0xf057845d)
				{
					HX_STACK_LINE(176)
					int a = __this->money;		HX_STACK_VAR(a,"a");
					HX_STACK_LINE(176)
					int b = __this->clickBoostPrice;		HX_STACK_VAR(b,"b");
					HX_STACK_LINE(176)
					bool aNeg = (a < (int)0);		HX_STACK_VAR(aNeg,"aNeg");
					HX_STACK_LINE(176)
					bool bNeg = (b < (int)0);		HX_STACK_VAR(bNeg,"bNeg");
					HX_STACK_LINE(176)
					return (  (((aNeg != bNeg))) ? bool(aNeg) : bool((a >= b)) );
				}
				return null();
			}
		};
		HX_STACK_LINE(176)
		if ((_Function_1_1::Block(this))){
			HX_STACK_LINE(178)
			this->money = (this->money - this->clickBoostPrice);
			HX_STACK_LINE(179)
			this->clickBoostPrice = (this->clickBoostPrice * (int)2);
			HX_STACK_LINE(180)
			this->currentPointValue = (this->currentPointValue * (int)2);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GameState_obj,clickBoostHandler,(void))

Void GameState_obj::moneyBoostHandler( ::openfl::_v2::events::MouseEvent e){
{
		HX_STACK_FRAME("com.ukuleledog.games.clicker.GameState","moneyBoostHandler",0x6dd299fc,"com.ukuleledog.games.clicker.GameState.moneyBoostHandler","com/ukuleledog/games/clicker/GameState.hx",186,0xf057845d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		struct _Function_1_1{
			inline static bool Block( hx::ObjectPtr< ::com::ukuleledog::games::clicker::GameState_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/clicker/GameState.hx",186,0xf057845d)
				{
					HX_STACK_LINE(186)
					int a = __this->money;		HX_STACK_VAR(a,"a");
					HX_STACK_LINE(186)
					int b = __this->moneyBoostPrice;		HX_STACK_VAR(b,"b");
					HX_STACK_LINE(186)
					bool aNeg = (a < (int)0);		HX_STACK_VAR(aNeg,"aNeg");
					HX_STACK_LINE(186)
					bool bNeg = (b < (int)0);		HX_STACK_VAR(bNeg,"bNeg");
					HX_STACK_LINE(186)
					return (  (((aNeg != bNeg))) ? bool(aNeg) : bool((a >= b)) );
				}
				return null();
			}
		};
		HX_STACK_LINE(186)
		if ((_Function_1_1::Block(this))){
			HX_STACK_LINE(188)
			this->money = (this->money - this->moneyBoostPrice);
			HX_STACK_LINE(189)
			this->moneyBoostPrice = (this->moneyBoostPrice * (int)2);
			HX_STACK_LINE(190)
			this->moneyBoostValue = (this->moneyBoostValue * (int)2);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GameState_obj,moneyBoostHandler,(void))

Void GameState_obj::exploderBoostHandler( ::openfl::_v2::events::MouseEvent e){
{
		HX_STACK_FRAME("com.ukuleledog.games.clicker.GameState","exploderBoostHandler",0xc6589c63,"com.ukuleledog.games.clicker.GameState.exploderBoostHandler","com/ukuleledog/games/clicker/GameState.hx",196,0xf057845d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		struct _Function_1_1{
			inline static bool Block( hx::ObjectPtr< ::com::ukuleledog::games::clicker::GameState_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/clicker/GameState.hx",196,0xf057845d)
				{
					HX_STACK_LINE(196)
					int a = __this->money;		HX_STACK_VAR(a,"a");
					HX_STACK_LINE(196)
					int b = __this->exploderBoostPrice;		HX_STACK_VAR(b,"b");
					HX_STACK_LINE(196)
					bool aNeg = (a < (int)0);		HX_STACK_VAR(aNeg,"aNeg");
					HX_STACK_LINE(196)
					bool bNeg = (b < (int)0);		HX_STACK_VAR(bNeg,"bNeg");
					HX_STACK_LINE(196)
					return (  (((aNeg != bNeg))) ? bool(aNeg) : bool((a >= b)) );
				}
				return null();
			}
		};
		HX_STACK_LINE(196)
		if ((_Function_1_1::Block(this))){
			HX_STACK_LINE(198)
			this->money = (this->money - this->exploderBoostPrice);
			HX_STACK_LINE(199)
			this->exploderBoostPrice = (this->exploderBoostPrice * (int)2);
			struct _Function_2_1{
				inline static bool Block( hx::ObjectPtr< ::com::ukuleledog::games::clicker::GameState_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/clicker/GameState.hx",201,0xf057845d)
					{
						HX_STACK_LINE(201)
						int a = __this->exploderBoostValue;		HX_STACK_VAR(a,"a");
						HX_STACK_LINE(201)
						bool aNeg = (a < (int)0);		HX_STACK_VAR(aNeg,"aNeg");
						HX_STACK_LINE(201)
						bool bNeg = ((int)0 < (int)0);		HX_STACK_VAR(bNeg,"bNeg");
						HX_STACK_LINE(201)
						return (  (((aNeg != bNeg))) ? bool(aNeg) : bool((a > (int)0)) );
					}
					return null();
				}
			};
			HX_STACK_LINE(201)
			if ((_Function_2_1::Block(this))){
				HX_STACK_LINE(202)
				this->exploderBoostValue = (this->exploderBoostValue * (int)2);
			}
			else{
				HX_STACK_LINE(204)
				this->exploderBoostValue = (int)2;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GameState_obj,exploderBoostHandler,(void))


GameState_obj::GameState_obj()
{
}

void GameState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GameState);
	HX_MARK_MEMBER_NAME(points,"points");
	HX_MARK_MEMBER_NAME(level,"level");
	HX_MARK_MEMBER_NAME(money,"money");
	HX_MARK_MEMBER_NAME(currentPointValue,"currentPointValue");
	HX_MARK_MEMBER_NAME(currentPointsNeeded,"currentPointsNeeded");
	HX_MARK_MEMBER_NAME(lblLevel,"lblLevel");
	HX_MARK_MEMBER_NAME(lblCurrentPoints,"lblCurrentPoints");
	HX_MARK_MEMBER_NAME(lblNeededPoints,"lblNeededPoints");
	HX_MARK_MEMBER_NAME(lblMoney,"lblMoney");
	HX_MARK_MEMBER_NAME(clickBoost,"clickBoost");
	HX_MARK_MEMBER_NAME(moneyBoost,"moneyBoost");
	HX_MARK_MEMBER_NAME(exploderBoost,"exploderBoost");
	HX_MARK_MEMBER_NAME(lblClickBoost,"lblClickBoost");
	HX_MARK_MEMBER_NAME(lblMoneyBoost,"lblMoneyBoost");
	HX_MARK_MEMBER_NAME(lblExploderBoost,"lblExploderBoost");
	HX_MARK_MEMBER_NAME(clickBoostPrice,"clickBoostPrice");
	HX_MARK_MEMBER_NAME(moneyBoostPrice,"moneyBoostPrice");
	HX_MARK_MEMBER_NAME(exploderBoostPrice,"exploderBoostPrice");
	HX_MARK_MEMBER_NAME(moneyBoostValue,"moneyBoostValue");
	HX_MARK_MEMBER_NAME(exploderBoostValue,"exploderBoostValue");
	HX_MARK_MEMBER_NAME(exploderTimer,"exploderTimer");
	::openfl::_v2::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void GameState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(points,"points");
	HX_VISIT_MEMBER_NAME(level,"level");
	HX_VISIT_MEMBER_NAME(money,"money");
	HX_VISIT_MEMBER_NAME(currentPointValue,"currentPointValue");
	HX_VISIT_MEMBER_NAME(currentPointsNeeded,"currentPointsNeeded");
	HX_VISIT_MEMBER_NAME(lblLevel,"lblLevel");
	HX_VISIT_MEMBER_NAME(lblCurrentPoints,"lblCurrentPoints");
	HX_VISIT_MEMBER_NAME(lblNeededPoints,"lblNeededPoints");
	HX_VISIT_MEMBER_NAME(lblMoney,"lblMoney");
	HX_VISIT_MEMBER_NAME(clickBoost,"clickBoost");
	HX_VISIT_MEMBER_NAME(moneyBoost,"moneyBoost");
	HX_VISIT_MEMBER_NAME(exploderBoost,"exploderBoost");
	HX_VISIT_MEMBER_NAME(lblClickBoost,"lblClickBoost");
	HX_VISIT_MEMBER_NAME(lblMoneyBoost,"lblMoneyBoost");
	HX_VISIT_MEMBER_NAME(lblExploderBoost,"lblExploderBoost");
	HX_VISIT_MEMBER_NAME(clickBoostPrice,"clickBoostPrice");
	HX_VISIT_MEMBER_NAME(moneyBoostPrice,"moneyBoostPrice");
	HX_VISIT_MEMBER_NAME(exploderBoostPrice,"exploderBoostPrice");
	HX_VISIT_MEMBER_NAME(moneyBoostValue,"moneyBoostValue");
	HX_VISIT_MEMBER_NAME(exploderBoostValue,"exploderBoostValue");
	HX_VISIT_MEMBER_NAME(exploderTimer,"exploderTimer");
	::openfl::_v2::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic GameState_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		if (HX_FIELD_EQ(inName,"loop") ) { return loop_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"level") ) { return level; }
		if (HX_FIELD_EQ(inName,"money") ) { return money; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"points") ) { return points; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"lblLevel") ) { return lblLevel; }
		if (HX_FIELD_EQ(inName,"lblMoney") ) { return lblMoney; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"clickBoost") ) { return clickBoost; }
		if (HX_FIELD_EQ(inName,"moneyBoost") ) { return moneyBoost; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"exploderBoost") ) { return exploderBoost; }
		if (HX_FIELD_EQ(inName,"lblClickBoost") ) { return lblClickBoost; }
		if (HX_FIELD_EQ(inName,"lblMoneyBoost") ) { return lblMoneyBoost; }
		if (HX_FIELD_EQ(inName,"exploderTimer") ) { return exploderTimer; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"mouseUpHandler") ) { return mouseUpHandler_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"lblNeededPoints") ) { return lblNeededPoints; }
		if (HX_FIELD_EQ(inName,"clickBoostPrice") ) { return clickBoostPrice; }
		if (HX_FIELD_EQ(inName,"moneyBoostPrice") ) { return moneyBoostPrice; }
		if (HX_FIELD_EQ(inName,"moneyBoostValue") ) { return moneyBoostValue; }
		if (HX_FIELD_EQ(inName,"exploderHandler") ) { return exploderHandler_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"lblCurrentPoints") ) { return lblCurrentPoints; }
		if (HX_FIELD_EQ(inName,"lblExploderBoost") ) { return lblExploderBoost; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"currentPointValue") ) { return currentPointValue; }
		if (HX_FIELD_EQ(inName,"clickBoostHandler") ) { return clickBoostHandler_dyn(); }
		if (HX_FIELD_EQ(inName,"moneyBoostHandler") ) { return moneyBoostHandler_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"exploderBoostPrice") ) { return exploderBoostPrice; }
		if (HX_FIELD_EQ(inName,"exploderBoostValue") ) { return exploderBoostValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"currentPointsNeeded") ) { return currentPointsNeeded; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"exploderBoostHandler") ) { return exploderBoostHandler_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic GameState_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"level") ) { level=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"money") ) { money=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"points") ) { points=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"lblLevel") ) { lblLevel=inValue.Cast< ::openfl::_v2::text::TextField >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lblMoney") ) { lblMoney=inValue.Cast< ::openfl::_v2::text::TextField >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"clickBoost") ) { clickBoost=inValue.Cast< ::openfl::_v2::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"moneyBoost") ) { moneyBoost=inValue.Cast< ::openfl::_v2::display::Sprite >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"exploderBoost") ) { exploderBoost=inValue.Cast< ::openfl::_v2::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lblClickBoost") ) { lblClickBoost=inValue.Cast< ::openfl::_v2::text::TextField >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lblMoneyBoost") ) { lblMoneyBoost=inValue.Cast< ::openfl::_v2::text::TextField >(); return inValue; }
		if (HX_FIELD_EQ(inName,"exploderTimer") ) { exploderTimer=inValue.Cast< ::openfl::_v2::utils::Timer >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"lblNeededPoints") ) { lblNeededPoints=inValue.Cast< ::openfl::_v2::text::TextField >(); return inValue; }
		if (HX_FIELD_EQ(inName,"clickBoostPrice") ) { clickBoostPrice=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"moneyBoostPrice") ) { moneyBoostPrice=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"moneyBoostValue") ) { moneyBoostValue=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"lblCurrentPoints") ) { lblCurrentPoints=inValue.Cast< ::openfl::_v2::text::TextField >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lblExploderBoost") ) { lblExploderBoost=inValue.Cast< ::openfl::_v2::text::TextField >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"currentPointValue") ) { currentPointValue=inValue.Cast< int >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"exploderBoostPrice") ) { exploderBoostPrice=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"exploderBoostValue") ) { exploderBoostValue=inValue.Cast< int >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"currentPointsNeeded") ) { currentPointsNeeded=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GameState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("points"));
	outFields->push(HX_CSTRING("level"));
	outFields->push(HX_CSTRING("money"));
	outFields->push(HX_CSTRING("currentPointValue"));
	outFields->push(HX_CSTRING("currentPointsNeeded"));
	outFields->push(HX_CSTRING("lblLevel"));
	outFields->push(HX_CSTRING("lblCurrentPoints"));
	outFields->push(HX_CSTRING("lblNeededPoints"));
	outFields->push(HX_CSTRING("lblMoney"));
	outFields->push(HX_CSTRING("clickBoost"));
	outFields->push(HX_CSTRING("moneyBoost"));
	outFields->push(HX_CSTRING("exploderBoost"));
	outFields->push(HX_CSTRING("lblClickBoost"));
	outFields->push(HX_CSTRING("lblMoneyBoost"));
	outFields->push(HX_CSTRING("lblExploderBoost"));
	outFields->push(HX_CSTRING("clickBoostPrice"));
	outFields->push(HX_CSTRING("moneyBoostPrice"));
	outFields->push(HX_CSTRING("exploderBoostPrice"));
	outFields->push(HX_CSTRING("moneyBoostValue"));
	outFields->push(HX_CSTRING("exploderBoostValue"));
	outFields->push(HX_CSTRING("exploderTimer"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(GameState_obj,points),HX_CSTRING("points")},
	{hx::fsInt,(int)offsetof(GameState_obj,level),HX_CSTRING("level")},
	{hx::fsInt,(int)offsetof(GameState_obj,money),HX_CSTRING("money")},
	{hx::fsInt,(int)offsetof(GameState_obj,currentPointValue),HX_CSTRING("currentPointValue")},
	{hx::fsInt,(int)offsetof(GameState_obj,currentPointsNeeded),HX_CSTRING("currentPointsNeeded")},
	{hx::fsObject /*::openfl::_v2::text::TextField*/ ,(int)offsetof(GameState_obj,lblLevel),HX_CSTRING("lblLevel")},
	{hx::fsObject /*::openfl::_v2::text::TextField*/ ,(int)offsetof(GameState_obj,lblCurrentPoints),HX_CSTRING("lblCurrentPoints")},
	{hx::fsObject /*::openfl::_v2::text::TextField*/ ,(int)offsetof(GameState_obj,lblNeededPoints),HX_CSTRING("lblNeededPoints")},
	{hx::fsObject /*::openfl::_v2::text::TextField*/ ,(int)offsetof(GameState_obj,lblMoney),HX_CSTRING("lblMoney")},
	{hx::fsObject /*::openfl::_v2::display::Sprite*/ ,(int)offsetof(GameState_obj,clickBoost),HX_CSTRING("clickBoost")},
	{hx::fsObject /*::openfl::_v2::display::Sprite*/ ,(int)offsetof(GameState_obj,moneyBoost),HX_CSTRING("moneyBoost")},
	{hx::fsObject /*::openfl::_v2::display::Sprite*/ ,(int)offsetof(GameState_obj,exploderBoost),HX_CSTRING("exploderBoost")},
	{hx::fsObject /*::openfl::_v2::text::TextField*/ ,(int)offsetof(GameState_obj,lblClickBoost),HX_CSTRING("lblClickBoost")},
	{hx::fsObject /*::openfl::_v2::text::TextField*/ ,(int)offsetof(GameState_obj,lblMoneyBoost),HX_CSTRING("lblMoneyBoost")},
	{hx::fsObject /*::openfl::_v2::text::TextField*/ ,(int)offsetof(GameState_obj,lblExploderBoost),HX_CSTRING("lblExploderBoost")},
	{hx::fsInt,(int)offsetof(GameState_obj,clickBoostPrice),HX_CSTRING("clickBoostPrice")},
	{hx::fsInt,(int)offsetof(GameState_obj,moneyBoostPrice),HX_CSTRING("moneyBoostPrice")},
	{hx::fsInt,(int)offsetof(GameState_obj,exploderBoostPrice),HX_CSTRING("exploderBoostPrice")},
	{hx::fsInt,(int)offsetof(GameState_obj,moneyBoostValue),HX_CSTRING("moneyBoostValue")},
	{hx::fsInt,(int)offsetof(GameState_obj,exploderBoostValue),HX_CSTRING("exploderBoostValue")},
	{hx::fsObject /*::openfl::_v2::utils::Timer*/ ,(int)offsetof(GameState_obj,exploderTimer),HX_CSTRING("exploderTimer")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("points"),
	HX_CSTRING("level"),
	HX_CSTRING("money"),
	HX_CSTRING("currentPointValue"),
	HX_CSTRING("currentPointsNeeded"),
	HX_CSTRING("lblLevel"),
	HX_CSTRING("lblCurrentPoints"),
	HX_CSTRING("lblNeededPoints"),
	HX_CSTRING("lblMoney"),
	HX_CSTRING("clickBoost"),
	HX_CSTRING("moneyBoost"),
	HX_CSTRING("exploderBoost"),
	HX_CSTRING("lblClickBoost"),
	HX_CSTRING("lblMoneyBoost"),
	HX_CSTRING("lblExploderBoost"),
	HX_CSTRING("clickBoostPrice"),
	HX_CSTRING("moneyBoostPrice"),
	HX_CSTRING("exploderBoostPrice"),
	HX_CSTRING("moneyBoostValue"),
	HX_CSTRING("exploderBoostValue"),
	HX_CSTRING("exploderTimer"),
	HX_CSTRING("init"),
	HX_CSTRING("mouseUpHandler"),
	HX_CSTRING("loop"),
	HX_CSTRING("exploderHandler"),
	HX_CSTRING("clickBoostHandler"),
	HX_CSTRING("moneyBoostHandler"),
	HX_CSTRING("exploderBoostHandler"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GameState_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GameState_obj::__mClass,"__mClass");
};

#endif

Class GameState_obj::__mClass;

void GameState_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.ukuleledog.games.clicker.GameState"), hx::TCanCast< GameState_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
#ifdef HXCPP_SCRIPTABLE
    , sMemberStorageInfo
#endif
);
}

void GameState_obj::__boot()
{
}

} // end namespace com
} // end namespace ukuleledog
} // end namespace games
} // end namespace clicker
