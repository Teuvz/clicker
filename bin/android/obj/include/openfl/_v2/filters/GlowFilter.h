#ifndef INCLUDED_openfl__v2_filters_GlowFilter
#define INCLUDED_openfl__v2_filters_GlowFilter

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <openfl/_v2/filters/BitmapFilter.h>
HX_DECLARE_CLASS3(openfl,_v2,filters,BitmapFilter)
HX_DECLARE_CLASS3(openfl,_v2,filters,GlowFilter)
namespace openfl{
namespace _v2{
namespace filters{


class HXCPP_CLASS_ATTRIBUTES  GlowFilter_obj : public ::openfl::_v2::filters::BitmapFilter_obj{
	public:
		typedef ::openfl::_v2::filters::BitmapFilter_obj super;
		typedef GlowFilter_obj OBJ_;
		GlowFilter_obj();
		Void __construct(hx::Null< int >  __o_color,hx::Null< Float >  __o_alpha,hx::Null< Float >  __o_blurX,hx::Null< Float >  __o_blurY,hx::Null< Float >  __o_strength,hx::Null< int >  __o_quality,hx::Null< bool >  __o_inner,hx::Null< bool >  __o_knockout);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< GlowFilter_obj > __new(hx::Null< int >  __o_color,hx::Null< Float >  __o_alpha,hx::Null< Float >  __o_blurX,hx::Null< Float >  __o_blurY,hx::Null< Float >  __o_strength,hx::Null< int >  __o_quality,hx::Null< bool >  __o_inner,hx::Null< bool >  __o_knockout);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GlowFilter_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("GlowFilter"); }

		Float alpha;
		Float blurX;
		Float blurY;
		int color;
		bool inner;
		bool knockout;
		int quality;
		Float strength;
		Float angle;
		Float distance;
		bool hideObject;
		virtual ::openfl::_v2::filters::BitmapFilter clone( );

};

} // end namespace openfl
} // end namespace _v2
} // end namespace filters

#endif /* INCLUDED_openfl__v2_filters_GlowFilter */ 
