#include <hxcpp.h>

#ifndef INCLUDED_Constants
#include <Constants.h>
#endif
#ifndef INCLUDED_Ocean
#include <Ocean.h>
#endif
#ifndef INCLUDED_openfl_display_CapsStyle
#include <openfl/display/CapsStyle.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_JointStyle
#include <openfl/display/JointStyle.h>
#endif
#ifndef INCLUDED_openfl_display_LineScaleMode
#include <openfl/display/LineScaleMode.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

Void Ocean_obj::__construct()
{
HX_STACK_FRAME("Ocean","new",0xdc66d3d0,"Ocean.new","Ocean.hx",18,0x402095a0)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(19)
	super::__construct();
	HX_STACK_LINE(20)
	::openfl::display::Sprite _g = ::openfl::display::Sprite_obj::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(20)
	this->square = _g;
	HX_STACK_LINE(21)
	this->square->get_graphics()->lineStyle((int)0,(int)2705779,null(),null(),null(),null(),null(),null());
	HX_STACK_LINE(22)
	this->square->get_graphics()->beginFill((int)2705779,(int)1);
	HX_STACK_LINE(23)
	this->square->get_graphics()->drawRect((int)0,(int)0,(int)2000,(int)2000);
	HX_STACK_LINE(24)
	this->square->set_x((int)0);
	HX_STACK_LINE(25)
	this->square->set_y((::Constants_obj::oceanLevel * ::Constants_obj::pixelsPerMeter));
	HX_STACK_LINE(26)
	this->addChild(this->square);
}
;
	return null();
}

//Ocean_obj::~Ocean_obj() { }

Dynamic Ocean_obj::__CreateEmpty() { return  new Ocean_obj; }
hx::ObjectPtr< Ocean_obj > Ocean_obj::__new()
{  hx::ObjectPtr< Ocean_obj > result = new Ocean_obj();
	result->__construct();
	return result;}

Dynamic Ocean_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Ocean_obj > result = new Ocean_obj();
	result->__construct();
	return result;}


Ocean_obj::Ocean_obj()
{
}

void Ocean_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Ocean);
	HX_MARK_MEMBER_NAME(square,"square");
	::openfl::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Ocean_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(square,"square");
	::openfl::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Ocean_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"square") ) { return square; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Ocean_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"square") ) { square=inValue.Cast< ::openfl::display::Sprite >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Ocean_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("square"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::display::Sprite*/ ,(int)offsetof(Ocean_obj,square),HX_CSTRING("square")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("square"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Ocean_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Ocean_obj::__mClass,"__mClass");
};

#endif

Class Ocean_obj::__mClass;

void Ocean_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Ocean"), hx::TCanCast< Ocean_obj> ,sStaticFields,sMemberFields,
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

void Ocean_obj::__boot()
{
}

