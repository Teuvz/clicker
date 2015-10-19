#ifndef INCLUDED_com_ukuleledog_games_clicker_GameState
#define INCLUDED_com_ukuleledog_games_clicker_GameState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <openfl/_v2/display/Sprite.h>
HX_DECLARE_CLASS4(com,ukuleledog,games,clicker,GameState)
HX_DECLARE_CLASS3(openfl,_v2,display,DisplayObject)
HX_DECLARE_CLASS3(openfl,_v2,display,DisplayObjectContainer)
HX_DECLARE_CLASS3(openfl,_v2,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_v2,display,InteractiveObject)
HX_DECLARE_CLASS3(openfl,_v2,display,Sprite)
HX_DECLARE_CLASS3(openfl,_v2,events,Event)
HX_DECLARE_CLASS3(openfl,_v2,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_v2,events,IEventDispatcher)
HX_DECLARE_CLASS3(openfl,_v2,events,MouseEvent)
HX_DECLARE_CLASS3(openfl,_v2,text,TextField)
HX_DECLARE_CLASS3(openfl,_v2,utils,Timer)
HX_DECLARE_CLASS2(openfl,events,TimerEvent)
namespace com{
namespace ukuleledog{
namespace games{
namespace clicker{


class HXCPP_CLASS_ATTRIBUTES  GameState_obj : public ::openfl::_v2::display::Sprite_obj{
	public:
		typedef ::openfl::_v2::display::Sprite_obj super;
		typedef GameState_obj OBJ_;
		GameState_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< GameState_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GameState_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("GameState"); }

		int points;
		int level;
		int money;
		int currentPointValue;
		int currentPointsNeeded;
		::openfl::_v2::text::TextField lblLevel;
		::openfl::_v2::text::TextField lblCurrentPoints;
		::openfl::_v2::text::TextField lblNeededPoints;
		::openfl::_v2::text::TextField lblMoney;
		::openfl::_v2::display::Sprite clickBoost;
		::openfl::_v2::display::Sprite moneyBoost;
		::openfl::_v2::display::Sprite exploderBoost;
		::openfl::_v2::text::TextField lblClickBoost;
		::openfl::_v2::text::TextField lblMoneyBoost;
		::openfl::_v2::text::TextField lblExploderBoost;
		int clickBoostPrice;
		int moneyBoostPrice;
		int exploderBoostPrice;
		int moneyBoostValue;
		int exploderBoostValue;
		::openfl::_v2::utils::Timer exploderTimer;
		virtual Void init( ::openfl::_v2::events::Event e);
		Dynamic init_dyn();

		virtual Void mouseUpHandler( ::openfl::_v2::events::MouseEvent e);
		Dynamic mouseUpHandler_dyn();

		virtual Void loop( ::openfl::_v2::events::Event e);
		Dynamic loop_dyn();

		virtual Void exploderHandler( ::openfl::events::TimerEvent e);
		Dynamic exploderHandler_dyn();

		virtual Void clickBoostHandler( ::openfl::_v2::events::MouseEvent e);
		Dynamic clickBoostHandler_dyn();

		virtual Void moneyBoostHandler( ::openfl::_v2::events::MouseEvent e);
		Dynamic moneyBoostHandler_dyn();

		virtual Void exploderBoostHandler( ::openfl::_v2::events::MouseEvent e);
		Dynamic exploderBoostHandler_dyn();

};

} // end namespace com
} // end namespace ukuleledog
} // end namespace games
} // end namespace clicker

#endif /* INCLUDED_com_ukuleledog_games_clicker_GameState */ 
