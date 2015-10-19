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
#ifndef INCLUDED_motion_Actuate
#include <motion/Actuate.h>
#endif
#ifndef INCLUDED_motion_actuators_IGenericActuator
#include <motion/actuators/IGenericActuator.h>
#endif
#ifndef INCLUDED_motion_easing_Bounce
#include <motion/easing/Bounce.h>
#endif
#ifndef INCLUDED_motion_easing_IEasing
#include <motion/easing/IEasing.h>
#endif
#ifndef INCLUDED_openfl__v2_Assets
#include <openfl/_v2/Assets.h>
#endif
#ifndef INCLUDED_openfl__v2_display_BitmapData
#include <openfl/_v2/display/BitmapData.h>
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
#ifndef INCLUDED_openfl__v2_geom_Matrix
#include <openfl/_v2/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl__v2_geom_Point
#include <openfl/_v2/geom/Point.h>
#endif
#ifndef INCLUDED_openfl__v2_geom_Rectangle
#include <openfl/_v2/geom/Rectangle.h>
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
HX_STACK_FRAME("com.ukuleledog.games.clicker.GameState","new",0x85983655,"com.ukuleledog.games.clicker.GameState.new","com/ukuleledog/games/clicker/GameState.hx",21,0xf057845d)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(59)
	this->costume = (int)6;
	HX_STACK_LINE(54)
	this->mattFrame = (int)0;
	HX_STACK_LINE(49)
	this->exploderBoostValue = (int)0;
	HX_STACK_LINE(48)
	this->moneyBoostValue = (int)1;
	HX_STACK_LINE(46)
	this->exploderBoostPrice = (int)100;
	HX_STACK_LINE(45)
	this->moneyBoostPrice = (int)50;
	HX_STACK_LINE(44)
	this->clickBoostPrice = (int)10;
	HX_STACK_LINE(29)
	this->currentPointsNeeded = (int)10;
	HX_STACK_LINE(28)
	this->currentPointValue = (int)1;
	HX_STACK_LINE(26)
	this->money = (int)0;
	HX_STACK_LINE(25)
	this->level = (int)1;
	HX_STACK_LINE(65)
	super::__construct();
	HX_STACK_LINE(67)
	this->clicks = (int)0;
	HX_STACK_LINE(68)
	this->points = (int)0;
	HX_STACK_LINE(69)
	this->level = (int)1;
	HX_STACK_LINE(70)
	this->currentPointValue = (int)1;
	HX_STACK_LINE(71)
	this->currentPointsNeeded = (int)10;
	HX_STACK_LINE(72)
	this->money = (int)0;
	HX_STACK_LINE(74)
	::openfl::_v2::text::TextField _g = ::openfl::_v2::text::TextField_obj::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(74)
	this->lblLevel = _g;
	HX_STACK_LINE(75)
	this->lblLevel->set_x((int)10);
	HX_STACK_LINE(76)
	this->lblLevel->set_y((int)10);
	HX_STACK_LINE(77)
	this->lblLevel->set_width((int)900);
	HX_STACK_LINE(78)
	this->lblLevel->set_selectable(false);
	HX_STACK_LINE(80)
	::openfl::_v2::text::TextField _g1 = ::openfl::_v2::text::TextField_obj::__new();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(80)
	this->lblCurrentPoints = _g1;
	HX_STACK_LINE(81)
	this->lblCurrentPoints->set_x((int)10);
	HX_STACK_LINE(82)
	this->lblCurrentPoints->set_y((int)25);
	HX_STACK_LINE(83)
	this->lblCurrentPoints->set_width((int)900);
	HX_STACK_LINE(84)
	this->lblCurrentPoints->set_selectable(false);
	HX_STACK_LINE(86)
	::openfl::_v2::text::TextField _g2 = ::openfl::_v2::text::TextField_obj::__new();		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(86)
	this->lblNeededPoints = _g2;
	HX_STACK_LINE(87)
	this->lblNeededPoints->set_x((int)10);
	HX_STACK_LINE(88)
	this->lblNeededPoints->set_y((int)40);
	HX_STACK_LINE(89)
	this->lblNeededPoints->set_width((int)900);
	HX_STACK_LINE(90)
	this->lblNeededPoints->set_selectable(false);
	HX_STACK_LINE(92)
	::openfl::_v2::text::TextField _g3 = ::openfl::_v2::text::TextField_obj::__new();		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(92)
	this->lblMoney = _g3;
	HX_STACK_LINE(93)
	this->lblMoney->set_x((int)10);
	HX_STACK_LINE(94)
	this->lblMoney->set_y((int)55);
	HX_STACK_LINE(95)
	this->lblMoney->set_width((int)900);
	HX_STACK_LINE(96)
	this->lblMoney->set_selectable(false);
	HX_STACK_LINE(98)
	::openfl::_v2::display::Sprite _g4 = ::openfl::_v2::display::Sprite_obj::__new();		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(98)
	this->clickBoost = _g4;
	HX_STACK_LINE(100)
	::openfl::_v2::display::BitmapData _g5 = ::openfl::_v2::Assets_obj::getBitmapData(HX_CSTRING("img/click.png"),null());		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(100)
	this->clickBoost->get_graphics()->beginBitmapFill(_g5,null(),null(),null());
	HX_STACK_LINE(101)
	this->clickBoost->get_graphics()->drawRect((int)0,(int)0,(int)64,(int)64);
	HX_STACK_LINE(102)
	this->clickBoost->get_graphics()->endFill();
	HX_STACK_LINE(103)
	this->clickBoost->set_x((int)10);
	HX_STACK_LINE(104)
	this->clickBoost->set_y((int)200);
	HX_STACK_LINE(105)
	this->clickBoost->buttonMode = true;
	HX_STACK_LINE(106)
	this->clickBoost->addEventListener(::openfl::_v2::events::MouseEvent_obj::MOUSE_UP,this->clickBoostHandler_dyn(),null(),null(),null());
	HX_STACK_LINE(108)
	::openfl::_v2::text::TextField _g6 = ::openfl::_v2::text::TextField_obj::__new();		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(108)
	this->lblClickBoost = _g6;
	HX_STACK_LINE(109)
	this->lblClickBoost->set_mouseEnabled(false);
	HX_STACK_LINE(110)
	this->lblClickBoost->set_selectable(false);
	HX_STACK_LINE(111)
	this->clickBoost->addChild(this->lblClickBoost);
	HX_STACK_LINE(113)
	::openfl::_v2::display::Sprite _g7 = ::openfl::_v2::display::Sprite_obj::__new();		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(113)
	this->moneyBoost = _g7;
	HX_STACK_LINE(115)
	::openfl::_v2::display::BitmapData _g8 = ::openfl::_v2::Assets_obj::getBitmapData(HX_CSTRING("img/money.png"),null());		HX_STACK_VAR(_g8,"_g8");
	HX_STACK_LINE(115)
	this->moneyBoost->get_graphics()->beginBitmapFill(_g8,null(),null(),null());
	HX_STACK_LINE(116)
	this->moneyBoost->get_graphics()->drawRect((int)0,(int)0,(int)64,(int)64);
	HX_STACK_LINE(117)
	this->moneyBoost->get_graphics()->endFill();
	HX_STACK_LINE(118)
	this->moneyBoost->set_x((int)10);
	HX_STACK_LINE(119)
	this->moneyBoost->set_y((int)300);
	HX_STACK_LINE(120)
	this->moneyBoost->buttonMode = true;
	HX_STACK_LINE(121)
	this->moneyBoost->addEventListener(::openfl::_v2::events::MouseEvent_obj::MOUSE_UP,this->moneyBoostHandler_dyn(),null(),null(),null());
	HX_STACK_LINE(123)
	::openfl::_v2::text::TextField _g9 = ::openfl::_v2::text::TextField_obj::__new();		HX_STACK_VAR(_g9,"_g9");
	HX_STACK_LINE(123)
	this->lblMoneyBoost = _g9;
	HX_STACK_LINE(124)
	this->lblMoneyBoost->set_mouseEnabled(false);
	HX_STACK_LINE(125)
	this->lblMoneyBoost->set_selectable(false);
	HX_STACK_LINE(126)
	this->moneyBoost->addChild(this->lblMoneyBoost);
	HX_STACK_LINE(128)
	::openfl::_v2::display::Sprite _g10 = ::openfl::_v2::display::Sprite_obj::__new();		HX_STACK_VAR(_g10,"_g10");
	HX_STACK_LINE(128)
	this->exploderBoost = _g10;
	HX_STACK_LINE(130)
	::openfl::_v2::display::BitmapData _g11 = ::openfl::_v2::Assets_obj::getBitmapData(HX_CSTRING("img/booster.png"),null());		HX_STACK_VAR(_g11,"_g11");
	HX_STACK_LINE(130)
	this->exploderBoost->get_graphics()->beginBitmapFill(_g11,null(),null(),null());
	HX_STACK_LINE(131)
	this->exploderBoost->get_graphics()->drawRect((int)0,(int)0,(int)64,(int)64);
	HX_STACK_LINE(132)
	this->exploderBoost->get_graphics()->endFill();
	HX_STACK_LINE(133)
	this->exploderBoost->set_x((int)10);
	HX_STACK_LINE(134)
	this->exploderBoost->set_y((int)400);
	HX_STACK_LINE(135)
	this->exploderBoost->buttonMode = true;
	HX_STACK_LINE(136)
	this->exploderBoost->addEventListener(::openfl::_v2::events::MouseEvent_obj::MOUSE_UP,this->exploderBoostHandler_dyn(),null(),null(),null());
	HX_STACK_LINE(138)
	::openfl::_v2::text::TextField _g12 = ::openfl::_v2::text::TextField_obj::__new();		HX_STACK_VAR(_g12,"_g12");
	HX_STACK_LINE(138)
	this->lblExploderBoost = _g12;
	HX_STACK_LINE(139)
	this->lblExploderBoost->set_mouseEnabled(false);
	HX_STACK_LINE(140)
	this->lblExploderBoost->set_selectable(false);
	HX_STACK_LINE(141)
	this->exploderBoost->addChild(this->lblExploderBoost);
	HX_STACK_LINE(143)
	::openfl::_v2::display::BitmapData _g13 = ::openfl::_v2::Assets_obj::getBitmapData(HX_CSTRING("img/matt.png"),null());		HX_STACK_VAR(_g13,"_g13");
	HX_STACK_LINE(143)
	this->mattImage = _g13;
	HX_STACK_LINE(144)
	::openfl::_v2::display::Sprite _g14 = ::openfl::_v2::display::Sprite_obj::__new();		HX_STACK_VAR(_g14,"_g14");
	HX_STACK_LINE(144)
	this->matt = _g14;
	HX_STACK_LINE(145)
	this->matt->set_x((int)250);
	HX_STACK_LINE(146)
	this->matt->set_y((int)90);
	HX_STACK_LINE(147)
	this->drawMatt();
	HX_STACK_LINE(149)
	::openfl::_v2::display::Sprite _g15 = ::openfl::_v2::display::Sprite_obj::__new();		HX_STACK_VAR(_g15,"_g15");
	HX_STACK_LINE(149)
	this->asuka = _g15;
	HX_STACK_LINE(151)
	::openfl::_v2::display::BitmapData _g16 = ::openfl::_v2::Assets_obj::getBitmapData(HX_CSTRING("img/asuka.png"),null());		HX_STACK_VAR(_g16,"_g16");
	HX_STACK_LINE(151)
	this->asuka->get_graphics()->beginBitmapFill(_g16,null(),null(),null());
	HX_STACK_LINE(152)
	this->asuka->get_graphics()->drawRect((int)0,(int)0,(int)128,(int)128);
	HX_STACK_LINE(153)
	this->asuka->get_graphics()->endFill();
	HX_STACK_LINE(154)
	this->asuka->set_x((int)500);
	HX_STACK_LINE(155)
	this->asuka->set_y((int)140);
	HX_STACK_LINE(156)
	this->asuka->set_alpha((int)0);
	HX_STACK_LINE(158)
	::openfl::_v2::display::Sprite _g17 = ::openfl::_v2::display::Sprite_obj::__new();		HX_STACK_VAR(_g17,"_g17");
	HX_STACK_LINE(158)
	this->shop = _g17;
	HX_STACK_LINE(159)
	::openfl::_v2::display::BitmapData _g18 = ::openfl::_v2::Assets_obj::getBitmapData(HX_CSTRING("img/shop.png"),null());		HX_STACK_VAR(_g18,"_g18");
	HX_STACK_LINE(159)
	this->shop->get_graphics()->beginBitmapFill(_g18,null(),null(),null());
	HX_STACK_LINE(160)
	this->shop->get_graphics()->drawRect((int)0,(int)0,(int)64,(int)64);
	HX_STACK_LINE(161)
	this->shop->get_graphics()->endFill();
	HX_STACK_LINE(162)
	this->shop->set_x((int)726);
	HX_STACK_LINE(163)
	this->shop->set_y((int)400);
	HX_STACK_LINE(164)
	this->shop->buttonMode = true;
	HX_STACK_LINE(166)
	::openfl::_v2::utils::Timer _g19 = ::openfl::_v2::utils::Timer_obj::__new((int)1000,null());		HX_STACK_VAR(_g19,"_g19");
	HX_STACK_LINE(166)
	this->exploderTimer = _g19;
	HX_STACK_LINE(167)
	this->exploderTimer->addEventListener(::openfl::events::TimerEvent_obj::TIMER,this->exploderHandler_dyn(),null(),null(),null());
	HX_STACK_LINE(168)
	this->exploderTimer->start();
	HX_STACK_LINE(170)
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
		HX_STACK_FRAME("com.ukuleledog.games.clicker.GameState","init",0x5c500b7b,"com.ukuleledog.games.clicker.GameState.init","com/ukuleledog/games/clicker/GameState.hx",174,0xf057845d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(175)
		this->removeEventListener(::openfl::_v2::events::Event_obj::ADDED_TO_STAGE,this->init_dyn(),null());
		HX_STACK_LINE(176)
		this->addEventListener(::openfl::_v2::events::Event_obj::ENTER_FRAME,this->loop_dyn(),null(),null(),null());
		HX_STACK_LINE(178)
		this->addChild(this->lblLevel);
		HX_STACK_LINE(179)
		this->addChild(this->lblCurrentPoints);
		HX_STACK_LINE(180)
		this->addChild(this->lblNeededPoints);
		HX_STACK_LINE(181)
		this->addChild(this->lblMoney);
		HX_STACK_LINE(183)
		this->addChild(this->clickBoost);
		HX_STACK_LINE(184)
		this->addChild(this->moneyBoost);
		HX_STACK_LINE(185)
		this->addChild(this->exploderBoost);
		HX_STACK_LINE(187)
		this->addChild(this->matt);
		HX_STACK_LINE(188)
		this->addChild(this->asuka);
		HX_STACK_LINE(190)
		this->addChild(this->shop);
		HX_STACK_LINE(192)
		this->get_stage()->addEventListener(::openfl::_v2::events::MouseEvent_obj::MOUSE_UP,this->mouseUpHandler_dyn(),null(),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GameState_obj,init,(void))

Void GameState_obj::drawMatt( ){
{
		HX_STACK_FRAME("com.ukuleledog.games.clicker.GameState","drawMatt",0x41dccde3,"com.ukuleledog.games.clicker.GameState.drawMatt","com/ukuleledog/games/clicker/GameState.hx",196,0xf057845d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(197)
		(this->mattFrame)++;
		struct _Function_1_1{
			inline static bool Block( hx::ObjectPtr< ::com::ukuleledog::games::clicker::GameState_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/clicker/GameState.hx",199,0xf057845d)
				{
					HX_STACK_LINE(199)
					int a = __this->mattFrame;		HX_STACK_VAR(a,"a");
					HX_STACK_LINE(199)
					bool aNeg = (a < (int)0);		HX_STACK_VAR(aNeg,"aNeg");
					HX_STACK_LINE(199)
					bool bNeg = ((int)2 < (int)0);		HX_STACK_VAR(bNeg,"bNeg");
					HX_STACK_LINE(199)
					return (  (((aNeg != bNeg))) ? bool(aNeg) : bool((a > (int)2)) );
				}
				return null();
			}
		};
		HX_STACK_LINE(199)
		if ((_Function_1_1::Block(this))){
			HX_STACK_LINE(200)
			this->mattFrame = (int)0;
		}
		HX_STACK_LINE(202)
		::openfl::_v2::display::BitmapData _g = ::openfl::_v2::display::BitmapData_obj::__new((int)300,(int)300,false,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(202)
		this->tempMattImage = _g;
		struct _Function_1_2{
			inline static Float Block( hx::ObjectPtr< ::com::ukuleledog::games::clicker::GameState_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/clicker/GameState.hx",203,0xf057845d)
				{
					HX_STACK_LINE(203)
					int _int = (__this->mattFrame * (int)300);		HX_STACK_VAR(_int,"int");
					HX_STACK_LINE(203)
					return (  (((_int < (int)0))) ? Float((4294967296.0 + _int)) : Float((_int + 0.0)) );
				}
				return null();
			}
		};
		struct _Function_1_3{
			inline static Float Block( hx::ObjectPtr< ::com::ukuleledog::games::clicker::GameState_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/clicker/GameState.hx",203,0xf057845d)
				{
					HX_STACK_LINE(203)
					int _int = ((int)300 * __this->costume);		HX_STACK_VAR(_int,"int");
					HX_STACK_LINE(203)
					return (  (((_int < (int)0))) ? Float((4294967296.0 + _int)) : Float((_int + 0.0)) );
				}
				return null();
			}
		};
		HX_STACK_LINE(203)
		::openfl::_v2::geom::Rectangle _g1 = ::openfl::_v2::geom::Rectangle_obj::__new(_Function_1_2::Block(this),_Function_1_3::Block(this),(int)300,(int)300);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(203)
		::openfl::_v2::geom::Point _g2 = ::openfl::_v2::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(203)
		this->tempMattImage->copyPixels(this->mattImage,_g1,_g2,null(),null(),null());
		HX_STACK_LINE(204)
		this->matt->get_graphics()->clear();
		HX_STACK_LINE(205)
		this->matt->get_graphics()->beginBitmapFill(this->tempMattImage,null(),null(),null());
		HX_STACK_LINE(206)
		this->matt->get_graphics()->drawRect((int)0,(int)0,(int)300,(int)300);
		HX_STACK_LINE(207)
		this->matt->get_graphics()->endFill();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(GameState_obj,drawMatt,(void))

Void GameState_obj::mouseUpHandler( ::openfl::_v2::events::MouseEvent e){
{
		HX_STACK_FRAME("com.ukuleledog.games.clicker.GameState","mouseUpHandler",0x3f1bc3f5,"com.ukuleledog.games.clicker.GameState.mouseUpHandler","com/ukuleledog/games/clicker/GameState.hx",211,0xf057845d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(212)
		(this->clicks)++;
		HX_STACK_LINE(213)
		this->pointHandle(this->currentPointValue);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GameState_obj,mouseUpHandler,(void))

Void GameState_obj::pointHandle( int pointsValue){
{
		HX_STACK_FRAME("com.ukuleledog.games.clicker.GameState","pointHandle",0x2750ab0d,"com.ukuleledog.games.clicker.GameState.pointHandle","com/ukuleledog/games/clicker/GameState.hx",217,0xf057845d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(pointsValue,"pointsValue")
		HX_STACK_LINE(218)
		this->drawMatt();
		HX_STACK_LINE(219)
		this->points = (this->points + pointsValue);
		struct _Function_1_1{
			inline static bool Block( hx::ObjectPtr< ::com::ukuleledog::games::clicker::GameState_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/clicker/GameState.hx",221,0xf057845d)
				{
					HX_STACK_LINE(221)
					int a = __this->points;		HX_STACK_VAR(a,"a");
					HX_STACK_LINE(221)
					int b = __this->currentPointsNeeded;		HX_STACK_VAR(b,"b");
					HX_STACK_LINE(221)
					bool aNeg = (a < (int)0);		HX_STACK_VAR(aNeg,"aNeg");
					HX_STACK_LINE(221)
					bool bNeg = (b < (int)0);		HX_STACK_VAR(bNeg,"bNeg");
					HX_STACK_LINE(221)
					return (  (((aNeg != bNeg))) ? bool(aNeg) : bool((a >= b)) );
				}
				return null();
			}
		};
		HX_STACK_LINE(221)
		if ((_Function_1_1::Block(this))){
			HX_STACK_LINE(223)
			(this->level)++;
			struct _Function_2_1{
				inline static Float Block( hx::ObjectPtr< ::com::ukuleledog::games::clicker::GameState_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/clicker/GameState.hx",224,0xf057845d)
					{
						HX_STACK_LINE(224)
						int _int = __this->currentPointsNeeded;		HX_STACK_VAR(_int,"int");
						HX_STACK_LINE(224)
						return (  (((_int < (int)0))) ? Float((4294967296.0 + _int)) : Float((_int + 0.0)) );
					}
					return null();
				}
			};
			HX_STACK_LINE(224)
			int _g = ::Math_obj::ceil((_Function_2_1::Block(this) * 1.5));		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(224)
			this->currentPointsNeeded = _g;
			HX_STACK_LINE(225)
			int _g4;		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(225)
			{
				HX_STACK_LINE(225)
				int a;		HX_STACK_VAR(a,"a");
				HX_STACK_LINE(225)
				{
					HX_STACK_LINE(225)
					Float _g1 = ::Math_obj::random();		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(225)
					Float _g2 = (_g1 * (int)10);		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(225)
					int _g3 = ::Math_obj::round(_g2);		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(225)
					int a1 = (_g3 + (int)1);		HX_STACK_VAR(a1,"a1");
					HX_STACK_LINE(225)
					a = (a1 + this->moneyEarned);
				}
				HX_STACK_LINE(225)
				_g4 = (a + (this->level * this->moneyBoostValue));
			}
			HX_STACK_LINE(225)
			this->moneyEarned = _g4;
			struct _Function_2_2{
				inline static bool Block( hx::ObjectPtr< ::com::ukuleledog::games::clicker::GameState_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/clicker/GameState.hx",227,0xf057845d)
					{
						HX_STACK_LINE(227)
						int a = __this->moneyEarned;		HX_STACK_VAR(a,"a");
						HX_STACK_LINE(227)
						int b = (__this->level * (int)2);		HX_STACK_VAR(b,"b");
						struct _Function_3_1{
							inline static bool Block( int &b,int &a){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/clicker/GameState.hx",227,0xf057845d)
								{
									HX_STACK_LINE(227)
									bool aNeg = (b < (int)0);		HX_STACK_VAR(aNeg,"aNeg");
									HX_STACK_LINE(227)
									bool bNeg = (a < (int)0);		HX_STACK_VAR(bNeg,"bNeg");
									HX_STACK_LINE(227)
									return (  (((aNeg != bNeg))) ? bool(aNeg) : bool((b > a)) );
								}
								return null();
							}
						};
						HX_STACK_LINE(227)
						return _Function_3_1::Block(b,a);
					}
					return null();
				}
			};
			HX_STACK_LINE(227)
			if ((_Function_2_2::Block(this))){
				HX_STACK_LINE(228)
				this->moneyEarned = (this->level * (int)2);
			}
			HX_STACK_LINE(230)
			this->money = (this->money + this->moneyEarned);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GameState_obj,pointHandle,(void))

Void GameState_obj::loop( ::openfl::_v2::events::Event e){
{
		HX_STACK_FRAME("com.ukuleledog.games.clicker.GameState","loop",0x5e4c76cf,"com.ukuleledog.games.clicker.GameState.loop","com/ukuleledog/games/clicker/GameState.hx",235,0xf057845d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		struct _Function_1_1{
			inline static Float Block( hx::ObjectPtr< ::com::ukuleledog::games::clicker::GameState_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/clicker/GameState.hx",236,0xf057845d)
				{
					HX_STACK_LINE(236)
					int _int = __this->level;		HX_STACK_VAR(_int,"int");
					HX_STACK_LINE(236)
					return (  (((_int < (int)0))) ? Float((4294967296.0 + _int)) : Float((_int + 0.0)) );
				}
				return null();
			}
		};
		HX_STACK_LINE(236)
		::String _g = ::Std_obj::string(_Function_1_1::Block(this));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(236)
		::String _g1 = (HX_CSTRING("Level: ") + _g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(236)
		this->lblLevel->set_text(_g1);
		struct _Function_1_2{
			inline static Float Block( hx::ObjectPtr< ::com::ukuleledog::games::clicker::GameState_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/clicker/GameState.hx",237,0xf057845d)
				{
					HX_STACK_LINE(237)
					int _int = __this->currentPointValue;		HX_STACK_VAR(_int,"int");
					HX_STACK_LINE(237)
					return (  (((_int < (int)0))) ? Float((4294967296.0 + _int)) : Float((_int + 0.0)) );
				}
				return null();
			}
		};
		HX_STACK_LINE(237)
		::String _g2 = ::Std_obj::string(_Function_1_2::Block(this));		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(237)
		::String _g3 = (HX_CSTRING("Click value: ") + _g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(237)
		this->lblCurrentPoints->set_text(_g3);
		struct _Function_1_3{
			inline static Float Block( hx::ObjectPtr< ::com::ukuleledog::games::clicker::GameState_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/clicker/GameState.hx",238,0xf057845d)
				{
					HX_STACK_LINE(238)
					int _int = (__this->currentPointsNeeded - __this->points);		HX_STACK_VAR(_int,"int");
					HX_STACK_LINE(238)
					return (  (((_int < (int)0))) ? Float((4294967296.0 + _int)) : Float((_int + 0.0)) );
				}
				return null();
			}
		};
		HX_STACK_LINE(238)
		::String _g4 = ::Std_obj::string(_Function_1_3::Block(this));		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(238)
		::String _g5 = (HX_CSTRING("Needed points: ") + _g4);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(238)
		this->lblNeededPoints->set_text(_g5);
		struct _Function_1_4{
			inline static Float Block( hx::ObjectPtr< ::com::ukuleledog::games::clicker::GameState_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/clicker/GameState.hx",239,0xf057845d)
				{
					HX_STACK_LINE(239)
					int _int = __this->money;		HX_STACK_VAR(_int,"int");
					HX_STACK_LINE(239)
					return (  (((_int < (int)0))) ? Float((4294967296.0 + _int)) : Float((_int + 0.0)) );
				}
				return null();
			}
		};
		HX_STACK_LINE(239)
		::String _g6 = ::Std_obj::string(_Function_1_4::Block(this));		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(239)
		::String _g7 = (HX_CSTRING("Money: $") + _g6);		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(239)
		this->lblMoney->set_text(_g7);
		struct _Function_1_5{
			inline static Float Block( hx::ObjectPtr< ::com::ukuleledog::games::clicker::GameState_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/clicker/GameState.hx",241,0xf057845d)
				{
					HX_STACK_LINE(241)
					int _int = __this->clickBoostPrice;		HX_STACK_VAR(_int,"int");
					HX_STACK_LINE(241)
					return (  (((_int < (int)0))) ? Float((4294967296.0 + _int)) : Float((_int + 0.0)) );
				}
				return null();
			}
		};
		HX_STACK_LINE(241)
		::String _g8 = ::Std_obj::string(_Function_1_5::Block(this));		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(241)
		::String _g9 = (HX_CSTRING("$") + _g8);		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(241)
		this->lblClickBoost->set_text(_g9);
		struct _Function_1_6{
			inline static Float Block( hx::ObjectPtr< ::com::ukuleledog::games::clicker::GameState_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/clicker/GameState.hx",242,0xf057845d)
				{
					HX_STACK_LINE(242)
					int _int = __this->moneyBoostPrice;		HX_STACK_VAR(_int,"int");
					HX_STACK_LINE(242)
					return (  (((_int < (int)0))) ? Float((4294967296.0 + _int)) : Float((_int + 0.0)) );
				}
				return null();
			}
		};
		HX_STACK_LINE(242)
		::String _g10 = ::Std_obj::string(_Function_1_6::Block(this));		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(242)
		::String _g11 = (HX_CSTRING("$") + _g10);		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(242)
		this->lblMoneyBoost->set_text(_g11);
		struct _Function_1_7{
			inline static Float Block( hx::ObjectPtr< ::com::ukuleledog::games::clicker::GameState_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/clicker/GameState.hx",243,0xf057845d)
				{
					HX_STACK_LINE(243)
					int _int = __this->exploderBoostPrice;		HX_STACK_VAR(_int,"int");
					HX_STACK_LINE(243)
					return (  (((_int < (int)0))) ? Float((4294967296.0 + _int)) : Float((_int + 0.0)) );
				}
				return null();
			}
		};
		HX_STACK_LINE(243)
		::String _g12 = ::Std_obj::string(_Function_1_7::Block(this));		HX_STACK_VAR(_g12,"_g12");
		HX_STACK_LINE(243)
		::String _g13 = (HX_CSTRING("$") + _g12);		HX_STACK_VAR(_g13,"_g13");
		HX_STACK_LINE(243)
		this->lblExploderBoost->set_text(_g13);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GameState_obj,loop,(void))

Void GameState_obj::exploderHandler( ::openfl::events::TimerEvent e){
{
		HX_STACK_FRAME("com.ukuleledog.games.clicker.GameState","exploderHandler",0x19e1afce,"com.ukuleledog.games.clicker.GameState.exploderHandler","com/ukuleledog/games/clicker/GameState.hx",247,0xf057845d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(246)
		Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new().Add(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g,"_g");
		struct _Function_1_1{
			inline static bool Block( hx::ObjectPtr< ::com::ukuleledog::games::clicker::GameState_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/clicker/GameState.hx",249,0xf057845d)
				{
					HX_STACK_LINE(249)
					int a = __this->exploderBoostValue;		HX_STACK_VAR(a,"a");
					HX_STACK_LINE(249)
					bool aNeg = (a < (int)0);		HX_STACK_VAR(aNeg,"aNeg");
					HX_STACK_LINE(249)
					bool bNeg = ((int)0 < (int)0);		HX_STACK_VAR(bNeg,"bNeg");
					HX_STACK_LINE(249)
					return (  (((aNeg != bNeg))) ? bool(aNeg) : bool((a > (int)0)) );
				}
				return null();
			}
		};
		HX_STACK_LINE(249)
		if ((_Function_1_1::Block(this))){
			HX_STACK_LINE(251)
			this->pointHandle(this->exploderBoostValue);
			HX_STACK_LINE(253)
			this->asuka->get_graphics()->clear();
			HX_STACK_LINE(254)
			::openfl::_v2::display::BitmapData _g1 = ::openfl::_v2::Assets_obj::getBitmapData(HX_CSTRING("img/asuka-click.png"),null());		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(254)
			this->asuka->get_graphics()->beginBitmapFill(_g1,null(),null(),null());
			HX_STACK_LINE(255)
			this->asuka->get_graphics()->drawRect((int)0,(int)0,(int)128,(int)128);
			HX_STACK_LINE(256)
			this->asuka->get_graphics()->endFill();
			HX_STACK_LINE(257)
			this->asuka->set_x((int)498);
			HX_STACK_LINE(259)
			::motion::easing::IEasing _g11 = ::motion::easing::Bounce_obj::get_easeInOut();		HX_STACK_VAR(_g11,"_g11");
			struct _Function_2_1{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/clicker/GameState.hx",259,0xf057845d)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_CSTRING("x") , (int)500,false);
						return __result;
					}
					return null();
				}
			};

			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_2,Array< ::Dynamic >,_g)
			Void run(){
				HX_STACK_FRAME("*","_Function_2_2",0x5201af79,"*._Function_2_2","com/ukuleledog/games/clicker/GameState.hx",259,0xf057845d)
				{
					HX_STACK_LINE(260)
					_g->__get((int)0).StaticCast< ::com::ukuleledog::games::clicker::GameState >()->asuka->get_graphics()->clear();
					HX_STACK_LINE(261)
					_g->__get((int)0).StaticCast< ::com::ukuleledog::games::clicker::GameState >()->asuka->get_graphics()->beginBitmapFill(::openfl::_v2::Assets_obj::getBitmapData(HX_CSTRING("img/asuka.png"),null()),null(),null(),null());
					HX_STACK_LINE(262)
					_g->__get((int)0).StaticCast< ::com::ukuleledog::games::clicker::GameState >()->asuka->get_graphics()->drawRect((int)0,(int)0,(int)128,(int)128);
					HX_STACK_LINE(263)
					_g->__get((int)0).StaticCast< ::com::ukuleledog::games::clicker::GameState >()->asuka->get_graphics()->endFill();
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			HX_STACK_LINE(259)
			::motion::Actuate_obj::tween(this->asuka,0.5,_Function_2_1::Block(),null(),null())->ease(_g11)->onComplete( Dynamic(new _Function_2_2(_g)),null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GameState_obj,exploderHandler,(void))

Void GameState_obj::clickBoostHandler( ::openfl::_v2::events::MouseEvent e){
{
		HX_STACK_FRAME("com.ukuleledog.games.clicker.GameState","clickBoostHandler",0xbbf04804,"com.ukuleledog.games.clicker.GameState.clickBoostHandler","com/ukuleledog/games/clicker/GameState.hx",271,0xf057845d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		struct _Function_1_1{
			inline static bool Block( hx::ObjectPtr< ::com::ukuleledog::games::clicker::GameState_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/clicker/GameState.hx",271,0xf057845d)
				{
					HX_STACK_LINE(271)
					int a = __this->money;		HX_STACK_VAR(a,"a");
					HX_STACK_LINE(271)
					int b = __this->clickBoostPrice;		HX_STACK_VAR(b,"b");
					HX_STACK_LINE(271)
					bool aNeg = (a < (int)0);		HX_STACK_VAR(aNeg,"aNeg");
					HX_STACK_LINE(271)
					bool bNeg = (b < (int)0);		HX_STACK_VAR(bNeg,"bNeg");
					HX_STACK_LINE(271)
					return (  (((aNeg != bNeg))) ? bool(aNeg) : bool((a >= b)) );
				}
				return null();
			}
		};
		HX_STACK_LINE(271)
		if ((_Function_1_1::Block(this))){
			HX_STACK_LINE(273)
			this->money = (this->money - this->clickBoostPrice);
			HX_STACK_LINE(274)
			this->clickBoostPrice = (this->clickBoostPrice * (int)2);
			HX_STACK_LINE(275)
			this->currentPointValue = (this->currentPointValue * (int)2);
			HX_STACK_LINE(277)
			this->clickBoost->set_scaleX(1.1);
			HX_STACK_LINE(278)
			this->clickBoost->set_scaleY(1.1);
			HX_STACK_LINE(279)
			::motion::easing::IEasing _g = ::motion::easing::Bounce_obj::get_easeOut();		HX_STACK_VAR(_g,"_g");
			struct _Function_2_1{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/clicker/GameState.hx",279,0xf057845d)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_CSTRING("scaleX") , (int)1,false);
						__result->Add(HX_CSTRING("scaleY") , (int)1,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(279)
			::motion::Actuate_obj::tween(this->clickBoost,0.5,_Function_2_1::Block(),null(),null())->ease(_g);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GameState_obj,clickBoostHandler,(void))

Void GameState_obj::moneyBoostHandler( ::openfl::_v2::events::MouseEvent e){
{
		HX_STACK_FRAME("com.ukuleledog.games.clicker.GameState","moneyBoostHandler",0x6dd299fc,"com.ukuleledog.games.clicker.GameState.moneyBoostHandler","com/ukuleledog/games/clicker/GameState.hx",285,0xf057845d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		struct _Function_1_1{
			inline static bool Block( hx::ObjectPtr< ::com::ukuleledog::games::clicker::GameState_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/clicker/GameState.hx",285,0xf057845d)
				{
					HX_STACK_LINE(285)
					int a = __this->money;		HX_STACK_VAR(a,"a");
					HX_STACK_LINE(285)
					int b = __this->moneyBoostPrice;		HX_STACK_VAR(b,"b");
					HX_STACK_LINE(285)
					bool aNeg = (a < (int)0);		HX_STACK_VAR(aNeg,"aNeg");
					HX_STACK_LINE(285)
					bool bNeg = (b < (int)0);		HX_STACK_VAR(bNeg,"bNeg");
					HX_STACK_LINE(285)
					return (  (((aNeg != bNeg))) ? bool(aNeg) : bool((a >= b)) );
				}
				return null();
			}
		};
		HX_STACK_LINE(285)
		if ((_Function_1_1::Block(this))){
			HX_STACK_LINE(287)
			this->money = (this->money - this->moneyBoostPrice);
			HX_STACK_LINE(288)
			this->moneyBoostPrice = (this->moneyBoostPrice * (int)2);
			HX_STACK_LINE(289)
			this->moneyBoostValue = (this->moneyBoostValue * (int)2);
			HX_STACK_LINE(291)
			this->moneyBoost->set_scaleX(1.1);
			HX_STACK_LINE(292)
			this->moneyBoost->set_scaleY(1.1);
			HX_STACK_LINE(293)
			::motion::easing::IEasing _g = ::motion::easing::Bounce_obj::get_easeOut();		HX_STACK_VAR(_g,"_g");
			struct _Function_2_1{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/clicker/GameState.hx",293,0xf057845d)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_CSTRING("scaleX") , (int)1,false);
						__result->Add(HX_CSTRING("scaleY") , (int)1,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(293)
			::motion::Actuate_obj::tween(this->moneyBoost,0.5,_Function_2_1::Block(),null(),null())->ease(_g);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GameState_obj,moneyBoostHandler,(void))

Void GameState_obj::exploderBoostHandler( ::openfl::_v2::events::MouseEvent e){
{
		HX_STACK_FRAME("com.ukuleledog.games.clicker.GameState","exploderBoostHandler",0xc6589c63,"com.ukuleledog.games.clicker.GameState.exploderBoostHandler","com/ukuleledog/games/clicker/GameState.hx",299,0xf057845d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		struct _Function_1_1{
			inline static bool Block( hx::ObjectPtr< ::com::ukuleledog::games::clicker::GameState_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/clicker/GameState.hx",299,0xf057845d)
				{
					HX_STACK_LINE(299)
					int a = __this->money;		HX_STACK_VAR(a,"a");
					HX_STACK_LINE(299)
					int b = __this->exploderBoostPrice;		HX_STACK_VAR(b,"b");
					HX_STACK_LINE(299)
					bool aNeg = (a < (int)0);		HX_STACK_VAR(aNeg,"aNeg");
					HX_STACK_LINE(299)
					bool bNeg = (b < (int)0);		HX_STACK_VAR(bNeg,"bNeg");
					HX_STACK_LINE(299)
					return (  (((aNeg != bNeg))) ? bool(aNeg) : bool((a >= b)) );
				}
				return null();
			}
		};
		HX_STACK_LINE(299)
		if ((_Function_1_1::Block(this))){
			HX_STACK_LINE(301)
			this->money = (this->money - this->exploderBoostPrice);
			HX_STACK_LINE(302)
			this->exploderBoostPrice = (this->exploderBoostPrice * (int)2);
			HX_STACK_LINE(304)
			this->exploderBoostValue = (this->currentPointValue * (int)2);
			HX_STACK_LINE(306)
			this->exploderBoost->set_scaleX(1.1);
			HX_STACK_LINE(307)
			this->exploderBoost->set_scaleY(1.1);
			HX_STACK_LINE(308)
			::motion::easing::IEasing _g = ::motion::easing::Bounce_obj::get_easeOut();		HX_STACK_VAR(_g,"_g");
			struct _Function_2_1{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/clicker/GameState.hx",308,0xf057845d)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_CSTRING("scaleX") , (int)1,false);
						__result->Add(HX_CSTRING("scaleY") , (int)1,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(308)
			::motion::Actuate_obj::tween(this->exploderBoost,0.5,_Function_2_1::Block(),null(),null())->ease(_g);
			HX_STACK_LINE(310)
			Float _g1 = this->asuka->get_alpha();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(310)
			if (((_g1 == (int)0))){
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/clicker/GameState.hx",311,0xf057845d)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("alpha") , (int)1,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(311)
				::motion::Actuate_obj::tween(this->asuka,(int)1,_Function_3_1::Block(),null(),null());
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
	HX_MARK_MEMBER_NAME(moneyEarned,"moneyEarned");
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
	HX_MARK_MEMBER_NAME(tempMattImage,"tempMattImage");
	HX_MARK_MEMBER_NAME(mattImage,"mattImage");
	HX_MARK_MEMBER_NAME(mattFrame,"mattFrame");
	HX_MARK_MEMBER_NAME(matt,"matt");
	HX_MARK_MEMBER_NAME(asuka,"asuka");
	HX_MARK_MEMBER_NAME(shop,"shop");
	HX_MARK_MEMBER_NAME(costume,"costume");
	HX_MARK_MEMBER_NAME(clicks,"clicks");
	::openfl::_v2::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void GameState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(points,"points");
	HX_VISIT_MEMBER_NAME(level,"level");
	HX_VISIT_MEMBER_NAME(money,"money");
	HX_VISIT_MEMBER_NAME(moneyEarned,"moneyEarned");
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
	HX_VISIT_MEMBER_NAME(tempMattImage,"tempMattImage");
	HX_VISIT_MEMBER_NAME(mattImage,"mattImage");
	HX_VISIT_MEMBER_NAME(mattFrame,"mattFrame");
	HX_VISIT_MEMBER_NAME(matt,"matt");
	HX_VISIT_MEMBER_NAME(asuka,"asuka");
	HX_VISIT_MEMBER_NAME(shop,"shop");
	HX_VISIT_MEMBER_NAME(costume,"costume");
	HX_VISIT_MEMBER_NAME(clicks,"clicks");
	::openfl::_v2::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic GameState_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"matt") ) { return matt; }
		if (HX_FIELD_EQ(inName,"shop") ) { return shop; }
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		if (HX_FIELD_EQ(inName,"loop") ) { return loop_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"level") ) { return level; }
		if (HX_FIELD_EQ(inName,"money") ) { return money; }
		if (HX_FIELD_EQ(inName,"asuka") ) { return asuka; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"points") ) { return points; }
		if (HX_FIELD_EQ(inName,"clicks") ) { return clicks; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"costume") ) { return costume; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"lblLevel") ) { return lblLevel; }
		if (HX_FIELD_EQ(inName,"lblMoney") ) { return lblMoney; }
		if (HX_FIELD_EQ(inName,"drawMatt") ) { return drawMatt_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"mattImage") ) { return mattImage; }
		if (HX_FIELD_EQ(inName,"mattFrame") ) { return mattFrame; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"clickBoost") ) { return clickBoost; }
		if (HX_FIELD_EQ(inName,"moneyBoost") ) { return moneyBoost; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"moneyEarned") ) { return moneyEarned; }
		if (HX_FIELD_EQ(inName,"pointHandle") ) { return pointHandle_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"exploderBoost") ) { return exploderBoost; }
		if (HX_FIELD_EQ(inName,"lblClickBoost") ) { return lblClickBoost; }
		if (HX_FIELD_EQ(inName,"lblMoneyBoost") ) { return lblMoneyBoost; }
		if (HX_FIELD_EQ(inName,"exploderTimer") ) { return exploderTimer; }
		if (HX_FIELD_EQ(inName,"tempMattImage") ) { return tempMattImage; }
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
	case 4:
		if (HX_FIELD_EQ(inName,"matt") ) { matt=inValue.Cast< ::openfl::_v2::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"shop") ) { shop=inValue.Cast< ::openfl::_v2::display::Sprite >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"level") ) { level=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"money") ) { money=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"asuka") ) { asuka=inValue.Cast< ::openfl::_v2::display::Sprite >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"points") ) { points=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"clicks") ) { clicks=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"costume") ) { costume=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"lblLevel") ) { lblLevel=inValue.Cast< ::openfl::_v2::text::TextField >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lblMoney") ) { lblMoney=inValue.Cast< ::openfl::_v2::text::TextField >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"mattImage") ) { mattImage=inValue.Cast< ::openfl::_v2::display::BitmapData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mattFrame") ) { mattFrame=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"clickBoost") ) { clickBoost=inValue.Cast< ::openfl::_v2::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"moneyBoost") ) { moneyBoost=inValue.Cast< ::openfl::_v2::display::Sprite >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"moneyEarned") ) { moneyEarned=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"exploderBoost") ) { exploderBoost=inValue.Cast< ::openfl::_v2::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lblClickBoost") ) { lblClickBoost=inValue.Cast< ::openfl::_v2::text::TextField >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lblMoneyBoost") ) { lblMoneyBoost=inValue.Cast< ::openfl::_v2::text::TextField >(); return inValue; }
		if (HX_FIELD_EQ(inName,"exploderTimer") ) { exploderTimer=inValue.Cast< ::openfl::_v2::utils::Timer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tempMattImage") ) { tempMattImage=inValue.Cast< ::openfl::_v2::display::BitmapData >(); return inValue; }
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
	outFields->push(HX_CSTRING("moneyEarned"));
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
	outFields->push(HX_CSTRING("tempMattImage"));
	outFields->push(HX_CSTRING("mattImage"));
	outFields->push(HX_CSTRING("mattFrame"));
	outFields->push(HX_CSTRING("matt"));
	outFields->push(HX_CSTRING("asuka"));
	outFields->push(HX_CSTRING("shop"));
	outFields->push(HX_CSTRING("costume"));
	outFields->push(HX_CSTRING("clicks"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(GameState_obj,points),HX_CSTRING("points")},
	{hx::fsInt,(int)offsetof(GameState_obj,level),HX_CSTRING("level")},
	{hx::fsInt,(int)offsetof(GameState_obj,money),HX_CSTRING("money")},
	{hx::fsInt,(int)offsetof(GameState_obj,moneyEarned),HX_CSTRING("moneyEarned")},
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
	{hx::fsObject /*::openfl::_v2::display::BitmapData*/ ,(int)offsetof(GameState_obj,tempMattImage),HX_CSTRING("tempMattImage")},
	{hx::fsObject /*::openfl::_v2::display::BitmapData*/ ,(int)offsetof(GameState_obj,mattImage),HX_CSTRING("mattImage")},
	{hx::fsInt,(int)offsetof(GameState_obj,mattFrame),HX_CSTRING("mattFrame")},
	{hx::fsObject /*::openfl::_v2::display::Sprite*/ ,(int)offsetof(GameState_obj,matt),HX_CSTRING("matt")},
	{hx::fsObject /*::openfl::_v2::display::Sprite*/ ,(int)offsetof(GameState_obj,asuka),HX_CSTRING("asuka")},
	{hx::fsObject /*::openfl::_v2::display::Sprite*/ ,(int)offsetof(GameState_obj,shop),HX_CSTRING("shop")},
	{hx::fsInt,(int)offsetof(GameState_obj,costume),HX_CSTRING("costume")},
	{hx::fsInt,(int)offsetof(GameState_obj,clicks),HX_CSTRING("clicks")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("points"),
	HX_CSTRING("level"),
	HX_CSTRING("money"),
	HX_CSTRING("moneyEarned"),
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
	HX_CSTRING("tempMattImage"),
	HX_CSTRING("mattImage"),
	HX_CSTRING("mattFrame"),
	HX_CSTRING("matt"),
	HX_CSTRING("asuka"),
	HX_CSTRING("shop"),
	HX_CSTRING("costume"),
	HX_CSTRING("clicks"),
	HX_CSTRING("init"),
	HX_CSTRING("drawMatt"),
	HX_CSTRING("mouseUpHandler"),
	HX_CSTRING("pointHandle"),
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
