#include <hxcpp.h>

#ifndef INCLUDED_openfl__v2_display_DisplayObject
#include <openfl/_v2/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__v2_display_IBitmapDrawable
#include <openfl/_v2/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__v2_events_EventDispatcher
#include <openfl/_v2/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__v2_events_IEventDispatcher
#include <openfl/_v2/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__v2_geom_ColorTransform
#include <openfl/_v2/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_openfl__v2_geom_Matrix
#include <openfl/_v2/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl__v2_geom_Rectangle
#include <openfl/_v2/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl__v2_geom_Transform
#include <openfl/_v2/geom/Transform.h>
#endif
namespace openfl{
namespace _v2{
namespace geom{

Void Transform_obj::__construct(::openfl::_v2::display::DisplayObject parent)
{
HX_STACK_FRAME("openfl._v2.geom.Transform","new",0xaeb7d39d,"openfl._v2.geom.Transform.new","openfl/_v2/geom/Transform.hx",21,0xd0e40532)
HX_STACK_THIS(this)
HX_STACK_ARG(parent,"parent")
{
	HX_STACK_LINE(21)
	this->__parent = parent;
}
;
	return null();
}

//Transform_obj::~Transform_obj() { }

Dynamic Transform_obj::__CreateEmpty() { return  new Transform_obj; }
hx::ObjectPtr< Transform_obj > Transform_obj::__new(::openfl::_v2::display::DisplayObject parent)
{  hx::ObjectPtr< Transform_obj > result = new Transform_obj();
	result->__construct(parent);
	return result;}

Dynamic Transform_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Transform_obj > result = new Transform_obj();
	result->__construct(inArgs[0]);
	return result;}

::openfl::_v2::geom::ColorTransform Transform_obj::get_colorTransform( ){
	HX_STACK_FRAME("openfl._v2.geom.Transform","get_colorTransform",0x71eae1b5,"openfl._v2.geom.Transform.get_colorTransform","openfl/_v2/geom/Transform.hx",33,0xd0e40532)
	HX_STACK_THIS(this)
	HX_STACK_LINE(33)
	return this->__parent->__getColorTransform();
}


HX_DEFINE_DYNAMIC_FUNC0(Transform_obj,get_colorTransform,return )

::openfl::_v2::geom::ColorTransform Transform_obj::set_colorTransform( ::openfl::_v2::geom::ColorTransform value){
	HX_STACK_FRAME("openfl._v2.geom.Transform","set_colorTransform",0x4e9a1429,"openfl._v2.geom.Transform.set_colorTransform","openfl/_v2/geom/Transform.hx",34,0xd0e40532)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(34)
	this->__parent->__setColorTransform(value);
	HX_STACK_LINE(34)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Transform_obj,set_colorTransform,return )

::openfl::_v2::geom::ColorTransform Transform_obj::get_concatenatedColorTransform( ){
	HX_STACK_FRAME("openfl._v2.geom.Transform","get_concatenatedColorTransform",0x92828524,"openfl._v2.geom.Transform.get_concatenatedColorTransform","openfl/_v2/geom/Transform.hx",35,0xd0e40532)
	HX_STACK_THIS(this)
	HX_STACK_LINE(35)
	return this->__parent->__getConcatenatedColorTransform();
}


HX_DEFINE_DYNAMIC_FUNC0(Transform_obj,get_concatenatedColorTransform,return )

::openfl::_v2::geom::Matrix Transform_obj::get_concatenatedMatrix( ){
	HX_STACK_FRAME("openfl._v2.geom.Transform","get_concatenatedMatrix",0x463650dc,"openfl._v2.geom.Transform.get_concatenatedMatrix","openfl/_v2/geom/Transform.hx",36,0xd0e40532)
	HX_STACK_THIS(this)
	HX_STACK_LINE(36)
	return this->__parent->__getConcatenatedMatrix();
}


HX_DEFINE_DYNAMIC_FUNC0(Transform_obj,get_concatenatedMatrix,return )

::openfl::_v2::geom::Matrix Transform_obj::get_matrix( ){
	HX_STACK_FRAME("openfl._v2.geom.Transform","get_matrix",0x8ac7346d,"openfl._v2.geom.Transform.get_matrix","openfl/_v2/geom/Transform.hx",37,0xd0e40532)
	HX_STACK_THIS(this)
	HX_STACK_LINE(37)
	return this->__parent->__getMatrix();
}


HX_DEFINE_DYNAMIC_FUNC0(Transform_obj,get_matrix,return )

::openfl::_v2::geom::Matrix Transform_obj::set_matrix( ::openfl::_v2::geom::Matrix value){
	HX_STACK_FRAME("openfl._v2.geom.Transform","set_matrix",0x8e44d2e1,"openfl._v2.geom.Transform.set_matrix","openfl/_v2/geom/Transform.hx",38,0xd0e40532)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(38)
	this->__parent->__setMatrix(value);
	HX_STACK_LINE(38)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Transform_obj,set_matrix,return )

::openfl::_v2::geom::Rectangle Transform_obj::get_pixelBounds( ){
	HX_STACK_FRAME("openfl._v2.geom.Transform","get_pixelBounds",0x2d468bef,"openfl._v2.geom.Transform.get_pixelBounds","openfl/_v2/geom/Transform.hx",39,0xd0e40532)
	HX_STACK_THIS(this)
	HX_STACK_LINE(39)
	return this->__parent->__getPixelBounds();
}


HX_DEFINE_DYNAMIC_FUNC0(Transform_obj,get_pixelBounds,return )


Transform_obj::Transform_obj()
{
}

void Transform_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Transform);
	HX_MARK_MEMBER_NAME(concatenatedColorTransform,"concatenatedColorTransform");
	HX_MARK_MEMBER_NAME(concatenatedMatrix,"concatenatedMatrix");
	HX_MARK_MEMBER_NAME(pixelBounds,"pixelBounds");
	HX_MARK_MEMBER_NAME(__parent,"__parent");
	HX_MARK_END_CLASS();
}

