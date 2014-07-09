#include <hxcpp.h>

#ifndef INCLUDED_NoUIAction
#include <NoUIAction.h>
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
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_motion_Actuate
#include <motion/Actuate.h>
#endif
#ifndef INCLUDED_motion_actuators_IGenericActuator
#include <motion/actuators/IGenericActuator.h>
#endif
#ifndef INCLUDED_motion_easing_IEasing
#include <motion/easing/IEasing.h>
#endif
#ifndef INCLUDED_motion_easing_Quad
#include <motion/easing/Quad.h>
#endif
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
#endif
#ifndef INCLUDED_openfl_display_Bitmap
#include <openfl/display/Bitmap.h>
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
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif

Void UILever_obj::__construct()
{
HX_STACK_FRAME("UILever","new",0x1f01ee88,"UILever.new","UILever.hx",12,0x039539e8)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(14)
	this->settingNormal = (int)0;
	HX_STACK_LINE(12)
	super::__construct();
}
;
	return null();
}

//UILever_obj::~UILever_obj() { }

Dynamic UILever_obj::__CreateEmpty() { return  new UILever_obj; }
hx::ObjectPtr< UILever_obj > UILever_obj::__new()
{  hx::ObjectPtr< UILever_obj > result = new UILever_obj();
	result->__construct();
	return result;}

Dynamic UILever_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< UILever_obj > result = new UILever_obj();
	result->__construct();
	return result;}

::UIAction UILever_obj::onClick( int mouseX,int mouseY){
	HX_STACK_FRAME("UILever","onClick",0xf9b86cd1,"UILever.onClick","UILever.hx",16,0x039539e8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(mouseX,"mouseX")
	HX_STACK_ARG(mouseY,"mouseY")
	HX_STACK_LINE(21)
	::openfl::display::DisplayObjectContainer _g = this->bitmap->get_parent();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(21)
	::openfl::geom::Rectangle limits1 = this->bitmap->getBounds(_g);		HX_STACK_VAR(limits1,"limits1");
	HX_STACK_LINE(22)
	if ((this->super::pointIsInRect(mouseX,mouseY,limits1))){
		HX_STACK_LINE(24)
		Float _g1 = this->bitmap->get_y();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(24)
		Float _g2 = this->bitmap->get_height();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(24)
		Float _g3 = (_g1 + _g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(24)
		Float _g4 = (_g3 - mouseY);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(24)
		Float _g5 = this->get_height();		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(24)
		Float _g6 = (Float(_g4) / Float(_g5));		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(24)
		this->settingNormal = _g6;
		HX_STACK_LINE(25)
		Float _g7 = this->handle->get_x();		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(25)
		Float _g8 = this->handle->get_height();		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(25)
		Float _g9 = (Float(_g8) / Float((int)2));		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(25)
		Float _g10 = (mouseY - _g9);		HX_STACK_VAR(_g10,"_g10");
		struct _Function_2_1{
			inline static Dynamic Block( Float &_g7,Float &_g10){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","UILever.hx",25,0x039539e8)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("x") , _g7,false);
					__result->Add(HX_CSTRING("y") , _g10,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(25)
		Dynamic _g11 = _Function_2_1::Block(_g7,_g10);		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(25)
		::motion::easing::IEasing _g12 = ::motion::easing::Quad_obj::get_easeOut();		HX_STACK_VAR(_g12,"_g12");
		HX_STACK_LINE(25)
		::motion::Actuate_obj::tween(this->handle,.2,_g11,false,null())->ease(_g12);
	}
	HX_STACK_LINE(27)
	return ::NoUIAction_obj::__new();
}


Void UILever_obj::onResize( int nWidth,int nHeight){
{
		HX_STACK_FRAME("UILever","onResize",0x85d3e14b,"UILever.onResize","UILever.hx",30,0x039539e8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(nWidth,"nWidth")
		HX_STACK_ARG(nHeight,"nHeight")
		HX_STACK_LINE(31)
		int _g = ::openfl::Lib_obj::get_current()->get_stage()->get_stageHeight();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(31)
		Float _g1 = this->handle->get_height();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(31)
		Float _g2 = (_g - _g1);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(31)
		this->handle->set_y(_g2);
		HX_STACK_LINE(32)
		int _g3 = ::openfl::Lib_obj::get_current()->get_stage()->get_stageHeight();		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(32)
		Float _g4 = this->bitmap->get_height();		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(32)
		Float _g5 = (_g3 - _g4);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(32)
		this->bitmap->set_y(_g5);
		HX_STACK_LINE(33)
		::haxe::Log_obj::trace(HX_CSTRING("in onResize"),hx::SourceInfo(HX_CSTRING("UILever.hx"),33,HX_CSTRING("UILever"),HX_CSTRING("onResize")));
	}
return null();
}



UILever_obj::UILever_obj()
{
}

void UILever_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(UILever);
	HX_MARK_MEMBER_NAME(handle,"handle");
	HX_MARK_MEMBER_NAME(settingNormal,"settingNormal");
	::UIElement_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void UILever_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(handle,"handle");
	HX_VISIT_MEMBER_NAME(settingNormal,"settingNormal");
	::UIElement_obj::__Visit(HX_VISIT_ARG);
}

Dynamic UILever_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"handle") ) { return handle; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onClick") ) { return onClick_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onResize") ) { return onResize_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"settingNormal") ) { return settingNormal; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic UILever_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"handle") ) { handle=inValue.Cast< ::openfl::display::Bitmap >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"settingNormal") ) { settingNormal=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void UILever_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("handle"));
	outFields->push(HX_CSTRING("settingNormal"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::display::Bitmap*/ ,(int)offsetof(UILever_obj,handle),HX_CSTRING("handle")},
	{hx::fsFloat,(int)offsetof(UILever_obj,settingNormal),HX_CSTRING("settingNormal")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("handle"),
	HX_CSTRING("settingNormal"),
	HX_CSTRING("onClick"),
	HX_CSTRING("onResize"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(UILever_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(UILever_obj::__mClass,"__mClass");
};

#endif

Class UILever_obj::__mClass;

void UILever_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("UILever"), hx::TCanCast< UILever_obj> ,sStaticFields,sMemberFields,
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

void UILever_obj::__boot()
{
}

