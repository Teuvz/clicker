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
#ifndef INCLUDED_openfl__v2_feedback_Haptic
#include <openfl/_v2/feedback/Haptic.h>
#endif
#ifndef INCLUDED_openfl__v2_filters_BitmapFilter
#include <openfl/_v2/filters/BitmapFilter.h>
#endif
#ifndef INCLUDED_openfl__v2_filters_GlowFilter
#include <openfl/_v2/filters/GlowFilter.h>
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
HX_STACK_FRAME("com.ukuleledog.games.clicker.GameState","new",0x85983655,"com.ukuleledog.games.clicker.GameState.new","com/ukuleledog/games/clicker/GameState.hx",27,0xf057845d)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(108)
	this->exploderBoostCounter = (int)15;
	HX_STACK_LINE(107)
	this->moneyBoostCounter = (int)15;
	HX_STACK_LINE(106)
	this->clickBoostCounter = (int)15;
	HX_STACK_LINE(102)
	this->superQteCurrent = (int)0;
	HX_STACK_LINE(101)
	this->specialSuperCounter = (int)3;
	HX_STACK_LINE(100)
	this->specialSuper = false;
	HX_STACK_LINE(92)
	this->canClick = true;
	HX_STACK_LINE(90)
	this->hasCostume8 = false;
	HX_STACK_LINE(89)
	this->hasCostume7 = false;
	HX_STACK_LINE(88)
	this->hasCostume6 = false;
	HX_STACK_LINE(87)
	this->hasCostume5 = false;
	HX_STACK_LINE(86)
	this->hasCostume4 = false;
	HX_STACK_LINE(85)
	this->hasCostume3 = false;
	HX_STACK_LINE(84)
	this->hasCostume2 = false;
	HX_STACK_LINE(83)
	this->hasCostume1 = false;
	HX_STACK_LINE(73)
	this->costume = (int)0;
	HX_STACK_LINE(68)
	this->lastPointsNeeded = (int)0;
	HX_STACK_LINE(63)
	this->mattFrame = (int)0;
	HX_STACK_LINE(58)
	this->exploderBoostValue = (int)1;
	HX_STACK_LINE(57)
	this->moneyBoostValue = (int)1;
	HX_STACK_LINE(55)
	this->exploderBoostPrice = (int)100;
	HX_STACK_LINE(54)
	this->moneyBoostPrice = (int)50;
	HX_STACK_LINE(53)
	this->clickBoostPrice = (int)10;
	HX_STACK_LINE(35)
	this->currentPointsNeeded = (int)10;
	HX_STACK_LINE(34)
	this->currentPointValue = (int)1;
	HX_STACK_LINE(32)
	this->money = (int)0;
	HX_STACK_LINE(31)
	this->level = (int)1;
	HX_STACK_LINE(115)
	super::__construct();
	HX_STACK_LINE(117)
	this->clicks = (int)0;
	HX_STACK_LINE(118)
	this->points = (int)0;
	HX_STACK_LINE(119)
	this->level = (int)0;
	HX_STACK_LINE(120)
	this->currentPointValue = (int)1;
	HX_STACK_LINE(121)
	this->currentPointsNeeded = (int)10;
	HX_STACK_LINE(122)
	this->money = (int)0;
	HX_STACK_LINE(123)
	this->canClick = false;
	HX_STACK_LINE(125)
	::openfl::_v2::text::TextFormat _g = ::openfl::_v2::text::TextFormat_obj::__new(HX_CSTRING("arial"),(int)12,null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(125)
	this->lblFormat = _g;
	HX_STACK_LINE(127)
	::openfl::_v2::text::TextField _g1 = ::openfl::_v2::text::TextField_obj::__new();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(127)
	this->lblLevel = _g1;
	HX_STACK_LINE(128)
	this->lblLevel->set_x((int)10);
	HX_STACK_LINE(129)
	this->lblLevel->set_y((int)10);
	HX_STACK_LINE(130)
	this->lblLevel->set_width((int)900);
	HX_STACK_LINE(131)
	this->lblLevel->set_selectable(false);
	HX_STACK_LINE(132)
	this->lblLevel->set_defaultTextFormat(this->lblFormat);
	HX_STACK_LINE(134)
	::openfl::_v2::text::TextField _g2 = ::openfl::_v2::text::TextField_obj::__new();		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(134)
	this->lblCurrentPoints = _g2;
	HX_STACK_LINE(135)
	this->lblCurrentPoints->set_x((int)250);
	HX_STACK_LINE(136)
	this->lblCurrentPoints->set_y((int)398);
	HX_STACK_LINE(137)
	this->lblCurrentPoints->set_width((int)300);
	HX_STACK_LINE(138)
	::openfl::_v2::text::TextFormat _g3 = ::openfl::_v2::text::TextFormat_obj::__new(HX_CSTRING("arial"),(int)12,null(),null(),null(),null(),null(),null(),::openfl::_v2::text::TextFormatAlign_obj::CENTER,null(),null(),null(),null());		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(138)
	this->lblCurrentPoints->set_defaultTextFormat(_g3);
	HX_STACK_LINE(139)
	this->lblCurrentPoints->set_height((int)17);
	HX_STACK_LINE(140)
	this->lblCurrentPoints->set_selectable(false);
	HX_STACK_LINE(141)
	this->lblCurrentPoints->set_alpha((int)0);
	HX_STACK_LINE(149)
	::openfl::_v2::text::TextField _g4 = ::openfl::_v2::text::TextField_obj::__new();		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(149)
	this->lblMoney = _g4;
	HX_STACK_LINE(150)
	this->lblMoney->set_x((int)249);
	HX_STACK_LINE(151)
	this->lblMoney->set_y((int)415);
	HX_STACK_LINE(152)
	this->lblMoney->set_width((int)200);
	HX_STACK_LINE(153)
	this->lblMoney->set_height((int)30);
	HX_STACK_LINE(154)
	this->lblMoney->set_defaultTextFormat(this->lblFormat);
	HX_STACK_LINE(155)
	this->lblMoney->set_selectable(false);
	HX_STACK_LINE(157)
	::openfl::_v2::text::TextField _g5 = ::openfl::_v2::text::TextField_obj::__new();		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(157)
	this->lblMoneyEarned = _g5;
	HX_STACK_LINE(158)
	this->lblMoneyEarned->set_x((int)450);
	HX_STACK_LINE(159)
	this->lblMoneyEarned->set_y((int)415);
	HX_STACK_LINE(160)
	this->lblMoneyEarned->set_width((int)100);
	HX_STACK_LINE(161)
	this->lblMoneyEarned->set_height((int)30);
	HX_STACK_LINE(162)
	::openfl::_v2::text::TextFormat _g6 = ::openfl::_v2::text::TextFormat_obj::__new(HX_CSTRING("arial"),(int)12,null(),null(),null(),null(),null(),null(),::openfl::_v2::text::TextFormatAlign_obj::RIGHT,null(),null(),null(),null());		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(162)
	this->lblMoneyEarned->set_defaultTextFormat(_g6);
	HX_STACK_LINE(163)
	this->lblMoneyEarned->set_selectable(false);
	HX_STACK_LINE(164)
	this->lblMoneyEarned->set_alpha((int)0);
	HX_STACK_LINE(166)
	::openfl::_v2::display::Sprite _g7 = ::openfl::_v2::display::Sprite_obj::__new();		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(166)
	this->clickBoost = _g7;
	HX_STACK_LINE(168)
	::openfl::_v2::display::BitmapData _g8 = ::openfl::_v2::Assets_obj::getBitmapData(HX_CSTRING("img/click.png"),null());		HX_STACK_VAR(_g8,"_g8");
	HX_STACK_LINE(168)
	this->clickBoost->get_graphics()->beginBitmapFill(_g8,null(),null(),null());
	HX_STACK_LINE(169)
	this->clickBoost->get_graphics()->drawRect((int)0,(int)0,(int)64,(int)64);
	HX_STACK_LINE(170)
	this->clickBoost->get_graphics()->endFill();
	HX_STACK_LINE(171)
	this->clickBoost->set_x((int)10);
	HX_STACK_LINE(172)
	this->clickBoost->set_y((int)200);
	HX_STACK_LINE(173)
	this->clickBoost->buttonMode = true;
	HX_STACK_LINE(174)
	this->clickBoost->addEventListener(::openfl::_v2::events::MouseEvent_obj::MOUSE_UP,this->clickBoostHandler_dyn(),null(),null(),null());
	HX_STACK_LINE(176)
	::openfl::_v2::text::TextField _g9 = ::openfl::_v2::text::TextField_obj::__new();		HX_STACK_VAR(_g9,"_g9");
	HX_STACK_LINE(176)
	this->lblClickBoost = _g9;
	HX_STACK_LINE(177)
	this->lblClickBoost->set_mouseEnabled(false);
	HX_STACK_LINE(178)
	this->lblClickBoost->set_selectable(false);
	HX_STACK_LINE(179)
	this->lblClickBoost->set_y((int)-10);
	HX_STACK_LINE(180)
	this->lblClickBoost->set_defaultTextFormat(this->lblFormat);
	HX_STACK_LINE(181)
	this->clickBoost->addChild(this->lblClickBoost);
	HX_STACK_LINE(183)
	::openfl::_v2::display::Sprite _g10 = ::openfl::_v2::display::Sprite_obj::__new();		HX_STACK_VAR(_g10,"_g10");
	HX_STACK_LINE(183)
	this->moneyBoost = _g10;
	HX_STACK_LINE(185)
	::openfl::_v2::display::BitmapData _g11 = ::openfl::_v2::Assets_obj::getBitmapData(HX_CSTRING("img/money.png"),null());		HX_STACK_VAR(_g11,"_g11");
	HX_STACK_LINE(185)
	this->moneyBoost->get_graphics()->beginBitmapFill(_g11,null(),null(),null());
	HX_STACK_LINE(186)
	this->moneyBoost->get_graphics()->drawRect((int)0,(int)0,(int)64,(int)64);
	HX_STACK_LINE(187)
	this->moneyBoost->get_graphics()->endFill();
	HX_STACK_LINE(188)
	this->moneyBoost->set_x((int)10);
	HX_STACK_LINE(189)
	this->moneyBoost->set_y((int)300);
	HX_STACK_LINE(190)
	this->moneyBoost->buttonMode = true;
	HX_STACK_LINE(191)
	this->moneyBoost->addEventListener(::openfl::_v2::events::MouseEvent_obj::MOUSE_UP,this->moneyBoostHandler_dyn(),null(),null(),null());
	HX_STACK_LINE(193)
	::openfl::_v2::text::TextField _g12 = ::openfl::_v2::text::TextField_obj::__new();		HX_STACK_VAR(_g12,"_g12");
	HX_STACK_LINE(193)
	this->lblMoneyBoost = _g12;
	HX_STACK_LINE(194)
	this->lblMoneyBoost->set_mouseEnabled(false);
	HX_STACK_LINE(195)
	this->lblMoneyBoost->set_selectable(false);
	HX_STACK_LINE(196)
	this->lblMoneyBoost->set_y((int)-10);
	HX_STACK_LINE(197)
	this->lblMoneyBoost->set_defaultTextFormat(this->lblFormat);
	HX_STACK_LINE(198)
	this->moneyBoost->addChild(this->lblMoneyBoost);
	HX_STACK_LINE(200)
	::openfl::_v2::display::Sprite _g13 = ::openfl::_v2::display::Sprite_obj::__new();		HX_STACK_VAR(_g13,"_g13");
	HX_STACK_LINE(200)
	this->exploderBoost = _g13;
	HX_STACK_LINE(202)
	::openfl::_v2::display::BitmapData _g14 = ::openfl::_v2::Assets_obj::getBitmapData(HX_CSTRING("img/booster.png"),null());		HX_STACK_VAR(_g14,"_g14");
	HX_STACK_LINE(202)
	this->exploderBoost->get_graphics()->beginBitmapFill(_g14,null(),null(),null());
	HX_STACK_LINE(203)
	this->exploderBoost->get_graphics()->drawRect((int)0,(int)0,(int)64,(int)64);
	HX_STACK_LINE(204)
	this->exploderBoost->get_graphics()->endFill();
	HX_STACK_LINE(205)
	this->exploderBoost->set_x((int)10);
	HX_STACK_LINE(206)
	this->exploderBoost->set_y((int)400);
	HX_STACK_LINE(207)
	this->exploderBoost->buttonMode = true;
	HX_STACK_LINE(208)
	this->exploderBoost->addEventListener(::openfl::_v2::events::MouseEvent_obj::MOUSE_UP,this->exploderBoostHandler_dyn(),null(),null(),null());
	HX_STACK_LINE(210)
	::openfl::_v2::text::TextField _g15 = ::openfl::_v2::text::TextField_obj::__new();		HX_STACK_VAR(_g15,"_g15");
	HX_STACK_LINE(210)
	this->lblExploderBoost = _g15;
	HX_STACK_LINE(211)
	this->lblExploderBoost->set_mouseEnabled(false);
	HX_STACK_LINE(212)
	this->lblExploderBoost->set_selectable(false);
	HX_STACK_LINE(213)
	this->lblExploderBoost->set_y((int)-15);
	HX_STACK_LINE(214)
	this->lblExploderBoost->set_defaultTextFormat(this->lblFormat);
	HX_STACK_LINE(215)
	this->exploderBoost->addChild(this->lblExploderBoost);
	HX_STACK_LINE(217)
	::openfl::_v2::display::BitmapData _g16 = ::openfl::_v2::Assets_obj::getBitmapData(HX_CSTRING("img/matt.png"),null());		HX_STACK_VAR(_g16,"_g16");
	HX_STACK_LINE(217)
	this->mattImage = _g16;
	HX_STACK_LINE(218)
	::openfl::_v2::display::Sprite _g17 = ::openfl::_v2::display::Sprite_obj::__new();		HX_STACK_VAR(_g17,"_g17");
	HX_STACK_LINE(218)
	this->matt = _g17;
	HX_STACK_LINE(219)
	this->matt->set_x((int)250);
	HX_STACK_LINE(220)
	this->matt->set_y((int)90);
	HX_STACK_LINE(221)
	this->drawMatt(null());
	HX_STACK_LINE(223)
	::openfl::_v2::display::Sprite _g18 = ::openfl::_v2::display::Sprite_obj::__new();		HX_STACK_VAR(_g18,"_g18");
	HX_STACK_LINE(223)
	this->levelBar = _g18;
	HX_STACK_LINE(224)
	this->levelBar->get_graphics()->beginFill((int)12434877,null());
	HX_STACK_LINE(225)
	this->levelBar->get_graphics()->drawRect((int)0,(int)0,(int)300,(int)15);
	HX_STACK_LINE(226)
	this->levelBar->get_graphics()->endFill();
	HX_STACK_LINE(227)
	this->levelBar->set_x((int)250);
	HX_STACK_LINE(228)
	this->levelBar->set_y((int)400);
	HX_STACK_LINE(230)
	::openfl::_v2::display::Sprite _g19 = ::openfl::_v2::display::Sprite_obj::__new();		HX_STACK_VAR(_g19,"_g19");
	HX_STACK_LINE(230)
	this->levelProgressionBar = _g19;
	HX_STACK_LINE(231)
	this->levelProgressionBar->get_graphics()->beginFill((int)3858176,null());
	HX_STACK_LINE(232)
	this->levelProgressionBar->get_graphics()->drawRect((int)0,(int)0,(int)0,(int)15);
	HX_STACK_LINE(233)
	this->levelProgressionBar->get_graphics()->endFill();
	HX_STACK_LINE(234)
	this->levelProgressionBar->set_x((int)250);
	HX_STACK_LINE(235)
	this->levelProgressionBar->set_y((int)400);
	HX_STACK_LINE(237)
	::openfl::_v2::display::Sprite _g20 = ::openfl::_v2::display::Sprite_obj::__new();		HX_STACK_VAR(_g20,"_g20");
	HX_STACK_LINE(237)
	this->asuka = _g20;
	HX_STACK_LINE(239)
	::openfl::_v2::display::BitmapData _g21 = ::openfl::_v2::Assets_obj::getBitmapData(HX_CSTRING("img/asuka.png"),null());		HX_STACK_VAR(_g21,"_g21");
	HX_STACK_LINE(239)
	this->asuka->get_graphics()->beginBitmapFill(_g21,null(),null(),null());
	HX_STACK_LINE(240)
	this->asuka->get_graphics()->drawRect((int)0,(int)0,(int)128,(int)128);
	HX_STACK_LINE(241)
	this->asuka->get_graphics()->endFill();
	HX_STACK_LINE(242)
	this->asuka->set_x((int)500);
	HX_STACK_LINE(243)
	this->asuka->set_y((int)140);
	HX_STACK_LINE(244)
	this->asuka->set_alpha((int)0);
	HX_STACK_LINE(246)
	::openfl::_v2::display::Sprite _g22 = ::openfl::_v2::display::Sprite_obj::__new();		HX_STACK_VAR(_g22,"_g22");
	HX_STACK_LINE(246)
	this->shop = _g22;
	HX_STACK_LINE(247)
	::openfl::_v2::display::BitmapData _g23 = ::openfl::_v2::Assets_obj::getBitmapData(HX_CSTRING("img/shop.png"),null());		HX_STACK_VAR(_g23,"_g23");
	HX_STACK_LINE(247)
	this->shop->get_graphics()->beginBitmapFill(_g23,null(),null(),null());
	HX_STACK_LINE(248)
	this->shop->get_graphics()->drawRect((int)0,(int)0,(int)64,(int)64);
	HX_STACK_LINE(249)
	this->shop->get_graphics()->endFill();
	HX_STACK_LINE(250)
	this->shop->set_x((int)726);
	HX_STACK_LINE(251)
	this->shop->set_y((int)400);
	HX_STACK_LINE(252)
	this->shop->buttonMode = true;
	HX_STACK_LINE(253)
	this->shop->addEventListener(::openfl::_v2::events::MouseEvent_obj::MOUSE_UP,this->shopOpenHandler_dyn(),null(),null(),null());
	HX_STACK_LINE(255)
	::openfl::_v2::display::Sprite _g24 = ::openfl::_v2::display::Sprite_obj::__new();		HX_STACK_VAR(_g24,"_g24");
	HX_STACK_LINE(255)
	this->shopWindow = _g24;
	HX_STACK_LINE(256)
	this->shopWindow->get_graphics()->lineStyle((int)5,(int)0,null(),null(),null(),null(),null(),null());
	HX_STACK_LINE(257)
	this->shopWindow->get_graphics()->beginFill((int)16777215,null());
	HX_STACK_LINE(258)
	this->shopWindow->get_graphics()->drawRoundRect((int)0,(int)0,(int)700,(int)380,(int)5,null());
	HX_STACK_LINE(259)
	this->shopWindow->get_graphics()->endFill();
	HX_STACK_LINE(260)
	this->shopWindow->set_x((int)50);
	HX_STACK_LINE(261)
	this->shopWindow->set_y((int)500);
	HX_STACK_LINE(263)
	::openfl::_v2::display::Sprite _g25 = ::openfl::_v2::display::Sprite_obj::__new();		HX_STACK_VAR(_g25,"_g25");
	HX_STACK_LINE(263)
	this->shopWindowClose = _g25;
	HX_STACK_LINE(265)
	::openfl::_v2::display::BitmapData _g26 = ::openfl::_v2::Assets_obj::getBitmapData(HX_CSTRING("img/shop-close.png"),null());		HX_STACK_VAR(_g26,"_g26");
	HX_STACK_LINE(265)
	this->shopWindowClose->get_graphics()->beginBitmapFill(_g26,null(),null(),null());
	HX_STACK_LINE(266)
	this->shopWindowClose->get_graphics()->drawRect((int)0,(int)0,(int)32,(int)32);
	HX_STACK_LINE(267)
	this->shopWindowClose->get_graphics()->endFill();
	HX_STACK_LINE(268)
	this->shopWindowClose->set_x((int)685);
	HX_STACK_LINE(269)
	this->shopWindowClose->set_y((int)-15);
	HX_STACK_LINE(270)
	this->shopWindowClose->buttonMode = true;
	HX_STACK_LINE(271)
	this->shopWindowClose->addEventListener(::openfl::_v2::events::MouseEvent_obj::MOUSE_UP,this->shopCloseHandler_dyn(),null(),null(),null());
	HX_STACK_LINE(272)
	this->shopWindow->addChild(this->shopWindowClose);
	HX_STACK_LINE(274)
	::openfl::_v2::display::Sprite _g27 = this->createShopButton(HX_CSTRING("mario"),(int)6,null());		HX_STACK_VAR(_g27,"_g27");
	HX_STACK_LINE(274)
	this->shopCostume6 = _g27;
	HX_STACK_LINE(275)
	::openfl::_v2::display::Sprite _g28 = this->createShopButton(HX_CSTRING("evangelion"),(int)2,null());		HX_STACK_VAR(_g28,"_g28");
	HX_STACK_LINE(275)
	this->shopCostume2 = _g28;
	HX_STACK_LINE(276)
	::openfl::_v2::display::Sprite _g29 = this->createShopButton(HX_CSTRING("maid"),(int)8,null());		HX_STACK_VAR(_g29,"_g29");
	HX_STACK_LINE(276)
	this->shopCostume8 = _g29;
	HX_STACK_LINE(277)
	::openfl::_v2::display::Sprite _g30 = this->createShopButton(HX_CSTRING("leia"),(int)3,null());		HX_STACK_VAR(_g30,"_g30");
	HX_STACK_LINE(277)
	this->shopCostume3 = _g30;
	HX_STACK_LINE(278)
	::openfl::_v2::display::Sprite _g31 = this->createShopButton(HX_CSTRING("pikachu"),(int)4,null());		HX_STACK_VAR(_g31,"_g31");
	HX_STACK_LINE(278)
	this->shopCostume4 = _g31;
	HX_STACK_LINE(279)
	::openfl::_v2::display::Sprite _g32 = this->createShopButton(HX_CSTRING("cheerleader"),(int)1,null());		HX_STACK_VAR(_g32,"_g32");
	HX_STACK_LINE(279)
	this->shopCostume1 = _g32;
	HX_STACK_LINE(280)
	::openfl::_v2::display::Sprite _g33 = this->createShopButton(HX_CSTRING("mermaid"),(int)7,null());		HX_STACK_VAR(_g33,"_g33");
	HX_STACK_LINE(280)
	this->shopCostume7 = _g33;
	HX_STACK_LINE(281)
	::openfl::_v2::display::Sprite _g34 = this->createShopButton(HX_CSTRING("unicorn"),(int)5,null());		HX_STACK_VAR(_g34,"_g34");
	HX_STACK_LINE(281)
	this->shopCostume5 = _g34;
	HX_STACK_LINE(282)
	::openfl::_v2::display::Sprite _g35 = this->createShopButton(HX_CSTRING("none"),(int)0,null());		HX_STACK_VAR(_g35,"_g35");
	HX_STACK_LINE(282)
	this->shopCostumeNone = _g35;
	HX_STACK_LINE(283)
	this->shopCostumeNone->addEventListener(::openfl::_v2::events::MouseEvent_obj::MOUSE_UP,this->noCostumeHandler_dyn(),null(),null(),null());
	HX_STACK_LINE(285)
	::openfl::_v2::utils::Timer _g36 = ::openfl::_v2::utils::Timer_obj::__new((int)60000,null());		HX_STACK_VAR(_g36,"_g36");
	HX_STACK_LINE(285)
	this->specialCooldownTimer = _g36;
	HX_STACK_LINE(286)
	this->specialCooldownTimer->addEventListener(::openfl::events::TimerEvent_obj::TIMER,this->specialCooldownHandle_dyn(),null(),null(),null());
	HX_STACK_LINE(287)
	::openfl::_v2::utils::Timer _g37 = ::openfl::_v2::utils::Timer_obj::__new((int)750,null());		HX_STACK_VAR(_g37,"_g37");
	HX_STACK_LINE(287)
	this->specialSuperTimer = _g37;
	HX_STACK_LINE(288)
	this->specialSuperTimer->addEventListener(::openfl::events::TimerEvent_obj::TIMER,this->specialSuperEndHandle_dyn(),null(),null(),null());
	HX_STACK_LINE(289)
	::openfl::_v2::utils::Timer _g38 = ::openfl::_v2::utils::Timer_obj::__new((int)5000,null());		HX_STACK_VAR(_g38,"_g38");
	HX_STACK_LINE(289)
	this->specialTimer = _g38;
	HX_STACK_LINE(290)
	this->specialTimer->addEventListener(::openfl::events::TimerEvent_obj::TIMER,this->specialEndHandle_dyn(),null(),null(),null());
	HX_STACK_LINE(292)
	::openfl::_v2::display::Sprite _g39 = ::openfl::_v2::display::Sprite_obj::__new();		HX_STACK_VAR(_g39,"_g39");
	HX_STACK_LINE(292)
	this->specialSuperContainer = _g39;
	HX_STACK_LINE(294)
	::openfl::_v2::display::BitmapData _g40 = ::openfl::_v2::Assets_obj::getBitmapData(HX_CSTRING("img/special-super.png"),null());		HX_STACK_VAR(_g40,"_g40");
	HX_STACK_LINE(294)
	this->specialSuperContainer->get_graphics()->beginBitmapFill(_g40,null(),null(),null());
	HX_STACK_LINE(295)
	this->specialSuperContainer->get_graphics()->drawRect((int)0,(int)0,(int)800,(int)480);
	HX_STACK_LINE(296)
	this->specialSuperContainer->get_graphics()->endFill();
	HX_STACK_LINE(298)
	::openfl::_v2::utils::Timer _g41 = ::openfl::_v2::utils::Timer_obj::__new((int)2000,null());		HX_STACK_VAR(_g41,"_g41");
	HX_STACK_LINE(298)
	this->superQteTimer = _g41;
	HX_STACK_LINE(299)
	this->superQteTimer->addEventListener(::openfl::events::TimerEvent_obj::TIMER,this->superQteEnd_dyn(),null(),null(),null());
	HX_STACK_LINE(301)
	::openfl::_v2::utils::Timer _g42 = ::openfl::_v2::utils::Timer_obj::__new((int)1000,null());		HX_STACK_VAR(_g42,"_g42");
	HX_STACK_LINE(301)
	this->exploderTimer = _g42;
	HX_STACK_LINE(302)
	this->exploderTimer->addEventListener(::openfl::events::TimerEvent_obj::TIMER,this->exploderHandler_dyn(),null(),null(),null());
	HX_STACK_LINE(303)
	this->exploderTimer->start();
	HX_STACK_LINE(305)
	Array< ::Dynamic > _g43 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g43,"_g43");
	HX_STACK_LINE(305)
	this->shopFilters = _g43;
	HX_STACK_LINE(306)
	::openfl::_v2::filters::GlowFilter _g44 = ::openfl::_v2::filters::GlowFilter_obj::__new((int)16711680,0.6,(int)12,(int)12,(int)3,(int)1,false,null());		HX_STACK_VAR(_g44,"_g44");
	HX_STACK_LINE(306)
	this->shopFilters->push(_g44);
	HX_STACK_LINE(307)
	this->shopCostumeNone->set_filters(this->shopFilters);
	HX_STACK_LINE(309)
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
		HX_STACK_FRAME("com.ukuleledog.games.clicker.GameState","init",0x5c500b7b,"com.ukuleledog.games.clicker.GameState.init","com/ukuleledog/games/clicker/GameState.hx",313,0xf057845d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(314)
		this->removeEventListener(::openfl::_v2::events::Event_obj::ADDED_TO_STAGE,this->init_dyn(),null());
		HX_STACK_LINE(315)
		this->addEventListener(::openfl::_v2::events::Event_obj::ENTER_FRAME,this->loop_dyn(),null(),null(),null());
		HX_STACK_LINE(317)
		this->addChild(this->lblLevel);
		HX_STACK_LINE(320)
		this->addChild(this->lblMoney);
		HX_STACK_LINE(321)
		this->addChild(this->lblMoneyEarned);
		HX_STACK_LINE(323)
		this->addChild(this->clickBoost);
		HX_STACK_LINE(324)
		this->addChild(this->moneyBoost);
		HX_STACK_LINE(325)
		this->addChild(this->exploderBoost);
		HX_STACK_LINE(327)
		this->addChild(this->matt);
		HX_STACK_LINE(328)
		this->addChild(this->asuka);
		HX_STACK_LINE(329)
		this->addChild(this->levelBar);
		HX_STACK_LINE(330)
		this->addChild(this->levelProgressionBar);
		HX_STACK_LINE(332)
		this->addChild(this->lblCurrentPoints);
		HX_STACK_LINE(334)
		this->addChild(this->shop);
		HX_STACK_LINE(337)
		this->showIntro();
		HX_STACK_LINE(339)
		this->get_stage()->addEventListener(::openfl::_v2::events::MouseEvent_obj::MOUSE_UP,this->mouseUpHandler_dyn(),null(),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GameState_obj,init,(void))

Void GameState_obj::drawMatt( hx::Null< bool >  __o_frameChange){
bool frameChange = __o_frameChange.Default(true);
	HX_STACK_FRAME("com.ukuleledog.games.clicker.GameState","drawMatt",0x41dccde3,"com.ukuleledog.games.clicker.GameState.drawMatt","com/ukuleledog/games/clicker/GameState.hx",343,0xf057845d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(frameChange,"frameChange")
{
		HX_STACK_LINE(344)
		if (((frameChange == true))){
			HX_STACK_LINE(345)
			(this->mattFrame)++;
		}
		struct _Function_1_1{
			inline static bool Block( hx::ObjectPtr< ::com::ukuleledog::games::clicker::GameState_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/clicker/GameState.hx",347,0xf057845d)
				{
					HX_STACK_LINE(347)
					int a = __this->mattFrame;		HX_STACK_VAR(a,"a");
					HX_STACK_LINE(347)
					bool aNeg = (a < (int)0);		HX_STACK_VAR(aNeg,"aNeg");
					HX_STACK_LINE(347)
					bool bNeg = ((int)2 < (int)0);		HX_STACK_VAR(bNeg,"bNeg");
					HX_STACK_LINE(347)
					return (  (((aNeg != bNeg))) ? bool(aNeg) : bool((a > (int)2)) );
				}
				return null();
			}
		};
		HX_STACK_LINE(347)
		if ((_Function_1_1::Block(this))){
			HX_STACK_LINE(348)
			this->mattFrame = (int)0;
		}
		HX_STACK_LINE(350)
		::openfl::_v2::display::BitmapData _g = ::openfl::_v2::display::BitmapData_obj::__new((int)300,(int)300,false,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(350)
		this->tempMattImage = _g;
		struct _Function_1_2{
			inline static Float Block( hx::ObjectPtr< ::com::ukuleledog::games::clicker::GameState_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/clicker/GameState.hx",351,0xf057845d)
				{
					HX_STACK_LINE(351)
					int _int = (__this->mattFrame * (int)300);		HX_STACK_VAR(_int,"int");
					HX_STACK_LINE(351)
					return (  (((_int < (int)0))) ? Float((4294967296.0 + _int)) : Float((_int + 0.0)) );
				}
				return null();
			}
		};
		struct _Function_1_3{
			inline static Float Block( hx::ObjectPtr< ::com::ukuleledog::games::clicker::GameState_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/clicker/GameState.hx",351,0xf057845d)
				{
					HX_STACK_LINE(351)
					int _int = ((int)300 * __this->costume);		HX_STACK_VAR(_int,"int");
					HX_STACK_LINE(351)
					return (  (((_int < (int)0))) ? Float((4294967296.0 + _int)) : Float((_int + 0.0)) );
				}
				return null();
			}
		};
		HX_STACK_LINE(351)
		::openfl::_v2::geom::Rectangle _g1 = ::openfl::_v2::geom::Rectangle_obj::__new(_Function_1_2::Block(this),_Function_1_3::Block(this),(int)300,(int)300);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(351)
		::openfl::_v2::geom::Point _g2 = ::openfl::_v2::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(351)
		this->tempMattImage->copyPixels(this->mattImage,_g1,_g2,null(),null(),null());
		HX_STACK_LINE(352)
		this->matt->get_graphics()->clear();
		HX_STACK_LINE(353)
		this->matt->get_graphics()->beginBitmapFill(this->tempMattImage,null(),null(),null());
		HX_STACK_LINE(354)
		this->matt->get_graphics()->drawRect((int)0,(int)0,(int)300,(int)300);
		HX_STACK_LINE(355)
		this->matt->get_graphics()->endFill();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GameState_obj,drawMatt,(void))

Void GameState_obj::mouseUpHandler( ::openfl::_v2::events::MouseEvent e){
{
		HX_STACK_FRAME("com.ukuleledog.games.clicker.GameState","mouseUpHandler",0x3f1bc3f5,"com.ukuleledog.games.clicker.GameState.mouseUpHandler","com/ukuleledog/games/clicker/GameState.hx",360,0xf057845d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(360)
		if ((this->canClick)){
			HX_STACK_LINE(362)
			(this->clicks)++;
			struct _Function_2_1{
				inline static Float Block( hx::ObjectPtr< ::com::ukuleledog::games::clicker::GameState_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/clicker/GameState.hx",363,0xf057845d)
					{
						HX_STACK_LINE(363)
						int _int = __this->currentPointValue;		HX_STACK_VAR(_int,"int");
						HX_STACK_LINE(363)
						return (  (((_int < (int)0))) ? Float((4294967296.0 + _int)) : Float((_int + 0.0)) );
					}
					return null();
				}
			};
			HX_STACK_LINE(363)
			this->pointHandle(_Function_2_1::Block(this));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GameState_obj,mouseUpHandler,(void))

Void GameState_obj::pointHandle( Float pointsValue){
{
		HX_STACK_FRAME("com.ukuleledog.games.clicker.GameState","pointHandle",0x2750ab0d,"com.ukuleledog.games.clicker.GameState.pointHandle","com/ukuleledog/games/clicker/GameState.hx",368,0xf057845d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(pointsValue,"pointsValue")
		HX_STACK_LINE(367)
		Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new().Add(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(369)
		this->drawMatt(null());
		HX_STACK_LINE(370)
		hx::AddEq(this->points,pointsValue);
		HX_STACK_LINE(372)
		this->levelProgressionBar->get_graphics()->clear();
		HX_STACK_LINE(373)
		this->levelProgressionBar->get_graphics()->beginFill((int)3858176,null());
		HX_STACK_LINE(375)
		int _g1 = ::Math_obj::round((((this->points - this->lastPointsNeeded)) * (int)100));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(375)
		Float _g11 = (Float(_g1) / Float(((this->currentPointsNeeded - this->lastPointsNeeded))));		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(375)
		this->percent = _g11;
		HX_STACK_LINE(377)
		if (((this->percent < (int)0))){
			HX_STACK_LINE(378)
			this->percent = (int)0;
		}
		else{
			HX_STACK_LINE(379)
			if (((this->percent > (int)100))){
				HX_STACK_LINE(380)
				this->percent = (int)100;
			}
		}
		HX_STACK_LINE(382)
		this->levelProgressionBar->get_graphics()->drawRect((int)0,(int)0,(this->percent * (int)3),(int)15);
		HX_STACK_LINE(383)
		this->levelProgressionBar->get_graphics()->endFill();
		HX_STACK_LINE(385)
		this->lblCurrentPoints->set_text(((HX_CSTRING("+ ") + pointsValue) + HX_CSTRING(" points")));
		HX_STACK_LINE(386)
		::motion::easing::IEasing _g2 = ::motion::easing::Linear_obj::get_easeNone();		HX_STACK_VAR(_g2,"_g2");
		struct _Function_1_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/clicker/GameState.hx",386,0xf057845d)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("alpha") , (int)1,false);
					return __result;
				}
				return null();
			}
		};

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_2,Array< ::Dynamic >,_g)
		Void run(){
			HX_STACK_FRAME("*","_Function_1_2",0x5200ed38,"*._Function_1_2","com/ukuleledog/games/clicker/GameState.hx",387,0xf057845d)
			{
				struct _Function_2_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/clicker/GameState.hx",387,0xf057845d)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("alpha") , (int)0,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(387)
				::motion::Actuate_obj::tween(_g->__get((int)0).StaticCast< ::com::ukuleledog::games::clicker::GameState >()->lblCurrentPoints,0.5,_Function_2_1::Block(),null(),null())->ease(::motion::easing::Linear_obj::get_easeNone());
			}
			return null();
		}
		HX_END_LOCAL_FUNC0((void))

		HX_STACK_LINE(386)
		::motion::Actuate_obj::tween(this->lblCurrentPoints,0.2,_Function_1_1::Block(),null(),null())->ease(_g2)->onComplete( Dynamic(new _Function_1_2(_g)),null());
		HX_STACK_LINE(390)
		if (((this->points >= this->currentPointsNeeded))){
			HX_STACK_LINE(393)
			::openfl::_v2::feedback::Haptic_obj::vibrate(null(),null());
			HX_STACK_LINE(396)
			(this->level)++;
			HX_STACK_LINE(398)
			::motion::easing::IEasing _g3 = ::motion::easing::Linear_obj::get_easeNone();		HX_STACK_VAR(_g3,"_g3");
			struct _Function_2_1{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/clicker/GameState.hx",398,0xf057845d)
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
				HX_STACK_FRAME("*","_Function_2_2",0x5201af79,"*._Function_2_2","com/ukuleledog/games/clicker/GameState.hx",399,0xf057845d)
				{
					struct _Function_3_1{
						inline static Dynamic Block( ){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/clicker/GameState.hx",399,0xf057845d)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_CSTRING("scaleX") , (int)1,false);
								__result->Add(HX_CSTRING("scaleY") , (int)1,false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(399)
					::motion::Actuate_obj::tween(_g->__get((int)0).StaticCast< ::com::ukuleledog::games::clicker::GameState >()->lblLevel,0.5,_Function_3_1::Block(),null(),null())->ease(::motion::easing::Linear_obj::get_easeNone());
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			HX_STACK_LINE(398)
			::motion::Actuate_obj::tween(this->lblLevel,0.1,_Function_2_1::Block(),null(),null())->ease(_g3)->onComplete( Dynamic(new _Function_2_2(_g)),null());
			HX_STACK_LINE(402)
			this->lastPointsNeeded = this->currentPointsNeeded;
			HX_STACK_LINE(403)
			int _g4 = ::Math_obj::ceil((this->currentPointsNeeded * 1.5));		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(403)
			this->currentPointsNeeded = _g4;
			HX_STACK_LINE(404)
			int _g8;		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(404)
			{
				HX_STACK_LINE(404)
				int a;		HX_STACK_VAR(a,"a");
				HX_STACK_LINE(404)
				{
					HX_STACK_LINE(404)
					Float _g5 = ::Math_obj::random();		HX_STACK_VAR(_g5,"_g5");
					HX_STACK_LINE(404)
					Float _g6 = (_g5 * (int)10);		HX_STACK_VAR(_g6,"_g6");
					HX_STACK_LINE(404)
					int _g7 = ::Math_obj::round(_g6);		HX_STACK_VAR(_g7,"_g7");
					HX_STACK_LINE(404)
					int a1 = (_g7 + (int)1);		HX_STACK_VAR(a1,"a1");
					HX_STACK_LINE(404)
					a = (a1 + this->moneyEarned);
				}
				HX_STACK_LINE(404)
				_g8 = (a + (this->level * this->moneyBoostValue));
			}
			HX_STACK_LINE(404)
			this->moneyEarned = _g8;
			struct _Function_2_3{
				inline static bool Block( hx::ObjectPtr< ::com::ukuleledog::games::clicker::GameState_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/clicker/GameState.hx",406,0xf057845d)
					{
						HX_STACK_LINE(406)
						int a = __this->moneyEarned;		HX_STACK_VAR(a,"a");
						HX_STACK_LINE(406)
						int b = (__this->level * (int)2);		HX_STACK_VAR(b,"b");
						struct _Function_3_1{
							inline static bool Block( int &b,int &a){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/clicker/GameState.hx",406,0xf057845d)
								{
									HX_STACK_LINE(406)
									bool aNeg = (b < (int)0);		HX_STACK_VAR(aNeg,"aNeg");
									HX_STACK_LINE(406)
									bool bNeg = (a < (int)0);		HX_STACK_VAR(bNeg,"bNeg");
									HX_STACK_LINE(406)
									return (  (((aNeg != bNeg))) ? bool(aNeg) : bool((b > a)) );
								}
								return null();
							}
						};
						HX_STACK_LINE(406)
						return _Function_3_1::Block(b,a);
					}
					return null();
				}
			};
			HX_STACK_LINE(406)
			if ((_Function_2_3::Block(this))){
				HX_STACK_LINE(407)
				this->moneyEarned = (this->level * (int)2);
			}
			struct _Function_2_4{
				inline static Float Block( hx::ObjectPtr< ::com::ukuleledog::games::clicker::GameState_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/clicker/GameState.hx",409,0xf057845d)
					{
						HX_STACK_LINE(409)
						int _int = __this->moneyEarned;		HX_STACK_VAR(_int,"int");
						HX_STACK_LINE(409)
						return (  (((_int < (int)0))) ? Float((4294967296.0 + _int)) : Float((_int + 0.0)) );
					}
					return null();
				}
			};
			HX_STACK_LINE(409)
			this->money = (_Function_2_4::Block(this) + this->money);
			struct _Function_2_5{
				inline static Float Block( hx::ObjectPtr< ::com::ukuleledog::games::clicker::GameState_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/clicker/GameState.hx",411,0xf057845d)
					{
						HX_STACK_LINE(411)
						int _int = __this->moneyEarned;		HX_STACK_VAR(_int,"int");
						HX_STACK_LINE(411)
						return (  (((_int < (int)0))) ? Float((4294967296.0 + _int)) : Float((_int + 0.0)) );
					}
					return null();
				}
			};
			HX_STACK_LINE(411)
			::String _g9 = ::Std_obj::string(_Function_2_5::Block(this));		HX_STACK_VAR(_g9,"_g9");
			HX_STACK_LINE(411)
			::String _g10 = (HX_CSTRING("+ $") + _g9);		HX_STACK_VAR(_g10,"_g10");
			HX_STACK_LINE(411)
			this->lblMoneyEarned->set_text(_g10);
			HX_STACK_LINE(412)
			::motion::easing::IEasing _g111 = ::motion::easing::Linear_obj::get_easeNone();		HX_STACK_VAR(_g111,"_g111");
			struct _Function_2_6{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/clicker/GameState.hx",412,0xf057845d)
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
				HX_STACK_FRAME("*","_Function_2_7",0x5201af7e,"*._Function_2_7","com/ukuleledog/games/clicker/GameState.hx",413,0xf057845d)
				{
					struct _Function_3_1{
						inline static Dynamic Block( ){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/clicker/GameState.hx",413,0xf057845d)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_CSTRING("alpha") , (int)0,false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(413)
					::motion::Actuate_obj::tween(_g->__get((int)0).StaticCast< ::com::ukuleledog::games::clicker::GameState >()->lblMoneyEarned,0.2,_Function_3_1::Block(),null(),null())->ease(::motion::easing::Linear_obj::get_easeNone())->delay((int)1);
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			HX_STACK_LINE(412)
			::motion::Actuate_obj::tween(this->lblMoneyEarned,0.2,_Function_2_6::Block(),null(),null())->ease(_g111)->onComplete( Dynamic(new _Function_2_7(_g)),null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GameState_obj,pointHandle,(void))

Void GameState_obj::loop( ::openfl::_v2::events::Event e){
{
		HX_STACK_FRAME("com.ukuleledog.games.clicker.GameState","loop",0x5e4c76cf,"com.ukuleledog.games.clicker.GameState.loop","com/ukuleledog/games/clicker/GameState.hx",420,0xf057845d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		struct _Function_1_1{
			inline static Float Block( hx::ObjectPtr< ::com::ukuleledog::games::clicker::GameState_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/clicker/GameState.hx",421,0xf057845d)
				{
					HX_STACK_LINE(421)
					int _int = __this->level;		HX_STACK_VAR(_int,"int");
					HX_STACK_LINE(421)
					return (  (((_int < (int)0))) ? Float((4294967296.0 + _int)) : Float((_int + 0.0)) );
				}
				return null();
			}
		};
		HX_STACK_LINE(421)
		::String _g = ::Std_obj::string(_Function_1_1::Block(this));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(421)
		::String _g1 = (HX_CSTRING("Niveau: ") + _g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(421)
		this->lblLevel->set_text(_g1);
		HX_STACK_LINE(424)
		this->lblMoney->set_text((HX_CSTRING("Argent: $") + this->money));
		struct _Function_1_2{
			inline static bool Block( hx::ObjectPtr< ::com::ukuleledog::games::clicker::GameState_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/clicker/GameState.hx",426,0xf057845d)
				{
					HX_STACK_LINE(426)
					int a = __this->clickBoostCounter;		HX_STACK_VAR(a,"a");
					HX_STACK_LINE(426)
					bool aNeg = (a < (int)0);		HX_STACK_VAR(aNeg,"aNeg");
					HX_STACK_LINE(426)
					bool bNeg = ((int)0 < (int)0);		HX_STACK_VAR(bNeg,"bNeg");
					HX_STACK_LINE(426)
					return (  (((aNeg != bNeg))) ? bool(aNeg) : bool((a > (int)0)) );
				}
				return null();
			}
		};
		HX_STACK_LINE(426)
		if ((_Function_1_2::Block(this))){
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
			::String _g2 = ::Std_obj::string(_Function_2_1::Block(this));		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(427)
			::String _g3 = (HX_CSTRING("$") + _g2);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(427)
			this->lblClickBoost->set_text(_g3);
		}
		else{
			HX_STACK_LINE(429)
			this->lblClickBoost->set_text(HX_CSTRING("Max !"));
		}
		struct _Function_1_3{
			inline static bool Block( hx::ObjectPtr< ::com::ukuleledog::games::clicker::GameState_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/clicker/GameState.hx",431,0xf057845d)
				{
					HX_STACK_LINE(431)
					int a = __this->moneyBoostCounter;		HX_STACK_VAR(a,"a");
					HX_STACK_LINE(431)
					bool aNeg = (a < (int)0);		HX_STACK_VAR(aNeg,"aNeg");
					HX_STACK_LINE(431)
					bool bNeg = ((int)0 < (int)0);		HX_STACK_VAR(bNeg,"bNeg");
					HX_STACK_LINE(431)
					return (  (((aNeg != bNeg))) ? bool(aNeg) : bool((a > (int)0)) );
				}
				return null();
			}
		};
		HX_STACK_LINE(431)
		if ((_Function_1_3::Block(this))){
			struct _Function_2_1{
				inline static Float Block( hx::ObjectPtr< ::com::ukuleledog::games::clicker::GameState_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/clicker/GameState.hx",432,0xf057845d)
					{
						HX_STACK_LINE(432)
						int _int = __this->moneyBoostPrice;		HX_STACK_VAR(_int,"int");
						HX_STACK_LINE(432)
						return (  (((_int < (int)0))) ? Float((4294967296.0 + _int)) : Float((_int + 0.0)) );
					}
					return null();
				}
			};
			HX_STACK_LINE(432)
			::String _g4 = ::Std_obj::string(_Function_2_1::Block(this));		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(432)
			::String _g5 = (HX_CSTRING("$") + _g4);		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(432)
			this->lblMoneyBoost->set_text(_g5);
		}
		else{
			HX_STACK_LINE(434)
			this->lblMoneyBoost->set_text(HX_CSTRING("Max !"));
		}
		struct _Function_1_4{
			inline static bool Block( hx::ObjectPtr< ::com::ukuleledog::games::clicker::GameState_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/clicker/GameState.hx",436,0xf057845d)
				{
					HX_STACK_LINE(436)
					int a = __this->exploderBoostCounter;		HX_STACK_VAR(a,"a");
					HX_STACK_LINE(436)
					bool aNeg = (a < (int)0);		HX_STACK_VAR(aNeg,"aNeg");
					HX_STACK_LINE(436)
					bool bNeg = ((int)0 < (int)0);		HX_STACK_VAR(bNeg,"bNeg");
					HX_STACK_LINE(436)
					return (  (((aNeg != bNeg))) ? bool(aNeg) : bool((a > (int)0)) );
				}
				return null();
			}
		};
		HX_STACK_LINE(436)
		if ((_Function_1_4::Block(this))){
			struct _Function_2_1{
				inline static Float Block( hx::ObjectPtr< ::com::ukuleledog::games::clicker::GameState_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/clicker/GameState.hx",437,0xf057845d)
					{
						HX_STACK_LINE(437)
						int _int = __this->exploderBoostPrice;		HX_STACK_VAR(_int,"int");
						HX_STACK_LINE(437)
						return (  (((_int < (int)0))) ? Float((4294967296.0 + _int)) : Float((_int + 0.0)) );
					}
					return null();
				}
			};
			HX_STACK_LINE(437)
			::String _g6 = ::Std_obj::string(_Function_2_1::Block(this));		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(437)
			::String _g7 = (HX_CSTRING("$") + _g6);		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(437)
			this->lblExploderBoost->set_text(_g7);
		}
		else{
			HX_STACK_LINE(439)
			this->lblExploderBoost->set_text(HX_CSTRING("Max !"));
		}
		struct _Function_1_5{
			inline static bool Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/clicker/GameState.hx",441,0xf057845d)
				{
					HX_STACK_LINE(441)
					Float _g8 = ::Math_obj::random();		HX_STACK_VAR(_g8,"_g8");
					HX_STACK_LINE(441)
					Float _g9 = (_g8 * (int)1000);		HX_STACK_VAR(_g9,"_g9");
					HX_STACK_LINE(441)
					return (_g9 > (int)999);
				}
				return null();
			}
		};
		HX_STACK_LINE(441)
		if (((  (((bool(this->canClick) && bool((this->special == null()))))) ? bool(_Function_1_5::Block()) : bool(false) ))){
			HX_STACK_LINE(442)
			this->showSpecial();
		}
		struct _Function_1_6{
			inline static Float Block( hx::ObjectPtr< ::com::ukuleledog::games::clicker::GameState_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/clicker/GameState.hx",444,0xf057845d)
				{
					HX_STACK_LINE(444)
					int _int = __this->clickBoostCounter;		HX_STACK_VAR(_int,"int");
					HX_STACK_LINE(444)
					return (  (((_int < (int)0))) ? Float((4294967296.0 + _int)) : Float((_int + 0.0)) );
				}
				return null();
			}
		};
		HX_STACK_LINE(444)
		if (((_Function_1_6::Block(this) == (int)0))){
			HX_STACK_LINE(445)
			this->clickBoost->set_alpha(0.2);
		}
		else{
			struct _Function_2_1{
				inline static Float Block( hx::ObjectPtr< ::com::ukuleledog::games::clicker::GameState_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/clicker/GameState.hx",446,0xf057845d)
					{
						HX_STACK_LINE(446)
						int _int;		HX_STACK_VAR(_int,"int");
						struct _Function_3_1{
							inline static Float Block( hx::ObjectPtr< ::com::ukuleledog::games::clicker::GameState_obj > __this){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/clicker/GameState.hx",446,0xf057845d)
								{
									HX_STACK_LINE(446)
									int int1 = __this->clickBoostPrice;		HX_STACK_VAR(int1,"int1");
									HX_STACK_LINE(446)
									return (  (((int1 < (int)0))) ? Float((4294967296.0 + int1)) : Float((int1 + 0.0)) );
								}
								return null();
							}
						};
						HX_STACK_LINE(446)
						_int = _Function_3_1::Block(__this);
						HX_STACK_LINE(446)
						return (  (((_int < (int)0))) ? Float((4294967296.0 + _int)) : Float((_int + 0.0)) );
					}
					return null();
				}
			};
			HX_STACK_LINE(446)
			if (((this->money >= _Function_2_1::Block(this)))){
				HX_STACK_LINE(447)
				this->clickBoost->set_alpha((int)1);
			}
			else{
				HX_STACK_LINE(449)
				this->clickBoost->set_alpha(0.6);
			}
		}
		struct _Function_1_7{
			inline static Float Block( hx::ObjectPtr< ::com::ukuleledog::games::clicker::GameState_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/clicker/GameState.hx",451,0xf057845d)
				{
					HX_STACK_LINE(451)
					int _int = __this->moneyBoostCounter;		HX_STACK_VAR(_int,"int");
					HX_STACK_LINE(451)
					return (  (((_int < (int)0))) ? Float((4294967296.0 + _int)) : Float((_int + 0.0)) );
				}
				return null();
			}
		};
		HX_STACK_LINE(451)
		if (((_Function_1_7::Block(this) == (int)0))){
			HX_STACK_LINE(452)
			this->moneyBoost->set_alpha(0.2);
		}
		else{
			struct _Function_2_1{
				inline static Float Block( hx::ObjectPtr< ::com::ukuleledog::games::clicker::GameState_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/clicker/GameState.hx",453,0xf057845d)
					{
						HX_STACK_LINE(453)
						int _int;		HX_STACK_VAR(_int,"int");
						struct _Function_3_1{
							inline static Float Block( hx::ObjectPtr< ::com::ukuleledog::games::clicker::GameState_obj > __this){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/clicker/GameState.hx",453,0xf057845d)
								{
									HX_STACK_LINE(453)
									int int1 = __this->moneyBoostPrice;		HX_STACK_VAR(int1,"int1");
									HX_STACK_LINE(453)
									return (  (((int1 < (int)0))) ? Float((4294967296.0 + int1)) : Float((int1 + 0.0)) );
								}
								return null();
							}
						};
						HX_STACK_LINE(453)
						_int = _Function_3_1::Block(__this);
						HX_STACK_LINE(453)
						return (  (((_int < (int)0))) ? Float((4294967296.0 + _int)) : Float((_int + 0.0)) );
					}
					return null();
				}
			};
			HX_STACK_LINE(453)
			if (((this->money >= _Function_2_1::Block(this)))){
				HX_STACK_LINE(454)
				this->moneyBoost->set_alpha((int)1);
			}
			else{
				HX_STACK_LINE(456)
				this->moneyBoost->set_alpha(0.6);
			}
		}
		struct _Function_1_8{
			inline static Float Block( hx::ObjectPtr< ::com::ukuleledog::games::clicker::GameState_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/clicker/GameState.hx",458,0xf057845d)
				{
					HX_STACK_LINE(458)
					int _int = __this->exploderBoostCounter;		HX_STACK_VAR(_int,"int");
					HX_STACK_LINE(458)
					return (  (((_int < (int)0))) ? Float((4294967296.0 + _int)) : Float((_int + 0.0)) );
				}
				return null();
			}
		};
		HX_STACK_LINE(458)
		if (((_Function_1_8::Block(this) == (int)0))){
			HX_STACK_LINE(459)
			this->exploderBoost->set_alpha(0.2);
		}
		else{
			struct _Function_2_1{
				inline static Float Block( hx::ObjectPtr< ::com::ukuleledog::games::clicker::GameState_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/clicker/GameState.hx",460,0xf057845d)
					{
						HX_STACK_LINE(460)
						int _int;		HX_STACK_VAR(_int,"int");
						struct _Function_3_1{
							inline static Float Block( hx::ObjectPtr< ::com::ukuleledog::games::clicker::GameState_obj > __this){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/clicker/GameState.hx",460,0xf057845d)
								{
									HX_STACK_LINE(460)
									int int1 = __this->exploderBoostPrice;		HX_STACK_VAR(int1,"int1");
									HX_STACK_LINE(460)
									return (  (((int1 < (int)0))) ? Float((4294967296.0 + int1)) : Float((int1 + 0.0)) );
								}
								return null();
							}
						};
						HX_STACK_LINE(460)
						_int = _Function_3_1::Block(__this);
						HX_STACK_LINE(460)
						return (  (((_int < (int)0))) ? Float((4294967296.0 + _int)) : Float((_int + 0.0)) );
					}
					return null();
				}
			};
			HX_STACK_LINE(460)
			if (((this->money >= _Function_2_1::Block(this)))){
				HX_STACK_LINE(461)
				this->exploderBoost->set_alpha((int)1);
			}
			else{
				HX_STACK_LINE(463)
				this->exploderBoost->set_alpha(0.6);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GameState_obj,loop,(void))

Void GameState_obj::showSpecial( ){
{
		HX_STACK_FRAME("com.ukuleledog.games.clicker.GameState","showSpecial",0x44abf9b1,"com.ukuleledog.games.clicker.GameState.showSpecial","com/ukuleledog/games/clicker/GameState.hx",468,0xf057845d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(469)
		::openfl::_v2::display::Sprite _g = ::openfl::_v2::display::Sprite_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(469)
		this->special = _g;
		HX_STACK_LINE(470)
		Float _g1 = ::Math_obj::random();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(470)
		Float _g2 = (_g1 * (int)4);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(470)
		int _g3 = ::Math_obj::floor(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(470)
		int _g4 = (_g3 + (int)1);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(470)
		::String _g5 = (HX_CSTRING("img/special-") + _g4);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(470)
		::String _g6 = (_g5 + HX_CSTRING(".png"));		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(470)
		::openfl::_v2::display::BitmapData _g7 = ::openfl::_v2::Assets_obj::getBitmapData(_g6,null());		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(470)
		this->special->get_graphics()->beginBitmapFill(_g7,null(),null(),null());
		HX_STACK_LINE(472)
		this->special->get_graphics()->drawRect((int)0,(int)0,(int)64,(int)64);
		HX_STACK_LINE(473)
		this->special->get_graphics()->endFill();
		HX_STACK_LINE(474)
		this->special->buttonMode = true;
		HX_STACK_LINE(475)
		Float _g8 = ::Math_obj::random();		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(475)
		Float _g9 = (_g8 * (int)451);		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(475)
		int _g10 = ::Math_obj::floor(_g9);		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(475)
		int _g11 = (_g10 + (int)150);		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(475)
		this->special->set_x(_g11);
		HX_STACK_LINE(476)
		Float _g12 = ::Math_obj::random();		HX_STACK_VAR(_g12,"_g12");
		HX_STACK_LINE(476)
		Float _g13 = (_g12 * (int)271);		HX_STACK_VAR(_g13,"_g13");
		HX_STACK_LINE(476)
		int _g14 = ::Math_obj::floor(_g13);		HX_STACK_VAR(_g14,"_g14");
		HX_STACK_LINE(476)
		int _g15 = (_g14 + (int)30);		HX_STACK_VAR(_g15,"_g15");
		HX_STACK_LINE(476)
		this->special->set_y(_g15);
		HX_STACK_LINE(477)
		this->addChild(this->special);
		HX_STACK_LINE(478)
		this->specialSuper = true;
		HX_STACK_LINE(479)
		this->special->addEventListener(::openfl::_v2::events::MouseEvent_obj::MOUSE_DOWN,this->specialClickHandle_dyn(),null(),null(),null());
		HX_STACK_LINE(480)
		this->specialSuperTimer->start();
		HX_STACK_LINE(481)
		this->specialTimer->start();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(GameState_obj,showSpecial,(void))

Void GameState_obj::specialCooldownHandle( ::openfl::events::TimerEvent e){
{
		HX_STACK_FRAME("com.ukuleledog.games.clicker.GameState","specialCooldownHandle",0x6badfd01,"com.ukuleledog.games.clicker.GameState.specialCooldownHandle","com/ukuleledog/games/clicker/GameState.hx",485,0xf057845d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(486)
		this->special = null();
		HX_STACK_LINE(487)
		this->specialCooldownTimer->stop();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GameState_obj,specialCooldownHandle,(void))

Void GameState_obj::specialClickHandle( ::openfl::_v2::events::MouseEvent e){
{
		HX_STACK_FRAME("com.ukuleledog.games.clicker.GameState","specialClickHandle",0x38663602,"com.ukuleledog.games.clicker.GameState.specialClickHandle","com/ukuleledog/games/clicker/GameState.hx",491,0xf057845d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(492)
		this->special->removeEventListener(::openfl::_v2::events::MouseEvent_obj::MOUSE_DOWN,this->specialClickHandle_dyn(),null());
		HX_STACK_LINE(494)
		this->canClick = false;
		HX_STACK_LINE(495)
		this->specialSuperTimer->stop();
		HX_STACK_LINE(496)
		this->specialTimer->stop();
		HX_STACK_LINE(498)
		this->pointHandle((this->currentPointsNeeded - this->points));
		struct _Function_1_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/clicker/GameState.hx",500,0xf057845d)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("alpha") , (int)0,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(500)
		::motion::Actuate_obj::tween(this->special,0.3,_Function_1_1::Block(),null(),null());
		HX_STACK_LINE(502)
		if ((this->specialSuper)){
			HX_STACK_LINE(504)
			this->superSpecialDisplay();
		}
		else{
			HX_STACK_LINE(508)
			this->canClick = true;
			HX_STACK_LINE(509)
			this->specialCooldownTimer->start();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GameState_obj,specialClickHandle,(void))

Void GameState_obj::specialSuperEndHandle( ::openfl::events::TimerEvent e){
{
		HX_STACK_FRAME("com.ukuleledog.games.clicker.GameState","specialSuperEndHandle",0x3a8b5036,"com.ukuleledog.games.clicker.GameState.specialSuperEndHandle","com/ukuleledog/games/clicker/GameState.hx",514,0xf057845d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(515)
		this->specialSuper = false;
		HX_STACK_LINE(516)
		this->specialSuperTimer->stop();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GameState_obj,specialSuperEndHandle,(void))

Void GameState_obj::specialEndHandle( ::openfl::events::TimerEvent e){
{
		HX_STACK_FRAME("com.ukuleledog.games.clicker.GameState","specialEndHandle",0x2773ed55,"com.ukuleledog.games.clicker.GameState.specialEndHandle","com/ukuleledog/games/clicker/GameState.hx",520,0xf057845d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(519)
		Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new().Add(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(521)
		this->specialTimer->stop();
		struct _Function_1_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/clicker/GameState.hx",522,0xf057845d)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("alpha") , (int)0,false);
					return __result;
				}
				return null();
			}
		};

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_2,Array< ::Dynamic >,_g)
		Void run(){
			HX_STACK_FRAME("*","_Function_1_2",0x5200ed38,"*._Function_1_2","com/ukuleledog/games/clicker/GameState.hx",522,0xf057845d)
			{
				HX_STACK_LINE(523)
				_g->__get((int)0).StaticCast< ::com::ukuleledog::games::clicker::GameState >()->special->removeEventListener(::openfl::_v2::events::MouseEvent_obj::MOUSE_DOWN,_g->__get((int)0).StaticCast< ::com::ukuleledog::games::clicker::GameState >()->specialClickHandle_dyn(),null());
				HX_STACK_LINE(524)
				_g->__get((int)0).StaticCast< ::com::ukuleledog::games::clicker::GameState >()->specialCooldownTimer->start();
			}
			return null();
		}
		HX_END_LOCAL_FUNC0((void))

		HX_STACK_LINE(522)
		::motion::Actuate_obj::tween(this->special,0.3,_Function_1_1::Block(),null(),null())->onComplete( Dynamic(new _Function_1_2(_g)),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GameState_obj,specialEndHandle,(void))

Void GameState_obj::exploderHandler( ::openfl::events::TimerEvent e){
{
		HX_STACK_FRAME("com.ukuleledog.games.clicker.GameState","exploderHandler",0x19e1afce,"com.ukuleledog.games.clicker.GameState.exploderHandler","com/ukuleledog/games/clicker/GameState.hx",529,0xf057845d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(528)
		Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new().Add(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g,"_g");
		struct _Function_1_1{
			inline static bool Block( hx::ObjectPtr< ::com::ukuleledog::games::clicker::GameState_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/clicker/GameState.hx",531,0xf057845d)
				{
					HX_STACK_LINE(531)
					int a = __this->exploderBoostValue;		HX_STACK_VAR(a,"a");
					HX_STACK_LINE(531)
					bool aNeg = (a < (int)0);		HX_STACK_VAR(aNeg,"aNeg");
					HX_STACK_LINE(531)
					bool bNeg = ((int)1 < (int)0);		HX_STACK_VAR(bNeg,"bNeg");
					HX_STACK_LINE(531)
					return (  (((aNeg != bNeg))) ? bool(aNeg) : bool((a > (int)1)) );
				}
				return null();
			}
		};
		HX_STACK_LINE(531)
		if (((bool(this->canClick) && bool(_Function_1_1::Block(this))))){
			struct _Function_2_1{
				inline static Float Block( hx::ObjectPtr< ::com::ukuleledog::games::clicker::GameState_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/clicker/GameState.hx",533,0xf057845d)
					{
						HX_STACK_LINE(533)
						int _int = __this->exploderBoostValue;		HX_STACK_VAR(_int,"int");
						HX_STACK_LINE(533)
						return (  (((_int < (int)0))) ? Float((4294967296.0 + _int)) : Float((_int + 0.0)) );
					}
					return null();
				}
			};
			HX_STACK_LINE(533)
			this->pointHandle(_Function_2_1::Block(this));
			HX_STACK_LINE(535)
			this->asuka->get_graphics()->clear();
			HX_STACK_LINE(536)
			::openfl::_v2::display::BitmapData _g1 = ::openfl::_v2::Assets_obj::getBitmapData(HX_CSTRING("img/asuka-click.png"),null());		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(536)
			this->asuka->get_graphics()->beginBitmapFill(_g1,null(),null(),null());
			HX_STACK_LINE(537)
			this->asuka->get_graphics()->drawRect((int)0,(int)0,(int)128,(int)128);
			HX_STACK_LINE(538)
			this->asuka->get_graphics()->endFill();
			HX_STACK_LINE(539)
			this->asuka->set_x((int)498);
			HX_STACK_LINE(541)
			::motion::easing::IEasing _g11 = ::motion::easing::Bounce_obj::get_easeInOut();		HX_STACK_VAR(_g11,"_g11");
			struct _Function_2_2{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/clicker/GameState.hx",541,0xf057845d)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_CSTRING("x") , (int)500,false);
						return __result;
					}
					return null();
				}
			};

			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_3,Array< ::Dynamic >,_g)
			Void run(){
				HX_STACK_FRAME("*","_Function_2_3",0x5201af7a,"*._Function_2_3","com/ukuleledog/games/clicker/GameState.hx",541,0xf057845d)
				{
					HX_STACK_LINE(542)
					_g->__get((int)0).StaticCast< ::com::ukuleledog::games::clicker::GameState >()->asuka->get_graphics()->clear();
					HX_STACK_LINE(543)
					_g->__get((int)0).StaticCast< ::com::ukuleledog::games::clicker::GameState >()->asuka->get_graphics()->beginBitmapFill(::openfl::_v2::Assets_obj::getBitmapData(HX_CSTRING("img/asuka.png"),null()),null(),null(),null());
					HX_STACK_LINE(544)
					_g->__get((int)0).StaticCast< ::com::ukuleledog::games::clicker::GameState >()->asuka->get_graphics()->drawRect((int)0,(int)0,(int)128,(int)128);
					HX_STACK_LINE(545)
					_g->__get((int)0).StaticCast< ::com::ukuleledog::games::clicker::GameState >()->asuka->get_graphics()->endFill();
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			HX_STACK_LINE(541)
			::motion::Actuate_obj::tween(this->asuka,0.5,_Function_2_2::Block(),null(),null())->ease(_g11)->onComplete( Dynamic(new _Function_2_3(_g)),null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GameState_obj,exploderHandler,(void))

Void GameState_obj::clickBoostHandler( ::openfl::_v2::events::MouseEvent e){
{
		HX_STACK_FRAME("com.ukuleledog.games.clicker.GameState","clickBoostHandler",0xbbf04804,"com.ukuleledog.games.clicker.GameState.clickBoostHandler","com/ukuleledog/games/clicker/GameState.hx",552,0xf057845d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(551)
		Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new().Add(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g,"_g");
		struct _Function_1_1{
			inline static Float Block( hx::ObjectPtr< ::com::ukuleledog::games::clicker::GameState_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/clicker/GameState.hx",553,0xf057845d)
				{
					HX_STACK_LINE(553)
					int _int;		HX_STACK_VAR(_int,"int");
					struct _Function_2_1{
						inline static Float Block( hx::ObjectPtr< ::com::ukuleledog::games::clicker::GameState_obj > __this){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/clicker/GameState.hx",553,0xf057845d)
							{
								HX_STACK_LINE(553)
								int int1 = __this->clickBoostPrice;		HX_STACK_VAR(int1,"int1");
								HX_STACK_LINE(553)
								return (  (((int1 < (int)0))) ? Float((4294967296.0 + int1)) : Float((int1 + 0.0)) );
							}
							return null();
						}
					};
					HX_STACK_LINE(553)
					_int = _Function_2_1::Block(__this);
					HX_STACK_LINE(553)
					return (  (((_int < (int)0))) ? Float((4294967296.0 + _int)) : Float((_int + 0.0)) );
				}
				return null();
			}
		};
		struct _Function_1_2{
			inline static bool Block( hx::ObjectPtr< ::com::ukuleledog::games::clicker::GameState_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/clicker/GameState.hx",553,0xf057845d)
				{
					HX_STACK_LINE(553)
					int a = __this->clickBoostCounter;		HX_STACK_VAR(a,"a");
					HX_STACK_LINE(553)
					bool aNeg = (a < (int)0);		HX_STACK_VAR(aNeg,"aNeg");
					HX_STACK_LINE(553)
					bool bNeg = ((int)0 < (int)0);		HX_STACK_VAR(bNeg,"bNeg");
					HX_STACK_LINE(553)
					return (  (((aNeg != bNeg))) ? bool(aNeg) : bool((a > (int)0)) );
				}
				return null();
			}
		};
		HX_STACK_LINE(553)
		if (((bool((bool(this->canClick) && bool((this->money >= _Function_1_1::Block(this))))) && bool(_Function_1_2::Block(this))))){
			HX_STACK_LINE(555)
			e->stopPropagation();
			struct _Function_2_1{
				inline static Float Block( hx::ObjectPtr< ::com::ukuleledog::games::clicker::GameState_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/clicker/GameState.hx",556,0xf057845d)
					{
						HX_STACK_LINE(556)
						int _int;		HX_STACK_VAR(_int,"int");
						struct _Function_3_1{
							inline static Float Block( hx::ObjectPtr< ::com::ukuleledog::games::clicker::GameState_obj > __this){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/clicker/GameState.hx",556,0xf057845d)
								{
									HX_STACK_LINE(556)
									int int1 = __this->clickBoostPrice;		HX_STACK_VAR(int1,"int1");
									HX_STACK_LINE(556)
									return (  (((int1 < (int)0))) ? Float((4294967296.0 + int1)) : Float((int1 + 0.0)) );
								}
								return null();
							}
						};
						HX_STACK_LINE(556)
						_int = _Function_3_1::Block(__this);
						HX_STACK_LINE(556)
						return (  (((_int < (int)0))) ? Float((4294967296.0 + _int)) : Float((_int + 0.0)) );
					}
					return null();
				}
			};
			HX_STACK_LINE(556)
			this->money = (this->money - _Function_2_1::Block(this));
			struct _Function_2_2{
				inline static Float Block( hx::ObjectPtr< ::com::ukuleledog::games::clicker::GameState_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/clicker/GameState.hx",558,0xf057845d)
					{
						HX_STACK_LINE(558)
						int _int = __this->clickBoostPrice;		HX_STACK_VAR(_int,"int");
						HX_STACK_LINE(558)
						return (  (((_int < (int)0))) ? Float((4294967296.0 + _int)) : Float((_int + 0.0)) );
					}
					return null();
				}
			};
			HX_STACK_LINE(558)
			::String _g1 = ::Std_obj::string(_Function_2_2::Block(this));		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(558)
			::String _g11 = (HX_CSTRING("- $") + _g1);		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(558)
			this->lblMoneyEarned->set_text(_g11);
			HX_STACK_LINE(559)
			::motion::easing::IEasing _g2 = ::motion::easing::Linear_obj::get_easeNone();		HX_STACK_VAR(_g2,"_g2");
			struct _Function_2_3{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/clicker/GameState.hx",559,0xf057845d)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_CSTRING("alpha") , (int)1,false);
						return __result;
					}
					return null();
				}
			};

			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_4,Array< ::Dynamic >,_g)
			Void run(){
				HX_STACK_FRAME("*","_Function_2_4",0x5201af7b,"*._Function_2_4","com/ukuleledog/games/clicker/GameState.hx",560,0xf057845d)
				{
					struct _Function_3_1{
						inline static Dynamic Block( ){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/clicker/GameState.hx",560,0xf057845d)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_CSTRING("alpha") , (int)0,false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(560)
					::motion::Actuate_obj::tween(_g->__get((int)0).StaticCast< ::com::ukuleledog::games::clicker::GameState >()->lblMoneyEarned,0.2,_Function_3_1::Block(),null(),null())->ease(::motion::easing::Linear_obj::get_easeNone())->delay((int)1);
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			HX_STACK_LINE(559)
			::motion::Actuate_obj::tween(this->lblMoneyEarned,0.2,_Function_2_3::Block(),null(),null())->ease(_g2)->onComplete( Dynamic(new _Function_2_4(_g)),null());
			HX_STACK_LINE(563)
			this->clickBoostPrice = (this->clickBoostPrice * (int)2);
			HX_STACK_LINE(564)
			this->currentPointValue = (this->currentPointValue * (int)2);
			HX_STACK_LINE(566)
			this->clickBoost->set_scaleX(1.1);
			HX_STACK_LINE(567)
			this->clickBoost->set_scaleY(1.1);
			HX_STACK_LINE(568)
			::motion::easing::IEasing _g3 = ::motion::easing::Bounce_obj::get_easeOut();		HX_STACK_VAR(_g3,"_g3");
			struct _Function_2_5{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/clicker/GameState.hx",568,0xf057845d)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_CSTRING("scaleX") , (int)1,false);
						__result->Add(HX_CSTRING("scaleY") , (int)1,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(568)
			::motion::Actuate_obj::tween(this->clickBoost,0.5,_Function_2_5::Block(),null(),null())->ease(_g3);
			HX_STACK_LINE(570)
			(this->clickBoostCounter)--;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GameState_obj,clickBoostHandler,(void))

Void GameState_obj::moneyBoostHandler( ::openfl::_v2::events::MouseEvent e){
{
		HX_STACK_FRAME("com.ukuleledog.games.clicker.GameState","moneyBoostHandler",0x6dd299fc,"com.ukuleledog.games.clicker.GameState.moneyBoostHandler","com/ukuleledog/games/clicker/GameState.hx",576,0xf057845d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(575)
		Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new().Add(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g,"_g");
		struct _Function_1_1{
			inline static Float Block( hx::ObjectPtr< ::com::ukuleledog::games::clicker::GameState_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/clicker/GameState.hx",577,0xf057845d)
				{
					HX_STACK_LINE(577)
					int _int;		HX_STACK_VAR(_int,"int");
					struct _Function_2_1{
						inline static Float Block( hx::ObjectPtr< ::com::ukuleledog::games::clicker::GameState_obj > __this){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/clicker/GameState.hx",577,0xf057845d)
							{
								HX_STACK_LINE(577)
								int int1 = __this->moneyBoostPrice;		HX_STACK_VAR(int1,"int1");
								HX_STACK_LINE(577)
								return (  (((int1 < (int)0))) ? Float((4294967296.0 + int1)) : Float((int1 + 0.0)) );
							}
							return null();
						}
					};
					HX_STACK_LINE(577)
					_int = _Function_2_1::Block(__this);
					HX_STACK_LINE(577)
					return (  (((_int < (int)0))) ? Float((4294967296.0 + _int)) : Float((_int + 0.0)) );
				}
				return null();
			}
		};
		struct _Function_1_2{
			inline static bool Block( hx::ObjectPtr< ::com::ukuleledog::games::clicker::GameState_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/clicker/GameState.hx",577,0xf057845d)
				{
					HX_STACK_LINE(577)
					int a = __this->moneyBoostCounter;		HX_STACK_VAR(a,"a");
					HX_STACK_LINE(577)
					bool aNeg = (a < (int)0);		HX_STACK_VAR(aNeg,"aNeg");
					HX_STACK_LINE(577)
					bool bNeg = ((int)0 < (int)0);		HX_STACK_VAR(bNeg,"bNeg");
					HX_STACK_LINE(577)
					return (  (((aNeg != bNeg))) ? bool(aNeg) : bool((a > (int)0)) );
				}
				return null();
			}
		};
		HX_STACK_LINE(577)
		if (((bool((bool(this->canClick) && bool((this->money >= _Function_1_1::Block(this))))) && bool(_Function_1_2::Block(this))))){
			HX_STACK_LINE(579)
			e->stopPropagation();
			struct _Function_2_1{
				inline static Float Block( hx::ObjectPtr< ::com::ukuleledog::games::clicker::GameState_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/clicker/GameState.hx",580,0xf057845d)
					{
						HX_STACK_LINE(580)
						int _int;		HX_STACK_VAR(_int,"int");
						struct _Function_3_1{
							inline static Float Block( hx::ObjectPtr< ::com::ukuleledog::games::clicker::GameState_obj > __this){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/clicker/GameState.hx",580,0xf057845d)
								{
									HX_STACK_LINE(580)
									int int1 = __this->moneyBoostPrice;		HX_STACK_VAR(int1,"int1");
									HX_STACK_LINE(580)
									return (  (((int1 < (int)0))) ? Float((4294967296.0 + int1)) : Float((int1 + 0.0)) );
								}
								return null();
							}
						};
						HX_STACK_LINE(580)
						_int = _Function_3_1::Block(__this);
						HX_STACK_LINE(580)
						return (  (((_int < (int)0))) ? Float((4294967296.0 + _int)) : Float((_int + 0.0)) );
					}
					return null();
				}
			};
			HX_STACK_LINE(580)
			this->money = (this->money - _Function_2_1::Block(this));
			struct _Function_2_2{
				inline static Float Block( hx::ObjectPtr< ::com::ukuleledog::games::clicker::GameState_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/clicker/GameState.hx",582,0xf057845d)
					{
						HX_STACK_LINE(582)
						int _int = __this->moneyBoostPrice;		HX_STACK_VAR(_int,"int");
						HX_STACK_LINE(582)
						return (  (((_int < (int)0))) ? Float((4294967296.0 + _int)) : Float((_int + 0.0)) );
					}
					return null();
				}
			};
			HX_STACK_LINE(582)
			::String _g1 = ::Std_obj::string(_Function_2_2::Block(this));		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(582)
			::String _g11 = (HX_CSTRING("- $") + _g1);		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(582)
			this->lblMoneyEarned->set_text(_g11);
			HX_STACK_LINE(583)
			::motion::easing::IEasing _g2 = ::motion::easing::Linear_obj::get_easeNone();		HX_STACK_VAR(_g2,"_g2");
			struct _Function_2_3{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/clicker/GameState.hx",583,0xf057845d)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_CSTRING("alpha") , (int)1,false);
						return __result;
					}
					return null();
				}
			};

			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_4,Array< ::Dynamic >,_g)
			Void run(){
				HX_STACK_FRAME("*","_Function_2_4",0x5201af7b,"*._Function_2_4","com/ukuleledog/games/clicker/GameState.hx",584,0xf057845d)
				{
					struct _Function_3_1{
						inline static Dynamic Block( ){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/clicker/GameState.hx",584,0xf057845d)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_CSTRING("alpha") , (int)0,false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(584)
					::motion::Actuate_obj::tween(_g->__get((int)0).StaticCast< ::com::ukuleledog::games::clicker::GameState >()->lblMoneyEarned,0.2,_Function_3_1::Block(),null(),null())->ease(::motion::easing::Linear_obj::get_easeNone())->delay((int)1);
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			HX_STACK_LINE(583)
			::motion::Actuate_obj::tween(this->lblMoneyEarned,0.2,_Function_2_3::Block(),null(),null())->ease(_g2)->onComplete( Dynamic(new _Function_2_4(_g)),null());
			HX_STACK_LINE(587)
			this->moneyBoostPrice = (this->moneyBoostPrice * (int)2);
			HX_STACK_LINE(588)
			this->moneyBoostValue = (this->moneyBoostValue * (int)2);
			HX_STACK_LINE(590)
			this->moneyBoost->set_scaleX(1.1);
			HX_STACK_LINE(591)
			this->moneyBoost->set_scaleY(1.1);
			HX_STACK_LINE(592)
			::motion::easing::IEasing _g3 = ::motion::easing::Bounce_obj::get_easeOut();		HX_STACK_VAR(_g3,"_g3");
			struct _Function_2_5{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/clicker/GameState.hx",592,0xf057845d)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_CSTRING("scaleX") , (int)1,false);
						__result->Add(HX_CSTRING("scaleY") , (int)1,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(592)
			::motion::Actuate_obj::tween(this->moneyBoost,0.5,_Function_2_5::Block(),null(),null())->ease(_g3);
			HX_STACK_LINE(594)
			(this->moneyBoostCounter)--;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GameState_obj,moneyBoostHandler,(void))

Void GameState_obj::exploderBoostHandler( ::openfl::_v2::events::MouseEvent e){
{
		HX_STACK_FRAME("com.ukuleledog.games.clicker.GameState","exploderBoostHandler",0xc6589c63,"com.ukuleledog.games.clicker.GameState.exploderBoostHandler","com/ukuleledog/games/clicker/GameState.hx",599,0xf057845d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(598)
		Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new().Add(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g,"_g");
		struct _Function_1_1{
			inline static Float Block( hx::ObjectPtr< ::com::ukuleledog::games::clicker::GameState_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/clicker/GameState.hx",600,0xf057845d)
				{
					HX_STACK_LINE(600)
					int _int;		HX_STACK_VAR(_int,"int");
					struct _Function_2_1{
						inline static Float Block( hx::ObjectPtr< ::com::ukuleledog::games::clicker::GameState_obj > __this){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/clicker/GameState.hx",600,0xf057845d)
							{
								HX_STACK_LINE(600)
								int int1 = __this->exploderBoostPrice;		HX_STACK_VAR(int1,"int1");
								HX_STACK_LINE(600)
								return (  (((int1 < (int)0))) ? Float((4294967296.0 + int1)) : Float((int1 + 0.0)) );
							}
							return null();
						}
					};
					HX_STACK_LINE(600)
					_int = _Function_2_1::Block(__this);
					HX_STACK_LINE(600)
					return (  (((_int < (int)0))) ? Float((4294967296.0 + _int)) : Float((_int + 0.0)) );
				}
				return null();
			}
		};
		struct _Function_1_2{
			inline static bool Block( hx::ObjectPtr< ::com::ukuleledog::games::clicker::GameState_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/clicker/GameState.hx",600,0xf057845d)
				{
					HX_STACK_LINE(600)
					int a = __this->exploderBoostPrice;		HX_STACK_VAR(a,"a");
					HX_STACK_LINE(600)
					bool aNeg = (a < (int)0);		HX_STACK_VAR(aNeg,"aNeg");
					HX_STACK_LINE(600)
					bool bNeg = ((int)0 < (int)0);		HX_STACK_VAR(bNeg,"bNeg");
					HX_STACK_LINE(600)
					return (  (((aNeg != bNeg))) ? bool(aNeg) : bool((a > (int)0)) );
				}
				return null();
			}
		};
		HX_STACK_LINE(600)
		if (((bool((bool(this->canClick) && bool((this->money >= _Function_1_1::Block(this))))) && bool(_Function_1_2::Block(this))))){
			HX_STACK_LINE(602)
			e->stopPropagation();
			struct _Function_2_1{
				inline static Float Block( hx::ObjectPtr< ::com::ukuleledog::games::clicker::GameState_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/clicker/GameState.hx",603,0xf057845d)
					{
						HX_STACK_LINE(603)
						int _int;		HX_STACK_VAR(_int,"int");
						struct _Function_3_1{
							inline static Float Block( hx::ObjectPtr< ::com::ukuleledog::games::clicker::GameState_obj > __this){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/clicker/GameState.hx",603,0xf057845d)
								{
									HX_STACK_LINE(603)
									int int1 = __this->exploderBoostPrice;		HX_STACK_VAR(int1,"int1");
									HX_STACK_LINE(603)
									return (  (((int1 < (int)0))) ? Float((4294967296.0 + int1)) : Float((int1 + 0.0)) );
								}
								return null();
							}
						};
						HX_STACK_LINE(603)
						_int = _Function_3_1::Block(__this);
						HX_STACK_LINE(603)
						return (  (((_int < (int)0))) ? Float((4294967296.0 + _int)) : Float((_int + 0.0)) );
					}
					return null();
				}
			};
			HX_STACK_LINE(603)
			this->money = (this->money - _Function_2_1::Block(this));
			struct _Function_2_2{
				inline static Float Block( hx::ObjectPtr< ::com::ukuleledog::games::clicker::GameState_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/clicker/GameState.hx",605,0xf057845d)
					{
						HX_STACK_LINE(605)
						int _int = __this->exploderBoostPrice;		HX_STACK_VAR(_int,"int");
						HX_STACK_LINE(605)
						return (  (((_int < (int)0))) ? Float((4294967296.0 + _int)) : Float((_int + 0.0)) );
					}
					return null();
				}
			};
			HX_STACK_LINE(605)
			::String _g1 = ::Std_obj::string(_Function_2_2::Block(this));		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(605)
			::String _g11 = (HX_CSTRING("- $") + _g1);		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(605)
			this->lblMoneyEarned->set_text(_g11);
			HX_STACK_LINE(606)
			::motion::easing::IEasing _g2 = ::motion::easing::Linear_obj::get_easeNone();		HX_STACK_VAR(_g2,"_g2");
			struct _Function_2_3{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/clicker/GameState.hx",606,0xf057845d)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_CSTRING("alpha") , (int)1,false);
						return __result;
					}
					return null();
				}
			};

			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_4,Array< ::Dynamic >,_g)
			Void run(){
				HX_STACK_FRAME("*","_Function_2_4",0x5201af7b,"*._Function_2_4","com/ukuleledog/games/clicker/GameState.hx",607,0xf057845d)
				{
					struct _Function_3_1{
						inline static Dynamic Block( ){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/clicker/GameState.hx",607,0xf057845d)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_CSTRING("alpha") , (int)0,false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(607)
					::motion::Actuate_obj::tween(_g->__get((int)0).StaticCast< ::com::ukuleledog::games::clicker::GameState >()->lblMoneyEarned,0.2,_Function_3_1::Block(),null(),null())->ease(::motion::easing::Linear_obj::get_easeNone())->delay((int)1);
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			HX_STACK_LINE(606)
			::motion::Actuate_obj::tween(this->lblMoneyEarned,0.2,_Function_2_3::Block(),null(),null())->ease(_g2)->onComplete( Dynamic(new _Function_2_4(_g)),null());
			HX_STACK_LINE(610)
			this->exploderBoostPrice = (this->exploderBoostPrice * (int)2);
			HX_STACK_LINE(611)
			this->exploderBoostValue = (this->currentPointValue * (int)2);
			HX_STACK_LINE(613)
			this->exploderBoost->set_scaleX(1.1);
			HX_STACK_LINE(614)
			this->exploderBoost->set_scaleY(1.1);
			HX_STACK_LINE(615)
			::motion::easing::IEasing _g3 = ::motion::easing::Bounce_obj::get_easeOut();		HX_STACK_VAR(_g3,"_g3");
			struct _Function_2_5{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/clicker/GameState.hx",615,0xf057845d)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_CSTRING("scaleX") , (int)1,false);
						__result->Add(HX_CSTRING("scaleY") , (int)1,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(615)
			::motion::Actuate_obj::tween(this->exploderBoost,0.5,_Function_2_5::Block(),null(),null())->ease(_g3);
			HX_STACK_LINE(617)
			Float _g4 = this->asuka->get_alpha();		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(617)
			if (((_g4 == (int)0))){
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/clicker/GameState.hx",618,0xf057845d)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("alpha") , (int)1,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(618)
				::motion::Actuate_obj::tween(this->asuka,(int)1,_Function_3_1::Block(),null(),null());
			}
			HX_STACK_LINE(620)
			(this->exploderBoostPrice)--;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GameState_obj,exploderBoostHandler,(void))

Void GameState_obj::shopOpenHandler( ::openfl::_v2::events::MouseEvent e){
{
		HX_STACK_FRAME("com.ukuleledog.games.clicker.GameState","shopOpenHandler",0xd8f2dd3f,"com.ukuleledog.games.clicker.GameState.shopOpenHandler","com/ukuleledog/games/clicker/GameState.hx",625,0xf057845d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(626)
		if (((e != null()))){
			HX_STACK_LINE(627)
			e->stopPropagation();
		}
		HX_STACK_LINE(629)
		this->canClick = false;
		struct _Function_1_1{
			inline static bool Block( hx::ObjectPtr< ::com::ukuleledog::games::clicker::GameState_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/clicker/GameState.hx",631,0xf057845d)
				{
					HX_STACK_LINE(631)
					int a = __this->level;		HX_STACK_VAR(a,"a");
					HX_STACK_LINE(631)
					bool aNeg = (a < (int)0);		HX_STACK_VAR(aNeg,"aNeg");
					HX_STACK_LINE(631)
					bool bNeg = ((int)10 < (int)0);		HX_STACK_VAR(bNeg,"bNeg");
					HX_STACK_LINE(631)
					return (  (((aNeg != bNeg))) ? bool(aNeg) : bool((a >= (int)10)) );
				}
				return null();
			}
		};
		HX_STACK_LINE(631)
		if (((bool(_Function_1_1::Block(this)) && bool(!(this->hasCostume1))))){
			HX_STACK_LINE(633)
			this->shopCostume1->set_alpha((int)1);
			HX_STACK_LINE(634)
			this->shopCostume1->buttonMode = true;
			HX_STACK_LINE(636)
			::openfl::_v2::display::DisplayObject _g = this->shopCostume1->getChildByName(HX_CSTRING("lbl"));		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(636)
			if (((_g != null()))){
				HX_STACK_LINE(637)
				::openfl::_v2::display::DisplayObject _g1 = this->shopCostume1->getChildByName(HX_CSTRING("lbl"));		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(637)
				this->shopCostume1->removeChild(_g1);
			}
			HX_STACK_LINE(639)
			this->shopCostume1->addEventListener(::openfl::_v2::events::MouseEvent_obj::MOUSE_UP,this->costumeHandler_dyn(),null(),null(),null());
		}
		struct _Function_1_2{
			inline static bool Block( hx::ObjectPtr< ::com::ukuleledog::games::clicker::GameState_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/clicker/GameState.hx",641,0xf057845d)
				{
					HX_STACK_LINE(641)
					int a = __this->level;		HX_STACK_VAR(a,"a");
					HX_STACK_LINE(641)
					bool aNeg = (a < (int)0);		HX_STACK_VAR(aNeg,"aNeg");
					HX_STACK_LINE(641)
					bool bNeg = ((int)20 < (int)0);		HX_STACK_VAR(bNeg,"bNeg");
					HX_STACK_LINE(641)
					return (  (((aNeg != bNeg))) ? bool(aNeg) : bool((a >= (int)20)) );
				}
				return null();
			}
		};
		HX_STACK_LINE(641)
		if (((bool(_Function_1_2::Block(this)) && bool(!(this->hasCostume2))))){
			HX_STACK_LINE(643)
			this->shopCostume2->set_alpha((int)1);
			HX_STACK_LINE(644)
			this->shopCostume2->buttonMode = true;
			HX_STACK_LINE(646)
			::openfl::_v2::display::DisplayObject _g2 = this->shopCostume2->getChildByName(HX_CSTRING("lbl"));		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(646)
			if (((_g2 != null()))){
				HX_STACK_LINE(647)
				::openfl::_v2::display::DisplayObject _g3 = this->shopCostume2->getChildByName(HX_CSTRING("lbl"));		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(647)
				this->shopCostume2->removeChild(_g3);
			}
			HX_STACK_LINE(649)
			this->shopCostume2->addEventListener(::openfl::_v2::events::MouseEvent_obj::MOUSE_UP,this->costumeHandler_dyn(),null(),null(),null());
		}
		struct _Function_1_3{
			inline static bool Block( hx::ObjectPtr< ::com::ukuleledog::games::clicker::GameState_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/clicker/GameState.hx",651,0xf057845d)
				{
					HX_STACK_LINE(651)
					int a = __this->level;		HX_STACK_VAR(a,"a");
					HX_STACK_LINE(651)
					bool aNeg = (a < (int)0);		HX_STACK_VAR(aNeg,"aNeg");
					HX_STACK_LINE(651)
					bool bNeg = ((int)30 < (int)0);		HX_STACK_VAR(bNeg,"bNeg");
					HX_STACK_LINE(651)
					return (  (((aNeg != bNeg))) ? bool(aNeg) : bool((a >= (int)30)) );
				}
				return null();
			}
		};
		HX_STACK_LINE(651)
		if (((bool(_Function_1_3::Block(this)) && bool(!(this->hasCostume3))))){
			HX_STACK_LINE(653)
			this->shopCostume3->set_alpha((int)1);
			HX_STACK_LINE(654)
			this->shopCostume3->buttonMode = true;
			HX_STACK_LINE(656)
			::openfl::_v2::display::DisplayObject _g4 = this->shopCostume3->getChildByName(HX_CSTRING("lbl"));		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(656)
			if (((_g4 != null()))){
				HX_STACK_LINE(657)
				::openfl::_v2::display::DisplayObject _g5 = this->shopCostume3->getChildByName(HX_CSTRING("lbl"));		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(657)
				this->shopCostume3->removeChild(_g5);
			}
			HX_STACK_LINE(659)
			this->shopCostume3->addEventListener(::openfl::_v2::events::MouseEvent_obj::MOUSE_UP,this->costumeHandler_dyn(),null(),null(),null());
		}
		struct _Function_1_4{
			inline static bool Block( hx::ObjectPtr< ::com::ukuleledog::games::clicker::GameState_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/clicker/GameState.hx",661,0xf057845d)
				{
					HX_STACK_LINE(661)
					int a = __this->level;		HX_STACK_VAR(a,"a");
					HX_STACK_LINE(661)
					bool aNeg = (a < (int)0);		HX_STACK_VAR(aNeg,"aNeg");
					HX_STACK_LINE(661)
					bool bNeg = ((int)40 < (int)0);		HX_STACK_VAR(bNeg,"bNeg");
					HX_STACK_LINE(661)
					return (  (((aNeg != bNeg))) ? bool(aNeg) : bool((a >= (int)40)) );
				}
				return null();
			}
		};
		HX_STACK_LINE(661)
		if (((bool(_Function_1_4::Block(this)) && bool(!(this->hasCostume4))))){
			HX_STACK_LINE(663)
			this->shopCostume4->set_alpha((int)1);
			HX_STACK_LINE(664)
			this->shopCostume4->buttonMode = true;
			HX_STACK_LINE(666)
			::openfl::_v2::display::DisplayObject _g6 = this->shopCostume4->getChildByName(HX_CSTRING("lbl"));		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(666)
			if (((_g6 != null()))){
				HX_STACK_LINE(667)
				::openfl::_v2::display::DisplayObject _g7 = this->shopCostume4->getChildByName(HX_CSTRING("lbl"));		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(667)
				this->shopCostume4->removeChild(_g7);
			}
			HX_STACK_LINE(669)
			this->shopCostume4->addEventListener(::openfl::_v2::events::MouseEvent_obj::MOUSE_UP,this->costumeHandler_dyn(),null(),null(),null());
		}
		struct _Function_1_5{
			inline static bool Block( hx::ObjectPtr< ::com::ukuleledog::games::clicker::GameState_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/clicker/GameState.hx",671,0xf057845d)
				{
					HX_STACK_LINE(671)
					int a = __this->level;		HX_STACK_VAR(a,"a");
					HX_STACK_LINE(671)
					bool aNeg = (a < (int)0);		HX_STACK_VAR(aNeg,"aNeg");
					HX_STACK_LINE(671)
					bool bNeg = ((int)50 < (int)0);		HX_STACK_VAR(bNeg,"bNeg");
					HX_STACK_LINE(671)
					return (  (((aNeg != bNeg))) ? bool(aNeg) : bool((a >= (int)50)) );
				}
				return null();
			}
		};
		HX_STACK_LINE(671)
		if (((bool(_Function_1_5::Block(this)) && bool(!(this->hasCostume5))))){
			HX_STACK_LINE(673)
			this->shopCostume5->set_alpha((int)1);
			HX_STACK_LINE(674)
			this->shopCostume5->buttonMode = true;
			HX_STACK_LINE(676)
			::openfl::_v2::display::DisplayObject _g8 = this->shopCostume5->getChildByName(HX_CSTRING("lbl"));		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(676)
			if (((_g8 != null()))){
				HX_STACK_LINE(677)
				::openfl::_v2::display::DisplayObject _g9 = this->shopCostume5->getChildByName(HX_CSTRING("lbl"));		HX_STACK_VAR(_g9,"_g9");
				HX_STACK_LINE(677)
				this->shopCostume5->removeChild(_g9);
			}
			HX_STACK_LINE(679)
			this->shopCostume5->addEventListener(::openfl::_v2::events::MouseEvent_obj::MOUSE_UP,this->costumeHandler_dyn(),null(),null(),null());
		}
		struct _Function_1_6{
			inline static bool Block( hx::ObjectPtr< ::com::ukuleledog::games::clicker::GameState_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/clicker/GameState.hx",681,0xf057845d)
				{
					HX_STACK_LINE(681)
					int a = __this->level;		HX_STACK_VAR(a,"a");
					HX_STACK_LINE(681)
					bool aNeg = (a < (int)0);		HX_STACK_VAR(aNeg,"aNeg");
					HX_STACK_LINE(681)
					bool bNeg = ((int)60 < (int)0);		HX_STACK_VAR(bNeg,"bNeg");
					HX_STACK_LINE(681)
					return (  (((aNeg != bNeg))) ? bool(aNeg) : bool((a >= (int)60)) );
				}
				return null();
			}
		};
		HX_STACK_LINE(681)
		if (((bool(_Function_1_6::Block(this)) && bool(!(this->hasCostume6))))){
			HX_STACK_LINE(683)
			this->shopCostume6->set_alpha((int)1);
			HX_STACK_LINE(684)
			this->shopCostume6->buttonMode = true;
			HX_STACK_LINE(686)
			::openfl::_v2::display::DisplayObject _g10 = this->shopCostume6->getChildByName(HX_CSTRING("lbl"));		HX_STACK_VAR(_g10,"_g10");
			HX_STACK_LINE(686)
			if (((_g10 != null()))){
				HX_STACK_LINE(687)
				::openfl::_v2::display::DisplayObject _g11 = this->shopCostume6->getChildByName(HX_CSTRING("lbl"));		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(687)
				this->shopCostume6->removeChild(_g11);
			}
			HX_STACK_LINE(689)
			this->shopCostume6->addEventListener(::openfl::_v2::events::MouseEvent_obj::MOUSE_UP,this->costumeHandler_dyn(),null(),null(),null());
		}
		struct _Function_1_7{
			inline static bool Block( hx::ObjectPtr< ::com::ukuleledog::games::clicker::GameState_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/clicker/GameState.hx",691,0xf057845d)
				{
					HX_STACK_LINE(691)
					int a = __this->level;		HX_STACK_VAR(a,"a");
					HX_STACK_LINE(691)
					bool aNeg = (a < (int)0);		HX_STACK_VAR(aNeg,"aNeg");
					HX_STACK_LINE(691)
					bool bNeg = ((int)70 < (int)0);		HX_STACK_VAR(bNeg,"bNeg");
					HX_STACK_LINE(691)
					return (  (((aNeg != bNeg))) ? bool(aNeg) : bool((a >= (int)70)) );
				}
				return null();
			}
		};
		HX_STACK_LINE(691)
		if (((bool(_Function_1_7::Block(this)) && bool(!(this->hasCostume7))))){
			HX_STACK_LINE(693)
			this->shopCostume7->set_alpha((int)1);
			HX_STACK_LINE(694)
			this->shopCostume7->buttonMode = true;
			HX_STACK_LINE(696)
			::openfl::_v2::display::DisplayObject _g12 = this->shopCostume7->getChildByName(HX_CSTRING("lbl"));		HX_STACK_VAR(_g12,"_g12");
			HX_STACK_LINE(696)
			if (((_g12 != null()))){
				HX_STACK_LINE(697)
				::openfl::_v2::display::DisplayObject _g13 = this->shopCostume7->getChildByName(HX_CSTRING("lbl"));		HX_STACK_VAR(_g13,"_g13");
				HX_STACK_LINE(697)
				this->shopCostume7->removeChild(_g13);
			}
			HX_STACK_LINE(699)
			this->shopCostume7->addEventListener(::openfl::_v2::events::MouseEvent_obj::MOUSE_UP,this->costumeHandler_dyn(),null(),null(),null());
		}
		struct _Function_1_8{
			inline static bool Block( hx::ObjectPtr< ::com::ukuleledog::games::clicker::GameState_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/clicker/GameState.hx",701,0xf057845d)
				{
					HX_STACK_LINE(701)
					int a = __this->level;		HX_STACK_VAR(a,"a");
					HX_STACK_LINE(701)
					bool aNeg = (a < (int)0);		HX_STACK_VAR(aNeg,"aNeg");
					HX_STACK_LINE(701)
					bool bNeg = ((int)80 < (int)0);		HX_STACK_VAR(bNeg,"bNeg");
					HX_STACK_LINE(701)
					return (  (((aNeg != bNeg))) ? bool(aNeg) : bool((a >= (int)80)) );
				}
				return null();
			}
		};
		HX_STACK_LINE(701)
		if (((bool(_Function_1_8::Block(this)) && bool(!(this->hasCostume8))))){
			HX_STACK_LINE(703)
			this->shopCostume8->set_alpha((int)1);
			HX_STACK_LINE(704)
			this->shopCostume8->buttonMode = true;
			HX_STACK_LINE(706)
			::openfl::_v2::display::DisplayObject _g14 = this->shopCostume8->getChildByName(HX_CSTRING("lbl"));		HX_STACK_VAR(_g14,"_g14");
			HX_STACK_LINE(706)
			if (((_g14 != null()))){
				HX_STACK_LINE(707)
				::openfl::_v2::display::DisplayObject _g15 = this->shopCostume8->getChildByName(HX_CSTRING("lbl"));		HX_STACK_VAR(_g15,"_g15");
				HX_STACK_LINE(707)
				this->shopCostume8->removeChild(_g15);
			}
			HX_STACK_LINE(709)
			this->shopCostume8->addEventListener(::openfl::_v2::events::MouseEvent_obj::MOUSE_UP,this->costumeHandler_dyn(),null(),null(),null());
		}
		HX_STACK_LINE(712)
		this->addChild(this->shopWindow);
		HX_STACK_LINE(713)
		::motion::easing::IEasing _g16 = ::motion::easing::Bounce_obj::get_easeOut();		HX_STACK_VAR(_g16,"_g16");
		struct _Function_1_9{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/clicker/GameState.hx",713,0xf057845d)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("y") , (int)50,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(713)
		::motion::Actuate_obj::tween(this->shopWindow,0.5,_Function_1_9::Block(),null(),null())->ease(_g16);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GameState_obj,shopOpenHandler,(void))

Void GameState_obj::shopCloseHandler( ::openfl::_v2::events::MouseEvent e){
{
		HX_STACK_FRAME("com.ukuleledog.games.clicker.GameState","shopCloseHandler",0x79f3a5f3,"com.ukuleledog.games.clicker.GameState.shopCloseHandler","com/ukuleledog/games/clicker/GameState.hx",718,0xf057845d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(717)
		Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new().Add(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(719)
		if (((e != null()))){
			HX_STACK_LINE(720)
			e->stopPropagation();
		}
		HX_STACK_LINE(722)
		::motion::easing::IEasing _g1 = ::motion::easing::Linear_obj::get_easeNone();		HX_STACK_VAR(_g1,"_g1");
		struct _Function_1_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/clicker/GameState.hx",722,0xf057845d)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("y") , (int)500,false);
					return __result;
				}
				return null();
			}
		};

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_2,Array< ::Dynamic >,_g)
		Void run(){
			HX_STACK_FRAME("*","_Function_1_2",0x5200ed38,"*._Function_1_2","com/ukuleledog/games/clicker/GameState.hx",722,0xf057845d)
			{
				HX_STACK_LINE(723)
				_g->__get((int)0).StaticCast< ::com::ukuleledog::games::clicker::GameState >()->canClick = true;
				HX_STACK_LINE(724)
				_g->__get((int)0).StaticCast< ::com::ukuleledog::games::clicker::GameState >()->removeChild(_g->__get((int)0).StaticCast< ::com::ukuleledog::games::clicker::GameState >()->shopWindow);
			}
			return null();
		}
		HX_END_LOCAL_FUNC0((void))

		HX_STACK_LINE(722)
		::motion::Actuate_obj::tween(this->shopWindow,0.5,_Function_1_1::Block(),null(),null())->ease(_g1)->onComplete( Dynamic(new _Function_1_2(_g)),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GameState_obj,shopCloseHandler,(void))

Void GameState_obj::noCostumeHandler( ::openfl::_v2::events::MouseEvent e){
{
		HX_STACK_FRAME("com.ukuleledog.games.clicker.GameState","noCostumeHandler",0xd847a5d6,"com.ukuleledog.games.clicker.GameState.noCostumeHandler","com/ukuleledog/games/clicker/GameState.hx",730,0xf057845d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(731)
		this->costume = (int)0;
		HX_STACK_LINE(732)
		this->drawMatt(false);
		HX_STACK_LINE(733)
		this->shopCloseHandler(e);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GameState_obj,noCostumeHandler,(void))

::openfl::_v2::display::Sprite GameState_obj::createShopButton( ::String name,int position,hx::Null< int >  __o_level){
int level = __o_level.Default(0);
	HX_STACK_FRAME("com.ukuleledog.games.clicker.GameState","createShopButton",0x876d8a8f,"com.ukuleledog.games.clicker.GameState.createShopButton","com/ukuleledog/games/clicker/GameState.hx",737,0xf057845d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_ARG(position,"position")
	HX_STACK_ARG(level,"level")
{
		HX_STACK_LINE(738)
		::openfl::_v2::display::Sprite button = ::openfl::_v2::display::Sprite_obj::__new();		HX_STACK_VAR(button,"button");
		struct _Function_1_1{
			inline static Float Block( int &position){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/clicker/GameState.hx",739,0xf057845d)
				{
					HX_STACK_LINE(739)
					int _int = position;		HX_STACK_VAR(_int,"int");
					HX_STACK_LINE(739)
					return (  (((_int < (int)0))) ? Float((4294967296.0 + _int)) : Float((_int + 0.0)) );
				}
				return null();
			}
		};
		HX_STACK_LINE(739)
		::String _g = ::Std_obj::string(_Function_1_1::Block(position));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(739)
		::String _g1 = (HX_CSTRING("shop-") + _g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(739)
		button->set_name(_g1);
		HX_STACK_LINE(740)
		button->buttonMode = false;
		HX_STACK_LINE(742)
		::openfl::_v2::display::BitmapData _g2 = ::openfl::_v2::Assets_obj::getBitmapData(((HX_CSTRING("img/shop-") + name) + HX_CSTRING(".png")),null());		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(742)
		button->get_graphics()->beginBitmapFill(_g2,null(),null(),null());
		HX_STACK_LINE(743)
		button->get_graphics()->drawRect((int)0,(int)0,(int)64,(int)64);
		HX_STACK_LINE(744)
		button->get_graphics()->endFill();
		struct _Function_1_2{
			inline static Float Block( int &level){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/clicker/GameState.hx",746,0xf057845d)
				{
					HX_STACK_LINE(746)
					int _int = level;		HX_STACK_VAR(_int,"int");
					HX_STACK_LINE(746)
					return (  (((_int < (int)0))) ? Float((4294967296.0 + _int)) : Float((_int + 0.0)) );
				}
				return null();
			}
		};
		HX_STACK_LINE(746)
		if (((_Function_1_2::Block(level) == (int)0))){
			HX_STACK_LINE(747)
			level = (position * (int)10);
		}
		struct _Function_1_3{
			inline static Float Block( int &position){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/clicker/GameState.hx",749,0xf057845d)
				{
					HX_STACK_LINE(749)
					int _int = position;		HX_STACK_VAR(_int,"int");
					HX_STACK_LINE(749)
					return (  (((_int < (int)0))) ? Float((4294967296.0 + _int)) : Float((_int + 0.0)) );
				}
				return null();
			}
		};
		HX_STACK_LINE(749)
		if (((_Function_1_3::Block(position) != (int)0))){
			struct _Function_2_1{
				inline static Float Block( int &position){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/clicker/GameState.hx",751,0xf057845d)
					{
						HX_STACK_LINE(751)
						int _int = (position * (int)70);		HX_STACK_VAR(_int,"int");
						HX_STACK_LINE(751)
						return (  (((_int < (int)0))) ? Float((4294967296.0 + _int)) : Float((_int + 0.0)) );
					}
					return null();
				}
			};
			HX_STACK_LINE(751)
			button->set_x(_Function_2_1::Block(position));
			HX_STACK_LINE(752)
			button->set_y((int)100);
			HX_STACK_LINE(753)
			button->set_alpha(0.6);
			HX_STACK_LINE(755)
			::openfl::_v2::text::TextField levelField = ::openfl::_v2::text::TextField_obj::__new();		HX_STACK_VAR(levelField,"levelField");
			struct _Function_2_2{
				inline static Float Block( int &level){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/clicker/GameState.hx",756,0xf057845d)
					{
						HX_STACK_LINE(756)
						int _int = level;		HX_STACK_VAR(_int,"int");
						HX_STACK_LINE(756)
						return (  (((_int < (int)0))) ? Float((4294967296.0 + _int)) : Float((_int + 0.0)) );
					}
					return null();
				}
			};
			HX_STACK_LINE(756)
			::String _g3 = ::Std_obj::string(_Function_2_2::Block(level));		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(756)
			::String _g4 = (HX_CSTRING("( Niveau ") + _g3);		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(756)
			::String _g5 = (_g4 + HX_CSTRING(" )"));		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(756)
			levelField->set_text(_g5);
			HX_STACK_LINE(757)
			levelField->set_defaultTextFormat(this->lblFormat);
			HX_STACK_LINE(758)
			levelField->set_y((int)65);
			HX_STACK_LINE(759)
			levelField->set_selectable(false);
			HX_STACK_LINE(760)
			levelField->set_name(HX_CSTRING("lbl"));
			HX_STACK_LINE(761)
			button->addChild(levelField);
		}
		else{
			HX_STACK_LINE(765)
			button->buttonMode = true;
			HX_STACK_LINE(766)
			button->set_x(318.);
			HX_STACK_LINE(767)
			button->set_y((int)220);
		}
		HX_STACK_LINE(770)
		this->shopWindow->addChild(button);
		HX_STACK_LINE(772)
		return button;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(GameState_obj,createShopButton,return )

Void GameState_obj::costumeHandler( ::openfl::_v2::events::MouseEvent e){
{
		HX_STACK_FRAME("com.ukuleledog.games.clicker.GameState","costumeHandler",0xf7d480f5,"com.ukuleledog.games.clicker.GameState.costumeHandler","com/ukuleledog/games/clicker/GameState.hx",776,0xf057845d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(777)
		e->stopPropagation();
		struct _Function_1_1{
			inline static Float Block( hx::ObjectPtr< ::com::ukuleledog::games::clicker::GameState_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/clicker/GameState.hx",779,0xf057845d)
				{
					HX_STACK_LINE(779)
					int _int = __this->costume;		HX_STACK_VAR(_int,"int");
					HX_STACK_LINE(779)
					return (  (((_int < (int)0))) ? Float((4294967296.0 + _int)) : Float((_int + 0.0)) );
				}
				return null();
			}
		};
		HX_STACK_LINE(779)
		::String _g = ::Std_obj::string(_Function_1_1::Block(this));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(779)
		::String _g1 = (HX_CSTRING("shop-") + _g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(779)
		this->shopWindow->getChildByName(_g1)->set_filters(null());
		HX_STACK_LINE(781)
		{
			HX_STACK_LINE(781)
			Dynamic _g2 = e->get_target()->__Field(HX_CSTRING("name"),true);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(781)
			Dynamic _switch_1 = (_g2);
			if (  ( _switch_1==HX_CSTRING("shop-1"))){
				HX_STACK_LINE(784)
				this->hasCostume1 = true;
				HX_STACK_LINE(785)
				this->costume = (int)1;
			}
			else if (  ( _switch_1==HX_CSTRING("shop-2"))){
				HX_STACK_LINE(787)
				this->hasCostume2 = true;
				HX_STACK_LINE(788)
				this->costume = (int)2;
			}
			else if (  ( _switch_1==HX_CSTRING("shop-3"))){
				HX_STACK_LINE(790)
				this->hasCostume3 = true;
				HX_STACK_LINE(791)
				this->costume = (int)3;
			}
			else if (  ( _switch_1==HX_CSTRING("shop-4"))){
				HX_STACK_LINE(793)
				this->hasCostume4 = true;
				HX_STACK_LINE(794)
				this->costume = (int)4;
			}
			else if (  ( _switch_1==HX_CSTRING("shop-5"))){
				HX_STACK_LINE(796)
				this->hasCostume5 = true;
				HX_STACK_LINE(797)
				this->costume = (int)5;
			}
			else if (  ( _switch_1==HX_CSTRING("shop-6"))){
				HX_STACK_LINE(799)
				this->hasCostume6 = true;
				HX_STACK_LINE(800)
				this->costume = (int)6;
			}
			else if (  ( _switch_1==HX_CSTRING("shop-7"))){
				HX_STACK_LINE(802)
				this->hasCostume7 = true;
				HX_STACK_LINE(803)
				this->costume = (int)7;
			}
			else if (  ( _switch_1==HX_CSTRING("shop-8"))){
				HX_STACK_LINE(805)
				this->hasCostume8 = true;
				HX_STACK_LINE(806)
				this->costume = (int)8;
			}
		}
		struct _Function_1_2{
			inline static Float Block( hx::ObjectPtr< ::com::ukuleledog::games::clicker::GameState_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/clicker/GameState.hx",809,0xf057845d)
				{
					HX_STACK_LINE(809)
					int _int = __this->costume;		HX_STACK_VAR(_int,"int");
					HX_STACK_LINE(809)
					return (  (((_int < (int)0))) ? Float((4294967296.0 + _int)) : Float((_int + 0.0)) );
				}
				return null();
			}
		};
		HX_STACK_LINE(809)
		::String _g2 = ::Std_obj::string(_Function_1_2::Block(this));		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(809)
		::String _g3 = (HX_CSTRING("shop-") + _g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(809)
		this->shopWindow->getChildByName(_g3)->set_filters(this->shopFilters);
		HX_STACK_LINE(811)
		this->drawMatt(false);
		HX_STACK_LINE(812)
		this->shopCloseHandler(e);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GameState_obj,costumeHandler,(void))

Void GameState_obj::superSpecialDisplay( ){
{
		HX_STACK_FRAME("com.ukuleledog.games.clicker.GameState","superSpecialDisplay",0x9695f7d9,"com.ukuleledog.games.clicker.GameState.superSpecialDisplay","com/ukuleledog/games/clicker/GameState.hx",816,0xf057845d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(817)
		this->superQteTimer->reset();
		HX_STACK_LINE(818)
		Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(818)
		this->specialSuperElements = _g;
		HX_STACK_LINE(819)
		this->addChild(this->specialSuperContainer);
		HX_STACK_LINE(821)
		int i = (int)1;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(823)
		while((true)){
			struct _Function_2_1{
				inline static bool Block( int &i,hx::ObjectPtr< ::com::ukuleledog::games::clicker::GameState_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/clicker/GameState.hx",823,0xf057845d)
					{
						HX_STACK_LINE(823)
						int b = __this->specialSuperCounter;		HX_STACK_VAR(b,"b");
						struct _Function_3_1{
							inline static bool Block( int &i,int &b){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/clicker/GameState.hx",823,0xf057845d)
								{
									HX_STACK_LINE(823)
									bool aNeg = (b < (int)0);		HX_STACK_VAR(aNeg,"aNeg");
									HX_STACK_LINE(823)
									bool bNeg = (i < (int)0);		HX_STACK_VAR(bNeg,"bNeg");
									HX_STACK_LINE(823)
									return (  (((aNeg != bNeg))) ? bool(aNeg) : bool((b >= i)) );
								}
								return null();
							}
						};
						HX_STACK_LINE(823)
						return _Function_3_1::Block(i,b);
					}
					return null();
				}
			};
			HX_STACK_LINE(823)
			if ((!(_Function_2_1::Block(i,this)))){
				HX_STACK_LINE(823)
				break;
			}
			HX_STACK_LINE(825)
			::openfl::_v2::display::Sprite superQteElement = ::openfl::_v2::display::Sprite_obj::__new();		HX_STACK_VAR(superQteElement,"superQteElement");
			HX_STACK_LINE(826)
			superQteElement->buttonMode = true;
			HX_STACK_LINE(827)
			superQteElement->get_graphics()->clear();
			HX_STACK_LINE(828)
			superQteElement->get_graphics()->lineStyle((int)5,(int)16711680,null(),null(),null(),null(),null(),null());
			HX_STACK_LINE(829)
			superQteElement->get_graphics()->beginFill((int)16711680,0.5);
			HX_STACK_LINE(830)
			superQteElement->get_graphics()->drawCircle((int)30,(int)30,(int)30);
			HX_STACK_LINE(831)
			Float _g1 = ::Math_obj::random();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(831)
			Float _g2 = (_g1 * (int)601);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(831)
			int _g3 = ::Math_obj::floor(_g2);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(831)
			int _g4 = (_g3 + (int)100);		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(831)
			superQteElement->set_x(_g4);
			HX_STACK_LINE(832)
			Float _g5 = ::Math_obj::random();		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(832)
			Float _g6 = (_g5 * (int)301);		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(832)
			int _g7 = ::Math_obj::floor(_g6);		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(832)
			int _g8 = (_g7 + (int)80);		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(832)
			superQteElement->set_y(_g8);
			HX_STACK_LINE(833)
			this->specialSuperContainer->addChild(superQteElement);
			HX_STACK_LINE(835)
			::openfl::_v2::text::TextField superQteText = ::openfl::_v2::text::TextField_obj::__new();		HX_STACK_VAR(superQteText,"superQteText");
			HX_STACK_LINE(836)
			superQteText->set_selectable(false);
			HX_STACK_LINE(837)
			::openfl::_v2::text::TextFormat _g9 = ::openfl::_v2::text::TextFormat_obj::__new(HX_CSTRING("arial"),(int)20,(int)16711680,true,null(),null(),null(),null(),::openfl::_v2::text::TextFormatAlign_obj::CENTER,null(),null(),null(),null());		HX_STACK_VAR(_g9,"_g9");
			HX_STACK_LINE(837)
			superQteText->set_defaultTextFormat(_g9);
			struct _Function_2_2{
				inline static Float Block( int &i){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/clicker/GameState.hx",838,0xf057845d)
					{
						HX_STACK_LINE(838)
						int _int = i;		HX_STACK_VAR(_int,"int");
						HX_STACK_LINE(838)
						return (  (((_int < (int)0))) ? Float((4294967296.0 + _int)) : Float((_int + 0.0)) );
					}
					return null();
				}
			};
			HX_STACK_LINE(838)
			::String _g10 = ::Std_obj::string(_Function_2_2::Block(i));		HX_STACK_VAR(_g10,"_g10");
			HX_STACK_LINE(838)
			superQteText->set_text(_g10);
			HX_STACK_LINE(839)
			Float _g11 = superQteElement->get_width();		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(839)
			Float _g12 = (_g11 - (int)5);		HX_STACK_VAR(_g12,"_g12");
			HX_STACK_LINE(839)
			superQteText->set_width(_g12);
			HX_STACK_LINE(840)
			Float _g13 = superQteText->get_textHeight();		HX_STACK_VAR(_g13,"_g13");
			HX_STACK_LINE(840)
			Float _g14 = (_g13 + (int)2);		HX_STACK_VAR(_g14,"_g14");
			HX_STACK_LINE(840)
			superQteText->set_height(_g14);
			HX_STACK_LINE(841)
			Float _g15 = superQteElement->get_height();		HX_STACK_VAR(_g15,"_g15");
			HX_STACK_LINE(841)
			Float _g16 = (Float(_g15) / Float((int)2));		HX_STACK_VAR(_g16,"_g16");
			HX_STACK_LINE(841)
			Float _g17 = superQteText->get_height();		HX_STACK_VAR(_g17,"_g17");
			HX_STACK_LINE(841)
			Float _g18 = (Float(_g17) / Float(1.5));		HX_STACK_VAR(_g18,"_g18");
			HX_STACK_LINE(841)
			Float _g19 = (_g16 - _g18);		HX_STACK_VAR(_g19,"_g19");
			HX_STACK_LINE(841)
			superQteText->set_y(_g19);
			HX_STACK_LINE(842)
			superQteText->set_mouseEnabled(false);
			HX_STACK_LINE(843)
			superQteElement->addChild(superQteText);
			HX_STACK_LINE(845)
			this->specialSuperElements->push(superQteElement);
			struct _Function_2_3{
				inline static Float Block( int &i){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/clicker/GameState.hx",847,0xf057845d)
					{
						HX_STACK_LINE(847)
						int _int = i;		HX_STACK_VAR(_int,"int");
						HX_STACK_LINE(847)
						return (  (((_int < (int)0))) ? Float((4294967296.0 + _int)) : Float((_int + 0.0)) );
					}
					return null();
				}
			};
			HX_STACK_LINE(847)
			if (((_Function_2_3::Block(i) != (int)1))){
				HX_STACK_LINE(849)
				superQteElement->set_visible(false);
			}
			else{
				HX_STACK_LINE(853)
				superQteElement->addEventListener(::openfl::_v2::events::MouseEvent_obj::MOUSE_DOWN,this->superQteClick_dyn(),null(),null(),null());
			}
			HX_STACK_LINE(856)
			(i)++;
		}
		HX_STACK_LINE(859)
		this->superQteCurrent = (int)1;
		HX_STACK_LINE(860)
		this->superQteTimer->start();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(GameState_obj,superSpecialDisplay,(void))

Void GameState_obj::superQteClick( ::openfl::_v2::events::MouseEvent e){
{
		HX_STACK_FRAME("com.ukuleledog.games.clicker.GameState","superQteClick",0x15df0796,"com.ukuleledog.games.clicker.GameState.superQteClick","com/ukuleledog/games/clicker/GameState.hx",865,0xf057845d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(866)
		::openfl::_v2::display::Sprite currentQteElement = this->specialSuperElements->shift().StaticCast< ::openfl::_v2::display::Sprite >();		HX_STACK_VAR(currentQteElement,"currentQteElement");
		HX_STACK_LINE(867)
		currentQteElement->removeEventListener(::openfl::_v2::events::MouseEvent_obj::MOUSE_DOWN,this->superQteClick_dyn(),null());
		HX_STACK_LINE(868)
		this->specialSuperContainer->removeChild(currentQteElement);
		HX_STACK_LINE(869)
		this->superQteTimer->stop();
		HX_STACK_LINE(870)
		this->superQteTimer->reset();
		HX_STACK_LINE(872)
		currentQteElement = null();
		HX_STACK_LINE(873)
		::openfl::_v2::display::Sprite _g = this->specialSuperElements->shift().StaticCast< ::openfl::_v2::display::Sprite >();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(873)
		currentQteElement = _g;
		HX_STACK_LINE(875)
		if (((currentQteElement != null()))){
			HX_STACK_LINE(877)
			currentQteElement->set_visible(true);
			HX_STACK_LINE(878)
			currentQteElement->addEventListener(::openfl::_v2::events::MouseEvent_obj::MOUSE_DOWN,this->superQteClick_dyn(),null(),null(),null());
			HX_STACK_LINE(879)
			(this->superQteCurrent)++;
			HX_STACK_LINE(880)
			this->specialSuperElements->unshift(currentQteElement);
		}
		else{
			HX_STACK_LINE(884)
			(this->specialSuperCounter)++;
			struct _Function_2_1{
				inline static bool Block( hx::ObjectPtr< ::com::ukuleledog::games::clicker::GameState_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/clicker/GameState.hx",886,0xf057845d)
					{
						HX_STACK_LINE(886)
						int a = __this->moneyBoostCounter;		HX_STACK_VAR(a,"a");
						HX_STACK_LINE(886)
						bool aNeg = (a < (int)0);		HX_STACK_VAR(aNeg,"aNeg");
						HX_STACK_LINE(886)
						bool bNeg = ((int)0 < (int)0);		HX_STACK_VAR(bNeg,"bNeg");
						HX_STACK_LINE(886)
						return (  (((aNeg != bNeg))) ? bool(aNeg) : bool((a > (int)0)) );
					}
					return null();
				}
			};
			HX_STACK_LINE(886)
			if ((_Function_2_1::Block(this))){
				HX_STACK_LINE(887)
				this->moneyBoostValue = (this->moneyBoostValue * (int)2);
			}
			struct _Function_2_2{
				inline static bool Block( hx::ObjectPtr< ::com::ukuleledog::games::clicker::GameState_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/clicker/GameState.hx",889,0xf057845d)
					{
						HX_STACK_LINE(889)
						int a = __this->exploderBoostCounter;		HX_STACK_VAR(a,"a");
						HX_STACK_LINE(889)
						bool aNeg = (a < (int)0);		HX_STACK_VAR(aNeg,"aNeg");
						HX_STACK_LINE(889)
						bool bNeg = ((int)0 < (int)0);		HX_STACK_VAR(bNeg,"bNeg");
						HX_STACK_LINE(889)
						return (  (((aNeg != bNeg))) ? bool(aNeg) : bool((a > (int)0)) );
					}
					return null();
				}
			};
			HX_STACK_LINE(889)
			if ((_Function_2_2::Block(this))){
				HX_STACK_LINE(890)
				this->exploderBoostValue = (this->exploderBoostValue * (int)2);
			}
			struct _Function_2_3{
				inline static bool Block( hx::ObjectPtr< ::com::ukuleledog::games::clicker::GameState_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/clicker/GameState.hx",892,0xf057845d)
					{
						HX_STACK_LINE(892)
						int a = __this->clickBoostCounter;		HX_STACK_VAR(a,"a");
						HX_STACK_LINE(892)
						bool aNeg = (a < (int)0);		HX_STACK_VAR(aNeg,"aNeg");
						HX_STACK_LINE(892)
						bool bNeg = ((int)0 < (int)0);		HX_STACK_VAR(bNeg,"bNeg");
						HX_STACK_LINE(892)
						return (  (((aNeg != bNeg))) ? bool(aNeg) : bool((a > (int)0)) );
					}
					return null();
				}
			};
			HX_STACK_LINE(892)
			if ((_Function_2_3::Block(this))){
				HX_STACK_LINE(893)
				this->currentPointValue = (this->currentPointValue * (int)2);
			}
			HX_STACK_LINE(895)
			this->removeChild(this->specialSuperContainer);
			HX_STACK_LINE(896)
			this->canClick = true;
			HX_STACK_LINE(897)
			this->specialCooldownTimer->start();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GameState_obj,superQteClick,(void))

Void GameState_obj::superQteEnd( ::openfl::events::TimerEvent e){
{
		HX_STACK_FRAME("com.ukuleledog.games.clicker.GameState","superQteEnd",0x1e1c7fa9,"com.ukuleledog.games.clicker.GameState.superQteEnd","com/ukuleledog/games/clicker/GameState.hx",903,0xf057845d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(904)
		this->superQteTimer->stop();
		HX_STACK_LINE(905)
		this->removeChild(this->specialSuperContainer);
		HX_STACK_LINE(906)
		this->canClick = true;
		HX_STACK_LINE(907)
		this->specialCooldownTimer->start();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GameState_obj,superQteEnd,(void))

Void GameState_obj::showIntro( ){
{
		HX_STACK_FRAME("com.ukuleledog.games.clicker.GameState","showIntro",0x80adfbe4,"com.ukuleledog.games.clicker.GameState.showIntro","com/ukuleledog/games/clicker/GameState.hx",911,0xf057845d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(912)
		::openfl::_v2::display::Sprite _g = ::openfl::_v2::display::Sprite_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(912)
		this->introBackground = _g;
		HX_STACK_LINE(913)
		::openfl::_v2::display::BitmapData _g1 = ::openfl::_v2::Assets_obj::getBitmapData(HX_CSTRING("img/intro.png"),null());		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(913)
		this->introBackground->get_graphics()->beginBitmapFill(_g1,null(),null(),null());
		HX_STACK_LINE(914)
		this->introBackground->get_graphics()->drawRect((int)0,(int)0,(int)800,(int)480);
		HX_STACK_LINE(915)
		this->introBackground->get_graphics()->endFill();
		HX_STACK_LINE(916)
		this->introBackground->buttonMode = true;
		HX_STACK_LINE(918)
		::openfl::_v2::text::TextField introText = ::openfl::_v2::text::TextField_obj::__new();		HX_STACK_VAR(introText,"introText");
		HX_STACK_LINE(919)
		introText->set_selectable(false);
		HX_STACK_LINE(920)
		introText->set_mouseEnabled(false);
		HX_STACK_LINE(921)
		introText->set_x((int)300);
		HX_STACK_LINE(922)
		introText->set_y((int)50);
		HX_STACK_LINE(923)
		introText->set_width((int)450);
		HX_STACK_LINE(924)
		introText->set_height((int)380);
		HX_STACK_LINE(925)
		introText->set_defaultTextFormat(this->lblFormat);
		HX_STACK_LINE(926)
		introText->set_multiline(true);
		HX_STACK_LINE(927)
		introText->set_text(HX_CSTRING("Bienvenue au premier jeu officiel de Je Suis Gros !\n\nAidez moi \xc3""\xa0"" perdre du poids en me cliquant dessus pour me faire danser !\n - Plus vous cliquez, plus vous gagnez des niveaux\n - Plus vous gagnez de niveaux, plus vous gagnez d'argent\n - Achetez des bonus pour marquer plus de points en cliquant,\n    augmenter les gains ou avoir une assistante\n - D\xc3""\xa9""bloquez des costumes tous les 10 niveaux\n - Cliquez sur les l\xc3""\xa9""gumes pour avoir des bonus,\n     voir des super bonus pour les plus rapides !\n\nBon jeu !"));
		HX_STACK_LINE(928)
		this->introBackground->addChild(introText);
		HX_STACK_LINE(930)
		this->introBackground->addEventListener(::openfl::_v2::events::MouseEvent_obj::MOUSE_UP,this->hideIntro_dyn(),null(),null(),null());
		HX_STACK_LINE(931)
		this->addChild(this->introBackground);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(GameState_obj,showIntro,(void))

Void GameState_obj::hideIntro( ::openfl::_v2::events::MouseEvent e){
{
		HX_STACK_FRAME("com.ukuleledog.games.clicker.GameState","hideIntro",0xada851ff,"com.ukuleledog.games.clicker.GameState.hideIntro","com/ukuleledog/games/clicker/GameState.hx",935,0xf057845d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(934)
		Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new().Add(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(936)
		e->stopPropagation();
		HX_STACK_LINE(937)
		this->introBackground->removeEventListener(::openfl::_v2::events::MouseEvent_obj::MOUSE_UP,this->hideIntro_dyn(),null());
		HX_STACK_LINE(939)
		::motion::easing::IEasing _g1 = ::motion::easing::Bounce_obj::get_easeOut();		HX_STACK_VAR(_g1,"_g1");
		struct _Function_1_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/clicker/GameState.hx",939,0xf057845d)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("y") , (int)-480,false);
					return __result;
				}
				return null();
			}
		};

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_2,Array< ::Dynamic >,_g)
		Void run(){
			HX_STACK_FRAME("*","_Function_1_2",0x5200ed38,"*._Function_1_2","com/ukuleledog/games/clicker/GameState.hx",939,0xf057845d)
			{
				HX_STACK_LINE(940)
				_g->__get((int)0).StaticCast< ::com::ukuleledog::games::clicker::GameState >()->removeChild(_g->__get((int)0).StaticCast< ::com::ukuleledog::games::clicker::GameState >()->introBackground);
				HX_STACK_LINE(941)
				_g->__get((int)0).StaticCast< ::com::ukuleledog::games::clicker::GameState >()->introBackground = null();
				HX_STACK_LINE(942)
				_g->__get((int)0).StaticCast< ::com::ukuleledog::games::clicker::GameState >()->canClick = true;
			}
			return null();
		}
		HX_END_LOCAL_FUNC0((void))

		HX_STACK_LINE(939)
		::motion::Actuate_obj::tween(this->introBackground,0.5,_Function_1_1::Block(),null(),null())->ease(_g1)->onComplete( Dynamic(new _Function_1_2(_g)),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GameState_obj,hideIntro,(void))


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
	HX_MARK_MEMBER_NAME(specialSuperContainer,"specialSuperContainer");
	HX_MARK_MEMBER_NAME(specialCooldownTimer,"specialCooldownTimer");
	HX_MARK_MEMBER_NAME(specialSuperTimer,"specialSuperTimer");
	HX_MARK_MEMBER_NAME(specialTimer,"specialTimer");
	HX_MARK_MEMBER_NAME(specialSuper,"specialSuper");
	HX_MARK_MEMBER_NAME(specialSuperCounter,"specialSuperCounter");
	HX_MARK_MEMBER_NAME(superQteCurrent,"superQteCurrent");
	HX_MARK_MEMBER_NAME(specialSuperElements,"specialSuperElements");
	HX_MARK_MEMBER_NAME(superQteTimer,"superQteTimer");
	HX_MARK_MEMBER_NAME(clickBoostCounter,"clickBoostCounter");
	HX_MARK_MEMBER_NAME(moneyBoostCounter,"moneyBoostCounter");
	HX_MARK_MEMBER_NAME(exploderBoostCounter,"exploderBoostCounter");
	HX_MARK_MEMBER_NAME(introBackground,"introBackground");
	HX_MARK_MEMBER_NAME(shopFilters,"shopFilters");
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
	HX_VISIT_MEMBER_NAME(specialSuperContainer,"specialSuperContainer");
	HX_VISIT_MEMBER_NAME(specialCooldownTimer,"specialCooldownTimer");
	HX_VISIT_MEMBER_NAME(specialSuperTimer,"specialSuperTimer");
	HX_VISIT_MEMBER_NAME(specialTimer,"specialTimer");
	HX_VISIT_MEMBER_NAME(specialSuper,"specialSuper");
	HX_VISIT_MEMBER_NAME(specialSuperCounter,"specialSuperCounter");
	HX_VISIT_MEMBER_NAME(superQteCurrent,"superQteCurrent");
	HX_VISIT_MEMBER_NAME(specialSuperElements,"specialSuperElements");
	HX_VISIT_MEMBER_NAME(superQteTimer,"superQteTimer");
	HX_VISIT_MEMBER_NAME(clickBoostCounter,"clickBoostCounter");
	HX_VISIT_MEMBER_NAME(moneyBoostCounter,"moneyBoostCounter");
	HX_VISIT_MEMBER_NAME(exploderBoostCounter,"exploderBoostCounter");
	HX_VISIT_MEMBER_NAME(introBackground,"introBackground");
	HX_VISIT_MEMBER_NAME(shopFilters,"shopFilters");
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
		if (HX_FIELD_EQ(inName,"showIntro") ) { return showIntro_dyn(); }
		if (HX_FIELD_EQ(inName,"hideIntro") ) { return hideIntro_dyn(); }
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
		if (HX_FIELD_EQ(inName,"shopFilters") ) { return shopFilters; }
		if (HX_FIELD_EQ(inName,"pointHandle") ) { return pointHandle_dyn(); }
		if (HX_FIELD_EQ(inName,"showSpecial") ) { return showSpecial_dyn(); }
		if (HX_FIELD_EQ(inName,"superQteEnd") ) { return superQteEnd_dyn(); }
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
		if (HX_FIELD_EQ(inName,"specialTimer") ) { return specialTimer; }
		if (HX_FIELD_EQ(inName,"specialSuper") ) { return specialSuper; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"exploderBoost") ) { return exploderBoost; }
		if (HX_FIELD_EQ(inName,"lblClickBoost") ) { return lblClickBoost; }
		if (HX_FIELD_EQ(inName,"lblMoneyBoost") ) { return lblMoneyBoost; }
		if (HX_FIELD_EQ(inName,"exploderTimer") ) { return exploderTimer; }
		if (HX_FIELD_EQ(inName,"tempMattImage") ) { return tempMattImage; }
		if (HX_FIELD_EQ(inName,"superQteTimer") ) { return superQteTimer; }
		if (HX_FIELD_EQ(inName,"superQteClick") ) { return superQteClick_dyn(); }
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
		if (HX_FIELD_EQ(inName,"superQteCurrent") ) { return superQteCurrent; }
		if (HX_FIELD_EQ(inName,"introBackground") ) { return introBackground; }
		if (HX_FIELD_EQ(inName,"exploderHandler") ) { return exploderHandler_dyn(); }
		if (HX_FIELD_EQ(inName,"shopOpenHandler") ) { return shopOpenHandler_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"lblCurrentPoints") ) { return lblCurrentPoints; }
		if (HX_FIELD_EQ(inName,"lblExploderBoost") ) { return lblExploderBoost; }
		if (HX_FIELD_EQ(inName,"lastPointsNeeded") ) { return lastPointsNeeded; }
		if (HX_FIELD_EQ(inName,"specialEndHandle") ) { return specialEndHandle_dyn(); }
		if (HX_FIELD_EQ(inName,"shopCloseHandler") ) { return shopCloseHandler_dyn(); }
		if (HX_FIELD_EQ(inName,"noCostumeHandler") ) { return noCostumeHandler_dyn(); }
		if (HX_FIELD_EQ(inName,"createShopButton") ) { return createShopButton_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"currentPointValue") ) { return currentPointValue; }
		if (HX_FIELD_EQ(inName,"specialSuperTimer") ) { return specialSuperTimer; }
		if (HX_FIELD_EQ(inName,"clickBoostCounter") ) { return clickBoostCounter; }
		if (HX_FIELD_EQ(inName,"moneyBoostCounter") ) { return moneyBoostCounter; }
		if (HX_FIELD_EQ(inName,"clickBoostHandler") ) { return clickBoostHandler_dyn(); }
		if (HX_FIELD_EQ(inName,"moneyBoostHandler") ) { return moneyBoostHandler_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"exploderBoostPrice") ) { return exploderBoostPrice; }
		if (HX_FIELD_EQ(inName,"exploderBoostValue") ) { return exploderBoostValue; }
		if (HX_FIELD_EQ(inName,"specialClickHandle") ) { return specialClickHandle_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"currentPointsNeeded") ) { return currentPointsNeeded; }
		if (HX_FIELD_EQ(inName,"levelProgressionBar") ) { return levelProgressionBar; }
		if (HX_FIELD_EQ(inName,"specialSuperCounter") ) { return specialSuperCounter; }
		if (HX_FIELD_EQ(inName,"superSpecialDisplay") ) { return superSpecialDisplay_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"specialCooldownTimer") ) { return specialCooldownTimer; }
		if (HX_FIELD_EQ(inName,"specialSuperElements") ) { return specialSuperElements; }
		if (HX_FIELD_EQ(inName,"exploderBoostCounter") ) { return exploderBoostCounter; }
		if (HX_FIELD_EQ(inName,"exploderBoostHandler") ) { return exploderBoostHandler_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"specialSuperContainer") ) { return specialSuperContainer; }
		if (HX_FIELD_EQ(inName,"specialCooldownHandle") ) { return specialCooldownHandle_dyn(); }
		if (HX_FIELD_EQ(inName,"specialSuperEndHandle") ) { return specialSuperEndHandle_dyn(); }
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
		if (HX_FIELD_EQ(inName,"money") ) { money=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"asuka") ) { asuka=inValue.Cast< ::openfl::_v2::display::Sprite >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"points") ) { points=inValue.Cast< Float >(); return inValue; }
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
		if (HX_FIELD_EQ(inName,"shopFilters") ) { shopFilters=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
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
		if (HX_FIELD_EQ(inName,"specialTimer") ) { specialTimer=inValue.Cast< ::openfl::_v2::utils::Timer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"specialSuper") ) { specialSuper=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"exploderBoost") ) { exploderBoost=inValue.Cast< ::openfl::_v2::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lblClickBoost") ) { lblClickBoost=inValue.Cast< ::openfl::_v2::text::TextField >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lblMoneyBoost") ) { lblMoneyBoost=inValue.Cast< ::openfl::_v2::text::TextField >(); return inValue; }
		if (HX_FIELD_EQ(inName,"exploderTimer") ) { exploderTimer=inValue.Cast< ::openfl::_v2::utils::Timer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tempMattImage") ) { tempMattImage=inValue.Cast< ::openfl::_v2::display::BitmapData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"superQteTimer") ) { superQteTimer=inValue.Cast< ::openfl::_v2::utils::Timer >(); return inValue; }
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
		if (HX_FIELD_EQ(inName,"superQteCurrent") ) { superQteCurrent=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"introBackground") ) { introBackground=inValue.Cast< ::openfl::_v2::display::Sprite >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"lblCurrentPoints") ) { lblCurrentPoints=inValue.Cast< ::openfl::_v2::text::TextField >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lblExploderBoost") ) { lblExploderBoost=inValue.Cast< ::openfl::_v2::text::TextField >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lastPointsNeeded") ) { lastPointsNeeded=inValue.Cast< Float >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"currentPointValue") ) { currentPointValue=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"specialSuperTimer") ) { specialSuperTimer=inValue.Cast< ::openfl::_v2::utils::Timer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"clickBoostCounter") ) { clickBoostCounter=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"moneyBoostCounter") ) { moneyBoostCounter=inValue.Cast< int >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"exploderBoostPrice") ) { exploderBoostPrice=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"exploderBoostValue") ) { exploderBoostValue=inValue.Cast< int >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"currentPointsNeeded") ) { currentPointsNeeded=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"levelProgressionBar") ) { levelProgressionBar=inValue.Cast< ::openfl::_v2::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"specialSuperCounter") ) { specialSuperCounter=inValue.Cast< int >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"specialCooldownTimer") ) { specialCooldownTimer=inValue.Cast< ::openfl::_v2::utils::Timer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"specialSuperElements") ) { specialSuperElements=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"exploderBoostCounter") ) { exploderBoostCounter=inValue.Cast< int >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"specialSuperContainer") ) { specialSuperContainer=inValue.Cast< ::openfl::_v2::display::Sprite >(); return inValue; }
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
	outFields->push(HX_CSTRING("specialSuperContainer"));
	outFields->push(HX_CSTRING("specialCooldownTimer"));
	outFields->push(HX_CSTRING("specialSuperTimer"));
	outFields->push(HX_CSTRING("specialTimer"));
	outFields->push(HX_CSTRING("specialSuper"));
	outFields->push(HX_CSTRING("specialSuperCounter"));
	outFields->push(HX_CSTRING("superQteCurrent"));
	outFields->push(HX_CSTRING("specialSuperElements"));
	outFields->push(HX_CSTRING("superQteTimer"));
	outFields->push(HX_CSTRING("clickBoostCounter"));
	outFields->push(HX_CSTRING("moneyBoostCounter"));
	outFields->push(HX_CSTRING("exploderBoostCounter"));
	outFields->push(HX_CSTRING("introBackground"));
	outFields->push(HX_CSTRING("shopFilters"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(GameState_obj,points),HX_CSTRING("points")},
	{hx::fsInt,(int)offsetof(GameState_obj,level),HX_CSTRING("level")},
	{hx::fsFloat,(int)offsetof(GameState_obj,money),HX_CSTRING("money")},
	{hx::fsInt,(int)offsetof(GameState_obj,moneyEarned),HX_CSTRING("moneyEarned")},
	{hx::fsInt,(int)offsetof(GameState_obj,currentPointValue),HX_CSTRING("currentPointValue")},
	{hx::fsFloat,(int)offsetof(GameState_obj,currentPointsNeeded),HX_CSTRING("currentPointsNeeded")},
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
	{hx::fsFloat,(int)offsetof(GameState_obj,lastPointsNeeded),HX_CSTRING("lastPointsNeeded")},
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
	{hx::fsObject /*::openfl::_v2::display::Sprite*/ ,(int)offsetof(GameState_obj,specialSuperContainer),HX_CSTRING("specialSuperContainer")},
	{hx::fsObject /*::openfl::_v2::utils::Timer*/ ,(int)offsetof(GameState_obj,specialCooldownTimer),HX_CSTRING("specialCooldownTimer")},
	{hx::fsObject /*::openfl::_v2::utils::Timer*/ ,(int)offsetof(GameState_obj,specialSuperTimer),HX_CSTRING("specialSuperTimer")},
	{hx::fsObject /*::openfl::_v2::utils::Timer*/ ,(int)offsetof(GameState_obj,specialTimer),HX_CSTRING("specialTimer")},
	{hx::fsBool,(int)offsetof(GameState_obj,specialSuper),HX_CSTRING("specialSuper")},
	{hx::fsInt,(int)offsetof(GameState_obj,specialSuperCounter),HX_CSTRING("specialSuperCounter")},
	{hx::fsInt,(int)offsetof(GameState_obj,superQteCurrent),HX_CSTRING("superQteCurrent")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(GameState_obj,specialSuperElements),HX_CSTRING("specialSuperElements")},
	{hx::fsObject /*::openfl::_v2::utils::Timer*/ ,(int)offsetof(GameState_obj,superQteTimer),HX_CSTRING("superQteTimer")},
	{hx::fsInt,(int)offsetof(GameState_obj,clickBoostCounter),HX_CSTRING("clickBoostCounter")},
	{hx::fsInt,(int)offsetof(GameState_obj,moneyBoostCounter),HX_CSTRING("moneyBoostCounter")},
	{hx::fsInt,(int)offsetof(GameState_obj,exploderBoostCounter),HX_CSTRING("exploderBoostCounter")},
	{hx::fsObject /*::openfl::_v2::display::Sprite*/ ,(int)offsetof(GameState_obj,introBackground),HX_CSTRING("introBackground")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(GameState_obj,shopFilters),HX_CSTRING("shopFilters")},
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
	HX_CSTRING("specialSuperContainer"),
	HX_CSTRING("specialCooldownTimer"),
	HX_CSTRING("specialSuperTimer"),
	HX_CSTRING("specialTimer"),
	HX_CSTRING("specialSuper"),
	HX_CSTRING("specialSuperCounter"),
	HX_CSTRING("superQteCurrent"),
	HX_CSTRING("specialSuperElements"),
	HX_CSTRING("superQteTimer"),
	HX_CSTRING("clickBoostCounter"),
	HX_CSTRING("moneyBoostCounter"),
	HX_CSTRING("exploderBoostCounter"),
	HX_CSTRING("introBackground"),
	HX_CSTRING("shopFilters"),
	HX_CSTRING("init"),
	HX_CSTRING("drawMatt"),
	HX_CSTRING("mouseUpHandler"),
	HX_CSTRING("pointHandle"),
	HX_CSTRING("loop"),
	HX_CSTRING("showSpecial"),
	HX_CSTRING("specialCooldownHandle"),
	HX_CSTRING("specialClickHandle"),
	HX_CSTRING("specialSuperEndHandle"),
	HX_CSTRING("specialEndHandle"),
	HX_CSTRING("exploderHandler"),
	HX_CSTRING("clickBoostHandler"),
	HX_CSTRING("moneyBoostHandler"),
	HX_CSTRING("exploderBoostHandler"),
	HX_CSTRING("shopOpenHandler"),
	HX_CSTRING("shopCloseHandler"),
	HX_CSTRING("noCostumeHandler"),
	HX_CSTRING("createShopButton"),
	HX_CSTRING("costumeHandler"),
	HX_CSTRING("superSpecialDisplay"),
	HX_CSTRING("superQteClick"),
	HX_CSTRING("superQteEnd"),
	HX_CSTRING("showIntro"),
	HX_CSTRING("hideIntro"),
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
