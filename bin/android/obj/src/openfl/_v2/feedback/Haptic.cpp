#include <hxcpp.h>

#ifndef INCLUDED_openfl__v2_Lib
#include <openfl/_v2/Lib.h>
#endif
#ifndef INCLUDED_openfl__v2_feedback_Haptic
#include <openfl/_v2/feedback/Haptic.h>
#endif
namespace openfl{
namespace _v2{
namespace feedback{

Void Haptic_obj::__construct()
{
	return null();
}

//Haptic_obj::~Haptic_obj() { }

Dynamic Haptic_obj::__CreateEmpty() { return  new Haptic_obj; }
hx::ObjectPtr< Haptic_obj > Haptic_obj::__new()
{  hx::ObjectPtr< Haptic_obj > result = new Haptic_obj();
	result->__construct();
	return result;}

Dynamic Haptic_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Haptic_obj > result = new Haptic_obj();
	result->__construct();
	return result;}

Void Haptic_obj::vibrate( hx::Null< int >  __o_period,hx::Null< int >  __o_duration){
int period = __o_period.Default(0);
int duration = __o_duration.Default(1000);
	HX_STACK_FRAME("openfl._v2.feedback.Haptic","vibrate",0xe9b822d0,"openfl._v2.feedback.Haptic.vibrate","openfl/_v2/feedback/Haptic.hx",13,0x4dfadcf0)
	HX_STACK_ARG(period,"period")
	HX_STACK_ARG(duration,"duration")
{
		HX_STACK_LINE(13)
		::openfl::_v2::feedback::Haptic_obj::lime_haptic_vibrate(period,duration);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Haptic_obj,vibrate,(void))

Dynamic Haptic_obj::lime_haptic_vibrate;


Haptic_obj::Haptic_obj()
{
}

Dynamic Haptic_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"vibrate") ) { return vibrate_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"lime_haptic_vibrate") ) { return lime_haptic_vibrate; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Haptic_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 19:
		if (HX_FIELD_EQ(inName,"lime_haptic_vibrate") ) { lime_haptic_vibrate=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Haptic_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("vibrate"),
	HX_CSTRING("lime_haptic_vibrate"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Haptic_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Haptic_obj::lime_haptic_vibrate,"lime_haptic_vibrate");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Haptic_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Haptic_obj::lime_haptic_vibrate,"lime_haptic_vibrate");
};

#endif

Class Haptic_obj::__mClass;

void Haptic_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl._v2.feedback.Haptic"), hx::TCanCast< Haptic_obj> ,sStaticFields,sMemberFields,
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

void Haptic_obj::__boot()
{
	lime_haptic_vibrate= ::openfl::_v2::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_haptic_vibrate"),(int)2);
}

} // end namespace openfl
} // end namespace _v2
} // end namespace feedback
