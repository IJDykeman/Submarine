#include <hxcpp.h>

#ifndef INCLUDED_SetEnginePowerUIAction
#include <SetEnginePowerUIAction.h>
#endif
#ifndef INCLUDED_ThrottleControl
#include <ThrottleControl.h>
#endif
#ifndef INCLUDED_UIAction
#include <UIAction.h>
#endif
#ifndef INCLUDED_UIElement
#include <UIElement.h>
#endif
#ifndef INCLUDED_UILever
#include <UILever.h>
#endif
#ifndef INCLUDED_openfl_Assets
#include <openfl/Assets.h>
#endif
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
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
#ifndef INCLUDED_openfl_display_MovieClip
#include <openfl/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl_display_PixelSnapping
#include <openfl/display/PixelSnapping.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

Void ThrottleControl_obj::__construct()
{
HX_STACK_FRAME("ThrottleControl","new",0xc2e77c25,"ThrottleControl.new","ThrottleControl.hx",15,0xe9ea0eeb)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(16)
	super::__construct();
	HX_STACK_LINE(17)
	::openfl::display::BitmapData _g = ::openfl::Assets_obj::getBitmapData(HX_CSTRING("assets/throttleControlBackground.png"),null());		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(17)
	::openfl::display::Bitmap _g1 = ::openfl::display::Bitmap_obj::__new(_g,null(),null());		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(17)
	this->bitmap = _g1;
	HX_STACK_LINE(18)
	this->bitmap->set_width((int)100);
	HX_STACK_LINE(19)
	Float _g2 = this->bitmap->get_width();		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(19)
	Float _g3 = (_g2 * 1.61803398875);		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(19)
	this->bitmap->set_height(_g3);
	HX_STACK_LINE(20)
	this->addChild(this->bitmap);
	HX_STACK_LINE(21)
	int _g4 = ::openfl::Lib_obj::get_current()->get_stage()->get_stageHeight();		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(21)
	Float _g5 = this->bitmap->get_height();		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(21)
	Float _g6 = (_g4 - _g5);		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(21)
	this->bitmap->set_y(_g6);
	HX_STACK_LINE(22)
	this->bitmap->set_x((int)45);
	HX_STACK_LINE(24)
	::openfl::display::BitmapData _g7 = ::openfl::Assets_obj::getBitmapData(HX_CSTRING("assets/throttleHandle.png"),null());		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(24)
	::openfl::display::Bitmap _g8 = ::openfl::display::Bitmap_obj::__new(_g7,null(),null());		HX_STACK_VAR(_g8,"_g8");
	HX_STACK_LINE(24)
	this->handle = _g8;
	HX_STACK_LINE(25)
	this->handle->set_width((int)160);
	HX_STACK_LINE(26)
	this->handle->set_height((int)40);
	HX_STACK_LINE(27)
	Float _g9 = this->bitmap->get_x();		HX_STACK_VAR(_g9,"_g9");
	HX_STACK_LINE(27)
	Float _g10 = this->bitmap->get_width();		HX_STACK_VAR(_g10,"_g10");
	HX_STACK_LINE(27)
	Float _g11 = (Float(_g10) / Float((int)2));		HX_STACK_VAR(_g11,"_g11");
	HX_STACK_LINE(27)
	Float _g12 = (_g9 + _g11);		HX_STACK_VAR(_g12,"_g12");
	HX_STACK_LINE(27)
	Float _g13 = this->handle->get_width();		HX_STACK_VAR(_g13,"_g13");
	HX_STACK_LINE(27)
	Float _g14 = (Float(_g13) / Float((int)2));		HX_STACK_VAR(_g14,"_g14");
	HX_STACK_LINE(27)
	Float _g15 = (_g12 - _g14);		HX_STACK_VAR(_g15,"_g15");
	HX_STACK_LINE(27)
	this->handle->set_x(_g15);
	HX_STACK_LINE(28)
	int _g16 = ::openfl::Lib_obj::get_current()->get_stage()->get_stageHeight();		HX_STACK_VAR(_g16,"_g16");
	HX_STACK_LINE(28)
	Float _g17 = this->handle->get_height();		HX_STACK_VAR(_g17,"_g17");
	HX_STACK_LINE(28)
	Float _g18 = (_g16 - _g17);		HX_STACK_VAR(_g18,"_g18");
	HX_STACK_LINE(28)
	this->handle->set_y(_g18);
	HX_STACK_LINE(29)
	this->addChild(this->handle);
}
;
	return null();
}

//ThrottleControl_obj::~ThrottleControl_obj() { }

Dynamic ThrottleControl_obj::__CreateEmpty() { return  new ThrottleControl_obj; }
hx::ObjectPtr< ThrottleControl_obj > ThrottleControl_obj::__new()
{  hx::ObjectPtr< ThrottleControl_obj > result = new ThrottleControl_obj();
	result->__construct();
	return result;}

Dynamic ThrottleControl_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ThrottleControl_obj > result = new ThrottleControl_obj();
	result->__construct();
	return result;}

::UIAction ThrottleControl_obj::onClick( int mouseX,int mouseY){
	HX_STACK_FRAME("ThrottleControl","onClick",0xd9d18cee,"ThrottleControl.onClick","ThrottleControl.hx",35,0xe9ea0eeb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(mouseX,"mouseX")
	HX_STACK_ARG(mouseY,"mouseY")
	HX_STACK_LINE(36)
	this->super::onClick(mouseX,mouseY);
	HX_STACK_LINE(37)
	Float nPower = ((this->settingNormal * (int)2) - (int)1);		HX_STACK_VAR(nPower,"nPower");
	HX_STACK_LINE(38)
	return ::SetEnginePowerUIAction_obj::__new(nPower);
}



ThrottleControl_obj::ThrottleControl_obj()
{
}

Dynamic ThrottleControl_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"onClick") ) { return onClick_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ThrottleControl_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void ThrottleControl_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("onClick"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ThrottleControl_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ThrottleControl_obj::__mClass,"__mClass");
};

#endif

Class ThrottleControl_obj::__mClass;

void ThrottleControl_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("ThrottleControl"), hx::TCanCast< ThrottleControl_obj> ,sStaticFields,sMemberFields,
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

void ThrottleControl_obj::__boot()
{
}

