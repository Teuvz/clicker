#ifndef INCLUDED_motion_easing_BounceEaseIn
#define INCLUDED_motion_easing_BounceEaseIn

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <motion/easing/IEasing.h>
HX_DECLARE_CLASS2(motion,easing,BounceEaseIn)
HX_DECLARE_CLASS2(motion,easing,IEasing)
namespace motion{
namespace easing{


class HXCPP_CLASS_ATTRIBUTES  BounceEaseIn_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef BounceEaseIn_obj OBJ_;
		BounceEaseIn_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< BounceEaseIn_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~BounceEaseIn_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		inline operator ::motion::easing::IEasing_obj *()
			{ return new ::motion::easing::IEasing_delegate_< BounceEaseIn_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("BounceEaseIn"); }

		virtual Float calculate( Float k);
		Dynamic calculate_dyn();

		virtual Float ease( Float t,Float b,Float c,Float d);
		Dynamic ease_dyn();

		static Float _ease( Float t,Float b,Float c,Float d);
		static Dynamic _ease_dyn();

};

} // end namespace motion
} // end namespace easing

#endif /* INCLUDED_motion_easing_BounceEaseIn */ 
