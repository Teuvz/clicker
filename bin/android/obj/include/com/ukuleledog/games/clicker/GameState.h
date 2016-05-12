#ifndef INCLUDED_com_ukuleledog_games_clicker_GameState
#define INCLUDED_com_ukuleledog_games_clicker_GameState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <openfl/_v2/display/Sprite.h>
HX_DECLARE_CLASS4(com,ukuleledog,games,clicker,GameState)
HX_DECLARE_CLASS3(openfl,_v2,display,BitmapData)
HX_DECLARE_CLASS3(openfl,_v2,display,DisplayObject)
HX_DECLARE_CLASS3(openfl,_v2,display,DisplayObjectContainer)
HX_DECLARE_CLASS3(openfl,_v2,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_v2,display,InteractiveObject)
HX_DECLARE_CLASS3(openfl,_v2,display,Sprite)
HX_DECLARE_CLASS3(openfl,_v2,events,Event)
HX_DECLARE_CLASS3(openfl,_v2,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_v2,events,IEventDispatcher)
HX_DECLARE_CLASS3(openfl,_v2,events,MouseEvent)
HX_DECLARE_CLASS3(openfl,_v2,filters,BitmapFilter)
HX_DECLARE_CLASS3(openfl,_v2,text,TextField)
HX_DECLARE_CLASS3(openfl,_v2,text,TextFormat)
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

		Float points;
		int level;
		Float money;
		int moneyEarned;
		int currentPointValue;
		Float currentPointsNeeded;
		Float percent;
		::openfl::_v2::text::TextFormat lblFormat;
		::openfl::_v2::text::TextField lblLevel;
		::openfl::_v2::text::TextField lblCurrentPoints;
		::openfl::_v2::text::TextField lblMoney;
		::openfl::_v2::text::TextField lblMoneyEarned;
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
		::openfl::_v2::display::BitmapData tempMattImage;
		::openfl::_v2::display::BitmapData mattImage;
		int mattFrame;
		::openfl::_v2::display::Sprite matt;
		::openfl::_v2::display::Sprite asuka;
		::openfl::_v2::display::Sprite levelBar;
		::openfl::_v2::display::Sprite levelProgressionBar;
		Float lastPointsNeeded;
		::openfl::_v2::display::Sprite shop;
		::openfl::_v2::display::Sprite shopWindow;
		::openfl::_v2::display::Sprite shopWindowClose;
		int costume;
		::openfl::_v2::display::Sprite shopCostume1;
		::openfl::_v2::display::Sprite shopCostume2;
		::openfl::_v2::display::Sprite shopCostume3;
		::openfl::_v2::display::Sprite shopCostume4;
		::openfl::_v2::display::Sprite shopCostume5;
		::openfl::_v2::display::Sprite shopCostume6;
		::openfl::_v2::display::Sprite shopCostume7;
		::openfl::_v2::display::Sprite shopCostume8;
		::openfl::_v2::display::Sprite shopCostumeNone;
		bool hasCostume1;
		bool hasCostume2;
		bool hasCostume3;
		bool hasCostume4;
		bool hasCostume5;
		bool hasCostume6;
		bool hasCostume7;
		bool hasCostume8;
		bool canClick;
		int clicks;
		::openfl::_v2::display::Sprite special;
		::openfl::_v2::display::Sprite specialSuperContainer;
		::openfl::_v2::utils::Timer specialCooldownTimer;
		::openfl::_v2::utils::Timer specialSuperTimer;
		::openfl::_v2::utils::Timer specialTimer;
		bool specialSuper;
		int specialSuperCounter;
		int superQteCurrent;
		Array< ::Dynamic > specialSuperElements;
		::openfl::_v2::utils::Timer superQteTimer;
		int clickBoostCounter;
		int moneyBoostCounter;
		int exploderBoostCounter;
		::openfl::_v2::display::Sprite introBackground;
		Array< ::Dynamic > shopFilters;
		virtual Void init( ::openfl::_v2::events::Event e);
		Dynamic init_dyn();

		virtual Void drawMatt( hx::Null< bool >  frameChange);
		Dynamic drawMatt_dyn();

		virtual Void mouseUpHandler( ::openfl::_v2::events::MouseEvent e);
		Dynamic mouseUpHandler_dyn();

		virtual Void pointHandle( Float pointsValue);
		Dynamic pointHandle_dyn();

		virtual Void loop( ::openfl::_v2::events::Event e);
		Dynamic loop_dyn();

		virtual Void showSpecial( );
		Dynamic showSpecial_dyn();

		virtual Void specialCooldownHandle( ::openfl::events::TimerEvent e);
		Dynamic specialCooldownHandle_dyn();

		virtual Void specialClickHandle( ::openfl::_v2::events::MouseEvent e);
		Dynamic specialClickHandle_dyn();

		virtual Void specialSuperEndHandle( ::openfl::events::TimerEvent e);
		Dynamic specialSuperEndHandle_dyn();

		virtual Void specialEndHandle( ::openfl::events::TimerEvent e);
		Dynamic specialEndHandle_dyn();

		virtual Void exploderHandler( ::openfl::events::TimerEvent e);
		Dynamic exploderHandler_dyn();

		virtual Void clickBoostHandler( ::openfl::_v2::events::MouseEvent e);
		Dynamic clickBoostHandler_dyn();

		virtual Void moneyBoostHandler( ::openfl::_v2::events::MouseEvent e);
		Dynamic moneyBoostHandler_dyn();

		virtual Void exploderBoostHandler( ::openfl::_v2::events::MouseEvent e);
		Dynamic exploderBoostHandler_dyn();

		virtual Void shopOpenHandler( ::openfl::_v2::events::MouseEvent e);
		Dynamic shopOpenHandler_dyn();

		virtual Void shopCloseHandler( ::openfl::_v2::events::MouseEvent e);
		Dynamic shopCloseHandler_dyn();

		virtual Void noCostumeHandler( ::openfl::_v2::events::MouseEvent e);
		Dynamic noCostumeHandler_dyn();

		virtual ::openfl::_v2::display::Sprite createShopButton( ::String name,int position,hx::Null< int >  level);
		Dynamic createShopButton_dyn();

		virtual Void costumeHandler( ::openfl::_v2::events::MouseEvent e);
		Dynamic costumeHandler_dyn();

		virtual Void superSpecialDisplay( );
		Dynamic superSpecialDisplay_dyn();

		virtual Void superQteClick( ::openfl::_v2::events::MouseEvent e);
		Dynamic superQteClick_dyn();

		virtual Void superQteEnd( ::openfl::events::TimerEvent e);
		Dynamic superQteEnd_dyn();

		virtual Void showIntro( );
		Dynamic showIntro_dyn();

		virtual Void hideIntro( ::openfl::_v2::events::MouseEvent e);
		Dynamic hideIntro_dyn();

};

} // end namespace com
} // end namespace ukuleledog
} // end namespace games
} // end namespace clicker

#endif /* INCLUDED_com_ukuleledog_games_clicker_GameState */ 
