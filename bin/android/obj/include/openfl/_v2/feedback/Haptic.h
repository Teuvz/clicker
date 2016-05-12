#ifndef INCLUDED_openfl__v2_feedback_Haptic
#define INCLUDED_openfl__v2_feedback_Haptic

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,_v2,feedback,Haptic)
namespace openfl{
namespace _v2{
namespace feedback{


class HXCPP_CLASS_ATTRIBUTES  Haptic_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Haptic_obj OBJ_;
		Haptic_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Haptic_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Haptic_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("Haptic"); }

		static Void vibrate( hx::Null< int >  period,hx::Null< int >  duration);
		static Dynamic vibrate_dyn();

		static Dynamic lime_haptic_vibrate;
		static Dynamic &lime_haptic_vibrate_dyn() { return lime_haptic_vibrate;}
};

} // end namespace openfl
} // end namespace _v2
} // end namespace feedback

#endif /* INCLUDED_openfl__v2_feedback_Haptic */ 
