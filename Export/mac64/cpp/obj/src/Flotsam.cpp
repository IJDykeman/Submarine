#include <hxcpp.h>

#ifndef INCLUDED_Actor
#include <Actor.h>
#endif
#ifndef INCLUDED_Flotsam
#include <Flotsam.h>
#endif
#ifndef INCLUDED_UnderwaterObject
#include <UnderwaterObject.h>
#endif
#ifndef INCLUDED_openfl_Assets
#include <openfl/Assets.h>
#endif
#ifndef INCLUDED_openfl_display_Bitmap
#include <openfl/display/Bitmap.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_PixelSnapping
#include <openfl/display/PixelSnapping.h>
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

Void Flotsam_obj::__construct(Float nX,Float nY)
{
HX_STACK_FRAME("Flotsam","new",0x15ef57e6,"Flotsam.new","Flotsam.hx",9,0x53e6a64a)
HX_STACK_THIS(this)
HX_STACK_ARG(nX,"nX")
HX_STACK_ARG(nY,"nY")
{
	HX_STACK_LINE(10)
	super::__construct();
	HX_STACK_LINE(11)
	::openfl::display::BitmapData _g = ::openfl::Assets_obj::getBitmapData(HX_CSTRING("assets/soccerBall.png"),null());		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(11)
	::openfl::display::Bitmap _g1 = ::openfl::display::Bitmap_obj::__new(_g,null(),null());		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(11)
	this->bitmap = _g1;
	HX_STACK_LINE(12)
	this->bitmap->set_width((int)20);
	HX_STACK_LINE(13)
	this->bitmap->set_height((int)20);
	HX_STACK_LINE(14)
	this->addChild(this->bitmap);
	HX_STACK_LINE(15)
	this->set_x(nX);
	HX_STACK_LINE(16)
	this->set_y(nY);
}
;
	return null();
}

//Flotsam_obj::~Flotsam_obj() { }

Dynamic Flotsam_obj::__CreateEmpty() { return  new Flotsam_obj; }
hx::ObjectPtr< Flotsam_obj > Flotsam_obj::__new(Float nX,Float nY)
{  hx::ObjectPtr< Flotsam_obj > result = new Flotsam_obj();
	result->__construct(nX,nY);
	return result;}

Dynamic Flotsam_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Flotsam_obj > result = new Flotsam_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}


Flotsam_obj::Flotsam_obj()
{
}

Dynamic Flotsam_obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic Flotsam_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Flotsam_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Flotsam_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Flotsam_obj::__mClass,"__mClass");
};

#endif

Class Flotsam_obj::__mClass;

void Flotsam_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Flotsam"), hx::TCanCast< Flotsam_obj> ,sStaticFields,sMemberFields,
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

void Flotsam_obj::__boot()
{
}

