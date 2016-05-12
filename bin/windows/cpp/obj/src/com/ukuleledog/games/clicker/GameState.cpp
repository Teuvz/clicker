#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_com_ukuleledog_games_clicker_GameState
#include <com/ukuleledog/games/clicker/GameState.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
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
#ifndef INCLUDED_motion_easing_Linear
#include <motion/easing/Linear.h>
#endif
#ifndef INCLUDED_openfl__v2_Assets
#include <openfl/_v2/Assets.h>
#endif
#ifndef INCLUDED_openfl__v2_display_BitmapData
#include <openfl/_v2/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__v2_display_CapsStyle
#include <openfl/_v2/display/CapsStyle.h>
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
#ifndef INCLUDED_openfl__v2_display_JointStyle
#include <openfl/_v2/display/JointStyle.h>
#endif
#ifndef INCLUDED_openfl__v2_display_LineScaleMode
#include <openfl/_v2/display/LineScaleMode.h>
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
#ifndef INCLUDED_openfl__v2_text_TextFormat
#include <openfl/_v2/text/TextFormat.h>
#endif
#ifndef INCLUDED_openfl__v2_text_TextFormatAlign
#include <openfl/_v2/text/TextFormatAlign.h>
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
HX_STACK_FRAME("com.ukuleledog.games.clicker.GameState","new",0x85983655,"com.ukuleledog.games.clicker.GameState.new","com/ukuleledog/games/clicker/GameState.hx",24,0xf057845d)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(89)
	this->canClick = true;
	HX_STACK_LINE(87)
	this->hasCostume8 = false;
	HX_STACK_LINE(86)
	this->hasCostume7 = false;
	HX_STACK_LINE(85)
	this->hasCostume6 = false;
	HX_STACK_LINE(84)
	this->hasCostume5 = false;
	HX_STACK_LINE(83)
	this->hasCostume4 = false;
	HX_STACK_LINE(82)
	this->hasCostume3 = false;
	HX_STACK_LINE(81)
	this->hasCostume2 = false;
	HX_STACK_LINE(80)
	this->hasCostume1 = false;
	HX_STACK_LINE(70)
	this->costume = (int)0;
	HX_STACK_LINE(60)
	this->mattFrame = (int)0;
	HX_STACK_LINE(55)
	this->exploderBoostValue = (int)0;
	HX_STACK_LINE(54)
	this->moneyBoostValue = (int)1;
	HX_STACK_LINE(52)
	this->exploderBoostPrice = (int)100;
	HX_STACK_LINE(51)
	this->moneyBoostPrice = (int)50;
	HX_STACK_LINE(50)
	this->clickBoostPrice = (int)10;
	HX_STACK_LINE(32)
	this->currentPointsNeeded = (int)10;
	HX_STACK_LINE(31)
	this->currentPointValue = (int)1;
	HX_STACK_LINE(29)
	this->money = (int)0;
	HX_STACK_LINE(28)
	this->level = (int)1;
	HX_STACK_LINE(96)
	super::__construct();
	HX_STACK_LINE(98)
	this->clicks = (int)0;
	HX_STACK_LINE(99)
	this->points = (int)0;
	HX_STACK_LINE(100)
	this->level = (int)0;
	HX_STACK_LINE(101)
	this->currentPointValue = (int)1;
	HX_STACK_LINE(102)
	this->currentPointsNeeded = (int)10;
	HX_STACK_LINE(103)
	this->money = (int)0;
	HX_STACK_LINE(105)
	::openfl::_v2::text::TextFormat _g = ::openfl::_v2::text::TextFormat_obj::__new(HX_CSTRING("arial"),(int)12,null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(105)
	this->lblFormat = _g;
	HX_STACK_LINE(107)
	::openfl::_v2::text::TextField _g1 = ::openfl::_v2::text::TextField_obj::__new();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(107)
	this->lblLevel = _g1;
	HX_STACK_LINE(108)
	this->lblLevel->set_x((int)10);
	HX_STACK_LINE(109)
	this->lblLevel->set_y((int)10);
	HX_STACK_LINE(110)
	this->lblLevel->set_width((int)900);
	HX_STACK_LINE(111)
	this->lblLevel->set_selectable(false);
	HX_STACK_LINE(112)
	this->lblLevel->set_defaultTextFormat(this->lblFormat);
	HX_STACK_LINE(114)
	::openfl::_v2::text::TextField _g2 = ::openfl::_v2::text::TextField_obj::__new();		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(114)
	this->lblCurrentPoints = _g2;
	HX_STACK_LINE(115)
	this->lblCurrentPoints->set_x((int)250);
	HX_STACK_LINE(116)
	this->lblCurrentPoints->set_y((int)398);
	HX_STACK_LINE(117)
	this->lblCurrentPoints->set_width((int)300);
	HX_STACK_LINE(118)
	::openfl::_v2::text::TextFormat _g3 = ::openfl::_v2::text::TextFormat_obj::__new(HX_CSTRING("arial"),(int)12,null(),null(),null(),null(),null(),null(),::openfl::_v2::text::TextFormatAlign_obj::CENTER,null(),null(),null(),null());		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(118)
	this->lblCurrentPoints->set_defaultTextFormat(_g3);
	HX_STACK_LINE(119)
	this->lblCurrentPoints->set_height((int)17);
	HX_STACK_LINE(120)
	this->lblCurrentPoints->set_selectable(false);
	HX_STACK_LINE(121)
	this->lblCurrentPoints->set_alpha((int)0);
	HX_STACK_LINE(129)
	::openfl::_v2::text::TextField _g4 = ::openfl::_v2::text::TextField_obj::__new();		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(129)
	this->lblMoney = _g4;
	HX_STACK_LINE(130)
	this->lblMoney->set_x((int)249);
	HX_STACK_LINE(131)
	this->lblMoney->set_y((int)415);
	HX_STACK_LINE(132)
	this->lblMoney->set_width((int)200);
	HX_STACK_LINE(133)
	this->lblMoney->set_height((int)30);
	HX_STACK_LINE(134)
	this->lblMoney->set_defaultTextFormat(this->lblFormat);
	HX_STACK_LINE(135)
	this->lblMoney->set_selectable(false);
	HX_STACK_LINE(137)
	::openfl::_v2::text::TextField _g5 = ::openfl::_v2::text::TextField_obj::__new();		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(137)
	this->lblMoneyEarned = _g5;
	HX_STACK_LINE(138)
	this->lblMoneyEarned->set_x((int)450);
	HX_STACK_LINE(139)
	this->lblMoneyEarned->set_y((int)415);
	HX_STACK_LINE(140)
	this->lblMoneyEarned->set_width((int)100);
	HX_STACK_LINE(141)
	this->lblMoneyEarned->set_height((int)30);
	HX_STACK_LINE(142)
	::openfl::_v2::text::TextFormat _g6 = ::openfl::_v2::text::TextFormat_obj::__new(HX_CSTRING("arial"),(int)12,null(),null(),null(),null(),null(),null(),::openfl::_v2::text::TextFormatAlign_obj::RIGHT,null(),null(),null(),null());		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(142)
	this->lblMoneyEarned->set_defaultTextFormat(_g6);
	HX_STACK_LINE(143)
	this->lblMoneyEarned->set_selectable(false);
	HX_STACK_LINE(144)
	this->lblMoneyEarned->set_alpha((int)0);
	HX_STACK_LINE(146)
	::openfl::_v2::display::Sprite _g7 = ::openfl::_v2::display::Sprite_obj::__new();		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(146)
	this->clickBoost = _g7;
	HX_STACK_LINE(148)
	::openfl::_v2::display::BitmapData _g8 = ::openfl::_v2::Assets_obj::getBitmapData(HX_CSTRING("img/click.png"),null());		HX_STACK_VAR(_g8,"_g8");
	HX_STACK_LINE(148)
	this->clickBoost->get_graphics()->beginBitmapFill(_g8,null(),null(),null());
	HX_STACK_LINE(149)
	this->clickBoost->get_graphics()->drawRect((int)0,(int)0,(int)64,(int)64);
	HX_STACK_LINE(150)
	this->clickBoost->get_graphics()->endFill();
	HX_STACK_LINE(151)
	this->clickBoost->set_x((int)10);
	HX_STACK_LINE(152)
	this->clickBoost->set_y((int)200);
	HX_STACK_LINE(153)
	this->clickBoost->buttonMode = true;
	HX_STACK_LINE(154)
	this->clickBoost->addEventListener(::openfl::_v2::events::MouseEvent_obj::MOUSE_UP,this->clickBoostHandler_dyn(),null(),null(),null());
	HX_STACK_LINE(156)
	::openfl::_v2::text::TextField _g9 = ::openfl::_v2::text::TextField_obj::__new();		HX_STACK_VAR(_g9,"_g9");
	HX_STACK_LINE(156)
	this->lblClickBoost = _g9;
	HX_STACK_LINE(157)
	this->lblClickBoost->set_mouseEnabled(false);
	HX_STACK_LINE(158)
	this->lblClickBoost->set_selectable(false);
	HX_STACK_LINE(159)
	this->lblClickBoost->set_y((int)-10);
	HX_STACK_LINE(160)
	this->lblClickBoost->set_defaultTextFormat(this->lblFormat);
	HX_STACK_LINE(161)
	this->clickBoost->addChild(this->lblClickBoost);
	HX_STACK_LINE(163)
	::openfl::_v2::display::Sprite _g10 = ::openfl::_v2::display::Sprite_obj::__new();		HX_STACK_VAR(_g10,"_g10");
	HX_STACK_LINE(163)
	this->moneyBoost = _g10;
	HX_STACK_LINE(165)
	::openfl::_v2::display::BitmapData _g11 = ::openfl::_v2::Assets_obj::getBitmapData(HX_CSTRING("img/money.png"),null());		HX_STACK_VAR(_g11,"_g11");
	HX_STACK_LINE(165)
	this->moneyBoost->get_graphics()->beginBitmapFill(_g11,null(),null(),null());
	HX_STACK_LINE(166)
	this->moneyBoost->get_graphics()->drawRect((int)0,(int)0,(int)64,(int)64);
	HX_STACK_LINE(167)
	this->moneyBoost->get_graphics()->endFill();
	HX_STACK_LINE(168)
	this->moneyBoost->set_x((int)10);
	HX_STACK_LINE(169)
	this->moneyBoost->set_y((int)300);
	HX_STACK_LINE(170)
	this->moneyBoost->buttonMode = true;
	HX_STACK_LINE(171)
	this->moneyBoost->addEventListener(::openfl::_v2::events::MouseEvent_obj::MOUSE_UP,this->moneyBoostHandler_dyn(),null(),null(),null());
	HX_STACK_LINE(173)
	::openfl::_v2::text::TextField _g12 = ::openfl::_v2::text::TextField_obj::__new();		HX_STACK_VAR(_g12,"_g12");
	HX_STACK_LINE(173)
	this->lblMoneyBoost = _g12;
	HX_STACK_LINE(174)
	this->lblMoneyBoost->set_mouseEnabled(false);
	HX_STACK_LINE(175)
	this->lblMoneyBoost->set_selectable(false);
	HX_STACK_LINE(176)
	this->lblMoneyBoost->set_y((int)-10);
	HX_STACK_LINE(177)
	this->lblMoneyBoost->set_defaultTextFormat(this->lblFormat);
	HX_STACK_LINE(178)
	this->moneyBoost->addChild(this->lblMoneyBoost);
	HX_STACK_LINE(180)
	::openfl::_v2::display::Sprite _g13 = ::openfl::_v2::display::Sprite_obj::__new();		HX_STACK_VAR(_g13,"_g13");
	HX_STACK_LINE(180)
	this->exploderBoost = _g13;
	HX_STACK_LINE(182)
	::openfl::_v2::display::BitmapData _g14 = ::openfl::_v2::Assets_obj::getBitmapData(HX_CSTRING("img/booster.png"),null());		HX_STACK_VAR(_g14,"_g14");
	HX_STACK_LINE(182)
	this->exploderBoost->get_graphics()->beginBitmapFill(_g14,null(),null(),null());
	HX_STACK_LINE(183)
	this->exploderBoost->get_graphics()->drawRect((int)0,(int)0,(int)64,(int)64);
	HX_STACK_LINE(184)
	this->exploderBoost->get_graphics()->endFill();
	HX_STACK_LINE(185)
	this->exploderBoost->set_x((int)10);
	HX_STACK_LINE(186)
	this->exploderBoost->set_y((int)400);
	HX_STACK_LINE(187)
	this->exploderBoost->buttonMode = true;
	HX_STACK_LINE(188)
	this->exploderBoost->addEventListener(::openfl::_v2::events::MouseEvent_obj::MOUSE_UP,this->exploderBoostHandler_dyn(),null(),null(),null());
	HX_STACK_LINE(190)
	::openfl::_v2::text::TextField _g15 = ::openfl::_v2::text::TextField_obj::__new();		HX_STACK_VAR(_g15,"_g15");
	HX_STACK_LINE(190)
	this->lblExploderBoost = _g15;
	HX_STACK_LINE(191)
	this->lblExploderBoost->set_mouseEnabled(false);
	HX_STACK_LINE(192)
	this->lblExploderBoost->set_selectable(false);
	HX_STACK_LINE(193)
	this->lblExploderBoost->set_y((int)-15);
	HX_STACK_LINE(194)
	this->lblExploderBoost->set_defaultTextFormat(this->lblFormat);
	HX_STACK_LINE(195)
	this->exploderBoost->addChild(this->lblExploderBoost);
	HX_STACK_LINE(197)
	::openfl::_v2::display::BitmapData _g16 = ::openfl::_v2::Assets_obj::getBitmapData(HX_CSTRING("img/matt.png"),null());		HX_STACK_VAR(_g16,"_g16");
	HX_STACK_LINE(197)
	this->mattImage = _g16;
	HX_STACK_LINE(198)
	::openfl::_v2::display::Sprite _g17 = ::openfl::_v2::display::Sprite_obj::__new();		HX_STACK_VAR(_g17,"_g17");
	HX_STACK_LINE(198)
	this->matt = _g17;
	HX_STACK_LINE(199)
	this->matt->set_x((int)250);
	HX_STACK_LINE(200)
	this->matt->set_y((int)90);
	HX_STACK_LINE(201)
	this->drawMatt(null());
	HX_STACK_LINE(203)
	::openfl::_v2::display::Sprite _g18 = ::openfl::_v2::display::Sprite_obj::__new();		HX_STACK_VAR(_g18,"_g18");
	HX_STACK_LINE(203)
	this->levelBar = _g18;
	HX_STACK_LINE(204)
	this->levelBar->get_graphics()->beginFill((int)12434877,null());
	HX_STACK_LINE(205)
	this->levelBar->get_graphics()->drawRect((int)0,(int)0,(int)300,(int)15);
	HX_STACK_LINE(206)
	this->levelBar->get_graphics()->endFill();
	HX_STACK_LINE(207)
	this->levelBar->set_x((int)250);
	HX_STACK_LINE(208)
	this->levelBar->set_y((int)400);
	HX_STACK_LINE(210)
	::openfl::_v2::display::Sprite _g19 = ::openfl::_v2::display::Sprite_obj::__new();		HX_STACK_VAR(_g19,"_g19");
	HX_STACK_LINE(210)
	this->levelProgressionBar = _g19;
	HX_STACK_LINE(211)
	this->levelProgressionBar->get_graphics()->beginFill((int)3858176,null());
	HX_STACK_LINE(212)
	this->levelProgressionBar->get_graphics()->drawRect((int)0,(int)0,(int)0,(int)15);
	HX_STACK_LINE(213)
	this->levelProgressionBar->get_graphics()->endFill();
	HX_STACK_LINE(214)
	this->levelProgressionBar->set_x((int)250);
	HX_STACK_LINE(215)
	this->levelProgressionBar->set_y((int)400);
	HX_STACK_LINE(217)
	::openfl::_v2::display::Sprite _g20 = ::openfl::_v2::display::Sprite_obj::__new();		HX_STACK_VAR(_g20,"_g20");
	HX_STACK_LINE(217)
	this->asuka = _g20;
	HX_STACK_LINE(219)
	::openfl::_v2::display::BitmapData _g21 = ::openfl::_v2::Assets_obj::getBitmapData(HX_CSTRING("img/asuka.png"),null());		HX_STACK_VAR(_g21,"_g21");
	HX_STACK_LINE(219)
	this->asuka->get_graphics()->beginBitmapFill(_g21,null(),null(),null());
	HX_STACK_LINE(220)
	this->asuka->get_graphics()->drawRect((int)0,(int)0,(int)128,(int)128);
	HX_STACK_LINE(221)
	this->asuka->get_graphics()->endFill();
	HX_STACK_LINE(222)
	this->asuka->set_x((int)500);
	HX_STACK_LINE(223)
	this->asuka->set_y((int)140);
	HX_STACK_LINE(224)
	this->asuka->set_alpha((int)0);
	HX_STACK_LINE(226)
	::openfl::_v2::display::Sprite _g22 = ::openfl::_v2::display::Sprite_obj::__new();		HX_STACK_VAR(_g22,"_g22");
	HX_STACK_LINE(226)
	this->shop = _g22;
	HX_STACK_LINE(227)
	::openfl::_v2::display::BitmapData _g23 = ::openfl::_v2::Assets_obj::getBitmapData(HX_CSTRING("img/shop.png"),null());		HX_STACK_VAR(_g23,"_g23");
	HX_STACK_LINE(227)
	this->shop->get_graphics()->beginBitmapFill(_g23,null(),null(),null());
	HX_STACK_LINE(228)
	this->shop->get_graphics()->drawRect((int)0,(int)0,(int)64,(int)64);
	HX_STACK_LINE(229)
	this->shop->get_graphics()->endFill();
	HX_STACK_LINE(230)
	this->shop->set_x((int)726);
	HX_STACK_LINE(231)
	this->shop->set_y((int)400);
	HX_STACK_LINE(232)
	this->shop->buttonMode = true;
	HX_STACK_LINE(233)
	this->shop->addEventListener(::openfl::_v2::events::MouseEvent_obj::MOUSE_UP,this->shopOpenHandler_dyn(),null(),null(),null());
	HX_STACK_LINE(235)
	::openfl::_v2::display::Sprite _g24 = ::openfl::_v2::display::Sprite_obj::__new();		HX_STACK_VAR(_g24,"_g24");
	HX_STACK_LINE(235)
	this->shopWindow = _g24;
	HX_STACK_LINE(236)
	this->shopWindow->get_graphics()->lineStyle((int)5,(int)0,null(),null(),null(),null(),null(),null());
	HX_STACK_LINE(237)
	this->shopWindow->get_graphics()->beginFill((int)16777215,null());
	HX_STACK_LINE(238)
	this->shopWindow->get_graphics()->drawRoundRect((int)0,(int)0,(int)700,(int)380,(int)5,null());
	HX_STACK_LINE(239)
	this->shopWindow->get_graphics()->endFill();
	HX_STACK_LINE(240)
	this->shopWindow->set_x((int)50);
	HX_STACK_LINE(241)
	this->shopWindow->set_y((int)500);
	HX_STACK_LINE(243)
	::openfl::_v2::display::Sprite _g25 = ::openfl::_v2::display::Sprite_obj::__new();		HX_STACK_VAR(_g25,"_g25");
	HX_STACK_LINE(243)
	this->shopWindowClose = _g25;
	HX_STACK_LINE(245)
	::openfl::_v2::display::BitmapData _g26 = ::openfl::_v2::Assets_obj::getBitmapData(HX_CSTRING("img/shop-close.png"),null());		HX_STACK_VAR(_g26,"_g26");
	HX_STACK_LINE(245)
	this->shopWindowClose->get_graphics()->beginBitmapFill(_g26,null(),null(),null());
	HX_STACK_LINE(246)
	this->shopWindowClose->get_graphics()->drawRect((int)0,(int)0,(int)32,(int)32);
	HX_STACK_LINE(247)
	this->shopWindowClose->get_graphics()->endFill();
	HX_STACK_LINE(248)
	this->shopWindowClose->set_x((int)685);
	HX_STACK_LINE(249)
	this->shopWindowClose->set_y((int)-15);
	HX_STACK_LINE(250)
	this->shopWindowClose->buttonMode = true;
	HX_STACK_LINE(251)
	this->shopWindowClose->addEventListener(::openfl::_v2::events::MouseEvent_obj::MOUSE_UP,this->shopCloseHandler_dyn(),null(),null(),null());
	HX_STACK_LINE(252)
	this->shopWindow->addChild(this->shopWindowClose);
	HX_STACK_LINE(254)
	::openfl::_v2::display::Sprite _g27 = this->createShopButton(HX_CSTRING("mario"),(int)6,null());		HX_STACK_VAR(_g27,"_g27");
	HX_STACK_LINE(254)
	this->shopCostume6 = _g27;
	HX_STACK_LINE(255)
	::openfl::_v2::display::Sprite _g28 = this->createShopButton(HX_CSTRING("evangelion"),(int)2,null());		HX_STACK_VAR(_g28,"_g28");
	HX_STACK_LINE(255)
	this->shopCostume2 = _g28;
	HX_STACK_LINE(256)
	::openfl::_v2::display::Sprite _g29 = this->createShopButton(HX_CSTRING("maid"),(int)8,null());		HX_STACK_VAR(_g29,"_g29");
	HX_STACK_LINE(256)
	this->shopCostume8 = _g29;
	HX_STACK_LINE(257)
	::openfl::_v2::display::Sprite _g30 = this->createShopButton(HX_CSTRING("leia"),(int)3,null());		HX_STACK_VAR(_g30,"_g30");
	HX_STACK_LINE(257)
	this->shopCostume3 = _g30;
	HX_STACK_LINE(258)
	::openfl::_v2::display::Sprite _g31 = this->createShopButton(HX_CSTRING("pikachu"),(int)4,null());		HX_STACK_VAR(_g31,"_g31");
	HX_STACK_LINE(258)
	this->shopCostume4 = _g31;
	HX_STACK_LINE(259)
	::openfl::_v2::display::Sprite _g32 = this->createShopButton(HX_CSTRING("cheerleader"),(int)1,null());		HX_STACK_VAR(_g32,"_g32");
	HX_STACK_LINE(259)
	this->shopCostume1 = _g32;
	HX_STACK_LINE(260)
	::openfl::_v2::display::Sprite _g33 = this->createShopButton(HX_CSTRING("mermaid"),(int)7,null());		HX_STACK_VAR(_g33,"_g33");
	HX_STACK_LINE(260)
	this->shopCostume7 = _g33;
	HX_STACK_LINE(261)
	::openfl::_v2::display::Sprite _g34 = this->createShopButton(HX_CSTRING("unicorn"),(int)5,null());		HX_STACK_VAR(_g34,"_g34");
	HX_STACK_LINE(261)
	this->shopCostume5 = _g34;
	HX_STACK_LINE(262)
	::openfl::_v2::display::Sprite _g35 = this->createShopButton(HX_CSTRING("none"),(int)0,null());		HX_STACK_VAR(_g35,"_g35");
	HX_STACK_LINE(262)
	this->shopCostumeNone = _g35;
	HX_STACK_LINE(263)
	this->shopCostumeNone->addEventListener(::openfl::_v2::events::MouseEvent_obj::MOUSE_UP,this->noCostumeHandler_dyn(),null(),null(),null());
	HX_STACK_LINE(265)
	::openfl::_v2::utils::Timer _g36 = ::openfl::_v2::utils::Timer_obj::__new((int)1000,null());		HX_STACK_VAR(_g36,"_g36");
	HX_STACK_LINE(265)
	this->exploderTimer = _g36;
	HX_STACK_LINE(266)
	this->exploderTimer->addEventListener(::openfl::events::TimerEvent_obj::TIMER,this->exploderHandler_dyn(),null(),null(),null());
	HX_STACK_LINE(267)
	this->exploderTimer->start();
	HX_STACK_LINE(269)
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
		HX_STACK_FRAME("com.ukuleledog.games.clicker.GameState","init",0x5c500b7b,"com.ukuleledog.games.clicker.GameState.init","com/ukuleledog/games/clicker/GameState.hx",273,0xf057845d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(274)
		this->removeEventListener(::openfl::_v2::events::Event_obj::ADDED_TO_STAGE,this->init_dyn(),null());
		HX_STACK_LINE(275)
		this->addEventListener(::openfl::_v2::events::Event_obj::ENTER_FRAME,this->loop_dyn(),null(),null(),null());
		HX_STACK_LINE(277)
		this->addChild(this->lblLevel);
		HX_STACK_LINE(280)
		this->addChild(this->lblMoney);
		HX_STACK_LINE(281)
		this->addChild(this->lblMoneyEarned);
		HX_STACK_LINE(283)
		this->addChild(this->clickBoost);
		HX_STACK_LINE(284)
		this->addChild(this->moneyBoost);
		HX_STACK_LINE(285)
		this->addChild(this->exploderBoost);
		HX_STACK_LINE(287)
		this->addChild(this->matt);
		HX_STACK_LINE(288)
		this->addChild(this->asuka);
		HX_STACK_LINE(289)
		this->addChild(this->levelBar);
		HX_STACK_LINE(290)
		this->addChild(this->levelProgressionBar);
		HX_STACK_LINE(292)
		this->addChild(this->lblCurrentPoints);
		HX_STACK_LINE(294)
		this->addChild(this->shop);
		HX_STACK_LINE(296)
		this->get_stage()->addEventListener(::openfl::_v2::events::MouseEvent_obj::MOUSE_UP,this->mouseUpHandler_dyn(),null(),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GameState_obj,init,(void))

Void GameState_obj::drawMatt( hx::Null< bool >  __o_frameChange){
bool frameChange = __o_frameChange.Default(true);
	HX_STACK_FRAME("com.ukuleledog.games.clicker.GameState","drawMatt",0x41dccde3,"com.ukuleledog.games.clicker.GameState.drawMatt","com/ukuleledog/games/clicker/GameState.hx",300,0xf057845d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(frameChange,"frameChange")
{
		HX_STACK_LINE(301)
		if (((frameChange == true))){
			HX_STACK_LINE(302)
			(this->mattFrame)++;
		}
		struct _Function_1_1{
			inline static bool Block( hx::ObjectPtr< ::com::ukuleledog::games::clicker::GameState_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/clicker/GameState.hx",304,0xf057845d)
				{
					HX_STACK_LINE(304)
					int a = __this->mattFrame;		HX_STACK_VAR(a,"a");
					HX_STACK_LINE(304)
					bool aNeg = (a < (int)0);		HX_STACK_VAR(aNeg,"aNeg");
					HX_STACK_LINE(304)
					bool bNeg = ((int)2 < (int)0);		HX_STACK_VAR(bNeg,"bNeg");
					HX_STACK_LINE(304)
					return (  (((aNeg != bNeg))) ? bool(aNeg) : bool((a > (int)2)) );
				}
				return null();
			}
		};
		HX_STACK_LINE(304)
		if ((_Function_1_1::Block(this))){
			HX_STACK_LINE(305)
			this->mattFrame = (int)0;
		}
		HX_STACK_LINE(307)
		::openfl::_v2::display::BitmapData _g = ::openfl::_v2::display::BitmapData_obj::__new((int)300,(int)300,false,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(307)
		this->tempMattImage = _g;
		struct _Function_1_2{
			inline static Float Block( hx::ObjectPtr< ::com::ukuleledog::games::clicker::GameState_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/clicker/GameState.hx",308,0xf057845d)
				{
					HX_STACK_LINE(308)
					int _int = (__this->mattFrame * (int)300);		HX_STACK_VAR(_int,"int");
					HX_STACK_LINE(308)
					return (  (((_int < (int)0))) ? Float((4294967296.0 + _int)) : Float((_int + 0.0)) );
				}
				return null();
			}
		};
		struct _Function_1_3{
			inline static Float Block( hx::ObjectPtr< ::com::ukuleledog::games::clicker::GameState_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/clicker/GameState.hx",308,0xf057845d)
				{
					HX_STACK_LINE(308)
					int _int = ((int)300 * __this->costume);		HX_STACK_VAR(_int,"int");
					HX_STACK_LINE(308)
					return (  (((_int < (int)0))) ? Float((4294967296.0 + _int)) : Float((_int + 0.0)) );
				}
				return null();
			}
		};
		HX_STACK_LINE(308)
		::openfl::_v2::geom::Rectangle _g1 = ::openfl::_v2::geom::Rectangle_obj::__new(_Function_1_2::Block(this),_Function_1_3::Block(this),(int)300,(int)300);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(308)
		::openfl::_v2::geom::Point _g2 = ::openfl::_v2::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(308)
		this->tempMattImage->copyPixels(this->mattImage,_g1,_g2,null(),null(),null());
		HX_STACK_LINE(309)
		this->matt->get_graphics()->clear();
		HX_STACK_LINE(310)
		this->matt->get_graphics()->beginBitmapFill(this->tempMattImage,null(),null(),null());
		HX_STACK_LINE(311)
		this->matt->get_graphics()->drawRect((int)0,(int)0,(int)300,(int)300);
		HX_STACK_LINE(312)
		this->matt->get_graphics()->endFill();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GameState_obj,drawMatt,(void))

Void GameState_obj::mouseUpHandler( ::openfl::_v2::events::MouseEvent e){
{
		HX_STACK_FRAME("com.ukuleledog.games.clicker.GameState","mouseUpHandler",0x3f1bc3f5,"com.ukuleledog.games.clicker.GameState.mouseUpHandler","com/ukuleledog/games/clicker/GameState.hx",317,0xf057845d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(317)
		if ((this->canClick)){
			HX_STACK_LINE(319)
			(this->clicks)++;
			HX_STACK_LINE(320)
			this->pointHandle(this->currentPointValue);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GameState_obj,mouseUpHandler,(void))

Void GameState_obj::pointHandle( int pointsValue){
{
		HX_STACK_FRAME("com.ukuleledog.games.clicker.GameState","pointHandle",0x2750ab0d,"com.ukuleledog.games.clicker.GameState.pointHandle","com/ukuleledog/games/clicker/GameState.hx",325,0xf057845d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(pointsValue,"pointsValue")
		HX_STACK_LINE(324)
		Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new().Add(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(326)
		this->drawMatt(null());
		HX_STACK_LINE(327)
		this->points = (this->points + pointsValue);
		HX_STACK_LINE(329)
		this->levelProgressionBar->get_graphics()->clear();
		HX_STACK_LINE(330)
		this->levelProgressionBar->get_graphics()->beginFill((int)3858176,null());
		HX_STACK_LINE(332)
		Float _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(332)
		{
			struct _Function_2_1{
				inline static Float Block( hx::ObjectPtr< ::com::ukuleledog::games::clicker::GameState_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/clicker/GameState.hx",332,0xf057845d)
					{
						HX_STACK_LINE(332)
						int _int = (((__this->points - __this->lastPointsNeeded)) * (int)100);		HX_STACK_VAR(_int,"int");
						HX_STACK_LINE(332)
						return (  (((_int < (int)0))) ? Float((4294967296.0 + _int)) : Float((_int + 0.0)) );
					}
					return null();
				}
			};
			HX_STACK_LINE(332)
			int a = ::Math_obj::round(_Function_2_1::Block(this));		HX_STACK_VAR(a,"a");
			struct _Function_2_2{
				inline static Float Block( int &a){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/clicker/GameState.hx",332,0xf057845d)
					{
						HX_STACK_LINE(332)
						int _int = a;		HX_STACK_VAR(_int,"int");
						HX_STACK_LINE(332)
						return (  (((_int < (int)0))) ? Float((4294967296.0 + _int)) : Float((_int + 0.0)) );
					}
					return null();
				}
			};
			struct _Function_2_3{
				inline static Float Block( hx::ObjectPtr< ::com::ukuleledog::games::clicker::GameState_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/clicker/GameState.hx",332,0xf057845d)
					{
						HX_STACK_LINE(332)
						int _int = (__this->currentPointsNeeded - __this->lastPointsNeeded);		HX_STACK_VAR(_int,"int");
						HX_STACK_LINE(332)
						return (  (((_int < (int)0))) ? Float((4294967296.0 + _int)) : Float((_int + 0.0)) );
					}
					return null();
				}
			};
			HX_STACK_LINE(332)
			_g1 = (Float(_Function_2_2::Block(a)) / Float(_Function_2_3::Block(this)));
		}
		HX_STACK_LINE(332)
		this->percent = _g1;
		HX_STACK_LINE(334)
		if (((this->percent > (int)100))){
			HX_STACK_LINE(335)
			this->percent = (int)100;
		}
		HX_STACK_LINE(337)
		this->levelProgressionBar->get_graphics()->drawRect((int)0,(int)0,(this->percent * (int)3),(int)15);
		HX_STACK_LINE(338)
		this->levelProgressionBar->get_graphics()->endFill();
		struct _Function_1_1{
			inline static Float Block( int &pointsValue){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/clicker/GameState.hx",342,0xf057845d)
				{
					HX_STACK_LINE(342)
					int _int = pointsValue;		HX_STACK_VAR(_int,"int");
					HX_STACK_LINE(342)
					return (  (((_int < (int)0))) ? Float((4294967296.0 + _int)) : Float((_int + 0.0)) );
				}
				return null();
			}
		};
		HX_STACK_LINE(342)
		::String _g11 = ::Std_obj::string(_Function_1_1::Block(pointsValue));		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(342)
		::String _g2 = (HX_CSTRING("+ ") + _g11);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(342)
		::String _g3 = (_g2 + HX_CSTRING(" points"));		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(342)
		this->lblCurrentPoints->set_text(_g3);
		HX_STACK_LINE(343)
		::motion::easing::IEasing _g4 = ::motion::easing::Linear_obj::get_easeNone();		HX_STACK_VAR(_g4,"_g4");
		struct _Function_1_2{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/clicker/GameState.hx",343,0xf057845d)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("alpha") , (int)1,false);
					return __result;
				}
				return null();
			}
		};

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_3,Array< ::Dynamic >,_g)
		Void run(){
			HX_STACK_FRAME("*","_Function_1_3",0x5200ed39,"*._Function_1_3","com/ukuleledog/games/clicker/GameState.hx",344,0xf057845d)
			{
				struct _Function_2_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/clicker/GameState.hx",344,0xf057845d)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("alpha") , (int)0,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(344)
				::motion::Actuate_obj::tween(_g->__get((int)0).StaticCast< ::com::ukuleledog::games::clicker::GameState >()->lblCurrentPoints,0.5,_Function_2_1::Block(),null(),null())->ease(::motion::easing::Linear_obj::get_easeNone());
			}
			return null();
		}
		HX_END_LOCAL_FUNC0((void))

		HX_STACK_LINE(343)
		::motion::Actuate_obj::tween(this->lblCurrentPoints,0.2,_Function_1_2::Block(),null(),null())->ease(_g4)->onComplete( Dynamic(new _Function_1_3(_g)),null());
		struct _Function_1_4{
			inline static bool Block( hx::ObjectPtr< ::com::ukuleledog::games::clicker::GameState_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/clicker/GameState.hx",347,0xf057845d)
				{
					HX_STACK_LINE(347)
					int a = __this->points;		HX_STACK_VAR(a,"a");
					HX_STACK_LINE(347)
					int b = __this->currentPointsNeeded;		HX_STACK_VAR(b,"b");
					HX_STACK_LINE(347)
					bool aNeg = (a < (int)0);		HX_STACK_VAR(aNeg,"aNeg");
					HX_STACK_LINE(347)
					bool bNeg = (b < (int)0);		HX_STACK_VAR(bNeg,"bNeg");
					HX_STACK_LINE(347)
					return (  (((aNeg != bNeg))) ? bool(aNeg) : bool((a >= b)) );
				}
				return null();
			}
		};
		HX_STACK_LINE(347)
		if ((_Function_1_4::Block(this))){
			HX_STACK_LINE(349)
			(this->level)++;
			HX_STACK_LINE(351)
			::motion::easing::IEasing _g5 = ::motion::easing::Linear_obj::get_easeNone();		HX_STACK_VAR(_g5,"_g5");
			struct _Function_2_1{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/clicker/GameState.hx",351,0xf057845d)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_CSTRING("scaleX") , 1.5,false);
						__result->Add(HX_CSTRING("scaleY") , 1.5,false);
						return __result;
					}
					return null();
				}
			};

			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_2,Array< ::Dynamic >,_g)
			Void run(){
				HX_STACK_FRAME("*","_Function_2_2",0x5201af79,"*._Function_2_2","com/ukuleledog/games/clicker/GameState.hx",352,0xf057845d)
				{
					struct _Function_3_1{
						inline static Dynamic Block( ){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/clicker/GameState.hx",352,0xf057845d)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_CSTRING("scaleX") , (int)1,false);
								__result->Add(HX_CSTRING("scaleY") , (int)1,false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(352)
					::motion::Actuate_obj::tween(_g->__get((int)0).StaticCast< ::com::ukuleledog::games::clicker::GameState >()->lblLevel,0.5,_Function_3_1::Block(),null(),null())->ease(::motion::easing::Linear_obj::get_easeNone());
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			HX_STACK_LINE(351)
			::motion::Actuate_obj::tween(this->lblLevel,0.1,_Function_2_1::Block(),null(),null())->ease(_g5)->onComplete( Dynamic(new _Function_2_2(_g)),null());
			HX_STACK_LINE(355)
			this->lastPointsNeeded = this->currentPointsNeeded;
			struct _Function_2_3{
				inline static Float Block( hx::ObjectPtr< ::com::ukuleledog::games::clicker::GameState_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/clicker/GameState.hx",356,0xf057845d)
					{
						HX_STACK_LINE(356)
						int _int = __this->currentPointsNeeded;		HX_STACK_VAR(_int,"int");
						HX_STACK_LINE(356)
						return (  (((_int < (int)0))) ? Float((4294967296.0 + _int)) : Float((_int + 0.0)) );
					}
					return null();
				}
			};
			HX_STACK_LINE(356)
			int _g6 = ::Math_obj::ceil((_Function_2_3::Block(this) * 1.5));		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(356)
			this->currentPointsNeeded = _g6;
			HX_STACK_LINE(357)
			int _g10;		HX_STACK_VAR(_g10,"_g10");
			HX_STACK_LINE(357)
			{
				HX_STACK_LINE(357)
				int a;		HX_STACK_VAR(a,"a");
				HX_STACK_LINE(357)
				{
					HX_STACK_LINE(357)
					Float _g7 = ::Math_obj::random();		HX_STACK_VAR(_g7,"_g7");
					HX_STACK_LINE(357)
					Float _g8 = (_g7 * (int)10);		HX_STACK_VAR(_g8,"_g8");
					HX_STACK_LINE(357)
					int _g9 = ::Math_obj::round(_g8);		HX_STACK_VAR(_g9,"_g9");
					HX_STACK_LINE(357)
					int a1 = (_g9 + (int)1);		HX_STACK_VAR(a1,"a1");
					HX_STACK_LINE(357)
					a = (a1 + this->moneyEarned);
				}
				HX_STACK_LINE(357)
				_g10 = (a + (this->level * this->moneyBoostValue));
			}
			HX_STACK_LINE(357)
			this->moneyEarned = _g10;
			struct _Function_2_4{
				inline static bool Block( hx::ObjectPtr< ::com::ukuleledog::games::clicker::GameState_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/clicker/GameState.hx",359,0xf057845d)
					{
						HX_STACK_LINE(359)
						int a = __this->moneyEarned;		HX_STACK_VAR(a,"a");
						HX_STACK_LINE(359)
						int b = (__this->level * (int)2);		HX_STACK_VAR(b,"b");
						struct _Function_3_1{
							inline static bool Block( int &b,int &a){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/clicker/GameState.hx",359,0xf057845d)
								{
									HX_STACK_LINE(359)
									bool aNeg = (b < (int)0);		HX_STACK_VAR(aNeg,"aNeg");
									HX_STACK_LINE(359)
									bool bNeg = (a < (int)0);		HX_STACK_VAR(bNeg,"bNeg");
									HX_STACK_LINE(359)
									return (  (((aNeg != bNeg))) ? bool(aNeg) : bool((b > a)) );
								}
								return null();
							}
						};
						HX_STACK_LINE(359)
						return _Function_3_1::Block(b,a);
					}
					return null();
				}
			};
			HX_STACK_LINE(359)
			if ((_Function_2_4::Block(this))){
				HX_STACK_LINE(360)
				this->moneyEarned = (this->level * (int)2);
			}
			HX_STACK_LINE(362)
			this->money = (this->money + this->moneyEarned);
			struct _Function_2_5{
				inline static Float Block( hx::ObjectPtr< ::com::ukuleledog::games::clicker::GameState_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/clicker/GameState.hx",364,0xf057845d)
					{
						HX_STACK_LINE(364)
						int _int = __this->moneyEarned;		HX_STACK_VAR(_int,"int");
						HX_STACK_LINE(364)
						return (  (((_int < (int)0))) ? Float((4294967296.0 + _int)) : Float((_int + 0.0)) );
					}
					return null();
				}
			};
			HX_STACK_LINE(364)
			::String _g111 = ::Std_obj::string(_Function_2_5::Block(this));		HX_STACK_VAR(_g111,"_g111");
			HX_STACK_LINE(364)
			::String _g12 = (HX_CSTRING("+ $") + _g111);		HX_STACK_VAR(_g12,"_g12");
			HX_STACK_LINE(364)
			this->lblMoneyEarned->set_text(_g12);
			HX_STACK_LINE(365)
			::motion::easing::IEasing _g13 = ::motion::easing::Linear_obj::get_easeNone();		HX_STACK_VAR(_g13,"_g13");
			struct _Function_2_6{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/clicker/GameState.hx",365,0xf057845d)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_CSTRING("alpha") , (int)1,false);
						return __result;
					}
					return null();
				}
			};

			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_7,Array< ::Dynamic >,_g)
			Void run(){
				HX_STACK_FRAME("*","_Function_2_7",0x5201af7e,"*._Function_2_7","com/ukuleledog/games/clicker/GameState.hx",366,0xf057845d)
				{
					struct _Function_3_1{
						inline static Dynamic Block( ){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/clicker/GameState.hx",366,0xf057845d)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_CSTRING("alpha") , (int)0,false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(366)
					::motion::Actuate_obj::tween(_g->__get((int)0).StaticCast< ::com::ukuleledog::games::clicker::GameState >()->lblMoneyEarned,0.2,_Function_3_1::Block(),null(),null())->ease(::motion::easing::Linear_obj::get_easeNone())->delay((int)1);
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			HX_STACK_LINE(365)
			::motion::Actuate_obj::tween(this->lblMoneyEarned,0.2,_Function_2_6::Block(),null(),null())->ease(_g13)->onComplete( Dynamic(new _Function_2_7(_g)),null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GameState_obj,pointHandle,(void))

Void GameState_obj::loop( ::openfl::_v2::events::Event e){
{
		HX_STACK_FRAME("com.ukuleledog.games.clicker.GameState","loop",0x5e4c76cf,"com.ukuleledog.games.clicker.GameState.loop","com/ukuleledog/games/clicker/GameState.hx",373,0xf057845d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		struct _Function_1_1{
			inline static Float Block( hx::ObjectPtr< ::com::ukuleledog::games::clicker::GameState_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/clicker/GameState.hx",374,0xf057845d)
				{
					HX_STACK_LINE(374)
					int _int = __this->level;		HX_STACK_VAR(_int,"int");
					HX_STACK_LINE(374)
					return (  (((_int < (int)0))) ? Float((4294967296.0 + _int)) : Float((_int + 0.0)) );
				}
				return null();
			}
		};
		HX_STACK_LINE(374)
		::String _g = ::Std_obj::string(_Function_1_1::Block(this));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(374)
		::String _g1 = (HX_CSTRING("Niveau: ") + _g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(374)
		this->lblLevel->set_text(_g1);
		struct _Function_1_2{
			inline static Float Block( hx::ObjectPtr< ::com::ukuleledog::games::clicker::GameState_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/clicker/GameState.hx",377,0xf057845d)
				{
					HX_STACK_LINE(377)
					int _int = __this->money;		HX_STACK_VAR(_int,"int");
					HX_STACK_LINE(377)
					return (  (((_int < (int)0))) ? Float((4294967296.0 + _int)) : Float((_int + 0.0)) );
				}
				return null();
			}
		};
		HX_STACK_LINE(377)
		::String _g2 = ::Std_obj::string(_Function_1_2::Block(this));		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(377)
		::String _g3 = (HX_CSTRING("Argent: $") + _g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(377)
		this->lblMoney->set_text(_g3);
		struct _Function_1_3{
			inline static Float Block( hx::ObjectPtr< ::com::ukuleledog::games::clicker::GameState_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/clicker/GameState.hx",379,0xf057845d)
				{
					HX_STACK_LINE(379)
					int _int = __this->clickBoostPrice;		HX_STACK_VAR(_int,"int");
					HX_STACK_LINE(379)
					return (  (((_int < (int)0))) ? Float((4294967296.0 + _int)) : Float((_int + 0.0)) );
				}
				return null();
			}
		};
		HX_STACK_LINE(379)
		::String _g4 = ::Std_obj::string(_Function_1_3::Block(this));		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(379)
		::String _g5 = (HX_CSTRING("$") + _g4);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(379)
		this->lblClickBoost->set_text(_g5);
		struct _Function_1_4{
			inline static Float Block( hx::ObjectPtr< ::com::ukuleledog::games::clicker::GameState_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/clicker/GameState.hx",380,0xf057845d)
				{
					HX_STACK_LINE(380)
					int _int = __this->moneyBoostPrice;		HX_STACK_VAR(_int,"int");
					HX_STACK_LINE(380)
					return (  (((_int < (int)0))) ? Float((4294967296.0 + _int)) : Float((_int + 0.0)) );
				}
				return null();
			}
		};
		HX_STACK_LINE(380)
		::String _g6 = ::Std_obj::string(_Function_1_4::Block(this));		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(380)
		::String _g7 = (HX_CSTRING("$") + _g6);		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(380)
		this->lblMoneyBoost->set_text(_g7);
		struct _Function_1_5{
			inline static Float Block( hx::ObjectPtr< ::com::ukuleledog::games::clicker::GameState_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/clicker/GameState.hx",381,0xf057845d)
				{
					HX_STACK_LINE(381)
					int _int = __this->exploderBoostPrice;		HX_STACK_VAR(_int,"int");
					HX_STACK_LINE(381)
					return (  (((_int < (int)0))) ? Float((4294967296.0 + _int)) : Float((_int + 0.0)) );
				}
				return null();
			}
		};
		HX_STACK_LINE(381)
		::String _g8 = ::Std_obj::string(_Function_1_5::Block(this));		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(381)
		::String _g9 = (HX_CSTRING("$") + _g8);		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(381)
		this->lblExploderBoost->set_text(_g9);
		struct _Function_1_6{
			inline static bool Block( hx::ObjectPtr< ::com::ukuleledog::games::clicker::GameState_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/clicker/GameState.hx",383,0xf057845d)
				{
					HX_STACK_LINE(383)
					int a = __this->level;		HX_STACK_VAR(a,"a");
					HX_STACK_LINE(383)
					bool aNeg = (a < (int)0);		HX_STACK_VAR(aNeg,"aNeg");
					HX_STACK_LINE(383)
					bool bNeg = ((int)0 < (int)0);		HX_STACK_VAR(bNeg,"bNeg");
					HX_STACK_LINE(383)
					return (  (((aNeg != bNeg))) ? bool(aNeg) : bool((a > (int)0)) );
				}
				return null();
			}
		};
		struct _Function_1_7{
			inline static bool Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/clicker/GameState.hx",383,0xf057845d)
				{
					HX_STACK_LINE(383)
					Float _g10 = ::Math_obj::random();		HX_STACK_VAR(_g10,"_g10");
					HX_STACK_LINE(383)
					Float _g11 = (_g10 * (int)100);		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(383)
					return (_g11 > (int)99);
				}
				return null();
			}
		};
		HX_STACK_LINE(383)
		if (((  (((bool(_Function_1_6::Block(this)) && bool((this->special == null()))))) ? bool(_Function_1_7::Block()) : bool(false) ))){
			HX_STACK_LINE(384)
			this->showSpecial();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GameState_obj,loop,(void))

Void GameState_obj::showSpecial( ){
{
		HX_STACK_FRAME("com.ukuleledog.games.clicker.GameState","showSpecial",0x44abf9b1,"com.ukuleledog.games.clicker.GameState.showSpecial","com/ukuleledog/games/clicker/GameState.hx",389,0xf057845d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(390)
		::haxe::Log_obj::trace(this->special,hx::SourceInfo(HX_CSTRING("GameState.hx"),390,HX_CSTRING("com.ukuleledog.games.clicker.GameState"),HX_CSTRING("showSpecial")));
		HX_STACK_LINE(391)
		::openfl::_v2::display::Sprite _g = ::openfl::_v2::display::Sprite_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(391)
		this->special = _g;
		HX_STACK_LINE(392)
		this->special->get_graphics()->beginFill((int)16711680,null());
		HX_STACK_LINE(393)
		this->special->get_graphics()->drawRect((int)0,(int)0,(int)64,(int)64);
		HX_STACK_LINE(394)
		this->special->get_graphics()->endFill();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(GameState_obj,showSpecial,(void))

Void GameState_obj::exploderHandler( ::openfl::events::TimerEvent e){
{
		HX_STACK_FRAME("com.ukuleledog.games.clicker.GameState","exploderHandler",0x19e1afce,"com.ukuleledog.games.clicker.GameState.exploderHandler","com/ukuleledog/games/clicker/GameState.hx",398,0xf057845d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(397)
		Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new().Add(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g,"_g");
		struct _Function_1_1{
			inline static bool Block( hx::ObjectPtr< ::com::ukuleledog::games::clicker::GameState_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/clicker/GameState.hx",400,0xf057845d)
				{
					HX_STACK_LINE(400)
					int a = __this->exploderBoostValue;		HX_STACK_VAR(a,"a");
					HX_STACK_LINE(400)
					bool aNeg = (a < (int)0);		HX_STACK_VAR(aNeg,"aNeg");
					HX_STACK_LINE(400)
					bool bNeg = ((int)0 < (int)0);		HX_STACK_VAR(bNeg,"bNeg");
					HX_STACK_LINE(400)
					return (  (((aNeg != bNeg))) ? bool(aNeg) : bool((a > (int)0)) );
				}
				return null();
			}
		};
		HX_STACK_LINE(400)
		if (((bool(this->canClick) && bool(_Function_1_1::Block(this))))){
			HX_STACK_LINE(402)
			this->pointHandle(this->exploderBoostValue);
			HX_STACK_LINE(404)
			this->asuka->get_graphics()->clear();
			HX_STACK_LINE(405)
			::openfl::_v2::display::BitmapData _g1 = ::openfl::_v2::Assets_obj::getBitmapData(HX_CSTRING("img/asuka-click.png"),null());		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(405)
			this->asuka->get_graphics()->beginBitmapFill(_g1,null(),null(),null());
			HX_STACK_LINE(406)
			this->asuka->get_graphics()->drawRect((int)0,(int)0,(int)128,(int)128);
			HX_STACK_LINE(407)
			this->asuka->get_graphics()->endFill();
			HX_STACK_LINE(408)
			this->asuka->set_x((int)498);
			HX_STACK_LINE(410)
			::motion::easing::IEasing _g11 = ::motion::easing::Bounce_obj::get_easeInOut();		HX_STACK_VAR(_g11,"_g11");
			struct _Function_2_1{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/clicker/GameState.hx",410,0xf057845d)
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
				HX_STACK_FRAME("*","_Function_2_2",0x5201af79,"*._Function_2_2","com/ukuleledog/games/clicker/GameState.hx",410,0xf057845d)
				{
					HX_STACK_LINE(411)
					_g->__get((int)0).StaticCast< ::com::ukuleledog::games::clicker::GameState >()->asuka->get_graphics()->clear();
					HX_STACK_LINE(412)
					_g->__get((int)0).StaticCast< ::com::ukuleledog::games::clicker::GameState >()->asuka->get_graphics()->beginBitmapFill(::openfl::_v2::Assets_obj::getBitmapData(HX_CSTRING("img/asuka.png"),null()),null(),null(),null());
					HX_STACK_LINE(413)
					_g->__get((int)0).StaticCast< ::com::ukuleledog::games::clicker::GameState >()->asuka->get_graphics()->drawRect((int)0,(int)0,(int)128,(int)128);
					HX_STACK_LINE(414)
					_g->__get((int)0).StaticCast< ::com::ukuleledog::games::clicker::GameState >()->asuka->get_graphics()->endFill();
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			HX_STACK_LINE(410)
			::motion::Actuate_obj::tween(this->asuka,0.5,_Function_2_1::Block(),null(),null())->ease(_g11)->onComplete( Dynamic(new _Function_2_2(_g)),null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GameState_obj,exploderHandler,(void))

Void GameState_obj::clickBoostHandler( ::openfl::_v2::events::MouseEvent e){
{
		HX_STACK_FRAME("com.ukuleledog.games.clicker.GameState","clickBoostHandler",0xbbf04804,"com.ukuleledog.games.clicker.GameState.clickBoostHandler","com/ukuleledog/games/clicker/GameState.hx",421,0xf057845d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(420)
		Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new().Add(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g,"_g");
		struct _Function_1_1{
			inline static bool Block( hx::ObjectPtr< ::com::ukuleledog::games::clicker::GameState_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/clicker/GameState.hx",422,0xf057845d)
				{
					HX_STACK_LINE(422)
					int a = __this->money;		HX_STACK_VAR(a,"a");
					HX_STACK_LINE(422)
					int b = __this->clickBoostPrice;		HX_STACK_VAR(b,"b");
					HX_STACK_LINE(422)
					bool aNeg = (a < (int)0);		HX_STACK_VAR(aNeg,"aNeg");
					HX_STACK_LINE(422)
					bool bNeg = (b < (int)0);		HX_STACK_VAR(bNeg,"bNeg");
					HX_STACK_LINE(422)
					return (  (((aNeg != bNeg))) ? bool(aNeg) : bool((a >= b)) );
				}
				return null();
			}
		};
		HX_STACK_LINE(422)
		if (((bool(this->canClick) && bool(_Function_1_1::Block(this))))){
			HX_STACK_LINE(424)
			e->stopPropagation();
			HX_STACK_LINE(425)
			this->money = (this->money - this->clickBoostPrice);
			struct _Function_2_1{
				inline static Float Block( hx::ObjectPtr< ::com::ukuleledog::games::clicker::GameState_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/clicker/GameState.hx",427,0xf057845d)
					{
						HX_STACK_LINE(427)
						int _int = __this->clickBoostPrice;		HX_STACK_VAR(_int,"int");
						HX_STACK_LINE(427)
						return (  (((_int < (int)0))) ? Float((4294967296.0 + _int)) : Float((_int + 0.0)) );
					}
					return null();
				}
			};
			HX_STACK_LINE(427)
			::String _g1 = ::Std_obj::string(_Function_2_1::Block(this));		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(427)
			::String _g11 = (HX_CSTRING("- $") + _g1);		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(427)
			this->lblMoneyEarned->set_text(_g11);
			HX_STACK_LINE(428)
			::motion::easing::IEasing _g2 = ::motion::easing::Linear_obj::get_easeNone();		HX_STACK_VAR(_g2,"_g2");
			struct _Function_2_2{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/clicker/GameState.hx",428,0xf057845d)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_CSTRING("alpha") , (int)1,false);
						return __result;
					}
					return null();
				}
			};

			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_3,Array< ::Dynamic >,_g)
			Void run(){
				HX_STACK_FRAME("*","_Function_2_3",0x5201af7a,"*._Function_2_3","com/ukuleledog/games/clicker/GameState.hx",429,0xf057845d)
				{
					struct _Function_3_1{
						inline static Dynamic Block( ){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/clicker/GameState.hx",429,0xf057845d)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_CSTRING("alpha") , (int)0,false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(429)
					::motion::Actuate_obj::tween(_g->__get((int)0).StaticCast< ::com::ukuleledog::games::clicker::GameState >()->lblMoneyEarned,0.2,_Function_3_1::Block(),null(),null())->ease(::motion::easing::Linear_obj::get_easeNone())->delay((int)1);
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			HX_STACK_LINE(428)
			::motion::Actuate_obj::tween(this->lblMoneyEarned,0.2,_Function_2_2::Block(),null(),null())->ease(_g2)->onComplete( Dynamic(new _Function_2_3(_g)),null());
			HX_STACK_LINE(432)
			this->clickBoostPrice = (this->clickBoostPrice * (int)2);
			HX_STACK_LINE(433)
			this->currentPointValue = (this->currentPointValue * (int)2);
			HX_STACK_LINE(435)
			this->clickBoost->set_scaleX(1.1);
			HX_STACK_LINE(436)
			this->clickBoost->set_scaleY(1.1);
			HX_STACK_LINE(437)
			::motion::easing::IEasing _g3 = ::motion::easing::Bounce_obj::get_easeOut();		HX_STACK_VAR(_g3,"_g3");
			struct _Function_2_4{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/clicker/GameState.hx",437,0xf057845d)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_CSTRING("scaleX") , (int)1,false);
						__result->Add(HX_CSTRING("scaleY") , (int)1,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(437)
			::motion::Actuate_obj::tween(this->clickBoost,0.5,_Function_2_4::Block(),null(),null())->ease(_g3);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GameState_obj,clickBoostHandler,(void))

Void GameState_obj::moneyBoostHandler( ::openfl::_v2::events::MouseEvent e){
{
		HX_STACK_FRAME("com.ukuleledog.games.clicker.GameState","moneyBoostHandler",0x6dd299fc,"com.ukuleledog.games.clicker.GameState.moneyBoostHandler","com/ukuleledog/games/clicker/GameState.hx",442,0xf057845d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(441)
		Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new().Add(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g,"_g");
		struct _Function_1_1{
			inline static bool Block( hx::ObjectPtr< ::com::ukuleledog::games::clicker::GameState_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/clicker/GameState.hx",443,0xf057845d)
				{
					HX_STACK_LINE(443)
					int a = __this->money;		HX_STACK_VAR(a,"a");
					HX_STACK_LINE(443)
					int b = __this->moneyBoostPrice;		HX_STACK_VAR(b,"b");
					HX_STACK_LINE(443)
					bool aNeg = (a < (int)0);		HX_STACK_VAR(aNeg,"aNeg");
					HX_STACK_LINE(443)
					bool bNeg = (b < (int)0);		HX_STACK_VAR(bNeg,"bNeg");
					HX_STACK_LINE(443)
					return (  (((aNeg != bNeg))) ? bool(aNeg) : bool((a >= b)) );
				}
				return null();
			}
		};
		HX_STACK_LINE(443)
		if (((bool(this->canClick) && bool(_Function_1_1::Block(this))))){
			HX_STACK_LINE(445)
			e->stopPropagation();
			HX_STACK_LINE(446)
			this->money = (this->money - this->moneyBoostPrice);
			struct _Function_2_1{
				inline static Float Block( hx::ObjectPtr< ::com::ukuleledog::games::clicker::GameState_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/clicker/GameState.hx",448,0xf057845d)
					{
						HX_STACK_LINE(448)
						int _int = __this->moneyBoostPrice;		HX_STACK_VAR(_int,"int");
						HX_STACK_LINE(448)
						return (  (((_int < (int)0))) ? Float((4294967296.0 + _int)) : Float((_int + 0.0)) );
					}
					return null();
				}
			};
			HX_STACK_LINE(448)
			::String _g1 = ::Std_obj::string(_Function_2_1::Block(this));		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(448)
			::String _g11 = (HX_CSTRING("- $") + _g1);		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(448)
			this->lblMoneyEarned->set_text(_g11);
			HX_STACK_LINE(449)
			::motion::easing::IEasing _g2 = ::motion::easing::Linear_obj::get_easeNone();		HX_STACK_VAR(_g2,"_g2");
			struct _Function_2_2{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/clicker/GameState.hx",449,0xf057845d)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_CSTRING("alpha") , (int)1,false);
						return __result;
					}
					return null();
				}
			};

			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_3,Array< ::Dynamic >,_g)
			Void run(){
				HX_STACK_FRAME("*","_Function_2_3",0x5201af7a,"*._Function_2_3","com/ukuleledog/games/clicker/GameState.hx",450,0xf057845d)
				{
					struct _Function_3_1{
						inline static Dynamic Block( ){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/clicker/GameState.hx",450,0xf057845d)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_CSTRING("alpha") , (int)0,false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(450)
					::motion::Actuate_obj::tween(_g->__get((int)0).StaticCast< ::com::ukuleledog::games::clicker::GameState >()->lblMoneyEarned,0.2,_Function_3_1::Block(),null(),null())->ease(::motion::easing::Linear_obj::get_easeNone())->delay((int)1);
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			HX_STACK_LINE(449)
			::motion::Actuate_obj::tween(this->lblMoneyEarned,0.2,_Function_2_2::Block(),null(),null())->ease(_g2)->onComplete( Dynamic(new _Function_2_3(_g)),null());
			HX_STACK_LINE(453)
			this->moneyBoostPrice = (this->moneyBoostPrice * (int)2);
			HX_STACK_LINE(454)
			this->moneyBoostValue = (this->moneyBoostValue * (int)2);
			HX_STACK_LINE(456)
			this->moneyBoost->set_scaleX(1.1);
			HX_STACK_LINE(457)
			this->moneyBoost->set_scaleY(1.1);
			HX_STACK_LINE(458)
			::motion::easing::IEasing _g3 = ::motion::easing::Bounce_obj::get_easeOut();		HX_STACK_VAR(_g3,"_g3");
			struct _Function_2_4{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/clicker/GameState.hx",458,0xf057845d)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_CSTRING("scaleX") , (int)1,false);
						__result->Add(HX_CSTRING("scaleY") , (int)1,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(458)
			::motion::Actuate_obj::tween(this->moneyBoost,0.5,_Function_2_4::Block(),null(),null())->ease(_g3);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GameState_obj,moneyBoostHandler,(void))

Void GameState_obj::exploderBoostHandler( ::openfl::_v2::events::MouseEvent e){
{
		HX_STACK_FRAME("com.ukuleledog.games.clicker.GameState","exploderBoostHandler",0xc6589c63,"com.ukuleledog.games.clicker.GameState.exploderBoostHandler","com/ukuleledog/games/clicker/GameState.hx",463,0xf057845d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(462)
		Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new().Add(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g,"_g");
		struct _Function_1_1{
			inline static bool Block( hx::ObjectPtr< ::com::ukuleledog::games::clicker::GameState_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/clicker/GameState.hx",464,0xf057845d)
				{
					HX_STACK_LINE(464)
					int a = __this->money;		HX_STACK_VAR(a,"a");
					HX_STACK_LINE(464)
					int b = __this->exploderBoostPrice;		HX_STACK_VAR(b,"b");
					HX_STACK_LINE(464)
					bool aNeg = (a < (int)0);		HX_STACK_VAR(aNeg,"aNeg");
					HX_STACK_LINE(464)
					bool bNeg = (b < (int)0);		HX_STACK_VAR(bNeg,"bNeg");
					HX_STACK_LINE(464)
					return (  (((aNeg != bNeg))) ? bool(aNeg) : bool((a >= b)) );
				}
				return null();
			}
		};
		HX_STACK_LINE(464)
		if (((bool(this->canClick) && bool(_Function_1_1::Block(this))))){
			HX_STACK_LINE(466)
			e->stopPropagation();
			HX_STACK_LINE(467)
			this->money = (this->money - this->exploderBoostPrice);
			struct _Function_2_1{
				inline static Float Block( hx::ObjectPtr< ::com::ukuleledog::games::clicker::GameState_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/clicker/GameState.hx",469,0xf057845d)
					{
						HX_STACK_LINE(469)
						int _int = __this->exploderBoostPrice;		HX_STACK_VAR(_int,"int");
						HX_STACK_LINE(469)
						return (  (((_int < (int)0))) ? Float((4294967296.0 + _int)) : Float((_int + 0.0)) );
					}
					return null();
				}
			};
			HX_STACK_LINE(469)
			::String _g1 = ::Std_obj::string(_Function_2_1::Block(this));		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(469)
			::String _g11 = (HX_CSTRING("- $") + _g1);		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(469)
			this->lblMoneyEarned->set_text(_g11);
			HX_STACK_LINE(470)
			::motion::easing::IEasing _g2 = ::motion::easing::Linear_obj::get_easeNone();		HX_STACK_VAR(_g2,"_g2");
			struct _Function_2_2{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/clicker/GameState.hx",470,0xf057845d)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_CSTRING("alpha") , (int)1,false);
						return __result;
					}
					return null();
				}
			};

			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_3,Array< ::Dynamic >,_g)
			Void run(){
				HX_STACK_FRAME("*","_Function_2_3",0x5201af7a,"*._Function_2_3","com/ukuleledog/games/clicker/GameState.hx",471,0xf057845d)
				{
					struct _Function_3_1{
						inline static Dynamic Block( ){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/clicker/GameState.hx",471,0xf057845d)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_CSTRING("alpha") , (int)0,false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(471)
					::motion::Actuate_obj::tween(_g->__get((int)0).StaticCast< ::com::ukuleledog::games::clicker::GameState >()->lblMoneyEarned,0.2,_Function_3_1::Block(),null(),null())->ease(::motion::easing::Linear_obj::get_easeNone())->delay((int)1);
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			HX_STACK_LINE(470)
			::motion::Actuate_obj::tween(this->lblMoneyEarned,0.2,_Function_2_2::Block(),null(),null())->ease(_g2)->onComplete( Dynamic(new _Function_2_3(_g)),null());
			HX_STACK_LINE(474)
			this->exploderBoostPrice = (this->exploderBoostPrice * (int)2);
			HX_STACK_LINE(475)
			this->exploderBoostValue = (this->currentPointValue * (int)2);
			HX_STACK_LINE(477)
			this->exploderBoost->set_scaleX(1.1);
			HX_STACK_LINE(478)
			this->exploderBoost->set_scaleY(1.1);
			HX_STACK_LINE(479)
			::motion::easing::IEasing _g3 = ::motion::easing::Bounce_obj::get_easeOut();		HX_STACK_VAR(_g3,"_g3");
			struct _Function_2_4{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/clicker/GameState.hx",479,0xf057845d)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_CSTRING("scaleX") , (int)1,false);
						__result->Add(HX_CSTRING("scaleY") , (int)1,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(479)
			::motion::Actuate_obj::tween(this->exploderBoost,0.5,_Function_2_4::Block(),null(),null())->ease(_g3);
			HX_STACK_LINE(481)
			Float _g4 = this->asuka->get_alpha();		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(481)
			if (((_g4 == (int)0))){
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/clicker/GameState.hx",482,0xf057845d)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("alpha") , (int)1,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(482)
				::motion::Actuate_obj::tween(this->asuka,(int)1,_Function_3_1::Block(),null(),null());
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GameState_obj,exploderBoostHandler,(void))

Void GameState_obj::shopOpenHandler( ::openfl::_v2::events::MouseEvent e){
{
		HX_STACK_FRAME("com.ukuleledog.games.clicker.GameState","shopOpenHandler",0xd8f2dd3f,"com.ukuleledog.games.clicker.GameState.shopOpenHandler","com/ukuleledog/games/clicker/GameState.hx",487,0xf057845d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(488)
		if (((e != null()))){
			HX_STACK_LINE(489)
			e->stopPropagation();
		}
		HX_STACK_LINE(491)
		this->canClick = false;
		struct _Function_1_1{
			inline static bool Block( hx::ObjectPtr< ::com::ukuleledog::games::clicker::GameState_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/clicker/GameState.hx",493,0xf057845d)
				{
					HX_STACK_LINE(493)
					int a = __this->level;		HX_STACK_VAR(a,"a");
					HX_STACK_LINE(493)
					bool aNeg = (a < (int)0);		HX_STACK_VAR(aNeg,"aNeg");
					HX_STACK_LINE(493)
					bool bNeg = ((int)10 < (int)0);		HX_STACK_VAR(bNeg,"bNeg");
					HX_STACK_LINE(493)
					return (  (((aNeg != bNeg))) ? bool(aNeg) : bool((a >= (int)10)) );
				}
				return null();
			}
		};
		HX_STACK_LINE(493)
		if (((bool(_Function_1_1::Block(this)) && bool(!(this->hasCostume1))))){
			HX_STACK_LINE(495)
			this->shopCostume1->set_alpha((int)1);
			HX_STACK_LINE(496)
			this->shopCostume1->buttonMode = true;
			HX_STACK_LINE(498)
			::openfl::_v2::display::DisplayObject _g = this->shopCostume1->getChildByName(HX_CSTRING("lbl"));		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(498)
			if (((_g != null()))){
				HX_STACK_LINE(499)
				::openfl::_v2::display::DisplayObject _g1 = this->shopCostume1->getChildByName(HX_CSTRING("lbl"));		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(499)
				this->shopCostume1->removeChild(_g1);
			}
			HX_STACK_LINE(501)
			this->shopCostume1->addEventListener(::openfl::_v2::events::MouseEvent_obj::MOUSE_UP,this->costumeHandler_dyn(),null(),null(),null());
		}
		struct _Function_1_2{
			inline static bool Block( hx::ObjectPtr< ::com::ukuleledog::games::clicker::GameState_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/clicker/GameState.hx",503,0xf057845d)
				{
					HX_STACK_LINE(503)
					int a = __this->level;		HX_STACK_VAR(a,"a");
					HX_STACK_LINE(503)
					bool aNeg = (a < (int)0);		HX_STACK_VAR(aNeg,"aNeg");
					HX_STACK_LINE(503)
					bool bNeg = ((int)20 < (int)0);		HX_STACK_VAR(bNeg,"bNeg");
					HX_STACK_LINE(503)
					return (  (((aNeg != bNeg))) ? bool(aNeg) : bool((a >= (int)20)) );
				}
				return null();
			}
		};
		HX_STACK_LINE(503)
		if (((bool(_Function_1_2::Block(this)) && bool(!(this->hasCostume2))))){
			HX_STACK_LINE(505)
			this->shopCostume2->set_alpha((int)1);
			HX_STACK_LINE(506)
			this->shopCostume2->buttonMode = true;
			HX_STACK_LINE(508)
			::openfl::_v2::display::DisplayObject _g2 = this->shopCostume2->getChildByName(HX_CSTRING("lbl"));		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(508)
			if (((_g2 != null()))){
				HX_STACK_LINE(509)
				::openfl::_v2::display::DisplayObject _g3 = this->shopCostume2->getChildByName(HX_CSTRING("lbl"));		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(509)
				this->shopCostume2->removeChild(_g3);
			}
			HX_STACK_LINE(511)
			this->shopCostume2->addEventListener(::openfl::_v2::events::MouseEvent_obj::MOUSE_UP,this->costumeHandler_dyn(),null(),null(),null());
		}
		struct _Function_1_3{
			inline static bool Block( hx::ObjectPtr< ::com::ukuleledog::games::clicker::GameState_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/clicker/GameState.hx",513,0xf057845d)
				{
					HX_STACK_LINE(513)
					int a = __this->level;		HX_STACK_VAR(a,"a");
					HX_STACK_LINE(513)
					bool aNeg = (a < (int)0);		HX_STACK_VAR(aNeg,"aNeg");
					HX_STACK_LINE(513)
					bool bNeg = ((int)30 < (int)0);		HX_STACK_VAR(bNeg,"bNeg");
					HX_STACK_LINE(513)
					return (  (((aNeg != bNeg))) ? bool(aNeg) : bool((a >= (int)30)) );
				}
				return null();
			}
		};
		HX_STACK_LINE(513)
		if (((bool(_Function_1_3::Block(this)) && bool(!(this->hasCostume3))))){
			HX_STACK_LINE(515)
			this->shopCostume3->set_alpha((int)1);
			HX_STACK_LINE(516)
			this->shopCostume3->buttonMode = true;
			HX_STACK_LINE(518)
			::openfl::_v2::display::DisplayObject _g4 = this->shopCostume3->getChildByName(HX_CSTRING("lbl"));		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(518)
			if (((_g4 != null()))){
				HX_STACK_LINE(519)
				::openfl::_v2::display::DisplayObject _g5 = this->shopCostume3->getChildByName(HX_CSTRING("lbl"));		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(519)
				this->shopCostume3->removeChild(_g5);
			}
			HX_STACK_LINE(521)
			this->shopCostume3->addEventListener(::openfl::_v2::events::MouseEvent_obj::MOUSE_UP,this->costumeHandler_dyn(),null(),null(),null());
		}
		struct _Function_1_4{
			inline static bool Block( hx::ObjectPtr< ::com::ukuleledog::games::clicker::GameState_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/clicker/GameState.hx",523,0xf057845d)
				{
					HX_STACK_LINE(523)
					int a = __this->level;		HX_STACK_VAR(a,"a");
					HX_STACK_LINE(523)
					bool aNeg = (a < (int)0);		HX_STACK_VAR(aNeg,"aNeg");
					HX_STACK_LINE(523)
					bool bNeg = ((int)40 < (int)0);		HX_STACK_VAR(bNeg,"bNeg");
					HX_STACK_LINE(523)
					return (  (((aNeg != bNeg))) ? bool(aNeg) : bool((a >= (int)40)) );
				}
				return null();
			}
		};
		HX_STACK_LINE(523)
		if (((bool(_Function_1_4::Block(this)) && bool(!(this->hasCostume4))))){
			HX_STACK_LINE(525)
			this->shopCostume4->set_alpha((int)1);
			HX_STACK_LINE(526)
			this->shopCostume4->buttonMode = true;
			HX_STACK_LINE(528)
			::openfl::_v2::display::DisplayObject _g6 = this->shopCostume4->getChildByName(HX_CSTRING("lbl"));		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(528)
			if (((_g6 != null()))){
				HX_STACK_LINE(529)
				::openfl::_v2::display::DisplayObject _g7 = this->shopCostume4->getChildByName(HX_CSTRING("lbl"));		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(529)
				this->shopCostume4->removeChild(_g7);
			}
			HX_STACK_LINE(531)
			this->shopCostume4->addEventListener(::openfl::_v2::events::MouseEvent_obj::MOUSE_UP,this->costumeHandler_dyn(),null(),null(),null());
		}
		struct _Function_1_5{
			inline static bool Block( hx::ObjectPtr< ::com::ukuleledog::games::clicker::GameState_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/clicker/GameState.hx",533,0xf057845d)
				{
					HX_STACK_LINE(533)
					int a = __this->level;		HX_STACK_VAR(a,"a");
					HX_STACK_LINE(533)
					bool aNeg = (a < (int)0);		HX_STACK_VAR(aNeg,"aNeg");
					HX_STACK_LINE(533)
					bool bNeg = ((int)50 < (int)0);		HX_STACK_VAR(bNeg,"bNeg");
					HX_STACK_LINE(533)
					return (  (((aNeg != bNeg))) ? bool(aNeg) : bool((a >= (int)50)) );
				}
				return null();
			}
		};
		HX_STACK_LINE(533)
		if (((bool(_Function_1_5::Block(this)) && bool(!(this->hasCostume5))))){
			HX_STACK_LINE(535)
			this->shopCostume5->set_alpha((int)1);
			HX_STACK_LINE(536)
			this->shopCostume5->buttonMode = true;
			HX_STACK_LINE(538)
			::openfl::_v2::display::DisplayObject _g8 = this->shopCostume5->getChildByName(HX_CSTRING("lbl"));		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(538)
			if (((_g8 != null()))){
				HX_STACK_LINE(539)
				::openfl::_v2::display::DisplayObject _g9 = this->shopCostume5->getChildByName(HX_CSTRING("lbl"));		HX_STACK_VAR(_g9,"_g9");
				HX_STACK_LINE(539)
				this->shopCostume5->removeChild(_g9);
			}
			HX_STACK_LINE(541)
			this->shopCostume5->addEventListener(::openfl::_v2::events::MouseEvent_obj::MOUSE_UP,this->costumeHandler_dyn(),null(),null(),null());
		}
		struct _Function_1_6{
			inline static bool Block( hx::ObjectPtr< ::com::ukuleledog::games::clicker::GameState_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/clicker/GameState.hx",543,0xf057845d)
				{
					HX_STACK_LINE(543)
					int a = __this->level;		HX_STACK_VAR(a,"a");
					HX_STACK_LINE(543)
					bool aNeg = (a < (int)0);		HX_STACK_VAR(aNeg,"aNeg");
					HX_STACK_LINE(543)
					bool bNeg = ((int)60 < (int)0);		HX_STACK_VAR(bNeg,"bNeg");
					HX_STACK_LINE(543)
					return (  (((aNeg != bNeg))) ? bool(aNeg) : bool((a >= (int)60)) );
				}
				return null();
			}
		};
		HX_STACK_LINE(543)
		if (((bool(_Function_1_6::Block(this)) && bool(!(this->hasCostume6))))){
			HX_STACK_LINE(545)
			this->shopCostume6->set_alpha((int)1);
			HX_STACK_LINE(546)
			this->shopCostume6->buttonMode = true;
			HX_STACK_LINE(548)
			::openfl::_v2::display::DisplayObject _g10 = this->shopCostume6->getChildByName(HX_CSTRING("lbl"));		HX_STACK_VAR(_g10,"_g10");
			HX_STACK_LINE(548)
			if (((_g10 != null()))){
				HX_STACK_LINE(549)
				::openfl::_v2::display::DisplayObject _g11 = this->shopCostume6->getChildByName(HX_CSTRING("lbl"));		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(549)
				this->shopCostume6->removeChild(_g11);
			}
			HX_STACK_LINE(551)
			this->shopCostume6->addEventListener(::openfl::_v2::events::MouseEvent_obj::MOUSE_UP,this->costumeHandler_dyn(),null(),null(),null());
		}
		struct _Function_1_7{
			inline static bool Block( hx::ObjectPtr< ::com::ukuleledog::games::clicker::GameState_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/clicker/GameState.hx",553,0xf057845d)
				{
					HX_STACK_LINE(553)
					int a = __this->level;		HX_STACK_VAR(a,"a");
					HX_STACK_LINE(553)
					bool aNeg = (a < (int)0);		HX_STACK_VAR(aNeg,"aNeg");
					HX_STACK_LINE(553)
					bool bNeg = ((int)70 < (int)0);		HX_STACK_VAR(bNeg,"bNeg");
					HX_STACK_LINE(553)
					return (  (((aNeg != bNeg))) ? bool(aNeg) : bool((a >= (int)70)) );
				}
				return null();
			}
		};
		HX_STACK_LINE(553)
		if (((bool(_Function_1_7::Block(this)) && bool(!(this->hasCostume7))))){
			HX_STACK_LINE(555)
			this->shopCostume7->set_alpha((int)1);
			HX_STACK_LINE(556)
			this->shopCostume7->buttonMode = true;
			HX_STACK_LINE(558)
			::openfl::_v2::display::DisplayObject _g12 = this->shopCostume7->getChildByName(HX_CSTRING("lbl"));		HX_STACK_VAR(_g12,"_g12");
			HX_STACK_LINE(558)
			if (((_g12 != null()))){
				HX_STACK_LINE(559)
				::openfl::_v2::display::DisplayObject _g13 = this->shopCostume7->getChildByName(HX_CSTRING("lbl"));		HX_STACK_VAR(_g13,"_g13");
				HX_STACK_LINE(559)
				this->shopCostume7->removeChild(_g13);
			}
			HX_STACK_LINE(561)
			this->shopCostume7->addEventListener(::openfl::_v2::events::MouseEvent_obj::MOUSE_UP,this->costumeHandler_dyn(),null(),null(),null());
		}
		struct _Function_1_8{
			inline static bool Block( hx::ObjectPtr< ::com::ukuleledog::games::clicker::GameState_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/clicker/GameState.hx",563,0xf057845d)
				{
					HX_STACK_LINE(563)
					int a = __this->level;		HX_STACK_VAR(a,"a");
					HX_STACK_LINE(563)
					bool aNeg = (a < (int)0);		HX_STACK_VAR(aNeg,"aNeg");
					HX_STACK_LINE(563)
					bool bNeg = ((int)80 < (int)0);		HX_STACK_VAR(bNeg,"bNeg");
					HX_STACK_LINE(563)
					return (  (((aNeg != bNeg))) ? bool(aNeg) : bool((a >= (int)80)) );
				}
				return null();
			}
		};
		HX_STACK_LINE(563)
		if (((bool(_Function_1_8::Block(this)) && bool(!(this->hasCostume8))))){
			HX_STACK_LINE(565)
			this->shopCostume8->set_alpha((int)1);
			HX_STACK_LINE(566)
			this->shopCostume8->buttonMode = true;
			HX_STACK_LINE(568)
			::openfl::_v2::display::DisplayObject _g14 = this->shopCostume8->getChildByName(HX_CSTRING("lbl"));		HX_STACK_VAR(_g14,"_g14");
			HX_STACK_LINE(568)
			if (((_g14 != null()))){
				HX_STACK_LINE(569)
				::openfl::_v2::display::DisplayObject _g15 = this->shopCostume8->getChildByName(HX_CSTRING("lbl"));		HX_STACK_VAR(_g15,"_g15");
				HX_STACK_LINE(569)
				this->shopCostume8->removeChild(_g15);
			}
			HX_STACK_LINE(571)
			this->shopCostume8->addEventListener(::openfl::_v2::events::MouseEvent_obj::MOUSE_UP,this->costumeHandler_dyn(),null(),null(),null());
		}
		HX_STACK_LINE(575)
		this->addChild(this->shopWindow);
		HX_STACK_LINE(576)
		::motion::easing::IEasing _g16 = ::motion::easing::Bounce_obj::get_easeOut();		HX_STACK_VAR(_g16,"_g16");
		struct _Function_1_9{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/clicker/GameState.hx",576,0xf057845d)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("y") , (int)50,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(576)
		::motion::Actuate_obj::tween(this->shopWindow,0.5,_Function_1_9::Block(),null(),null())->ease(_g16);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GameState_obj,shopOpenHandler,(void))

Void GameState_obj::shopCloseHandler( ::openfl::_v2::events::MouseEvent e){
{
		HX_STACK_FRAME("com.ukuleledog.games.clicker.GameState","shopCloseHandler",0x79f3a5f3,"com.ukuleledog.games.clicker.GameState.shopCloseHandler","com/ukuleledog/games/clicker/GameState.hx",581,0xf057845d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(582)
		if (((e != null()))){
			HX_STACK_LINE(583)
			e->stopPropagation();
		}
		HX_STACK_LINE(585)
		this->canClick = true;
		HX_STACK_LINE(586)
		this->removeChild(this->shopWindow);
		HX_STACK_LINE(587)
		this->shopWindow->set_y((int)500);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GameState_obj,shopCloseHandler,(void))

Void GameState_obj::noCostumeHandler( ::openfl::_v2::events::MouseEvent e){
{
		HX_STACK_FRAME("com.ukuleledog.games.clicker.GameState","noCostumeHandler",0xd847a5d6,"com.ukuleledog.games.clicker.GameState.noCostumeHandler","com/ukuleledog/games/clicker/GameState.hx",591,0xf057845d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(592)
		this->costume = (int)0;
		HX_STACK_LINE(593)
		this->drawMatt(false);
		HX_STACK_LINE(594)
		this->shopCloseHandler(e);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GameState_obj,noCostumeHandler,(void))

::openfl::_v2::display::Sprite GameState_obj::createShopButton( ::String name,int position,hx::Null< int >  __o_level){
int level = __o_level.Default(0);
	HX_STACK_FRAME("com.ukuleledog.games.clicker.GameState","createShopButton",0x876d8a8f,"com.ukuleledog.games.clicker.GameState.createShopButton","com/ukuleledog/games/clicker/GameState.hx",598,0xf057845d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_ARG(position,"position")
	HX_STACK_ARG(level,"level")
{
		HX_STACK_LINE(599)
		::openfl::_v2::display::Sprite button = ::openfl::_v2::display::Sprite_obj::__new();		HX_STACK_VAR(button,"button");
		struct _Function_1_1{
			inline static Float Block( int &position){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/clicker/GameState.hx",600,0xf057845d)
				{
					HX_STACK_LINE(600)
					int _int = position;		HX_STACK_VAR(_int,"int");
					HX_STACK_LINE(600)
					return (  (((_int < (int)0))) ? Float((4294967296.0 + _int)) : Float((_int + 0.0)) );
				}
				return null();
			}
		};
		HX_STACK_LINE(600)
		::String _g = ::Std_obj::string(_Function_1_1::Block(position));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(600)
		::String _g1 = (HX_CSTRING("shop-") + _g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(600)
		button->set_name(_g1);
		HX_STACK_LINE(601)
		button->buttonMode = false;
		HX_STACK_LINE(603)
		::openfl::_v2::display::BitmapData _g2 = ::openfl::_v2::Assets_obj::getBitmapData(((HX_CSTRING("img/shop-") + name) + HX_CSTRING(".png")),null());		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(603)
		button->get_graphics()->beginBitmapFill(_g2,null(),null(),null());
		HX_STACK_LINE(604)
		button->get_graphics()->drawRect((int)0,(int)0,(int)64,(int)64);
		HX_STACK_LINE(605)
		button->get_graphics()->endFill();
		struct _Function_1_2{
			inline static Float Block( int &level){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/clicker/GameState.hx",607,0xf057845d)
				{
					HX_STACK_LINE(607)
					int _int = level;		HX_STACK_VAR(_int,"int");
					HX_STACK_LINE(607)
					return (  (((_int < (int)0))) ? Float((4294967296.0 + _int)) : Float((_int + 0.0)) );
				}
				return null();
			}
		};
		HX_STACK_LINE(607)
		if (((_Function_1_2::Block(level) == (int)0))){
			HX_STACK_LINE(608)
			level = (position * (int)10);
		}
		struct _Function_1_3{
			inline static Float Block( int &position){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/clicker/GameState.hx",610,0xf057845d)
				{
					HX_STACK_LINE(610)
					int _int = position;		HX_STACK_VAR(_int,"int");
					HX_STACK_LINE(610)
					return (  (((_int < (int)0))) ? Float((4294967296.0 + _int)) : Float((_int + 0.0)) );
				}
				return null();
			}
		};
		HX_STACK_LINE(610)
		if (((_Function_1_3::Block(position) != (int)0))){
			struct _Function_2_1{
				inline static Float Block( int &position){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/clicker/GameState.hx",612,0xf057845d)
					{
						HX_STACK_LINE(612)
						int _int = (position * (int)70);		HX_STACK_VAR(_int,"int");
						HX_STACK_LINE(612)
						return (  (((_int < (int)0))) ? Float((4294967296.0 + _int)) : Float((_int + 0.0)) );
					}
					return null();
				}
			};
			HX_STACK_LINE(612)
			button->set_x(_Function_2_1::Block(position));
			HX_STACK_LINE(613)
			button->set_y((int)100);
			HX_STACK_LINE(614)
			button->set_alpha(0.6);
			HX_STACK_LINE(616)
			::openfl::_v2::text::TextField levelField = ::openfl::_v2::text::TextField_obj::__new();		HX_STACK_VAR(levelField,"levelField");
			struct _Function_2_2{
				inline static Float Block( int &level){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/clicker/GameState.hx",617,0xf057845d)
					{
						HX_STACK_LINE(617)
						int _int = level;		HX_STACK_VAR(_int,"int");
						HX_STACK_LINE(617)
						return (  (((_int < (int)0))) ? Float((4294967296.0 + _int)) : Float((_int + 0.0)) );
					}
					return null();
				}
			};
			HX_STACK_LINE(617)
			::String _g3 = ::Std_obj::string(_Function_2_2::Block(level));		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(617)
			::String _g4 = (HX_CSTRING("( Niveau ") + _g3);		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(617)
			::String _g5 = (_g4 + HX_CSTRING(" )"));		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(617)
			levelField->set_text(_g5);
			HX_STACK_LINE(618)
			levelField->set_defaultTextFormat(this->lblFormat);
			HX_STACK_LINE(619)
			levelField->set_y((int)65);
			HX_STACK_LINE(620)
			levelField->set_selectable(false);
			HX_STACK_LINE(621)
			levelField->set_name(HX_CSTRING("lbl"));
			HX_STACK_LINE(622)
			button->addChild(levelField);
		}
		else{
			HX_STACK_LINE(626)
			button->buttonMode = true;
			HX_STACK_LINE(627)
			button->set_x(318.);
			HX_STACK_LINE(628)
			button->set_y((int)220);
		}
		HX_STACK_LINE(631)
		this->shopWindow->addChild(button);
		HX_STACK_LINE(633)
		return button;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(GameState_obj,createShopButton,return )

Void GameState_obj::costumeHandler( ::openfl::_v2::events::MouseEvent e){
{
		HX_STACK_FRAME("com.ukuleledog.games.clicker.GameState","costumeHandler",0xf7d480f5,"com.ukuleledog.games.clicker.GameState.costumeHandler","com/ukuleledog/games/clicker/GameState.hx",637,0xf057845d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(638)
		e->stopPropagation();
		HX_STACK_LINE(640)
		{
			HX_STACK_LINE(640)
			Dynamic _g = e->get_target()->__Field(HX_CSTRING("name"),true);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(640)
			Dynamic _switch_1 = (_g);
			if (  ( _switch_1==HX_CSTRING("shop-1"))){
				HX_STACK_LINE(643)
				this->hasCostume1 = true;
				HX_STACK_LINE(644)
				this->costume = (int)1;
			}
			else if (  ( _switch_1==HX_CSTRING("shop-2"))){
				HX_STACK_LINE(646)
				this->hasCostume2 = true;
				HX_STACK_LINE(647)
				this->costume = (int)2;
			}
			else if (  ( _switch_1==HX_CSTRING("shop-3"))){
				HX_STACK_LINE(649)
				this->hasCostume3 = true;
				HX_STACK_LINE(650)
				this->costume = (int)3;
			}
			else if (  ( _switch_1==HX_CSTRING("shop-4"))){
				HX_STACK_LINE(652)
				this->hasCostume4 = true;
				HX_STACK_LINE(653)
				this->costume = (int)4;
			}
			else if (  ( _switch_1==HX_CSTRING("shop-5"))){
				HX_STACK_LINE(655)
				this->hasCostume5 = true;
				HX_STACK_LINE(656)
				this->costume = (int)5;
			}
			else if (  ( _switch_1==HX_CSTRING("shop-6"))){
				HX_STACK_LINE(658)
				this->hasCostume6 = true;
				HX_STACK_LINE(659)
				this->costume = (int)6;
			}
			else if (  ( _switch_1==HX_CSTRING("shop-7"))){
				HX_STACK_LINE(661)
				this->hasCostume7 = true;
				HX_STACK_LINE(662)
				this->costume = (int)7;
			}
			else if (  ( _switch_1==HX_CSTRING("shop-8"))){
				HX_STACK_LINE(664)
				this->hasCostume8 = true;
				HX_STACK_LINE(665)
				this->costume = (int)8;
			}
		}
		HX_STACK_LINE(669)
		this->drawMatt(false);
		HX_STACK_LINE(670)
		this->shopCloseHandler(e);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GameState_obj,costumeHandler,(void))


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
	HX_MARK_MEMBER_NAME(percent,"percent");
	HX_MARK_MEMBER_NAME(lblFormat,"lblFormat");
	HX_MARK_MEMBER_NAME(lblLevel,"lblLevel");
	HX_MARK_MEMBER_NAME(lblCurrentPoints,"lblCurrentPoints");
	HX_MARK_MEMBER_NAME(lblMoney,"lblMoney");
	HX_MARK_MEMBER_NAME(lblMoneyEarned,"lblMoneyEarned");
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
	HX_MARK_MEMBER_NAME(levelBar,"levelBar");
	HX_MARK_MEMBER_NAME(levelProgressionBar,"levelProgressionBar");
	HX_MARK_MEMBER_NAME(lastPointsNeeded,"lastPointsNeeded");
	HX_MARK_MEMBER_NAME(shop,"shop");
	HX_MARK_MEMBER_NAME(shopWindow,"shopWindow");
	HX_MARK_MEMBER_NAME(shopWindowClose,"shopWindowClose");
	HX_MARK_MEMBER_NAME(costume,"costume");
	HX_MARK_MEMBER_NAME(shopCostume1,"shopCostume1");
	HX_MARK_MEMBER_NAME(shopCostume2,"shopCostume2");
	HX_MARK_MEMBER_NAME(shopCostume3,"shopCostume3");
	HX_MARK_MEMBER_NAME(shopCostume4,"shopCostume4");
	HX_MARK_MEMBER_NAME(shopCostume5,"shopCostume5");
	HX_MARK_MEMBER_NAME(shopCostume6,"shopCostume6");
	HX_MARK_MEMBER_NAME(shopCostume7,"shopCostume7");
	HX_MARK_MEMBER_NAME(shopCostume8,"shopCostume8");
	HX_MARK_MEMBER_NAME(shopCostumeNone,"shopCostumeNone");
	HX_MARK_MEMBER_NAME(hasCostume1,"hasCostume1");
	HX_MARK_MEMBER_NAME(hasCostume2,"hasCostume2");
	HX_MARK_MEMBER_NAME(hasCostume3,"hasCostume3");
	HX_MARK_MEMBER_NAME(hasCostume4,"hasCostume4");
	HX_MARK_MEMBER_NAME(hasCostume5,"hasCostume5");
	HX_MARK_MEMBER_NAME(hasCostume6,"hasCostume6");
	HX_MARK_MEMBER_NAME(hasCostume7,"hasCostume7");
	HX_MARK_MEMBER_NAME(hasCostume8,"hasCostume8");
	HX_MARK_MEMBER_NAME(canClick,"canClick");
	HX_MARK_MEMBER_NAME(clicks,"clicks");
	HX_MARK_MEMBER_NAME(special,"special");
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
	HX_VISIT_MEMBER_NAME(percent,"percent");
	HX_VISIT_MEMBER_NAME(lblFormat,"lblFormat");
	HX_VISIT_MEMBER_NAME(lblLevel,"lblLevel");
	HX_VISIT_MEMBER_NAME(lblCurrentPoints,"lblCurrentPoints");
	HX_VISIT_MEMBER_NAME(lblMoney,"lblMoney");
	HX_VISIT_MEMBER_NAME(lblMoneyEarned,"lblMoneyEarned");
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
	HX_VISIT_MEMBER_NAME(levelBar,"levelBar");
	HX_VISIT_MEMBER_NAME(levelProgressionBar,"levelProgressionBar");
	HX_VISIT_MEMBER_NAME(lastPointsNeeded,"lastPointsNeeded");
	HX_VISIT_MEMBER_NAME(shop,"shop");
	HX_VISIT_MEMBER_NAME(shopWindow,"shopWindow");
	HX_VISIT_MEMBER_NAME(shopWindowClose,"shopWindowClose");
	HX_VISIT_MEMBER_NAME(costume,"costume");
	HX_VISIT_MEMBER_NAME(shopCostume1,"shopCostume1");
	HX_VISIT_MEMBER_NAME(shopCostume2,"shopCostume2");
	HX_VISIT_MEMBER_NAME(shopCostume3,"shopCostume3");
	HX_VISIT_MEMBER_NAME(shopCostume4,"shopCostume4");
	HX_VISIT_MEMBER_NAME(shopCostume5,"shopCostume5");
	HX_VISIT_MEMBER_NAME(shopCostume6,"shopCostume6");
	HX_VISIT_MEMBER_NAME(shopCostume7,"shopCostume7");
	HX_VISIT_MEMBER_NAME(shopCostume8,"shopCostume8");
	HX_VISIT_MEMBER_NAME(shopCostumeNone,"shopCostumeNone");
	HX_VISIT_MEMBER_NAME(hasCostume1,"hasCostume1");
	HX_VISIT_MEMBER_NAME(hasCostume2,"hasCostume2");
	HX_VISIT_MEMBER_NAME(hasCostume3,"hasCostume3");
	HX_VISIT_MEMBER_NAME(hasCostume4,"hasCostume4");
	HX_VISIT_MEMBER_NAME(hasCostume5,"hasCostume5");
	HX_VISIT_MEMBER_NAME(hasCostume6,"hasCostume6");
	HX_VISIT_MEMBER_NAME(hasCostume7,"hasCostume7");
	HX_VISIT_MEMBER_NAME(hasCostume8,"hasCostume8");
	HX_VISIT_MEMBER_NAME(canClick,"canClick");
	HX_VISIT_MEMBER_NAME(clicks,"clicks");
	HX_VISIT_MEMBER_NAME(special,"special");
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
		if (HX_FIELD_EQ(inName,"percent") ) { return percent; }
		if (HX_FIELD_EQ(inName,"costume") ) { return costume; }
		if (HX_FIELD_EQ(inName,"special") ) { return special; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"lblLevel") ) { return lblLevel; }
		if (HX_FIELD_EQ(inName,"lblMoney") ) { return lblMoney; }
		if (HX_FIELD_EQ(inName,"levelBar") ) { return levelBar; }
		if (HX_FIELD_EQ(inName,"canClick") ) { return canClick; }
		if (HX_FIELD_EQ(inName,"drawMatt") ) { return drawMatt_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"lblFormat") ) { return lblFormat; }
		if (HX_FIELD_EQ(inName,"mattImage") ) { return mattImage; }
		if (HX_FIELD_EQ(inName,"mattFrame") ) { return mattFrame; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"clickBoost") ) { return clickBoost; }
		if (HX_FIELD_EQ(inName,"moneyBoost") ) { return moneyBoost; }
		if (HX_FIELD_EQ(inName,"shopWindow") ) { return shopWindow; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"moneyEarned") ) { return moneyEarned; }
		if (HX_FIELD_EQ(inName,"hasCostume1") ) { return hasCostume1; }
		if (HX_FIELD_EQ(inName,"hasCostume2") ) { return hasCostume2; }
		if (HX_FIELD_EQ(inName,"hasCostume3") ) { return hasCostume3; }
		if (HX_FIELD_EQ(inName,"hasCostume4") ) { return hasCostume4; }
		if (HX_FIELD_EQ(inName,"hasCostume5") ) { return hasCostume5; }
		if (HX_FIELD_EQ(inName,"hasCostume6") ) { return hasCostume6; }
		if (HX_FIELD_EQ(inName,"hasCostume7") ) { return hasCostume7; }
		if (HX_FIELD_EQ(inName,"hasCostume8") ) { return hasCostume8; }
		if (HX_FIELD_EQ(inName,"pointHandle") ) { return pointHandle_dyn(); }
		if (HX_FIELD_EQ(inName,"showSpecial") ) { return showSpecial_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"shopCostume1") ) { return shopCostume1; }
		if (HX_FIELD_EQ(inName,"shopCostume2") ) { return shopCostume2; }
		if (HX_FIELD_EQ(inName,"shopCostume3") ) { return shopCostume3; }
		if (HX_FIELD_EQ(inName,"shopCostume4") ) { return shopCostume4; }
		if (HX_FIELD_EQ(inName,"shopCostume5") ) { return shopCostume5; }
		if (HX_FIELD_EQ(inName,"shopCostume6") ) { return shopCostume6; }
		if (HX_FIELD_EQ(inName,"shopCostume7") ) { return shopCostume7; }
		if (HX_FIELD_EQ(inName,"shopCostume8") ) { return shopCostume8; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"exploderBoost") ) { return exploderBoost; }
		if (HX_FIELD_EQ(inName,"lblClickBoost") ) { return lblClickBoost; }
		if (HX_FIELD_EQ(inName,"lblMoneyBoost") ) { return lblMoneyBoost; }
		if (HX_FIELD_EQ(inName,"exploderTimer") ) { return exploderTimer; }
		if (HX_FIELD_EQ(inName,"tempMattImage") ) { return tempMattImage; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"lblMoneyEarned") ) { return lblMoneyEarned; }
		if (HX_FIELD_EQ(inName,"mouseUpHandler") ) { return mouseUpHandler_dyn(); }
		if (HX_FIELD_EQ(inName,"costumeHandler") ) { return costumeHandler_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"clickBoostPrice") ) { return clickBoostPrice; }
		if (HX_FIELD_EQ(inName,"moneyBoostPrice") ) { return moneyBoostPrice; }
		if (HX_FIELD_EQ(inName,"moneyBoostValue") ) { return moneyBoostValue; }
		if (HX_FIELD_EQ(inName,"shopWindowClose") ) { return shopWindowClose; }
		if (HX_FIELD_EQ(inName,"shopCostumeNone") ) { return shopCostumeNone; }
		if (HX_FIELD_EQ(inName,"exploderHandler") ) { return exploderHandler_dyn(); }
		if (HX_FIELD_EQ(inName,"shopOpenHandler") ) { return shopOpenHandler_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"lblCurrentPoints") ) { return lblCurrentPoints; }
		if (HX_FIELD_EQ(inName,"lblExploderBoost") ) { return lblExploderBoost; }
		if (HX_FIELD_EQ(inName,"lastPointsNeeded") ) { return lastPointsNeeded; }
		if (HX_FIELD_EQ(inName,"shopCloseHandler") ) { return shopCloseHandler_dyn(); }
		if (HX_FIELD_EQ(inName,"noCostumeHandler") ) { return noCostumeHandler_dyn(); }
		if (HX_FIELD_EQ(inName,"createShopButton") ) { return createShopButton_dyn(); }
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
		if (HX_FIELD_EQ(inName,"levelProgressionBar") ) { return levelProgressionBar; }
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
		if (HX_FIELD_EQ(inName,"percent") ) { percent=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"costume") ) { costume=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"special") ) { special=inValue.Cast< ::openfl::_v2::display::Sprite >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"lblLevel") ) { lblLevel=inValue.Cast< ::openfl::_v2::text::TextField >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lblMoney") ) { lblMoney=inValue.Cast< ::openfl::_v2::text::TextField >(); return inValue; }
		if (HX_FIELD_EQ(inName,"levelBar") ) { levelBar=inValue.Cast< ::openfl::_v2::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"canClick") ) { canClick=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"lblFormat") ) { lblFormat=inValue.Cast< ::openfl::_v2::text::TextFormat >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mattImage") ) { mattImage=inValue.Cast< ::openfl::_v2::display::BitmapData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mattFrame") ) { mattFrame=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"clickBoost") ) { clickBoost=inValue.Cast< ::openfl::_v2::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"moneyBoost") ) { moneyBoost=inValue.Cast< ::openfl::_v2::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"shopWindow") ) { shopWindow=inValue.Cast< ::openfl::_v2::display::Sprite >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"moneyEarned") ) { moneyEarned=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hasCostume1") ) { hasCostume1=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hasCostume2") ) { hasCostume2=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hasCostume3") ) { hasCostume3=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hasCostume4") ) { hasCostume4=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hasCostume5") ) { hasCostume5=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hasCostume6") ) { hasCostume6=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hasCostume7") ) { hasCostume7=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hasCostume8") ) { hasCostume8=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"shopCostume1") ) { shopCostume1=inValue.Cast< ::openfl::_v2::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"shopCostume2") ) { shopCostume2=inValue.Cast< ::openfl::_v2::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"shopCostume3") ) { shopCostume3=inValue.Cast< ::openfl::_v2::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"shopCostume4") ) { shopCostume4=inValue.Cast< ::openfl::_v2::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"shopCostume5") ) { shopCostume5=inValue.Cast< ::openfl::_v2::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"shopCostume6") ) { shopCostume6=inValue.Cast< ::openfl::_v2::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"shopCostume7") ) { shopCostume7=inValue.Cast< ::openfl::_v2::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"shopCostume8") ) { shopCostume8=inValue.Cast< ::openfl::_v2::display::Sprite >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"exploderBoost") ) { exploderBoost=inValue.Cast< ::openfl::_v2::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lblClickBoost") ) { lblClickBoost=inValue.Cast< ::openfl::_v2::text::TextField >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lblMoneyBoost") ) { lblMoneyBoost=inValue.Cast< ::openfl::_v2::text::TextField >(); return inValue; }
		if (HX_FIELD_EQ(inName,"exploderTimer") ) { exploderTimer=inValue.Cast< ::openfl::_v2::utils::Timer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tempMattImage") ) { tempMattImage=inValue.Cast< ::openfl::_v2::display::BitmapData >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"lblMoneyEarned") ) { lblMoneyEarned=inValue.Cast< ::openfl::_v2::text::TextField >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"clickBoostPrice") ) { clickBoostPrice=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"moneyBoostPrice") ) { moneyBoostPrice=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"moneyBoostValue") ) { moneyBoostValue=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"shopWindowClose") ) { shopWindowClose=inValue.Cast< ::openfl::_v2::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"shopCostumeNone") ) { shopCostumeNone=inValue.Cast< ::openfl::_v2::display::Sprite >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"lblCurrentPoints") ) { lblCurrentPoints=inValue.Cast< ::openfl::_v2::text::TextField >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lblExploderBoost") ) { lblExploderBoost=inValue.Cast< ::openfl::_v2::text::TextField >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lastPointsNeeded") ) { lastPointsNeeded=inValue.Cast< int >(); return inValue; }
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
		if (HX_FIELD_EQ(inName,"levelProgressionBar") ) { levelProgressionBar=inValue.Cast< ::openfl::_v2::display::Sprite >(); return inValue; }
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
	outFields->push(HX_CSTRING("percent"));
	outFields->push(HX_CSTRING("lblFormat"));
	outFields->push(HX_CSTRING("lblLevel"));
	outFields->push(HX_CSTRING("lblCurrentPoints"));
	outFields->push(HX_CSTRING("lblMoney"));
	outFields->push(HX_CSTRING("lblMoneyEarned"));
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
	outFields->push(HX_CSTRING("levelBar"));
	outFields->push(HX_CSTRING("levelProgressionBar"));
	outFields->push(HX_CSTRING("lastPointsNeeded"));
	outFields->push(HX_CSTRING("shop"));
	outFields->push(HX_CSTRING("shopWindow"));
	outFields->push(HX_CSTRING("shopWindowClose"));
	outFields->push(HX_CSTRING("costume"));
	outFields->push(HX_CSTRING("shopCostume1"));
	outFields->push(HX_CSTRING("shopCostume2"));
	outFields->push(HX_CSTRING("shopCostume3"));
	outFields->push(HX_CSTRING("shopCostume4"));
	outFields->push(HX_CSTRING("shopCostume5"));
	outFields->push(HX_CSTRING("shopCostume6"));
	outFields->push(HX_CSTRING("shopCostume7"));
	outFields->push(HX_CSTRING("shopCostume8"));
	outFields->push(HX_CSTRING("shopCostumeNone"));
	outFields->push(HX_CSTRING("hasCostume1"));
	outFields->push(HX_CSTRING("hasCostume2"));
	outFields->push(HX_CSTRING("hasCostume3"));
	outFields->push(HX_CSTRING("hasCostume4"));
	outFields->push(HX_CSTRING("hasCostume5"));
	outFields->push(HX_CSTRING("hasCostume6"));
	outFields->push(HX_CSTRING("hasCostume7"));
	outFields->push(HX_CSTRING("hasCostume8"));
	outFields->push(HX_CSTRING("canClick"));
	outFields->push(HX_CSTRING("clicks"));
	outFields->push(HX_CSTRING("special"));
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
	{hx::fsFloat,(int)offsetof(GameState_obj,percent),HX_CSTRING("percent")},
	{hx::fsObject /*::openfl::_v2::text::TextFormat*/ ,(int)offsetof(GameState_obj,lblFormat),HX_CSTRING("lblFormat")},
	{hx::fsObject /*::openfl::_v2::text::TextField*/ ,(int)offsetof(GameState_obj,lblLevel),HX_CSTRING("lblLevel")},
	{hx::fsObject /*::openfl::_v2::text::TextField*/ ,(int)offsetof(GameState_obj,lblCurrentPoints),HX_CSTRING("lblCurrentPoints")},
	{hx::fsObject /*::openfl::_v2::text::TextField*/ ,(int)offsetof(GameState_obj,lblMoney),HX_CSTRING("lblMoney")},
	{hx::fsObject /*::openfl::_v2::text::TextField*/ ,(int)offsetof(GameState_obj,lblMoneyEarned),HX_CSTRING("lblMoneyEarned")},
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
	{hx::fsObject /*::openfl::_v2::display::Sprite*/ ,(int)offsetof(GameState_obj,levelBar),HX_CSTRING("levelBar")},
	{hx::fsObject /*::openfl::_v2::display::Sprite*/ ,(int)offsetof(GameState_obj,levelProgressionBar),HX_CSTRING("levelProgressionBar")},
	{hx::fsInt,(int)offsetof(GameState_obj,lastPointsNeeded),HX_CSTRING("lastPointsNeeded")},
	{hx::fsObject /*::openfl::_v2::display::Sprite*/ ,(int)offsetof(GameState_obj,shop),HX_CSTRING("shop")},
	{hx::fsObject /*::openfl::_v2::display::Sprite*/ ,(int)offsetof(GameState_obj,shopWindow),HX_CSTRING("shopWindow")},
	{hx::fsObject /*::openfl::_v2::display::Sprite*/ ,(int)offsetof(GameState_obj,shopWindowClose),HX_CSTRING("shopWindowClose")},
	{hx::fsInt,(int)offsetof(GameState_obj,costume),HX_CSTRING("costume")},
	{hx::fsObject /*::openfl::_v2::display::Sprite*/ ,(int)offsetof(GameState_obj,shopCostume1),HX_CSTRING("shopCostume1")},
	{hx::fsObject /*::openfl::_v2::display::Sprite*/ ,(int)offsetof(GameState_obj,shopCostume2),HX_CSTRING("shopCostume2")},
	{hx::fsObject /*::openfl::_v2::display::Sprite*/ ,(int)offsetof(GameState_obj,shopCostume3),HX_CSTRING("shopCostume3")},
	{hx::fsObject /*::openfl::_v2::display::Sprite*/ ,(int)offsetof(GameState_obj,shopCostume4),HX_CSTRING("shopCostume4")},
	{hx::fsObject /*::openfl::_v2::display::Sprite*/ ,(int)offsetof(GameState_obj,shopCostume5),HX_CSTRING("shopCostume5")},
	{hx::fsObject /*::openfl::_v2::display::Sprite*/ ,(int)offsetof(GameState_obj,shopCostume6),HX_CSTRING("shopCostume6")},
	{hx::fsObject /*::openfl::_v2::display::Sprite*/ ,(int)offsetof(GameState_obj,shopCostume7),HX_CSTRING("shopCostume7")},
	{hx::fsObject /*::openfl::_v2::display::Sprite*/ ,(int)offsetof(GameState_obj,shopCostume8),HX_CSTRING("shopCostume8")},
	{hx::fsObject /*::openfl::_v2::display::Sprite*/ ,(int)offsetof(GameState_obj,shopCostumeNone),HX_CSTRING("shopCostumeNone")},
	{hx::fsBool,(int)offsetof(GameState_obj,hasCostume1),HX_CSTRING("hasCostume1")},
	{hx::fsBool,(int)offsetof(GameState_obj,hasCostume2),HX_CSTRING("hasCostume2")},
	{hx::fsBool,(int)offsetof(GameState_obj,hasCostume3),HX_CSTRING("hasCostume3")},
	{hx::fsBool,(int)offsetof(GameState_obj,hasCostume4),HX_CSTRING("hasCostume4")},
	{hx::fsBool,(int)offsetof(GameState_obj,hasCostume5),HX_CSTRING("hasCostume5")},
	{hx::fsBool,(int)offsetof(GameState_obj,hasCostume6),HX_CSTRING("hasCostume6")},
	{hx::fsBool,(int)offsetof(GameState_obj,hasCostume7),HX_CSTRING("hasCostume7")},
	{hx::fsBool,(int)offsetof(GameState_obj,hasCostume8),HX_CSTRING("hasCostume8")},
	{hx::fsBool,(int)offsetof(GameState_obj,canClick),HX_CSTRING("canClick")},
	{hx::fsInt,(int)offsetof(GameState_obj,clicks),HX_CSTRING("clicks")},
	{hx::fsObject /*::openfl::_v2::display::Sprite*/ ,(int)offsetof(GameState_obj,special),HX_CSTRING("special")},
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
	HX_CSTRING("percent"),
	HX_CSTRING("lblFormat"),
	HX_CSTRING("lblLevel"),
	HX_CSTRING("lblCurrentPoints"),
	HX_CSTRING("lblMoney"),
	HX_CSTRING("lblMoneyEarned"),
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
	HX_CSTRING("levelBar"),
	HX_CSTRING("levelProgressionBar"),
	HX_CSTRING("lastPointsNeeded"),
	HX_CSTRING("shop"),
	HX_CSTRING("shopWindow"),
	HX_CSTRING("shopWindowClose"),
	HX_CSTRING("costume"),
	HX_CSTRING("shopCostume1"),
	HX_CSTRING("shopCostume2"),
	HX_CSTRING("shopCostume3"),
	HX_CSTRING("shopCostume4"),
	HX_CSTRING("shopCostume5"),
	HX_CSTRING("shopCostume6"),
	HX_CSTRING("shopCostume7"),
	HX_CSTRING("shopCostume8"),
	HX_CSTRING("shopCostumeNone"),
	HX_CSTRING("hasCostume1"),
	HX_CSTRING("hasCostume2"),
	HX_CSTRING("hasCostume3"),
	HX_CSTRING("hasCostume4"),
	HX_CSTRING("hasCostume5"),
	HX_CSTRING("hasCostume6"),
	HX_CSTRING("hasCostume7"),
	HX_CSTRING("hasCostume8"),
	HX_CSTRING("canClick"),
	HX_CSTRING("clicks"),
	HX_CSTRING("special"),
	HX_CSTRING("init"),
	HX_CSTRING("drawMatt"),
	HX_CSTRING("mouseUpHandler"),
	HX_CSTRING("pointHandle"),
	HX_CSTRING("loop"),
	HX_CSTRING("showSpecial"),
	HX_CSTRING("exploderHandler"),
	HX_CSTRING("clickBoostHandler"),
	HX_CSTRING("moneyBoostHandler"),
	HX_CSTRING("exploderBoostHandler"),
	HX_CSTRING("shopOpenHandler"),
	HX_CSTRING("shopCloseHandler"),
	HX_CSTRING("noCostumeHandler"),
	HX_CSTRING("createShopButton"),
	HX_CSTRING("costumeHandler"),
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