void Transform_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(concatenatedColorTransform,"concatenatedColorTransform");
	HX_VISIT_MEMBER_NAME(concatenatedMatrix,"concatenatedMatrix");
	HX_VISIT_MEMBER_NAME(pixelBounds,"pixelBounds");
	HX_VISIT_MEMBER_NAME(__parent,"__parent");
}

Dynamic Transform_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"matrix") ) { return get_matrix(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__parent") ) { return __parent; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_matrix") ) { return get_matrix_dyn(); }
		if (HX_FIELD_EQ(inName,"set_matrix") ) { return set_matrix_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"pixelBounds") ) { return inCallProp ? get_pixelBounds() : pixelBounds; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"colorTransform") ) { return get_colorTransform(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_pixelBounds") ) { return get_pixelBounds_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"concatenatedMatrix") ) { return inCallProp ? get_concatenatedMatrix() : concatenatedMatrix; }
		if (HX_FIELD_EQ(inName,"get_colorTransform") ) { return get_colorTransform_dyn(); }
		if (HX_FIELD_EQ(inName,"set_colorTransform") ) { return set_colorTransform_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"get_concatenatedMatrix") ) { return get_concatenatedMatrix_dyn(); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"concatenatedColorTransform") ) { return inCallProp ? get_concatenatedColorTransform() : concatenatedColorTransform; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"get_concatenatedColorTransform") ) { return get_concatenatedColorTransform_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Transform_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"matrix") ) { return set_matrix(inValue); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__parent") ) { __parent=inValue.Cast< ::openfl::_v2::display::DisplayObject >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"pixelBounds") ) { pixelBounds=inValue.Cast< ::openfl::_v2::geom::Rectangle >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"colorTransform") ) { return set_colorTransform(inValue); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"concatenatedMatrix") ) { concatenatedMatrix=inValue.Cast< ::openfl::_v2::geom::Matrix >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"concatenatedColorTransform") ) { concatenatedColorTransform=inValue.Cast< ::openfl::_v2::geom::ColorTransform >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Transform_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("colorTransform"));
	outFields->push(HX_CSTRING("concatenatedColorTransform"));
	outFields->push(HX_CSTRING("concatenatedMatrix"));
	outFields->push(HX_CSTRING("matrix"));
	outFields->push(HX_CSTRING("pixelBounds"));
	outFields->push(HX_CSTRING("__parent"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::_v2::geom::ColorTransform*/ ,(int)offsetof(Transform_obj,concatenatedColorTransform),HX_CSTRING("concatenatedColorTransform")},
	{hx::fsObject /*::openfl::_v2::geom::Matrix*/ ,(int)offsetof(Transform_obj,concatenatedMatrix),HX_CSTRING("concatenatedMatrix")},
	{hx::fsObject /*::openfl::_v2::geom::Rectangle*/ ,(int)offsetof(Transform_obj,pixelBounds),HX_CSTRING("pixelBounds")},
	{hx::fsObject /*::openfl::_v2::display::DisplayObject*/ ,(int)offsetof(Transform_obj,__parent),HX_CSTRING("__parent")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("concatenatedColorTransform"),
	HX_CSTRING("concatenatedMatrix"),
	HX_CSTRING("pixelBounds"),
	HX_CSTRING("__parent"),
	HX_CSTRING("get_colorTransform"),
	HX_CSTRING("set_colorTransform"),
	HX_CSTRING("get_concatenatedColorTransform"),
	HX_CSTRING("get_concatenatedMatrix"),
	HX_CSTRING("get_matrix"),
	HX_CSTRING("set_matrix"),
	HX_CSTRING("get_pixelBounds"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Transform_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Transform_obj::__mClass,"__mClass");
};

#endif

Class Transform_obj::__mClass;

void Transform_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl._v2.geom.Transform"), hx::TCanCast< Transform_obj> ,sStaticFields,sMemberFields,
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

void Transform_obj::__boot()
{
}

} // end namespace openfl
} // end namespace _v2
} // end namespace geom
