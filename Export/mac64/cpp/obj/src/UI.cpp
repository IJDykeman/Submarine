#include <hxcpp.h>

#ifndef INCLUDED_ShipEnd
#include <ShipEnd.h>
#endif
#ifndef INCLUDED_ThrottleControl
#include <ThrottleControl.h>
#endif
#ifndef INCLUDED_UI
#include <UI.h>
#endif
#ifndef INCLUDED_UIAction
#include <UIAction.h>
#endif
#ifndef INCLUDED_UIBalastTankControl
#include <UIBalastTankControl.h>
#endif
#ifndef INCLUDED_UIElement
#include <UIElement.h>
#endif
#ifndef INCLUDED_UILever
#include <UILever.h>
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
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

Void UI_obj::__construct()
{
HX_STACK_FRAME("UI","new",0x2351a546,"UI.new","UI.hx",9,0x217324ea)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(10)
	super::__construct();
	HX_STACK_LINE(11)
	::ThrottleControl _g = ::ThrottleControl_obj::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(11)
	this->throttleControl = _g;
	HX_STACK_LINE(12)
	::UIBalastTankControl _g1 = ::UIBalastTankControl_obj::__new(::ShipEnd_obj::Bow);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(12)
	this->sternBalastControl = _g1;
	HX_STACK_LINE(13)
	::UIBalastTankControl _g2 = ::UIBalastTankControl_obj::__new(::ShipEnd_obj::Stern);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(13)
	this->bowBalastControl = _g2;
	HX_STACK_LINE(14)
	this->addChild(this->throttleControl);
	HX_STACK_LINE(15)
	this->addChild(this->sternBalastControl);
	HX_STACK_LINE(16)
	this->addChild(this->bowBalastControl);
}
;
	return null();
}

//UI_obj::~UI_obj() { }

Dynamic UI_obj::__CreateEmpty() { return  new UI_obj; }
hx::ObjectPtr< UI_obj > UI_obj::__new()
{  hx::ObjectPtr< UI_obj > result = new UI_obj();
	result->__construct();
	return result;}

Dynamic UI_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< UI_obj > result = new UI_obj();
	result->__construct();
	return result;}

Array< ::Dynamic > UI_obj::getActionsFromClick( int x,int y){
	HX_STACK_FRAME("UI","getActionsFromClick",0xc2e7445d,"UI.getActionsFromClick","UI.hx",19,0x217324ea)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_LINE(20)
	::UIAction _g = this->throttleControl->onClick(x,y);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(20)
	::UIAction _g1 = this->sternBalastControl->onClick(x,y);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(20)
	::UIAction _g2 = this->bowBalastControl->onClick(x,y);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(20)
	Array< ::Dynamic > result = Array_obj< ::Dynamic >::__new().Add(_g).Add(_g1).Add(_g2);		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(22)
	return result;
}


HX_DEFINE_DYNAMIC_FUNC2(UI_obj,getActionsFromClick,return )

Void UI_obj::handleResize( int nWidth,int nHeight){
{
		HX_STACK_FRAME("UI","handleResize",0xda36de16,"UI.handleResize","UI.hx",25,0x217324ea)
		HX_STACK_THIS(this)
		HX_STACK_ARG(nWidth,"nWidth")
		HX_STACK_ARG(nHeight,"nHeight")
		HX_STACK_LINE(26)
		this->throttleControl->onResize(nWidth,nHeight);
		HX_STACK_LINE(27)
		this->sternBalastControl->onResize(nWidth,nHeight);
		HX_STACK_LINE(28)
		this->bowBalastControl->onResize(nWidth,nHeight);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(UI_obj,handleResize,(void))


UI_obj::UI_obj()
{
}

void UI_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(UI);
	HX_MARK_MEMBER_NAME(throttleControl,"throttleControl");
	HX_MARK_MEMBER_NAME(sternBalastControl,"sternBalastControl");
	HX_MARK_MEMBER_NAME(bowBalastControl,"bowBalastControl");
	::openfl::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void UI_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(throttleControl,"throttleControl");
	HX_VISIT_MEMBER_NAME(sternBalastControl,"sternBalastControl");
	HX_VISIT_MEMBER_NAME(bowBalastControl,"bowBalastControl");
	::openfl::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic UI_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"handleResize") ) { return handleResize_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"throttleControl") ) { return throttleControl; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"bowBalastControl") ) { return bowBalastControl; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"sternBalastControl") ) { return sternBalastControl; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"getActionsFromClick") ) { return getActionsFromClick_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic UI_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 15:
		if (HX_FIELD_EQ(inName,"throttleControl") ) { throttleControl=inValue.Cast< ::ThrottleControl >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"bowBalastControl") ) { bowBalastControl=inValue.Cast< ::UIBalastTankControl >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"sternBalastControl") ) { sternBalastControl=inValue.Cast< ::UIBalastTankControl >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void UI_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("throttleControl"));
	outFields->push(HX_CSTRING("sternBalastControl"));
	outFields->push(HX_CSTRING("bowBalastControl"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::ThrottleControl*/ ,(int)offsetof(UI_obj,throttleControl),HX_CSTRING("throttleControl")},
	{hx::fsObject /*::UIBalastTankControl*/ ,(int)offsetof(UI_obj,sternBalastControl),HX_CSTRING("sternBalastControl")},
	{hx::fsObject /*::UIBalastTankControl*/ ,(int)offsetof(UI_obj,bowBalastControl),HX_CSTRING("bowBalastControl")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("throttleControl"),
	HX_CSTRING("sternBalastControl"),
	HX_CSTRING("bowBalastControl"),
	HX_CSTRING("getActionsFromClick"),
	HX_CSTRING("handleResize"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(UI_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(UI_obj::__mClass,"__mClass");
};

#endif

Class UI_obj::__mClass;

void UI_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("UI"), hx::TCanCast< UI_obj> ,sStaticFields,sMemberFields,
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

void UI_obj::__boot()
{
}

